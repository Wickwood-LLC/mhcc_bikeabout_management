<?php
/**
 * @file
 * mhcc_bikeabout_management.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mhcc_bikeabout_management_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_contact|node|mhcc_complimentary_organizationa|default';
  $field_group->group_name = 'group_organization_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mhcc_complimentary_organizationa';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization Contact Information',
    'weight' => '9',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_organization_position',
      3 => 'field_contact_phone_number',
      4 => 'field_contact_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_organization_contact|node|mhcc_complimentary_organizationa|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_contact|node|mhcc_complimentary_organizationa|form';
  $field_group->group_name = 'group_organization_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mhcc_complimentary_organizationa';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization Contact Information',
    'weight' => '5',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_organization_position',
      3 => 'field_contact_phone_number',
      4 => 'field_contact_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organization_contact|node|mhcc_complimentary_organizationa|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_info|node|mhcc_complimentary_organizationa|default';
  $field_group->group_name = 'group_organization_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mhcc_complimentary_organizationa';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_main_number',
      1 => 'field_location_address',
      2 => 'field_organization_email',
      3 => 'field_organization_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_organization_info|node|mhcc_complimentary_organizationa|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_info|node|mhcc_complimentary_organizationa|form';
  $field_group->group_name = 'group_organization_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mhcc_complimentary_organizationa';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_main_number',
      1 => 'field_location_address',
      2 => 'field_organization_email',
      3 => 'field_organization_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organization_info|node|mhcc_complimentary_organizationa|form'] = $field_group;

  return $export;
}
