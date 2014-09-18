
<?php

define('DRUPAL_ROOT', $_SERVER['DOCUMENT_ROOT']);
$base_url = 'http://'.$_SERVER['HTTP_HOST'];
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);




$uid = $_POST['uid'];
$nid = $_POST['nid'];
$title = $_POST['title'];
$date = strtotime('now');

if(isset($_POST['uid']) && isset($_POST['nid'])){
	
	$file = db_insert('files_updated')
			->fields(array(
			  'uid' => $uid,
			  'nid' => $nid,
			  'date' => $date
			))
			->execute();
			//dpm($file);
			
	
	$userProfile = user_load($uid);
	if(isset($userProfile->field_first_name['und'])){
		$firstname = $userProfile->field_first_name['und'][0]['value'];
	}else{
		$firstname = '';
	}
	if(isset($userProfile->field_last_name['und'])){
		$lastname = $userProfile->field_last_name['und'][0]['value'];
	}else{
		$lastname = '';
	}
	if(isset($userProfile->name)){
		$username = $userProfile->name;	
	}else{
		$username = '';	
	}
	
	$message = $firstname.' '.$lastname.' accessed '.$title;

	mail('service@westwardadvisors.com', 'A client file has been accessed by: '.$firstname.' '.$lastname.'', $message, "From: website@westwardadvisors.com");
				
	
}

?>