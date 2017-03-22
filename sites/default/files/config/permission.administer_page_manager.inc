<?php
/**
 * @file
 * permission.administer_page_manager.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer page manager',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'page_manager',
);
