<?php
/**
 * @file
 * context.is_agency.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'is_agency';
$context->description = '';
$context->tag = 'agency';
$context->conditions = array(
  'user' => array(
    'values' => array(
      'agency' => 'agency',
    ),
    'options' => array(
      'negate_role' => 0,
    ),
  ),
);
$context->reactions = array();
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('agency');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
