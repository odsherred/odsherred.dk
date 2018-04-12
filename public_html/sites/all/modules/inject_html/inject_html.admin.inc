<?php

/**
 * System settings form.
 */
function inject_html_admin_settings() {
  $form = array();

  $form['inject_html_enable'] = array(
    '#title' => t('Aktiver HTML indsættelse i header og body'),
    '#description' => t('HTML indsat i nedenstånde felter bliver indsat på ALLE sider på hele sitet'),
    '#default_value' => variable_get('inject_html_enable', FALSE),
    '#type' => 'checkbox',
  );

  $form['inject_html_container'] = array(
    '#type' => 'container',
    '#states' => array(
      'visible' => array(
        ':input[name="inject_html_enable"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['inject_html_container']['inject_html_head'] = array(
    '#type' => 'textarea',
    '#title' => t('HTML that goes in the head section'),
    '#default_value' => variable_get('inject_html_head'),
  );

  $form['inject_html_container']['inject_html_body'] = array(
    '#type' => 'textarea',
    '#title' => t('HTML that goes in the body section'),
    '#default_value' => variable_get('inject_html_body'),
  );

  $form['inject_html_message'] = array(
    '#type' => 'markup',
    '#prefix' => '<p>',
    '#suffix' => '</p>',
    '#markup' => t('Når denne form gemmes, ryddes Drupals cache. Dette kan tage et øjeblik.'),
  );

  return system_settings_form($form);
}
