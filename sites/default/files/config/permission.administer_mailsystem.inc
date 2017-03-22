<?php
/**
 * @file
 * permission.administer_mailsystem.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer mailsystem',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'mailsystem',
);
