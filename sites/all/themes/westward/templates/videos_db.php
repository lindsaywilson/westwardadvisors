
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
	
	$video = db_insert('videos')
				->fields(array(
				'uid' => $uid,
				'nid' => $nid,
				'date' => $date
				))
				->execute();
				//print $video;
	
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
	
	$message = $firstname.' '.$lastname.' watched '.$title;

	mail('service@wstwardadvisors.com', 'A video was watched', $message, "From: website@westwardadvisors.com");				
	
}

?>