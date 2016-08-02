<?php
/**
 * @file
 * field.profile2.field_experience.carer.inc
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
            'field_data_field_experience' => array(
              'value' => 'field_experience_value',
              'revision_id' => 'field_experience_revision_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_experience' => array(
              'value' => 'field_experience_value',
              'revision_id' => 'field_experience_revision_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_experience',
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
    'label' => 'Which areas do you have experience in?',
    'widget' => array(
      'weight' => '7',
      'type' => 'paragraphs_embed',
      'module' => 'paragraphs',
      'active' => 0,
      'settings' => array(
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'title' => 'Area',
      'title_multiple' => 'Areas',
      'default_edit_mode' => 'open',
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'experience' => 'experience',
        'other_languages' => -1,
        'qualification' => -1,
        'work_experience' => -1,
      ),
      'bundle_weights' => array(
        'experience' => '2',
        'other_languages' => '3',
        'qualification' => '4',
        'work_experience' => '5',
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'paragraphs_view',
        'settings' => array(
          'view_mode' => 'full',
          'field_formatter_label' => '',
        ),
        'module' => 'paragraphs',
        'weight' => 25,
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'paragraphs_view',
        'weight' => '21',
        'settings' => array(
          'view_mode' => 'full',
          'field_formatter_label' => '',
        ),
        'module' => 'paragraphs',
      ),
      'carer_details_employer' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
      'carer_profile' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => 'Choose Add Experience to add an area you have experience in such as elderly care, dementia, etc',
    'default_value' => NULL,
    'field_name' => 'field_experience',
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
