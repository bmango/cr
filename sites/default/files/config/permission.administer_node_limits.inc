<?php
/**
 * @file
 * permission.administer_node_limits.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer node limits',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'node_limit',
);
