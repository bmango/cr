<?php
/**
 * @file
 * permission.view_any_user_page_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view any user_page content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'node_view_permissions',
);
