<?php print $doctype; ?>
<!--[if IE 7]> <html lang="<?php print $language->language; ?>" class="lt-ie9 lt-ie8" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<!--[if IE 8]> <html lang="<?php print $language->language; ?>" class="lt-ie9" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
 <![endif]-->
<!--[if (gte IE 8)|(gt IEMobile 7)|!(IEMobile)|!(IE)]><!-->
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<!--<![endif]-->


<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>  
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
  <!--[if (gte IE 6)&(lte IE 8)]>
  <script type="text/javascript" src="/<?php print path_to_theme(); ?>/js/selectivizr-min.js"></script>
  <![endif]--> 
</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>