<?php
/**
 * @file
 * permission.edit_any_user_page_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any user_page content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.user_page' => 'content_type.user_page',
);

$optional = array();

$modules = array(
  0 => 'node',
);
