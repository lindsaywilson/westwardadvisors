<?php

# make drupal directory php's current directory
$drupal_root_dir = realpath('../');
chdir($drupal_root_dir);

# set this constants
define('DRUPAL_ROOT', $drupal_root_dir);

# bootstrap drupal up to the point the database is loaded
include_once('./includes/bootstrap.inc');
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$aid = $_GET["aid"];
$cid = $_GET["cid"];

?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />

<link href="/sites/all/themes/omega/alpha/css/grid/alpha_default/normal/alpha-default-normal-12.css" rel="stylesheet" />
<link href="/sites/all/themes/westward/css/global.css" rel="stylesheet" />
<link href="" rel="stylesheet" />
<link href="" rel="stylesheet" />
<link href="/sites/all/themes/westward/css/westward-alpha-default-normal.css" rel="stylesheet" />
<title>Annual Review Confirmation</title>
</head>

<body>

<div id="page" class="page clearfix">
  <div class="container-12" style="padding:30px">
  	<div class="region-content-inner">
    <img id="logo" alt="" src="/sites/all/themes/westward/images/logo.gif">
    </div>
    <div class="region-content-inner" style="padding:40px 0"> 
    
    <h1>Annual Review Confirmation</h1>


<?php if(!isset($aid) && !isset($cid)) : ?>

	User account IDs have not been set in the URL.

<?php else: ?>

	<?php
	$advisor = user_load($aid);
	$client = user_load($cid);
	$date = strtotime('now');
	
	$advisorFirstname = $advisor->field_first_name['und'][0]['value'];
	$advisorLastname = $advisor->field_last_name['und'][0]['value'];
	
	$clientFirstname = $client->field_first_name['und'][0]['value'];
	$clientLastname = $client->field_last_name['und'][0]['value'];
	
	$to = $clientFirstname.' '.$clientLastname.'<'.$client->mail.'>';
	
	$CC = array();
	$advisors = array();
	foreach($client->field_advisor['und'] as $adv){
		// Create array of advisors assigned to client
		array_push($advisors, $adv['uid']);
		// Create array of advisors emails to CC
		$adv = user_load($adv['uid']); 
		array_push($CC, $adv->mail);
	}	
	
	// Check if aid passed belongs to an advisor that is assign to the client
	
	if (in_array($aid, $advisors)):
		
		$message = 'Good news. We have received confirmation from '.$advisorFirstname.' '.$advisorLastname.' that all documents needed to prepare your tax return are in hand.';
		$message .= 'The Annual Review documents contain the financial and tax reporting information required by your advisor to prepare your annual financial statements and tax returns regarding your life insurance plan created by our LifeStep Process and managed by The Performance Optimizer.<br><br>';
		$message .= 'This update was automatically issued from Westward\'s Advisor Pathway portal. If you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com.<br><br>';
		$message .='Thank you,<br><br>';
		$message .='Your Performance Optimizer Team<br><br>';
		$message .='<br><br>';
		$message .='<br><br>';
		$message .='CONFIDENTIALITY DISCLAIMER<br><br>';
		$message .='This message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.<br><br>';	
		
		$headers  = 'MIME-Version: 1.0' . "\r\n";
		$headers .= 'Content-type: text/html; charset=iso-8859-1' . "\r\n";
		$headers .= 'From: Westward Advisors <noreply@westwardadvisors.com>' . "\r\n";
		$headers .= "Cc: ".implode(",", $CC)."\r\n";
		$headers .= 'Bcc: service@westwardadvisors.com' . "\r\n";
		mail($to, 'The LifeStep Process - Annual Review Complete', $message, $headers);
		
		$insert = db_insert('ar_confirmation')
				->fields(array(
				  'aid' => $aid,
				  'cid' => $cid,
				  'date' => $date
				))
				->execute();
		
		?>
        Thank you. You have now confirmed that all statements needed to prepare <?php print $clientFirstname.' '.$clientLastname; ?>'s tax return are in hand. The client and his/her other advisors (if any) have been automatically notified.
    
	<?php else: ?>
    
    	Please enter a valid advisor ID and client ID combination.
    
    <?php endif; ?>

<?php endif; ?>

	</div>
  </div>
</div>
</body>
</html>