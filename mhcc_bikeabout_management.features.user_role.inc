<?php
/**
 * @file
 * mhcc_bikeabout_management.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mhcc_bikeabout_management_user_default_roles() {
  $roles = array();

  // Exported role: BikeAbout Admin.
  $roles['BikeAbout Admin'] = array(
    'name' => 'BikeAbout Admin',
    'weight' => 5,
  );

  return $roles;
}
