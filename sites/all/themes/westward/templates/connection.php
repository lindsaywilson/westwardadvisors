<?php

	$dbuser = 'root';
	$dbpass = '';
	$dbhost = 'localhost';
	//$dbuser = 'westwa5_produser';
	//$dbpass = '9Lpy4tCpdDpAxSzq';
	$conn = mysql_connect($dbhost, $dbuser, $dbpass);
	
	mysql_select_db('westward');
	//mysql_select_db('westwa5_prod');

?>