<?php
/**
 * @file
 * mhcc_bikeabout_management.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mhcc_bikeabout_management_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mhcc_bikeabout_organizations_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MHCC BikeAbout Organizations List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'MHCC BikeAbout Organizations List';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    14 => '14',
    8 => '8',
    3 => '3',
    15 => '15',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_number_of_bikeabout_copies' => 'field_number_of_bikeabout_copies',
    'title' => 'title',
    'street' => 'street',
    'city' => 'city',
    'province' => 'province',
    'postal_code' => 'postal_code',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'postal_code';
  $handler->display->display_options['style_options']['info'] = array(
    'field_number_of_bikeabout_copies' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'street' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'postal_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field: Number of BikeAbout Copies to Print */
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['id'] = 'field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['table'] = 'field_data_field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['field'] = 'field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['label'] = 'Number of Copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mhcc_complimentary_organizationa' => 'mhcc_complimentary_organizationa',
  );
  /* Filter criterion: Field: Number of BikeAbout Copies to Print (field_number_of_bikeabout_copies) */
  $handler->display->display_options['filters']['field_number_of_bikeabout_copies_value']['id'] = 'field_number_of_bikeabout_copies_value';
  $handler->display->display_options['filters']['field_number_of_bikeabout_copies_value']['table'] = 'field_data_field_number_of_bikeabout_copies';
  $handler->display->display_options['filters']['field_number_of_bikeabout_copies_value']['field'] = 'field_number_of_bikeabout_copies_value';
  $handler->display->display_options['filters']['field_number_of_bikeabout_copies_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_number_of_bikeabout_copies_value']['value']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 50, 100';
  $handler->display->display_options['path'] = 'bikeabout/organizations-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'BikeAbout Organizations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'xls';
  $handler->display->display_options['style_options']['filename'] = 'BikeAbout-for-Organizations.xls';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Number of BikeAbout Copies to Print */
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['id'] = 'field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['table'] = 'field_data_field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['field'] = 'field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['path'] = 'bikeabout/organizations-list/xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['mhcc_bikeabout_organizations_list'] = $view;

  $view = new view();
  $view->name = 'mhcc_bikeabout_users_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'MHCC BikeAbout Users List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'MHCC BikeAbout Users List';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    14 => '14',
    8 => '8',
    3 => '3',
    15 => '15',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Field: Number of BikeAbout Copies to Print */
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['id'] = 'field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['table'] = 'field_data_field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['field'] = 'field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['label'] = 'Number of Copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Formal Full Name */
  $handler->display->display_options['fields']['field_formal_full_name']['id'] = 'field_formal_full_name';
  $handler->display->display_options['fields']['field_formal_full_name']['table'] = 'field_data_field_formal_full_name';
  $handler->display->display_options['fields']['field_formal_full_name']['field'] = 'field_formal_full_name';
  $handler->display->display_options['fields']['field_formal_full_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_formal_full_name']['alter']['path'] = 'users/[uid]/edit';
  /* Field: User: Mailing address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare']['id'] = 'field_mailing_address_thoroughfare';
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare']['field'] = 'field_mailing_address_thoroughfare';
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare']['label'] = 'Street';
  /* Field: User: Mailing address - Premise (i.e. Apartment / Suite number) */
  $handler->display->display_options['fields']['field_mailing_address_premise']['id'] = 'field_mailing_address_premise';
  $handler->display->display_options['fields']['field_mailing_address_premise']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_premise']['field'] = 'field_mailing_address_premise';
  $handler->display->display_options['fields']['field_mailing_address_premise']['label'] = 'Street 2';
  /* Field: User: Mailing address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_mailing_address_locality']['id'] = 'field_mailing_address_locality';
  $handler->display->display_options['fields']['field_mailing_address_locality']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_locality']['field'] = 'field_mailing_address_locality';
  $handler->display->display_options['fields']['field_mailing_address_locality']['label'] = 'City';
  /* Field: User: Mailing address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['id'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['field'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['label'] = 'State';
  /* Field: User: Mailing address - Postal code */
  $handler->display->display_options['fields']['field_mailing_address_postal_code']['id'] = 'field_mailing_address_postal_code';
  $handler->display->display_options['fields']['field_mailing_address_postal_code']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_postal_code']['field'] = 'field_mailing_address_postal_code';
  $handler->display->display_options['fields']['field_mailing_address_postal_code']['label'] = 'Zip Code';
  /* Sort criterion: User: Mailing address - Postal code */
  $handler->display->display_options['sorts']['field_mailing_address_postal_code']['id'] = 'field_mailing_address_postal_code';
  $handler->display->display_options['sorts']['field_mailing_address_postal_code']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['sorts']['field_mailing_address_postal_code']['field'] = 'field_mailing_address_postal_code';
  $handler->display->display_options['sorts']['field_mailing_address_postal_code']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_mailing_address_postal_code']['expose']['label'] = 'Zip Code';
  /* Sort criterion: Field: Number of BikeAbout Copies to Print (field_number_of_bikeabout_copies) */
  $handler->display->display_options['sorts']['field_number_of_bikeabout_copies_value']['id'] = 'field_number_of_bikeabout_copies_value';
  $handler->display->display_options['sorts']['field_number_of_bikeabout_copies_value']['table'] = 'field_data_field_number_of_bikeabout_copies';
  $handler->display->display_options['sorts']['field_number_of_bikeabout_copies_value']['field'] = 'field_number_of_bikeabout_copies_value';
  $handler->display->display_options['sorts']['field_number_of_bikeabout_copies_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_number_of_bikeabout_copies_value']['expose']['label'] = 'Number of BikeAbouts';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Number of BikeAbout Copies to Print (field_number_of_bikeabout_copies) */
  $handler->display->display_options['filters']['field_number_of_bikeabout_copies_value']['id'] = 'field_number_of_bikeabout_copies_value';
  $handler->display->display_options['filters']['field_number_of_bikeabout_copies_value']['table'] = 'field_data_field_number_of_bikeabout_copies';
  $handler->display->display_options['filters']['field_number_of_bikeabout_copies_value']['field'] = 'field_number_of_bikeabout_copies_value';
  $handler->display->display_options['filters']['field_number_of_bikeabout_copies_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_number_of_bikeabout_copies_value']['value']['value'] = '0';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 50, 100';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_number_of_bikeabout_copies' => 'field_number_of_bikeabout_copies',
    'uid' => 'uid',
    'field_formal_full_name' => 'field_formal_full_name',
    'field_mailing_address' => 'field_mailing_address',
    'field_mailing_address_4' => 'field_mailing_address',
    'field_mailing_address_1' => 'field_mailing_address_1',
    'field_mailing_address_2' => 'field_mailing_address_2',
    'field_mailing_address_3' => 'field_mailing_address_3',
  );
  $handler->display->display_options['style_options']['default'] = 'field_mailing_address_3';
  $handler->display->display_options['style_options']['info'] = array(
    'field_number_of_bikeabout_copies' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_formal_full_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mailing_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_mailing_address_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mailing_address_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mailing_address_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mailing_address_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'bikeabout/users-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'BikeAbout Users';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'xls';
  $handler->display->display_options['style_options']['filename'] = 'bikeabout-user-list.xls';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Number of BikeAbout Copies to Print */
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['id'] = 'field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['table'] = 'field_data_field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['field'] = 'field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['label'] = 'Number of Copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: User: Formal Full Name */
  $handler->display->display_options['fields']['field_formal_full_name']['id'] = 'field_formal_full_name';
  $handler->display->display_options['fields']['field_formal_full_name']['table'] = 'field_data_field_formal_full_name';
  $handler->display->display_options['fields']['field_formal_full_name']['field'] = 'field_formal_full_name';
  $handler->display->display_options['fields']['field_formal_full_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_formal_full_name']['alter']['path'] = 'users/[uid]/edit';
  /* Field: User: Mailing address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare_1']['id'] = 'field_mailing_address_thoroughfare_1';
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare_1']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare_1']['field'] = 'field_mailing_address_thoroughfare';
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare_1']['label'] = 'Street';
  /* Field: User: Mailing address - Premise (i.e. Apartment / Suite number) */
  $handler->display->display_options['fields']['field_mailing_address_premise_1']['id'] = 'field_mailing_address_premise_1';
  $handler->display->display_options['fields']['field_mailing_address_premise_1']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_premise_1']['field'] = 'field_mailing_address_premise';
  $handler->display->display_options['fields']['field_mailing_address_premise_1']['label'] = 'Street 2';
  /* Field: User: Mailing address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_mailing_address_locality_1']['id'] = 'field_mailing_address_locality_1';
  $handler->display->display_options['fields']['field_mailing_address_locality_1']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_locality_1']['field'] = 'field_mailing_address_locality';
  $handler->display->display_options['fields']['field_mailing_address_locality_1']['label'] = 'City';
  /* Field: User: Mailing address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_mailing_address_administrative_area_1']['id'] = 'field_mailing_address_administrative_area_1';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area_1']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area_1']['field'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area_1']['label'] = 'State';
  /* Field: User: Mailing address - Postal code */
  $handler->display->display_options['fields']['field_mailing_address_postal_code_1']['id'] = 'field_mailing_address_postal_code_1';
  $handler->display->display_options['fields']['field_mailing_address_postal_code_1']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_postal_code_1']['field'] = 'field_mailing_address_postal_code';
  $handler->display->display_options['fields']['field_mailing_address_postal_code_1']['label'] = 'Zip Code';
  $handler->display->display_options['path'] = 'bikeabout/users-list/xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Printed BikeAbout Members %timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Number of BikeAbout Copies to Print */
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['id'] = 'field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['table'] = 'field_data_field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['field'] = 'field_number_of_bikeabout_copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['label'] = 'Number of Copies';
  $handler->display->display_options['fields']['field_number_of_bikeabout_copies']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: User: Formal Full Name */
  $handler->display->display_options['fields']['field_formal_full_name']['id'] = 'field_formal_full_name';
  $handler->display->display_options['fields']['field_formal_full_name']['table'] = 'field_data_field_formal_full_name';
  $handler->display->display_options['fields']['field_formal_full_name']['field'] = 'field_formal_full_name';
  $handler->display->display_options['fields']['field_formal_full_name']['alter']['path'] = 'users/[uid]/edit';
  /* Field: User: Mailing address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare']['id'] = 'field_mailing_address_thoroughfare';
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare']['field'] = 'field_mailing_address_thoroughfare';
  $handler->display->display_options['fields']['field_mailing_address_thoroughfare']['label'] = 'Street';
  /* Field: User: Mailing address - Premise (i.e. Apartment / Suite number) */
  $handler->display->display_options['fields']['field_mailing_address_premise']['id'] = 'field_mailing_address_premise';
  $handler->display->display_options['fields']['field_mailing_address_premise']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_premise']['field'] = 'field_mailing_address_premise';
  $handler->display->display_options['fields']['field_mailing_address_premise']['label'] = 'Street 2';
  /* Field: User: Mailing address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_mailing_address_locality']['id'] = 'field_mailing_address_locality';
  $handler->display->display_options['fields']['field_mailing_address_locality']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_locality']['field'] = 'field_mailing_address_locality';
  $handler->display->display_options['fields']['field_mailing_address_locality']['label'] = 'City';
  /* Field: User: Mailing address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['id'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['field'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['label'] = 'State';
  /* Field: User: Mailing address - Postal code */
  $handler->display->display_options['fields']['field_mailing_address_postal_code']['id'] = 'field_mailing_address_postal_code';
  $handler->display->display_options['fields']['field_mailing_address_postal_code']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_postal_code']['field'] = 'field_mailing_address_postal_code';
  $handler->display->display_options['fields']['field_mailing_address_postal_code']['label'] = 'Zip Code';
  $handler->display->display_options['path'] = 'bikeabout/users-list/xls-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['mhcc_bikeabout_users_list'] = $view;

  return $export;
}
