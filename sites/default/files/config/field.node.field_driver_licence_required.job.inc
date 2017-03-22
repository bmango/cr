<?php
/**
 * @file
 * field.node.field_driver_licence_required.job.inc
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
            'field_data_field_driver_licence_required' => array(
              'value' => 'field_driver_licence_required_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_driver_licence_required' => array(
              'value' => 'field_driver_licence_required_value',
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
    'field_name' => 'field_driver_licence_required',
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
    'label' => 'Driver Licence Required',
    'widget' => array(
      'weight' => '12',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
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
        'weight' => '8',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '14',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '37',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '42',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '35',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_driver_licence_required',
    'entity_type' => 'node',
    'bundle' => 'job',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.job' => 'content_type.job',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
