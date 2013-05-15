<?php

/**
 * Define ctools plugin.
 */
$plugin = array(
  'title' => t('Node: City'),
  'description' => t('Controls access by City'),
  'callback' => 'gsb_feature_event_display_city_ctools_access_check',
  'default' => array('city' => ''),
  'settings form' => 'gsb_feature_event_display_city_ctools_settings',
  'summary' => 'gsb_feature_event_display_city_ctools_summary',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Check for access.
 */
function gsb_feature_event_display_city_ctools_access_check($conf, $context) {
  // If for some unknown reason that $context isn't set, we just want to be sure.
  if (empty($context) || empty($context->data) || empty($context->data->field_address)) {
    return FALSE;
  }
  $city = $context->data->field_address[LANGUAGE_NONE][0]['locality'];
  // Show pane only if city field matches the city of the node.
  if (stristr($city, $conf['city'])) {
    return TRUE;
  }

  return FALSE;
}

/**
 * Settings form for the 'city' access plugin.
 */
function gsb_feature_event_display_city_ctools_settings($form, &$form_state, $conf) {
  $form['settings']['city'] = array(
    '#type' => 'textfield',
    '#title' => t('City'),
    '#description' => t('The pane will only be visible if the specified City matches City on the Event node.'),
    '#default_value' => $conf['city'],
  );
  return $form;
}

/**
 * Provide a summary description based upon the city.
 */
function gsb_feature_event_display_city_ctools_summary($conf, $context) {
  return t('Nodes with City @city', array('@city' => $conf['city']));
}