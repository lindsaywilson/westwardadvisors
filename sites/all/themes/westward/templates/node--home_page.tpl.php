
<?php drupal_add_js(path_to_theme().'/js/home.js'); ?>

<article<?php print $attributes; ?>>
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
    ?>

    <div id="home-content" class="zone clearfix">
    <hgroup class="clearfix">
    <h1>The LifeStep Process<sup>&trade;</sup></h1>
    <h2>Insurance solutions for tax and estate planning</h2>
    </hgroup>
    	<div id="lifestep-process" class="region clearfix">
			<div class="region-inner clearfix">
            	<div class="process-tdp process">
                <a href="the-lifestep-process/the-discovery-process">
                	<div class="image"></div>
                    <h2>The Discovery Process&trade;</h2>
                    <div class="content">
						<?php print ($node->field_the_discovery_process ? $node->field_the_discovery_process['und'][0]['value'] : '' ); ?>
                        <div class="more a-dashes">more</div>
                        <div class="book"></div>
                    </div>
                </a>
                </div>
                <div class="process-tsb process">
                <a href="the-lifestep-process/the-strategy-builder">
                	<div class="image"></div>
                    <h2>The Strategy Builder&trade;</h2>
                    <div class="content">
						<?php print ($node->field_the_strategy_builder ? $node->field_the_strategy_builder['und'][0]['value'] : '' ); ?>
                        <div class="more a-dashes">more</div>
                        <div class="book"></div>
                    </div>
                </a>
                </div>
                <div class="process-tsi process">
                <a href="the-lifestep-process/the-strategic-implementor">
                	<div class="image"></div>
                    <h2>The Strategic Implementor&trade;</h2>
                    <div class="content">
						<?php print ($node->field_the_strategic_implementor ? $node->field_the_strategic_implementor['und'][0]['value'] : '' ); ?>
                        <div class="more a-dashes">more</div>
                        <div class="book"></div>
                    </div>
                </a>
                </div>
                <div class="process-tpo process">
                <a href="the-lifestep-process/the-performance-optimizer">
                	<div class="image"></div>
                    <h2>The Performance Optimizer&trade;</h2>
                    <div class="content">
						<?php print ($node->field_the_performance_optimizer ? $node->field_the_performance_optimizer['und'][0]['value'] : '' ); ?>
                        <div class="more a-dashes">more</div>
                        <div class="book"></div>
                    </div>
                </a>
                </div>
            </div>
        </div>
    </div>
    
  </div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>