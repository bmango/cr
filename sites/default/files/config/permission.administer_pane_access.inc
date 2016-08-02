<?php
/**
 * @file
 * permission.administer_pane_access.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer pane access',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'panels',
);
