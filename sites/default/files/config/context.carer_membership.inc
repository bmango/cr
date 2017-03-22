<?php
/**
 * @file
 * context.carer_membership.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'carer_membership';
$context->description = 'Show the membership block to carers if they are not a member';
$context->tag = '';
$context->conditions = array(
  'context_all' => array(
    'values' => array(
      'is_not_carer_active' => 'is_not_carer_active',
    ),
  ),
  'path' => array(
    'values' => array(
      '<front>' => '<front>',
      'carers-home' => 'carers-home',
    ),
  ),
  'user' => array(
    'values' => array(
      'carer' => 'carer',
    ),
    'options' => array(
      'negate_role' => 0,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-7' => array(
        'module' => 'block',
        'delta' => '7',
        'region' => 'content',
        'weight' => '4',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Show the membership block to carers if they are not a member');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
