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
 include 'connection.php';
 
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
			$sql = 'SELECT * FROM files WHERE nid = '.$nid.' ORDER BY id DESC  ';
			$result = mysql_query( $sql, $conn );
			
			while($row = mysql_fetch_array($result)){
				if(array_search($row['uid'], $uids) === false){
					array_push($uids, $row['uid']);
					array_push($dates, $row['date']);
				}

			}
			
			foreach( $uids as $key => $uid){
				$userProfile = user_load($uid);
				$firstname = $userProfile->field_first_name['und'][0]['value'];
				$lastname = $userProfile->field_last_name['und'][0]['value'];
				$username = $userProfile->name;	
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
<?php mysql_close($conn); ?>