<?php
/**
 * @file
 * field.profile2.field_work_permit.carer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_work_permit' => array(
              'value' => 'field_work_permit_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_work_permit' => array(
              'value' => 'field_work_permit_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_work_permit',
    'type' => 'list_boolean',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Do you have a valid visa/work permit for working in the UK?',
    'widget' => array(
      'weight' => '12',
      'type' => 'options_onoff',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'display_label' => 1,
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '13',
        'settings' => array(
          'empty_fields_handler' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '26',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'carer_profile' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '16',
        'settings' => array(),
      ),
      'carer_details_employer_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '16',
        'settings' => array(),
      ),
      'carer_details_employer' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '15',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'field_name' => 'field_work_permit',
    'entity_type' => 'profile2',
    'bundle' => 'carer',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
