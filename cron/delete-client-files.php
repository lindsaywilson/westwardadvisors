<?php 

# make drupal directory php's current directory
$drupal_root_dir = realpath('../');
chdir($drupal_root_dir);

# set this constants
define('DRUPAL_ROOT', $drupal_root_dir);

# bootstrap drupal up to the point the database is loaded
include_once('./includes/bootstrap.inc');
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$result = db_query('SELECT field_delete_date_value, entity_id FROM { field_data_field_delete_date }');
foreach ($result as $record) {	
	$nid = $record->entity_id;
	$node = node_load($nid);
	$date = strtotime($record->field_delete_date_value);
	$now = strtotime('now');

	if($date < $now){
		node_delete($nid);
		print 'Client file \''. $node->title .'\' successfully deleted <br />';
	}
	
}


?>