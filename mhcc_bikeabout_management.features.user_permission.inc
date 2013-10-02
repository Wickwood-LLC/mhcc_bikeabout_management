<?php
/**
 * @file
 * mhcc_bikeabout_management.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mhcc_bikeabout_management_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_number_of_bikeabout_copies'.
  $permissions['create field_number_of_bikeabout_copies'] = array(
    'name' => 'create field_number_of_bikeabout_copies',
    'roles' => array(
      'BikeAbout Admin' => 'BikeAbout Admin',
      'Membership Admin' => 'Membership Admin',
      'Site Admin' => 'Site Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create mhcc_complimentary_organizationa content'.
  $permissions['create mhcc_complimentary_organizationa content'] = array(
    'name' => 'create mhcc_complimentary_organizationa content',
    'roles' => array(
      'BikeAbout Admin' => 'BikeAbout Admin',
      'Membership Admin' => 'Membership Admin',
      'Site Admin' => 'Site Admin',
      'Site Admin Assistant' => 'Site Admin Assistant',
      'Site Editor' => 'Site Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any mhcc_complimentary_organizationa content'.
  $permissions['delete any mhcc_complimentary_organizationa content'] = array(
    'name' => 'delete any mhcc_complimentary_organizationa content',
    'roles' => array(
      'BikeAbout Admin' => 'BikeAbout Admin',
      'Membership Admin' => 'Membership Admin',
      'Site Admin' => 'Site Admin',
      'Site Admin Assistant' => 'Site Admin Assistant',
      'Site Editor' => 'Site Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own mhcc_complimentary_organizationa content'.
  $permissions['delete own mhcc_complimentary_organizationa content'] = array(
    'name' => 'delete own mhcc_complimentary_organizationa content',
    'roles' => array(
      'BikeAbout Admin' => 'BikeAbout Admin',
      'Membership Admin' => 'Membership Admin',
      'Site Admin' => 'Site Admin',
      'Site Admin Assistant' => 'Site Admin Assistant',
      'Site Editor' => 'Site Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'ds_switch mhcc_complimentary_organizationa'.
  $permissions['ds_switch mhcc_complimentary_organizationa'] = array(
    'name' => 'ds_switch mhcc_complimentary_organizationa',
    'roles' => array(
      'Site Admin' => 'Site Admin',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit any mhcc_complimentary_organizationa content'.
  $permissions['edit any mhcc_complimentary_organizationa content'] = array(
    'name' => 'edit any mhcc_complimentary_organizationa content',
    'roles' => array(
      'BikeAbout Admin' => 'BikeAbout Admin',
      'Membership Admin' => 'Membership Admin',
      'Site Admin' => 'Site Admin',
      'Site Admin Assistant' => 'Site Admin Assistant',
      'Site Editor' => 'Site Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_number_of_bikeabout_copies'.
  $permissions['edit field_number_of_bikeabout_copies'] = array(
    'name' => 'edit field_number_of_bikeabout_copies',
    'roles' => array(
      'BikeAbout Admin' => 'BikeAbout Admin',
      'Membership Admin' => 'Membership Admin',
      'Site Admin' => 'Site Admin',
      'Site Admin Assistant' => 'Site Admin Assistant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_number_of_bikeabout_copies'.
  $permissions['edit own field_number_of_bikeabout_copies'] = array(
    'name' => 'edit own field_number_of_bikeabout_copies',
    'roles' => array(
      'BikeAbout Admin' => 'BikeAbout Admin',
      'Membership Admin' => 'Membership Admin',
      'Site Admin' => 'Site Admin',
      'Site Admin Assistant' => 'Site Admin Assistant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own mhcc_complimentary_organizationa content'.
  $permissions['edit own mhcc_complimentary_organizationa content'] = array(
    'name' => 'edit own mhcc_complimentary_organizationa content',
    'roles' => array(
      'BikeAbout Admin' => 'BikeAbout Admin',
      'Membership Admin' => 'Membership Admin',
      'Site Admin' => 'Site Admin',
      'Site Admin Assistant' => 'Site Admin Assistant',
      'Site Editor' => 'Site Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view field_number_of_bikeabout_copies'.
  $permissions['view field_number_of_bikeabout_copies'] = array(
    'name' => 'view field_number_of_bikeabout_copies',
    'roles' => array(
      'BikeAbout Admin' => 'BikeAbout Admin',
      'Membership Admin' => 'Membership Admin',
      'Site Admin' => 'Site Admin',
      'Site Admin Assistant' => 'Site Admin Assistant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_number_of_bikeabout_copies'.
  $permissions['view own field_number_of_bikeabout_copies'] = array(
    'name' => 'view own field_number_of_bikeabout_copies',
    'roles' => array(
      'BikeAbout Admin' => 'BikeAbout Admin',
      'Membership Admin' => 'Membership Admin',
      'Site Admin' => 'Site Admin',
      'Site Admin Assistant' => 'Site Admin Assistant',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
