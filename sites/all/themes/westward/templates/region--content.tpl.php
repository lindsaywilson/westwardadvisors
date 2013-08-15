<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <a id="main-content"></a>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
    <?php if ($title_hidden): ?><div class="element-invisible"><?php endif; ?>
    
    <?php
	//if($node->type=='news'){
	//	$title = 'Media Center';
	//}
	//if($node->type=='forum'){
	//	$title = 'Advisor Forum';
	//}
	?>
    <?php if (!$is_front): ?>
    <h1 class="title" id="page-title">
    <?php
    if(arg(0) == 'node' && arg(1) == '15'){
		global $user;
		$user = user_load($user->uid);
		$firstname = ($user->field_first_name != '' ? $user->field_first_name['und']['0']['value'] : '');
		$lastname = ($user->field_last_name != '' ? $user->field_last_name['und']['0']['value'] : '');
		$company = ($user->field_company ? '- '.$user->field_company['und']['0']['value'] : '');
		print $firstname.' '.$lastname.' '.$company;
    } elseif(arg(0) == 'node' && arg(1) == '494'){
		global $user;
		$user = user_load($user->uid);
		$firstname = ($user->field_first_name != '' ? $user->field_first_name['und']['0']['value'] : '');
		$lastname = ($user->field_last_name != '' ? $user->field_last_name['und']['0']['value'] : '');
		print $firstname.' '.$lastname;
    }else{
    	print $title; 
	}
	?>
    </h1>
	<?php endif; ?>
    <?php if ($title_hidden): ?></div><?php endif; ?>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php if ($breadcrumb): ?>
      <div id="breadcrumb" class="clearfix">
	  	<?php print $breadcrumb; ?>
        <?php
  	  	$block = module_invoke('search', 'block_view', 'form');
  	  	print render($block);
	 	 ?>
      </div>
    <?php endif; ?> 
    <?php if ($tabs && !empty($tabs['#primary'])): ?><div class="tabs clearfix"><?php print render($tabs); ?></div><?php endif; ?>   
    <?php if ($messages): ?>
      <div id="messages"><?php print $messages; ?></div>
    <?php endif; ?>
    <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
    <?php print $content; ?>
    <?php if ($feed_icons): ?><div class="feed-icon clearfix"><?php print $feed_icons; ?></div><?php endif; ?>
  </div>
</div>