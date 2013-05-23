<?php
/**
 * @file
 * mhcc_bikeabout_management.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mhcc_bikeabout_management_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|mhcc_complimentary_organizationa|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'mhcc_complimentary_organizationa';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|mhcc_complimentary_organizationa|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mhcc_bikeabout_management_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|mhcc_complimentary_organizationa|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mhcc_complimentary_organizationa';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        8 => 'field_number_of_bikeabout_copies',
      ),
      'right' => array(
        1 => 'field_first_name',
        2 => 'field_last_name',
        3 => 'field_organization_position',
        4 => 'field_contact_phone_number',
        5 => 'field_contact_email',
        11 => 'group_organization_contact',
      ),
      'left' => array(
        6 => 'field_location_address',
        7 => 'field_main_number',
        9 => 'group_organization_info',
        10 => 'field_organization_email',
        12 => 'field_organization_website',
      ),
      'footer' => array(
        13 => 'field_user_management_notes',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_first_name' => 'right',
      'field_last_name' => 'right',
      'field_organization_position' => 'right',
      'field_contact_phone_number' => 'right',
      'field_contact_email' => 'right',
      'field_location_address' => 'left',
      'field_main_number' => 'left',
      'field_number_of_bikeabout_copies' => 'header',
      'group_organization_info' => 'left',
      'field_organization_email' => 'left',
      'group_organization_contact' => 'right',
      'field_organization_website' => 'left',
      'field_user_management_notes' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|mhcc_complimentary_organizationa|default'] = $ds_layout;

  return $export;
}
