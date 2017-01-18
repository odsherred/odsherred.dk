<?php
$termId = '';
$termIdParent = '';

if (is_object($node) && !empty($node->field_os2web_spotbox_sitestruct)) {
  $termId = 'tid-' . $node->field_os2web_spotbox_sitestruct[LANGUAGE_NONE][0]['tid'];
  $termParents = taxonomy_get_parents($node->field_os2web_spotbox_sitestruct[LANGUAGE_NONE][0]['tid']);
  if (!empty($termParents)) {
    $termIdParent = 'tid-' . key($termParents);
  }
}
?>

<header>
  <h3 class="search-result-title <?php print $termIdParent . ' ' . $termId; ?>"><a
      href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
</header>