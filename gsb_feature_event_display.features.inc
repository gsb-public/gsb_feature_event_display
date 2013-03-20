<?php
/**
 * @file
 * gsb_feature_event_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_event_display_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gsb_feature_event_display_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function gsb_feature_event_display_flag_default_flags() {
  $flags = array();
  // Exported flag: "Promote to Front Page Flag".
  $flags['promote_to_front_page_flag'] = array(
    'content_type' => 'node',
    'title' => 'Promote to Front Page Flag',
    'global' => '0',
    'types' => array(
      0 => 'gsb_event',
    ),
    'flag_short' => 'Promote to Front Page Flag',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'UnPromote from Front Page Flag',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'gsb_feature_event_display',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function gsb_feature_event_display_image_default_styles() {
  $styles = array();

  // Exported image style: event_detail_270x158.
  $styles['event_detail_270x158'] = array(
    'name' => 'event_detail_270x158',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '270',
          'height' => '158',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: gsb_event_168x100.
  $styles['gsb_event_168x100'] = array(
    'name' => 'gsb_event_168x100',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '168',
          'height' => '100',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
