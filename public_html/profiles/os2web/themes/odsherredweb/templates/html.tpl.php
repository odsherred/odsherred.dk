<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js"></script>
  <script src="https://ajax.googleapis.com/ajax/libs/jqueryui/1.11.4/jquery-ui.min.js"></script>
  <script>
    window.jQuery = window.$j = jQuery;
  </script>
  <?php print $scripts; ?>
  <?php print $styles; ?>
</head>
<body<?php print $attributes;?>>
<div class="body-replacement simple-navigation-enabled-xs simple-navigation-sticky sidebar-left-enabled-xs sidebar-left-hidden-xs sidebar-left-content-push-xs">
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable" aria-hidden="true"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</div>
</body>
</html>
