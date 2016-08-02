<?php
/**
 * @file
 * permission.access_site_wide_contact_form.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'access site-wide contact form',
  'roles' => array(
    0 => 'anonymous user',
    1 => 'authenticated user',
    2 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'contact',
);
