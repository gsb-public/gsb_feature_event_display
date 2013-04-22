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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_event';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'rss' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'search_index' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'search_result' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'ical' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'tiny' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'business_insight' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'megamenu' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'people_fpp' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'revision' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_event'] = $strongarm;

  return $export;
}
