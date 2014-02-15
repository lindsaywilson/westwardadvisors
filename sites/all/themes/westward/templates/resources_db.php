
<?php

define('DRUPAL_ROOT', $_SERVER['DOCUMENT_ROOT']);
$base_url = 'http://'.$_SERVER['HTTP_HOST'];
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);




$uid = $_POST['uid'];
$fid = $_POST['fid'];
$title = $_POST['title'];
$date = strtotime('now');

if(isset($_POST['uid']) && isset($_POST['fid'])){
	
	$resource = db_insert('resources')
				->fields(array(
				'uid' => $uid,
				'fid' => $fid,
				'date' => $date
				))
				->execute();
				//dpm($resource);
	
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
	
	mail('service@wstwardadvisors.com', 'A resource file has been accessed', $message, "From: website@westwardadvisors.com");				
	
}

?>