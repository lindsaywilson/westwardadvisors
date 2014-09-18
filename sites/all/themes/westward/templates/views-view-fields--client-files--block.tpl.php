<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

 global $user;
 $nid = $fields['nid']->content;
 $marked = (isset($fields['field_mark_as_updated']) ? $fields['field_mark_as_updated']->content : '');
 $isrecent = '';
 $isupdated = '';
 $created = strtotime($fields['created']->content);
 $updated = (isset($fields['changed']) ? strtotime($fields['changed']->content) : '');
 $timeframe = strtotime('-2 week');
 $uids = array();
 $updated_uids = array();

 if($created >= $timeframe){
 	$isrecent = '<span class="red new-file">NEW </span>';
 }
 if($updated != '' && $updated >= $timeframe && $updated > $created && $marked == 'yes'){
 	$isrecent = '';
	$isupdated = '<span class="red updated-file">UPDATED </span>';
 }
 
 $query = db_query('SELECT uid FROM {files} n WHERE n.nid = :nid', array(':nid' => $nid));
 foreach ($query as $file) {
	 array_push($uids, $file->uid);	
 }
 foreach ($uids as $uid){
 	if($uid == $user->uid){
		$isrecent = '';
	}
 }
 
 $query = db_query('SELECT uid FROM {files_updated} n WHERE n.nid = :nid', array(':nid' => $nid));
 foreach ($query as $file) {
	 array_push($updated_uids, $file->uid);	
 }
 foreach ($updated_uids as $uid){
 	if($uid == $user->uid){
		$isupdated = '';
	}
 }
 
 
?>
<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    
    <?php 
	
	//dpm($field->class);
	
	switch($field->class){
		
		case "nid":
			print '<div class="file-data" data-uid="'.$user->uid.'" data-nid="'.$field->content.'"></div>';
		break;
		
		case "field-file":
			print '<div class="field-content">'.$isrecent.$isupdated.$field->content.'</div>';
		break;
		
		case "created":
		case "changed":
		case "field-mark-as-updated":
		break;
		
		default:
			print $field->content;
		break;
	
	}
	
	?>

  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>