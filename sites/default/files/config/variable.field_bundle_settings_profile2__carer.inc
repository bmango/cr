<?php
/**
 * @file
 * variable.field_bundle_settings_profile2__carer.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'field_bundle_settings_profile2__carer',
  'content' => array(
    'view_modes' => array(
      'account' => array(
        'custom_settings' => FALSE,
      ),
      'page' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'carer_profile' => array(
        'custom_settings' => TRUE,
      ),
      'carer_details_employer_' => array(
        'custom_settings' => TRUE,
      ),
      'carer_details_employer' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'flag_favourite' => array(
          'carer_details_employer' => array(
            'weight' => '30',
            'visible' => TRUE,
          ),
          'page' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
