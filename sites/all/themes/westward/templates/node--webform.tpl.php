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
	  
		if(arg(0) == "node" && arg(1) == "44"):
			drupal_add_js('http://maps.googleapis.com/maps/api/js?key=AIzaSyAp7N4odlw30cgO9nO3NSs07SAhkkR53p0&sensor=false','external');
			drupal_add_js(path_to_theme().'/js/gmap.js');
		?>
        
        <div id="page-header" class="zone clearfix">
        
        <div id="page-header-image" class="region">
        	<div id="map"></div>
        </div>

        <div id="page-header-quote" class="region">
			<div class="region-inner">Canada’s leading provider of insurance solutions for tax and estate planning</div>
        </div>

		</div>
		
		<?php endif ?>
	  
      <?php
      print render($content);
	  ?>
  </div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>