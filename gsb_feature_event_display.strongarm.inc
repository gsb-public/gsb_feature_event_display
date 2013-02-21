<?php
/**
 * @file
 * gsb_feature_event_display.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_event_display_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_gsb_event';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_gsb_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_gsb_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_gsb_event'] = $strongarm;

  return $export;
}
