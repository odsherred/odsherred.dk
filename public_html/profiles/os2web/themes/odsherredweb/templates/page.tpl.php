<?php
/**
 * @file
 * Alpha's theme implementation to display a single Drupal page.
 */
?>
<!-- Begin - outer wrapper -->
<div class="outer-wrapper">

  <!-- Begin - sidebar left -->
  <div class="sidebar sidebar-left">

    <!-- Begin - inner wrapper -->
    <div class="sidebar-inner-wrapper">

      <!-- Begin - logo -->
      <div class="sidebar-logo">
        <a href="<?php print $front_page; ?>" class="sidebar-logo-link">
          <img src="<?php print $path_img . '/logo-sidebar-wide.png'; ?>"
               class="sidebar-logo-image sidebar-logo-image-wide"
               alt="<?php print $site_name . t(' logo'); ?>"/>
          <img src="<?php print $path_img . '/logo-sidebar-narrow.png'; ?>"
               class="sidebar-logo-image sidebar-logo-image-narrow"
               alt="<?php print $site_name . t(' logo'); ?>"/>
        </a>
      </div>
      <!-- End - logo -->

      <div class="content"></div>

      <?php if (isset($sidebar_secondary)): ?>
        <!-- Begin - navigation -->
        <?php print render($sidebar_secondary); ?>
        <!-- End - navigation -->
      <?php endif; ?>

      <?php if (isset($sidebar_primary)): ?>
        <!-- Begin - navigation -->
        <?php print render($sidebar_primary); ?>
        <!-- End - navigation -->
      <?php endif; ?>

    </div>
    <!-- End - inner wrapper -->

  </div>
  <!-- End - sidebar left -->

  <!-- Begin - inner wrapper -->
  <div class="inner-wrapper" role="document">

    <!-- Begin - simple navigation -->
    <nav class="simple-navigation">

      <!-- Begin - button list -->
      <ul class="simple-navigation-list simple-navigation-list-left">

        <!-- Begin - button -->
        <li class="simple-navigation-button">
          <a href="#" data-sidebar-toggle="left">
            <span class="fa icon fa-bars"></span> </a>
        </li>
        <!-- End - button -->

      </ul>
      <!-- End - button list -->

      <!-- Begin - logo -->
      <a href="<?php print $front_page; ?>" class="simple-navigation-logo-link">
        <img src="<?php print $path_img . '/logo-simple-navigation.png'; ?>"
             class="simple-navigation-logo-image"
             alt="<?php print t('odsherred.dk logo'); ?>"/>
      </a>
      <!-- End - logo -->

      <!-- Begin - button list -->
      <ul class="simple-navigation-list simple-navigation-list-right">

        <!-- Begin - button -->
        <li class="simple-navigation-button">
          <a href="#" data-sidebar-toggle="left">
            <span class="fa icon fa-search"></span> </a>
        </li>
        <!-- End - button -->

      </ul>
      <!-- End - button list -->

    </nav>
    <!-- End - simple navigation -->

    <div class="content">

      <div<?php print $attributes; ?>>
        <?php if (isset($page['header'])) : ?>
          <?php print render($page['header']); ?>
        <?php endif; ?>

        <?php if (isset($page['content'])) : ?>
          <?php print render($page['content']); ?>
        <?php endif; ?>

        <?php if (isset($page['footer'])) : ?>
          <?php print render($page['footer']); ?>
        <?php endif; ?>
      </div>
    </div>

  </div>
  <!-- End - inner wrapper -->

</div>
<!-- End - outer wrapper -->