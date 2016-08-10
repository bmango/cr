<?php
/**
 * @file
 * field.profile2.field_district.carer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
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
            'field_data_field_district' => array(
              'value' => 'field_district_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_district' => array(
              'value' => 'field_district_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_district',
    'type' => 'field_hidden_text',
    'module' => 'field_hidden',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '255',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'District',
    'widget' => array(
      'weight' => '4',
      'type' => 'field_hidden',
      'module' => 'field_hidden',
      'active' => 0,
      'settings' => array(
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '21',
        'settings' => array(),
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'field_hidden_text_plain',
        'weight' => '0',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'field_hidden',
      ),
      'carer_details_employer_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '21',
        'settings' => array(),
      ),
      'carer_details_employer' => array(
        'label' => 'above',
        'type' => 'field_hidden_text_plain',
        'weight' => '31',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'field_hidden',
      ),
      'carer_profile' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_district',
    'entity_type' => 'profile2',
    'bundle' => 'carer',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'profile2_type.carer' => 'profile2_type.carer',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'field_hidden',
);
