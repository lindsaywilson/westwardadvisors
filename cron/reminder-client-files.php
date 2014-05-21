<?php 

# make drupal directory php's current directory
$drupal_root_dir = realpath('../');
chdir($drupal_root_dir);

# set this constants
define('DRUPAL_ROOT', $drupal_root_dir);

# bootstrap drupal up to the point the database is loaded
include_once('./includes/bootstrap.inc');
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

// select all client files with a reminder date set 
$result = db_query('SELECT field_reminder_date_value, entity_id FROM {  field_data_field_reminder_date }');

foreach ($result as $record) {	
	$nid = $record->entity_id;
	$date = strtotime($record->field_reminder_date_value);
	$now = strtotime('now');
	
	// If reminder date has passed
	if($date < $now){
		
		// Load node
		$node = node_load($nid);
		
		// Get client user
		$client = user_load($node->field_client['und'][0]['uid']);
		$created = date('jS F Y',$node->created);

		// Get visible to client value
		$result = db_query('SELECT field_visible_to_client_value FROM { field_data_field_visible_to_client } 
							n WHERE n.entity_id = :entity_id', array(':entity_id' => $nid));				
		foreach ($result as $record) {
			if($record->field_visible_to_client_value == 1){
				// If true, seach files db table for records matching uid and nid
				$result = db_query('SELECT uid FROM { files } n WHERE n.nid = :nid AND n.uid = :uid', array(':nid' => $nid, ':uid' => $client->uid) );
				if($result->rowCount()==0){
						
						// Search reminder_email db table for records matching uid and nid
						$result = db_query('SELECT id FROM { reminder_email } n WHERE n.nid = :nid AND n.uid = :uid', array(':nid' => $nid, ':uid' => $client->uid) );
						if($result->rowCount()==0){
						
							// If no results, add row to reminder_email table
							$file = db_insert('reminder_email')
									->fields(array(
									  'uid' => $client->uid,
									  'nid' => $nid
									))
									->execute();
							
							// If no results, send email
							$firstname = $client->field_first_name['und'][0]['value'];
							$lastname = $client->field_last_name['und'][0]['value'];
							print $node->title.' hasnt been viewed by '.$firstname.' '.$lastname.'<br>';
							$message = $firstname.' '.$lastname.'<br><br>';
							$message .= 'This note is being sent automatically from your Westward Pathway portal.<br><br>';
							$message .= 'It is to remind you that new documents were posted to your portal on '.$created.'. Our portal administration records show that you have not yet accessed these documents. We encourage you to download them at your earliest convenience. <br><br>';
							$message .= 'Please respond to the email contact below if you would like your login instructions sent to you, or if you prefer to receive the documents via either email or regular mail. <br><br>';
							$message .= 'Thanks.<br> 
										Your Performance Optimizer Team<br>
										service@westwardadvisors.com';
							$message .= '<br><br>';
							$headers  = 'MIME-Version: 1.0' . "\r\n";
							$headers .= 'Content-type: text/html; charset=iso-8859-1' . "\r\n";
							$headers .= 'From: Westward Advisors <noreply@westwardadvisors.com>' . "\r\n";
							mail($client->mail, 'Documents Added to Your Westward Pathway', $message, $headers);
						}
				}
			}
		}
		
		// Get visible to advisors value
		$result = db_query('SELECT  field_visible_to_advisor_value FROM { field_data_field_visible_to_advisor } 
							n WHERE n.entity_id = :entity_id', array(':entity_id' => $nid));				
		foreach ($result as $record) {
			if($record->field_visible_to_advisor_value == 1){
				// If true, seach files db table for records matching uid and nid
				foreach($client->field_advisor['und'] as $adv){
					$advisor = user_load($adv['uid']);
					$result = db_query('SELECT uid FROM { files } n WHERE n.nid = :nid AND n.uid = :uid', array(':nid' => $nid, ':uid' => $advisor->uid) );
					if($result->rowCount()==0){
						
						// Search reminder_email db table for records matching uid and nid
						$result = db_query('SELECT id FROM { reminder_email } n WHERE n.nid = :nid AND n.uid = :uid', array(':nid' => $nid, ':uid' => $advisor->uid) );
						if($result->rowCount()==0){
							// If no results, add row to reminder_email table
							$file = db_insert('reminder_email')
								->fields(array(
								  'uid' => $advisor->uid,
								  'nid' => $nid
								))
								->execute();
							
							// If no results, send email
							$firstname = $advisor->field_first_name['und'][0]['value'];
							$lastname = $advisor->field_last_name['und'][0]['value'];
							print $node->title.' hasnt been viewed by '.$firstname.' '.$lastname.'<br>';
							$message = $firstname.' '.$lastname.'<br><br>';
							$message .= 'This note is being sent automatically from your Westward Pathway portal.<br><br>';
							$message .= 'It is to remind you that new documents were posted to your portal on '.$created.'. Our portal administration records show that you have not yet accessed these documents. We encourage you to download them at your earliest convenience. <br><br>';
							$message .= 'Please respond to the email contact below if you would like your login instructions sent to you, or if you prefer to receive the documents via either email or regular mail. <br><br>';
							$message .= 'Thanks.<br> 
										Your Performance Optimizer Team<br>
										service@westwardadvisors.com';
							$message .= '<br><br>';
							$headers  = 'MIME-Version: 1.0' . "\r\n";
							$headers .= 'Content-type: text/html; charset=iso-8859-1' . "\r\n";
							$headers .= 'From: Westward Advisors <noreply@westwardadvisors.com>' . "\r\n";
							mail($advisor->mail, 'Documents Added to Your Westward Pathway', $message, $headers);
						}
					}
				}
			}
		}

	}
	
}


?>