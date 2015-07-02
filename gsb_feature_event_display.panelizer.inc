<?php
/**
 * @file
 * gsb_feature_event_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gsb_feature_event_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'gsb-landing-standard-page-one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'fullheader' => NULL,
      'maintop' => NULL,
      'mainmiddlefirst' => NULL,
      'mainmiddlesecond' => NULL,
      'mainbottom' => NULL,
      'quicklinks' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0001d496-a90e-45a4-8b19-76247a51c780';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-73e00c93-b6f1-4ff8-baa7-3f8a6bd731a4';
    $pane->panel = 'maintop';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '73e00c93-b6f1-4ff8-baa7-3f8a6bd731a4';
    $display->content['new-73e00c93-b6f1-4ff8-baa7-3f8a6bd731a4'] = $pane;
    $display->panels['maintop'][0] = 'new-73e00c93-b6f1-4ff8-baa7-3f8a6bd731a4';
    $pane = new stdClass();
    $pane->pid = 'new-d063ec69-f620-4c2e-9f59-54406a797550';
    $pane->panel = 'sidebar';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:8146d349-5a57-4d25-801d-90beac176072';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'city',
          'settings' => array(
            'city' => 'Palo Alto',
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'city',
          'settings' => array(
            'city' => 'Stanford',
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd063ec69-f620-4c2e-9f59-54406a797550';
    $display->content['new-d063ec69-f620-4c2e-9f59-54406a797550'] = $pane;
    $display->panels['sidebar'][0] = 'new-d063ec69-f620-4c2e-9f59-54406a797550';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  return $export;
}
