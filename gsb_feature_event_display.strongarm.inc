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
  $strongarm->name = 'fullcalendar_path';
  $strongarm->value = 'profiles/gsb_public/libraries/fullcalendar/fullcalendar';
  $export['fullcalendar_path'] = $strongarm;

  return $export;
}
