<?php
/**
 * @file
 * field.profile2.field_qualifications.carer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
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
            'field_data_field_qualifications' => array(
              'value' => 'field_qualifications_value',
              'revision_id' => 'field_qualifications_revision_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_qualifications' => array(
              'value' => 'field_qualifications_value',
              'revision_id' => 'field_qualifications_revision_id',
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
    'field_name' => 'field_qualifications',
    'type' => 'paragraphs',
    'module' => 'paragraphs',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The paragraph item id.',
      ),
      'revision_id' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The paragraph item revision id.',
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Qualifications',
    'widget' => array(
      'weight' => '15',
      'type' => 'paragraphs_embed',
      'module' => 'paragraphs',
      'active' => 0,
      'settings' => array(
        'label_help_description' => 'Please enter details of all your qualifications and any relevant education details',
      ),
    ),
    'settings' => array(
      'title' => 'Qualification',
      'title_multiple' => 'Qualifications',
      'default_edit_mode' => 'open',
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'qualification' => 'qualification',
      ),
      'bundle_weights' => array(
        'qualification' => '2',
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'paragraphs_view',
        'weight' => '0',
        'settings' => array(
          'view_mode' => 'full',
          'empty_fields_handler' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'field_formatter_label' => '',
        ),
        'module' => 'paragraphs',
      ),
      'page' => array(
        'label' => 'hidden',
        'type' => 'paragraphs_view',
        'weight' => '8',
        'settings' => array(
          'view_mode' => 'full',
          'field_formatter_label' => '',
        ),
        'module' => 'paragraphs',
      ),
      'carer_profile' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '1',
        'settings' => array(),
      ),
      'carer_details_employer_' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '1',
        'settings' => array(),
      ),
      'carer_details_employer' => array(
        'label' => 'hidden',
        'type' => 'paragraphs_view',
        'weight' => '5',
        'settings' => array(
          'view_mode' => 'full',
          'field_formatter_label' => '',
        ),
        'module' => 'paragraphs',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_qualifications',
    'entity_type' => 'profile2',
    'bundle' => 'carer',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'paragraphs',
);
