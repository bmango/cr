<?php
/**
 * @file
 * permission.edit_any_faq_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any faq content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.faq' => 'content_type.faq',
);

$optional = array();

$modules = array(
  0 => 'node',
);
