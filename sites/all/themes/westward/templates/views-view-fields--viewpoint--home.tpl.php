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
 //dpm($fields);
 
 global $user;
 $type = $fields['type']->content;

 if($type == 'Hot Topic'){
	 if(isset($fields['field_external_link'])){
		 $url = $fields['field_external_link']->content;
	 }else if(isset($fields['field_internal_link'])){
		 $url = $fields['field_internal_link']->content;
	 }else if(isset($fields['field_file_single'])){
		 $url = $fields['field_file_single']->content;
	 }
 }
 if($type == 'Viewpoint'){
	 if (in_array("advisor", $user->roles)) {
		$url = $fields['field_download']->content;
	 } else {
		$url = '/user';
	 }
 }
 
 
?>
<?php foreach ($fields as $id => $field): ?>
  <?php print $field->wrapper_prefix; ?>
    <?php

	switch($field->class){
	  
	  case "field-download":
	  break;
	  
	  case "field-file-single":
	  break;
	  
	  case "field-internal-link":
	  break;
	  
	  case "field-external-link":
	  break;
	  
	  case "field-header-image":
	  	print '<a href="'.$url.'">'.$field->content.'</a>';
	  break;
	  
	  case "title":
	  	print ($type == 'Hot Topic' ? '<h2>Hot Topics</h2><a href="'.$url.'">'.$field->content.'</a>' : '');
	  break;
	  
	  case "type":
	  break;
	  
	  case "field-blurb":
	 	 print ($type == 'Viewpoint' ? '<h2>Hot Topics</h2><a href="'.$url.'">'.$field->content.'</a>' : '');
	  break;
	  
	  default:
      	print $field->content;
      break;
	  
	}
	
	?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>