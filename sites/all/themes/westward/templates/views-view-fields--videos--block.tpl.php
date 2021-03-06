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
 
 $files[] = explode(',',$fields['field_video']->content);
 foreach ($files[0] as &$file) {
    if(strpos($file, 'jpg') || strpos($file, 'jpeg') || strpos($file, 'gif') || strpos($file, 'png')){
		$img = $file;
		break;
	}
 }
 
 if(isset($fields['field_url_to_video']->content)){
	 $path = $fields['field_url_to_video']->content;
	 $target = '_blank';
 } else{
	 $path = $fields['path']->content;
	 $target = '';
 }
 
?>
<?php foreach ($fields as $id => $field): ?>
  <?php print $field->wrapper_prefix; ?>
    <?php

	switch($field->class){
	  
	  case "field-video":
	  	print '<div class="video-thumb"><a class="video_file" data-uid="'.$user->uid.'" data-nid="'.$fields['nid']->content.'" href="'.$path.'" target="'.$target.'"><img src="'.$file.'" /></a></div>';
	  break;
	  
	  case "title":
	  	print '<h3><a class="video_file" data-uid="'.$user->uid.'" href="'.$path.'" data-nid="'.$fields['nid']->content.'" target="'.$target.'">'.$field->content.'</a></h3>';
	  break;
	  
	  case "field-url-to-video":
	  case "path":
	  break;
	  
	  case "nid":
	  
	 		 	// If admin, show who accessed the video
				if (in_array('administrator', $user->roles)) {
					$nid = $field->content;
					$uids = array();
					$dates = array();
					$accessed = '';
					$videos = db_query('SELECT * FROM {videos} n WHERE n.nid = :nid ORDER BY n.id DESC', array(':nid' => $nid));
					
					foreach( $videos as $video){
						if(array_search($video->uid, $uids) === false){
							array_push($uids, $video->uid);
							array_push($dates, $video->date);
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
						$accessed .= '<br /><span class="accessed"><a href="/users/'.$username.'">'.$firstname.' '.$lastname.'</a> on '. date('d/m/y G:i',$dates[$key]).'</span>';	
					}
					
					if( $accessed != ''){
						print '<div class="accessed-by" style="clear:both"><strong>Watched by:</strong> '.$accessed.'</div>';
					}
					
				}
	  
	  break;
	  
	  default:
      	print $field->content;
      break;
	  
	}
	
	?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>