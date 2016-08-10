<?php
/**
 * @file
 * context.agency_lapsed_block.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'agency_lapsed_block';
$context->description = '';
$context->tag = 'agency';
$context->conditions = array(
  'context_all' => array(
    'values' => array(
      'is_agency' => 'is_agency',
    ),
  ),
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
      'negate_role' => 1,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-16' => array(
        'module' => 'block',
        'delta' => '16',
        'region' => 'content',
        'weight' => '-10',
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
