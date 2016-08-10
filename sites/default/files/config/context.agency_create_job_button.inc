<?php
/**
 * @file
 * context.agency_create_job_button.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'agency_create_job_button';
$context->description = '';
$context->tag = 'agency';
$context->conditions = array(
  'path' => array(
    'values' => array(
      '<front>' => '<front>',
    ),
  ),
  'user' => array(
    'values' => array(
      'agency bronze' => 'agency bronze',
      'agency gold' => 'agency gold',
      'agency silver' => 'agency silver',
    ),
    'options' => array(
      'negate_role' => 0,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-17' => array(
        'module' => 'block',
        'delta' => '17',
        'region' => 'content',
        'weight' => '5',
      ),
    ),
  ),
);
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
