<?php

drupal_add_js(drupal_get_path('module', 'bellcom_borgerdk_migrate') . '/js/os2web_borger_dk.js', 'file');
drupal_add_css(drupal_get_path('module', 'bellcom_borgerdk_migrate') . '/css/os2web_borger_dk.css', 'file');

if (!empty($variables['field_borger_dk_article_ref'])) {
  $article = borgerdk_article_load($variables['field_borger_dk_article_ref'][0]['borgerdk_article_entity_id']);

  $microarticle_ids = json_decode($variables['field_borger_dk_article_ref'][0]['borgerdk_microarticle_entity_ids']);
  $microarticles = borgerdk_microarticle_load_multiple_sorted($microarticle_ids);

  $selfservice_ids = json_decode($variables['field_borger_dk_article_ref'][0]['borgerdk_selfservice_entity_ids']);
  $selvservices = borgerdk_selfservice_load_multiple_sorted($selfservice_ids);

  foreach ($microarticles as $ma) {
    $selvservices = array_merge($selvservices, borgerdk_selfservice_load_multiple(FALSE, array('microarticle_id' => $ma->entity_id)));
  }
}

?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="topborgerdk">
    <div class="node-print"><a href="/print/<?php print $node->nid; ?>" target="_blank" title="Udskriv">Udskriv</a>
    </div>
    <?php print render($region['preface_first']); ?>
  </div>

  <h1 class="title" id="page-title"><?php print $title; ?></h1>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="meta submitted">
      <?php print $user_picture; ?>
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php if (!empty($content['field_borger_dk_image'])): ?>
      <div class='billede'>
        <?php print render($content['field_borger_dk_image']); ?>
      </div>
    <?php endif; ?>

    <?php if ($article): ?>
      <div class='borger_dk_header'>
        <div class="field-type-text-long">
          <?php print $article->header; ?>
        </div>
      </div>
    <?php endif; ?>


    <?php if (!empty($selvservices)): ?>
      <div class='panel-panel panel-region-stack2 gul-boks'>
        <div class='toggle-related'><i class='button bum'></i></div>
        <div class='inside'>
          <div id="selvbetjeningslinks">
            <h3><?php print t('Selvbetjening'); ?></h3>
            <ul>
              <?php
              foreach ($selvservices as $ss) {
                print render(entity_view('borgerdk_selfservice', array($ss->entity_id => $ss), 'teaser'));
              }
              ?>
            </ul>
          </div>
        </div>
      </div>
    <?php endif; ?>

    <?php if ($content['field_borger_dk_pre_text']): ?>
      <div class='borger_dk_pre-text'>
        <?php print render($content['field_borger_dk_pre_text']); ?>
      </div>
    <?php endif; ?>

    <div class='panel-panel panel-region-stack3'>
      <div class='inside'>
        <div class='panel-pane pane-entity-field pane-node-body node-body'>
          <?php
          foreach ($microarticles as $ma) {
            print render(entity_view('borgerdk_microarticle', array($ma->entity_id => $ma), 'teaser'));
          }
          ?>
        </div>
        <div class='panel-separator'></div>

        <?php if ($article->legislation): ?>
          <div class='panel-pane pane-entity-field'>
            <div class="field-type-text-long">
              <h3><?php print t('Lovgivning?'); ?></h3>
              <?php print $article->legislation; ?>
            </div>
          </div>
        <?php endif; ?>
      </div>
    </div>

    <div class='panel-panel panel-region-stack4'>
      <div class='inside'>
        <?php if ($article->recommendation): ?>
          <div class='panel-pane pane-entity-field'>
            <div class="field-type-text-long">
              <h3><?php print t('Læs også'); ?></h3>
              <?php print $article->recommendation; ?>
            </div>
          </div>
          <div class='panel-separator'></div>
        <?php endif; ?>

        <?php if ($content['field_borger_dk_shortlist']): ?>
          <div class='panel-pane pane-entity-field'>
            <?php print render($content['field_borger_dk_shortlist']); ?>
          </div>
          <div class='panel-separator'></div>
        <?php endif; ?>

        <?php if ($content['field_borger_dk_post_text']): ?>
          <div class='panel-pane pane-entity-field'>
            <div class='borger_dk-field_os2web-borger-dk-post_text'>
              <?php print render($content['field_borger_dk_post_text']); ?>
            </div>
          </div>
          <div class='panel-separator'></div>
        <?php endif; ?>

        <?php if ($article->byline): ?>
          <div class='borger_dk-field_os2web-borger-dk-byline'>
            <?php print $article->byline; ?>
          </div>
        <?php endif; ?>
      </div>
    </div>

    <?php

    ?>
    <div class="content clearfix"<?php print $content_attributes; ?>>
      <?php

      if (!empty($content['body'])) {
        $show_div = $node->body['und']['0']['value'];
        $show_div = str_replace("</h2>", "</h2><a href='#' class='gplus'>+</a>", $show_div);
        $content['body'] = $show_div;
        print "<div class='panel-panel panel-region-stack3'>
                <div class='inside'>
                  <div class='panel-pane pane-entity-field pane-node-body node-body'>";
        print render($content['body']);
        print '</div>';
        print "<div class='panel-separator'></div>";
        hide($content['body']);
        if (!empty($content['field_os2web_borger_dk_legislati'])) {
          print "<div class='panel-pane pane-entity-field pane-node-field_os2web-borger-dk-legislati'>";
          print render($content['field_os2web_borger_dk_legislati']);
          print "</div>";
          hide($content['field_os2web_borger_dk_legislati']);
        }
        print "</div></div></div>";
      }
      if (!empty($content['field_os2web_borger_dk_recommend'])) {
        print " <div class='panel-panel panel-region-stack4'";
        print "<div class= 'inside'>";
        print "<div class='panel-pane pane-entity-field pane-node-field_os2web-borger-dk-recommend'>";
        print render($content['field_os2web_borger_dk_recommend']);
        print "</div>";
        print "<div class='panel-separator'></div>";
        hide($content['field_os2web_borger_dk_recommend']);
        if (!empty($content['field_os2web_borger_dk_shortlist'])) {
          print "<div class='panel-pane pane-entity-field pane-node-field_os2web-borger-dk-recommend'> ";
          print render($content['field_os2web_borger_dk_shortlist']);
          hide($content['field_os2web_borger_dk_shortlist']);
          print "</div>";
        }
        print "</div></div></div>";
      }

      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      //print render($content);
      ?>
    </div>

    <?php
    // Remove the "Add new comment" link on the teaser page or if the comment
    // form is being displayed on the same page.
    if ($teaser || !empty($content['comments']['comment_form'])) {
      unset($content['links']['comment']['#links']['comment-add']);
    }
    // Only display the wrapper div if there are links.
    $links = render($content['links']);
    if ($links):
      ?>
      <div class="link-wrapper">
        <?php print $links; ?>
      </div>
    <?php endif; ?>

    <?php print render($content['comments']); ?>

  </div>
