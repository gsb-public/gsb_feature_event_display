<?php
/**
 * @file
 * gsb_feature_event_display.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_event_display_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|featured';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'featured';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|event|featured'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_event_display_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|featured';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'featured';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_ft_evnt_wrp',
        2 => 'field_event_date',
        3 => 'field_image_single_public',
        4 => 'field_address',
        5 => 'field_editorial_summary',
        6 => 'group_tag_wrap',
        7 => 'field_industry',
        8 => 'field_region',
        9 => 'field_company_organization',
        10 => 'field_tag',
        11 => 'field_discipline',
        12 => 'field_business_insight_topic',
        13 => 'field_department',
        14 => 'field_event_series',
        15 => 'field_target_audience',
        16 => 'field_event_category',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_ft_evnt_wrp' => 'ds_content',
      'field_event_date' => 'ds_content',
      'field_image_single_public' => 'ds_content',
      'field_address' => 'ds_content',
      'field_editorial_summary' => 'ds_content',
      'group_tag_wrap' => 'ds_content',
      'field_industry' => 'ds_content',
      'field_region' => 'ds_content',
      'field_company_organization' => 'ds_content',
      'field_tag' => 'ds_content',
      'field_discipline' => 'ds_content',
      'field_business_insight_topic' => 'ds_content',
      'field_department' => 'ds_content',
      'field_event_series' => 'ds_content',
      'field_target_audience' => 'ds_content',
      'field_event_category' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|event|featured'] = $ds_layout;

  return $export;
}
