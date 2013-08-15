
<?php

define('DRUPAL_ROOT', $_SERVER['DOCUMENT_ROOT']);
$base_url = 'http://'.$_SERVER['HTTP_HOST'];
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_DATABASE);




$uid = $_POST['uid'];
$nid = $_POST['nid'];
$date = strtotime('now');

if(isset($_POST['uid']) && isset($_POST['nid'])){
	
	$file = db_insert('files') // Table name no longer needs {}
			->fields(array(
			  'uid' => $uid,
			  'nid' => $nid,
			  'date' => $date
			))
			->execute();
			dpm($file);
	
}

?>