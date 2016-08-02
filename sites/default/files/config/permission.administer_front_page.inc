<?php
/**
 * @file
 * permission.administer_front_page.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer front page',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'front_page',
);
