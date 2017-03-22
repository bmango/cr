<?php
/**
 * @file
 * field.node.field_lgbt_care.job.inc
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
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_lgbt_care' => array(
              'value' => 'field_lgbt_care_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_lgbt_care' => array(
              'value' => 'field_lgbt_care_value',
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
    'field_name' => 'field_lgbt_care',
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
    'label' => 'LGBT Care',
    'widget' => array(
      'weight' => '13',
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
        'weight' => '9',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '15',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '38',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '43',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '36',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
    ),
    'required' => 1,
    'description' => 'Do you want a carer with experience of, or specialising in, lesbian, gay, bisexual or transgender care?',
    'default_value' => NULL,
    'field_name' => 'field_lgbt_care',
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
