<?php
/**
 * @file
 * context.agency_registration_membership.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'agency_registration_membership';
$context->description = 'Add subscription form to agency registration page';
$context->tag = 'agency';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'agency/register' => 'agency/register',
    ),
  ),
);
$context->reactions = array(
  'plan_group' => array(
    'pgid' => '4',
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Add subscription form to agency registration page');
t('agency');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
