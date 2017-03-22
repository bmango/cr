<?php
/**
 * @file
 * ds_fields.published_status.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'published_status';
$ds_field->label = 'Published Status';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'node' => 'node',
);
$ds_field->ui_limit = 'job|*';
$ds_field->properties = array(
  'code' => array(
    'value' => '<?php
if ($entity->status == NODE_PUBLISHED) {
  print "<div class=\'cr-active\'>Published</div>";
} else {
  print "<div class=\'cr-unactive\'>Unpublished</div>";
}
?>',
    'format' => 'ds_code',
  ),
  'use_token' => 0,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
