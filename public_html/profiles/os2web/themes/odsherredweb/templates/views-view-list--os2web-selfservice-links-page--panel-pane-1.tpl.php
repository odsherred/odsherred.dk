<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php print $wrapper_prefix; ?>
  <ul class="selvbetjening">
    <li class="closed"><a href="#" class="toggle" title="<?php print $title; ?>"><?php print $title; ?></a>
      <ul>
        <?php foreach ($rows as $id => $row): ?>
          <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
        <?php endforeach; ?>
    </li>
  </ul>
<?php print $wrapper_suffix; ?>