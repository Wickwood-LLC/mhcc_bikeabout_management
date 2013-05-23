<?php
/**
 * @file
 * mhcc_bikeabout_management.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mhcc_bikeabout_management_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/1993
  $menu_links['main-menu:node/1993'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1993',
    'router_path' => 'node/%',
    'link_title' => 'BikeAbouts',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
  );
  // Exported menu link: user-menu:bikeabout/organizations-list
  $menu_links['user-menu:bikeabout/organizations-list'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'bikeabout/organizations-list',
    'router_path' => 'bikeabout/organizations-list',
    'link_title' => 'BikeAbout Organizations',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/1990',
  );
  // Exported menu link: user-menu:bikeabout/users-list
  $menu_links['user-menu:bikeabout/users-list'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'bikeabout/users-list',
    'router_path' => 'bikeabout/users-list',
    'link_title' => 'BikeAbout Users',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/1990',
  );
  // Exported menu link: user-menu:node/1990
  $menu_links['user-menu:node/1990'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/1990',
    'router_path' => 'node/%',
    'link_title' => 'BikeAbout Lists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('BikeAbout Lists');
  t('BikeAbout Organizations');
  t('BikeAbout Users');
  t('BikeAbouts');


  return $menu_links;
}
