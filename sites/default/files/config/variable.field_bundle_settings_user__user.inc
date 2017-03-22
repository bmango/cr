<?php
/**
 * @file
 * variable.field_bundle_settings_user__user.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'field_bundle_settings_user__user',
  'content' => array(
    'view_modes' => array(
      'carer_profile' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => '2',
        ),
        'account' => array(
          'weight' => '0',
        ),
        'timezone' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '6',
        ),
        'contact' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'profile_main' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'carer_profile' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'summary' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'carer_profile' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
