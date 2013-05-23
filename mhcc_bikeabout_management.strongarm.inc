<?php
/**
 * @file
 * mhcc_bikeabout_management.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mhcc_bikeabout_management_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_mhcc_complimentary_organizationa';
  $strongarm->value = '0';
  $export['comment_anonymous_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_mhcc_complimentary_organizationa';
  $strongarm->value = 1;
  $export['comment_default_mode_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_mhcc_complimentary_organizationa';
  $strongarm->value = '50';
  $export['comment_default_per_page_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_mhcc_complimentary_organizationa';
  $strongarm->value = 1;
  $export['comment_form_location_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_mhcc_complimentary_organizationa';
  $strongarm->value = '1';
  $export['comment_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_mhcc_complimentary_organizationa';
  $strongarm->value = '1';
  $export['comment_preview_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_mhcc_complimentary_organizationa';
  $strongarm->value = 1;
  $export['comment_subject_field_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__mhcc_complimentary_organizationa';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'classified' => array(
        'custom_settings' => FALSE,
      ),
      'checkout_pane' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'entityreference_view_widget' => array(
        'custom_settings' => FALSE,
      ),
      'mhcc_ride_event' => array(
        'custom_settings' => FALSE,
      ),
      'media_gallery_block' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'mhcc_ride_list' => array(
        'custom_settings' => FALSE,
      ),
      'mhcc_ride_report' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
        'xmlsitemap' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_mhcc_complimentary_organizationa';
  $strongarm->value = array();
  $export['menu_options_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_mhcc_complimentary_organizationa';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_mhcc_complimentary_organizationa';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_mhcc_complimentary_organizationa';
  $strongarm->value = '1';
  $export['node_preview_mhcc_complimentary_organizationa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_mhcc_complimentary_organizationa';
  $strongarm->value = 0;
  $export['node_submitted_mhcc_complimentary_organizationa'] = $strongarm;

  return $export;
}
