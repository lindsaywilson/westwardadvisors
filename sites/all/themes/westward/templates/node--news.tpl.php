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
    
    <div id="page-content" class="zone clearfix">
    
    	<div id="page-side-bar" class="region">
            <div class="region-inner">
                <div id="blocks-side-bar">
                <?php print render($sidebar);?>
                </div>
            </div>
        </div>
        
    	<div id="page-body" class="region">
			<div class="region-inner">
            	<h2><?php print $title ?></h2>
            	<?php print render($content); ?>
            </div>
        </div>
        
    </div> <!-- /page-content -->
    
    
  </div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>