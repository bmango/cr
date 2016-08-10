<?php
/**
 * @file
 * ds_fields.apply_here.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'apply_here';
$ds_field->label = 'Apply Here';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'node' => 'node',
);
$ds_field->ui_limit = 'job|job_details_agency_
job|job_details_agency_view';
$ds_field->properties = array(
  'code' => array(
    'value' => '<?php
  global $user;
  if(in_array(\'carer\', $user->roles) || $user->uid == $entity->uid) { //either a carer or an agency when they are the agency that has created the job
    if($entity->field_ni_number[\'und\'][0][\'value\'] == 1 && isset($entity->field_agency_contact_link[\'und\'][0][\'url\'])) {
      print "<a href=\'" . $entity->field_agency_contact_link[\'und\'][0][\'url\'] . "\' class=\'btn btn-primary\' role=\'button\' target=\'_blank\'>Apply for Job</a>";
    }
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
