<?php
/**
 * @file
 * field.comment.field_attachment.comment_node_message.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'display_field' => 0,
      'display_default' => 0,
      'uri_scheme' => 'public',
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
            'field_data_field_attachment' => array(
              'fid' => 'field_attachment_fid',
              'display' => 'field_attachment_display',
              'description' => 'field_attachment_description',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_attachment' => array(
              'fid' => 'field_attachment_fid',
              'display' => 'field_attachment_display',
              'description' => 'field_attachment_description',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'fid' => array(
        'table' => 'file_managed',
        'columns' => array(
          'fid' => 'fid',
        ),
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'field_name' => 'field_attachment',
    'type' => 'file',
    'module' => 'file',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'fid' => array(
        'description' => 'The {file_managed}.fid being referenced in this field.',
        'type' => 'int',
        'not null' => FALSE,
        'unsigned' => TRUE,
      ),
      'display' => array(
        'description' => 'Flag to control whether this file should be displayed when viewing content.',
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 1,
      ),
      'description' => array(
        'description' => 'A description of the file.',
        'type' => 'text',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Attachment',
    'widget' => array(
      'weight' => '1',
      'type' => 'file_generic',
      'module' => 'file',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
        'imce_filefield_on' => 0,
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'file_directory' => '[user]',
      'file_extensions' => 'txt doc docx pdf jpg jpeg png gif',
      'max_filesize' => '2MB',
      'description_field' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'file_default',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'file',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'file_default',
        'weight' => '1',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'file',
      ),
    ),
    'required' => 0,
    'description' => 'Add an attachment such as a CV.',
    'field_name' => 'field_attachment',
    'entity_type' => 'comment',
    'bundle' => 'comment_node_message',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'file',
);
