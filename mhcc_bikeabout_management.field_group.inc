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
  $field_group->identifier = 'group_member_info2|user|user|form';
  $field_group->group_name = 'group_member_info2';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Current Membership Information',
    'weight' => '9',
    'children' => array(
      0 => 'field_user_management_notes',
      1 => 'field_expiration_date',
      2 => 'field_date_paid',
      3 => 'field_number_of_bikeabout_copies',
      4 => 'field_membership_order',
      5 => 'field_membership_order_status',
      6 => 'field_previous_expiration_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Current Membership Information',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-member-info2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_member_info2|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_info|user|user|full';
  $field_group->group_name = 'group_member_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Membership Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_membership_type',
      1 => 'field_membership_level',
      2 => 'field_date_paid',
      3 => 'field_list_in_public_directory',
      4 => 'field_number_of_bikeabout_copies',
      5 => 'field_membership_order',
      6 => 'field_membership_order_status',
      7 => 'field_public_phone_selection',
      8 => 'field_role_expiration_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Membership Information',
      'instance_settings' => array(
        'classes' => ' group-member-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_member_info|user|user|full'] = $field_group;

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
        'classes' => ' group-organization-contact field-group-fieldset',
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
        'classes' => ' group-organization-contact field-group-fieldset',
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
        'classes' => ' group-organization-info field-group-fieldset',
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
        'classes' => ' group-organization-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organization_info|node|mhcc_complimentary_organizationa|form'] = $field_group;

  return $export;
}
