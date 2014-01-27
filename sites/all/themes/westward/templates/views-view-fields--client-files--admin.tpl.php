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
		
		case "nid":
			
			$nid = $field->content;
			$uids = array();
			$dates = array();
			$accessed = '';
			$files = db_query('SELECT * FROM {files} n WHERE n.nid = :nid ORDER BY n.id DESC', array(':nid' => $nid));
			
			foreach( $files as $file){
				if(array_search($file->uid, $uids) === false){
					array_push($uids, $file->uid);
					array_push($dates, $file->date);
				}	
			}
			
			foreach( $uids as $key => $uid){
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
				$accessed .= '<span class="accessed"><a href="/users/'.$username.'">'.$firstname.' '.$lastname.'</a> on '. date('d/m/y G:i',$dates[$key]).'</span>';	
			}
			
			if( $accessed != ''){
				print 'Accessed by: '.$accessed;
			}			
			
		break;
		
		default:
			print $field->content;
		break;
	
	}
	
	?>
    
    
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>
