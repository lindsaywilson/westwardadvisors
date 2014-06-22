<?php 

# make drupal directory php's current directory
$drupal_root_dir = realpath('../');
chdir($drupal_root_dir);

# set this constants
define('DRUPAL_ROOT', $drupal_root_dir);

# bootstrap drupal up to the point the database is loaded
include_once('./includes/bootstrap.inc');
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

// select all client files with a annual review email set 
$result = db_query('SELECT entity_id FROM { field_data_field_email_template } n WHERE n.field_email_template_value = :field_email_template_value', array(':field_email_template_value' => '4') );

foreach ($result as $record) {	
	$nid = $record->entity_id;

	// Load node
	$node = node_load($nid);

	// Get client user
	$client = user_load($node->field_client['und'][0]['uid']);
	$clientFirstname = $client->field_first_name['und'][0]['value'];
	$clientLastname = $client->field_last_name['und'][0]['value'];
	$date = $node->created;
	
	// Search db for confirmation on client
	$result = db_query('SELECT id FROM { ar_confirmation } n WHERE n.cid = :cid', array(':cid' => $client->uid) );
	
	// If no match on cid, no confirmation has been made
	if($result->rowCount()==0){
		
		print $client->uid.' not confirmed <br>';
		
		// Check reminder email table to see if a reminder has already been sent
		$result = db_query('SELECT id, date FROM { annual_review_reminder } n WHERE n.nid = :nid AND n.uid = :uid', array(':nid' => $nid, ':uid' => $client->uid) );
		// If there is a result, a reminder has previously been sent
		// set date to when reminder was sent and delete row
		if($result->rowCount() > 0){
			foreach ($result as $record) {
				$date = $record->date;
				// If 7 days have passed
				// delete row and recreate below with new date
				if(strtotime('-7 days') > $date){
					$delete = db_delete('annual_review_reminder')
					->condition('id', $record->id)
					->execute();
			}
			}
		}
		
		// If 7 days have passed
		if(strtotime('-7 days') > $date){
			
			// Add row to reminder email table
			$reminder = db_insert('annual_review_reminder')
				->fields(array(
				'uid' => $client->uid,
				'nid' => $nid,
				'date' => strtotime('now')
			))
			->execute();
		
			// Send reminder email to each advisor assigned to client
			foreach($client->field_advisor['und'] as $adv){
				$adv = user_load($adv['uid']); 
				
				$message = 'This letter is to notify you that Annual Review documents for '.$clientFirstname.' '.$clientLastname.' are now ready for download from your portal on Westward\'s website<br><br>.';
				$message .= 'The Annual Review documents contain the financial and tax reporting information required for you to prepare annual financial statements and tax returns regarding your client\'s life insurance plan created by our LifeStep Process and managed by The Performance Optimizer. <br><br>';
				$message .= 'To access the files, simply login to your portal at http://westwardadvisors.com/login.<br><br>';
				$message .= 'To confirm that you now have all the documents required to prepare your client\'s tax return in respect of the life insurance plan, please click the link below.<br><br>';
				$message .= 'http://westwardadvisors.com/cron/annual_review_confirmation.php?aid='.$adv->uid.'&cid='.$client->uid.'<br><br>';
				$message .= 'Upon receiving your confirmation, a note will be sent to your client and associated advisors confirming that you have received all tax reporting documents.<br><br>';
				$message .= 'If additional documents are needed or if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com.<br><br>';
				$message .= 'This note was sent automatically from Westward\'s Advisor Pathway. If we have not received confirmation within one week, we will follow-up with a reminder email. <br><br>';
				$message .= 'Thank you,<br><br>';
				$message .= 'Your Performance Optimizer Team<br><br>';
				$message .='<br><br>';
				$message .='<br><br>';
				$message .= 'CONFIDENTIALITY DISCLAIMER<br><br>';
				$message .= 'This message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.<br><br>';
				
				$headers  = 'MIME-Version: 1.0' . "\r\n";
				$headers .= 'Content-type: text/html; charset=iso-8859-1' . "\r\n";
				$headers .= 'From: Westward Advisors <noreply@westwardadvisors.com>' . "\r\n";
				mail($adv->mail, 'REMINDER - The LifeStep Process – Annual Review Ready for Download', $message, $headers);
				
				print 'Reminder email sent to '. $adv->mail.'<br>';
				
			}
		}
		
		
	}

	
}


?>