<?php
/**
 * @file
 * gsb_feature_event_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_event_display_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gsb_feature_event_display_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gsb_feature_event_display_image_default_styles() {
  $styles = array();

  // Exported image style: event_detail_270x158.
  $styles['event_detail_270x158'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 158,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'event_detail_270x158',
  );

  // Exported image style: gsb_event_168x100.
  $styles['gsb_event_168x100'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 168,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'gsb_event_168x100',
  );

  return $styles;
}
