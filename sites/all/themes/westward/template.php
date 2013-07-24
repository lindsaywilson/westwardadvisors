<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
 /**
 * Implements hook_process_region().
 */
function westward_process_region(&$vars) {
  if (in_array($vars['elements']['#region'], array('content', 'menu', 'branding'))) {
    $theme = alpha_get_theme();
	
    switch ($vars['elements']['#region']) {
      case 'content':
		$vars['breadcrumb'] = $theme->page['breadcrumb'];
		$vars['messages'] = $theme->page['messages'];
        break;
	  case 'branding':
        $vars['main_menu'] = $theme->page['main_menu'];
        $vars['secondary_menu'] = $theme->page['secondary_menu'];
        break;
    }
  }
}

function westward_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Adding the title of the current page to the breadcrumb.
    $breadcrumb[] = drupal_get_title();
   
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.

    $output = '<div class="breadcrumb">' . implode(' | ', $breadcrumb) . '</div>';
    return $output;
  }
}

function westward_preprocess_page(&$variables) {
	
	//if($variables['node']){
		if (arg(0) == 'node' && is_numeric(arg(1))){
			$node = $variables['node'];
			if($node->type == 'news') {
			   $variables['title'] = 'Media Center'; 
			}
			if($node->type == 'forum') {
			   $variables['title'] = 'Advisor Forum'; 
			}
			if(arg(1)== '4' || arg(1)== '5' || arg(1)== '8' || arg(1)== '9' || arg(1)== '14') {
				$variables['title'] = 'The LifeStep Process<sup>&trade;</sup>';
			}
		}
	//}
}

function westward_preprocess_node(&$variables) {
	
	foreach ($variables['user']->roles as &$r) {
		$variables['attributes_array']['class'][] = 'role-'.str_replace(' ','',$r);
	}
	if(isset($variables['user']->name)){
		$variables['attributes_array']['class'][] = 'user-'.str_replace(' ','-',$variables['user']->name);
	}
	
	$variables['sidebar'] = '';
	$variables['content_bottom'] = '';
	$variables['content_top'] = '';
	
    if ($blocks = block_get_blocks_by_region('sidebar_first')) {
      $variables['sidebar'] = $blocks;
	}
	if ($blocks = block_get_blocks_by_region('content_top')) {
      $variables['content_top'] = $blocks;
	}
	if ($blocks = block_get_blocks_by_region('content_bottom')) {
      $variables['content_bottom'] = $blocks;
	}
}

function westward_form_alter(&$form, &$form_state, $form_id) {

    if($form_id == 'user_profile_form') {
		
        if(arg(0) == 'user' && arg(1)) {

            $user = user_load(arg(1));

           
        }
    }
}