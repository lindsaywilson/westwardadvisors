
<?php

$uid = $_POST['uid'];
$nid = $_POST['nid'];
$date = strtotime('now');

if(isset($_POST['uid']) && isset($_POST['nid'])){
    
	include 'connection.php';
	
	$sql = 	"INSERT INTO files ".
			"(uid,nid,date) ".
			"VALUES ".
			"('$uid','$nid','$date')";
	
	$retval = mysql_query( $sql, $conn );
	
	if(! $retval ){
		die('Could not enter data: ' . mysql_error());
	} else{
		echo "Entered data successfully\n";
	}
	mysql_close($conn);
	
	
}

?>