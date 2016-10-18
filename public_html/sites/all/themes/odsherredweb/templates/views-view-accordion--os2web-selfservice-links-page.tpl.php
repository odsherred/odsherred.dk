
<?php if ($use_group_header): ?><div><?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div class="<?php print $classes_array[$id]; ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
<?php if ($use_group_header): ?></div><?php endif; ?>