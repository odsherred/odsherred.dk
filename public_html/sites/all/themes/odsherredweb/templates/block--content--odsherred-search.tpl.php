<div class="tabs clearfix">
  <ul class="tabs primary clearfix">
    <li class="active"><a class="active">Søgeresultat</a></li>
  </ul>
</div>


<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?><?php print $attributes; ?>>
<div class="block-inner clearfix">
  <?php print render($title_prefix); ?>
  <?php if ($block->subject): ?>
    <h2 class="element-invisible" <?php print $title_attributes; ?>><?php print $block->subject; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div<?php print $content_attributes; ?>>

    <?php print $content ?>
  </div>
</div>
</<?php print $tag; ?>>