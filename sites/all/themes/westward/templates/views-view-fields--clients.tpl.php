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
 
?>
<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>

    <?php

	switch($field->class){
		
		case "uid":
			/*
			$uid = $field->content;
			$isrecent = 0;
			$timeframe = strtotime('-2 week');
			$uids = db_query('SELECT entity_id FROM {field_data_field_client} n WHERE n.field_client_uid = :uid', array(':uid' => $uid));
			
			foreach ($uids as $uid) {	

				$nodes = db_query('SELECT created, nid FROM {node} n WHERE n.nid = :nid', array(':nid' => $uid->entity_id));
				foreach ($nodes as $node) {
					if($node->created >= $timeframe){
						$isrecent = 1;
						// check here against if current user id is in files table with nid
						$files = db_query('SELECT uid FROM {files} n WHERE n.nid = :nid', array(':nid' => $node->nid));
						foreach ($files as $file) {
							if($file->uid == $user->uid){
								$isrecent = 0;
							}
						}
					}
				}
			}
			
			if($isrecent == 1){
				print 'New Document Added';
			}
			*/
			
		break;
		
		default:
			print $field->content;
		break;
	
	}
	
	?>


  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>