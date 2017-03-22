<?php
/**
 * @file
 * permission.administer_roles_for_menu.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer roles for menu',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'roles_for_menu',
);
