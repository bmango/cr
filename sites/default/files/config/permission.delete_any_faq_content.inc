<?php
/**
 * @file
 * permission.delete_any_faq_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any faq content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.faq' => 'content_type.faq',
);

$optional = array();

$modules = array(
  0 => 'node',
);
