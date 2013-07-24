<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($display_submitted): ?>
  <footer class="submitted"><?php print $date; ?> -- <?php print $name; ?></footer>
  <?php endif; ?>  
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
    ?>

    <?php if($node->field_header_image || $node->field_header_quote):?>
    <div id="page-header" class="zone clearfix">
    	<?php $public_filename = file_create_url($node->field_header_image['und'][0]['uri']); ?>
		<?php if($node->field_header_image):?>
        <div id="page-header-image" class="region"><img src="<?php print $public_filename; ?>" /></div>
        <?php endif; ?>
		<?php if($node->field_header_quote):?>
        <div id="page-header-quote" class="region">
			<div class="region-inner"><?php print $node->field_header_quote['und'][0]['value']; ?></div>
        </div>
        <?php endif; ?>
    </div>
    <?php endif; ?> 
    
	
    <?php if($node->body || $sidebar || $content_top || $content_bottom): ?>
    <div id="page-content" class="zone clearfix">
    
    	<?php if($node->field_side_bar_quote || $sidebar): ?>
    	<div id="page-side-bar" class="region">
            <div class="region-inner">
            	<?php if($node->field_side_bar_quote): ?>
            	<p id="page-side-quote"><?php print ($node->field_side_bar_quote ? $node->field_side_bar_quote['und'][0]['value'] : '' ); ?></p>
                <?php endif; ?>
                <?php if($sidebar): ?>
                <div id="blocks-side-bar">
                <?php print render($sidebar);?>
                </div>
                <?php endif; ?>
            </div>
            <?php if($node->field_side_bar_image): ?>
            <div id="page-side-img">
            <?php
			
			foreach ($node->field_side_bar_image['und'] as &$img) {
				print theme('image_style', array('style_name' => 'sidebar-image', 'path' => $img['uri'], 'getsize' => TRUE));
			}
			
			?>
            </div>
            <?php endif; ?>
        </div>
        <?php endif; ?>
        
        <?php if( $node->body || $content_top || $content_bottom): ?>
    	<div id="page-body" class="region">
			<div class="region-inner">
            	<?php print render($content_top);?>
				<div class="body"><?php print ($node->body ? $node->body['und'][0]['value'] : ''); ?></div>
                <?php print render($content_bottom);?>
            </div>
        </div>
        <?php endif; ?>
        
    </div> <!-- /page-content -->
    <?php endif; ?>
    
  </div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>