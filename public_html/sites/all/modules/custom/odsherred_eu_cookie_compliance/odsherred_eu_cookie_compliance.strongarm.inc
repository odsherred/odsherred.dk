<?php

/**
 * @file
 * odsherred_eu_cookie_compliance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function odsherred_eu_cookie_compliance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_countries';
  $strongarm->value = '';
  $export['cookiecontrol_countries'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_fulltext';
  $strongarm->value = '<p>Nogle cookies på hjemmsiden er vigtige for at sitet fungerer som forventet. De bruges for eksempel når du indsender en formular eller på anden måde får en personlig respons fra hjemmesiden.</p><p>Vi bruger også ikke essentielle cookies til, anonymt, at spore brugen af hjemmesiden. Hvis du ikke er interesseret i at vi bruger disse kan vi undlade at gemme nogen former for cookies. Men vi kan så ikke garantere at sitet fungerer fuldt ud.</p>';
  $export['cookiecontrol_fulltext'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_hideonaccept';
  $strongarm->value = 0;
  $export['cookiecontrol_hideonaccept'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_onaccept';
  $strongarm->value = '';
  $export['cookiecontrol_onaccept'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_position';
  $strongarm->value = 'left';
  $export['cookiecontrol_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_privacynode';
  $strongarm->value = '894409';
  $export['cookiecontrol_privacynode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_shape';
  $strongarm->value = 'triangle';
  $export['cookiecontrol_shape'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_startopen';
  $strongarm->value = 1;
  $export['cookiecontrol_startopen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_text';
  $strongarm->value = '<p>Odsherred.dk gemmer informationer i cookies på din komputer.</p>';
  $export['cookiecontrol_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_theme';
  $strongarm->value = 'light';
  $export['cookiecontrol_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_timeout';
  $strongarm->value = '15';
  $export['cookiecontrol_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'method' => 'categories',
    'info_template' => 'new',
    'enable_save_preferences_button' => 1,
    'save_preferences_button_label' => 'Kun nødvendige',
    'accept_all_categories_button_label' => 'Acceptér alle',
    'disabled_javascripts' => '',
    'automatic_cookies_removal' => 0,
    'allowed_cookies' => '',
    'consent_storage_method' => 'do_not_store',
    'popup_clicking_confirmation' => FALSE,
    'popup_info' => array(
      'value' => '<h2>Du bestemmer over dine data</h2><p>Vi og vores samarbejdspartnere bruger teknologier, herunder cookies, til at indsamle oplysninger om dig til forskellige formål, herunder:</p><ol><li>Funktionalitet</li><li>Statistik</li><li>Marketing</li></ol><p>Ved at trykke på \'Accepter alle\' giver du samtykke til alle disse formål. Du kan også vælge at tilkendegive, hvilke formål du vil give samtykke til ved at benytte knapperne udfor formålet og derefter trykke på \'Acceptér valgte\'.<br>Du kan til enhver tid trække dit samtykke tilbage ved at trykke på det lille ikon i nederste venstre hjørne af skærmen.</p>',
      'format' => 'full_html',
    ),
    'use_mobile_message' => 0,
    'mobile_popup_info' => array(
      'value' => '<h2>We use cookies on this site to enhance your user experience</h2><p>By tapping the Accept button, you agree to us doing so.</p>',
      'format' => 'plain_text',
    ),
    'mobile_breakpoint' => '768',
    'popup_agree_button_message' => 'OK, I agree',
    'show_disagree_button' => TRUE,
    'popup_disagree_button_message' => 'Vis detaljer',
    'disagree_button_label' => 'Kun nødvendige',
    'withdraw_enabled' => 0,
    'withdraw_button_on_info_popup' => 0,
    'withdraw_message' => array(
      'value' => '<h2>We use cookies on this site to enhance your user experience</h2><p>You have given your consent for us to set cookies.</p>',
      'format' => 'plain_text',
    ),
    'withdraw_tab_button_label' => 'Privacy settings',
    'withdraw_action_button_label' => 'Withdraw consent',
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_agreed' => array(
      'value' => '<h2>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'plain_text',
    ),
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_link' => '<front>',
    'popup_link_new_window' => 1,
    'cookie_policy_version' => '1.0.0',
    'containing_element' => 'body',
    'popup_position' => TRUE,
    'use_bare_css' => 0,
    'popup_text_hex' => 'ffffff',
    'popup_bg_hex' => '0779BF',
    'popup_height' => '',
    'popup_width' => '100%',
    'fixed_top_position' => 0,
    'popup_delay' => '1000',
    'disagree_do_not_show_popup' => 0,
    'reload_page' => 0,
    'popup_scrolling_confirmation' => FALSE,
    'cookie_name' => '',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
    'exclude_admin_pages' => 0,
    'exclude_uid_1' => 0,
    'script_scope' => 'footer',
    'better_support_for_screen_readers' => 0,
    'cookie_session' => 0,
  );
  $export['eu_cookie_compliance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_categories';
  $strongarm->value = array(
    'nodvendige' => array(
      'weight' => 0,
      'machine_name' => 'nodvendige',
      'label' => 'Nødvendige',
      'description' => '',
      'checkbox_default_state' => 'required',
    ),
    'funktionelle' => array(
      'weight' => 0,
      'machine_name' => 'funktionelle',
      'label' => 'Funktionelle',
      'description' => '',
      'checkbox_default_state' => 'unchecked',
    ),
    'statistiske' => array(
      'weight' => 0,
      'machine_name' => 'statistiske',
      'label' => 'Statistiske',
      'description' => '',
      'checkbox_default_state' => 'unchecked',
    ),
    'marketing' => array(
      'weight' => 0,
      'machine_name' => 'marketing',
      'label' => 'Marketing',
      'description' => '',
      'checkbox_default_state' => 'unchecked',
    ),
  );
  $export['eu_cookie_compliance_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_cookie_lifetime';
  $strongarm->value = '100';
  $export['eu_cookie_compliance_cookie_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = '';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain_all_sites';
  $strongarm->value = 0;
  $export['eu_cookie_compliance_domain_all_sites'] = $strongarm;

  return $export;
}
