<?php
/**
 * @file
 * content_type.job.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'job',
  'name' => 'Job',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__job' => 'variable.field_bundle_settings_node__job',
  'variable.node_options_job' => 'variable.node_options_job',
  'variable.node_preview_job' => 'variable.node_preview_job',
  'variable.node_submitted_job' => 'variable.node_submitted_job',
  'variable.comment_default_per_page_job' => 'variable.comment_default_per_page_job',
  'variable.comment_form_location_job' => 'variable.comment_form_location_job',
  'variable.comment_preview_job' => 'variable.comment_preview_job',
  'variable.comment_subject_field_job' => 'variable.comment_subject_field_job',
);

$optional = array(
  'field.node.field_description.job' => 'field.node.field_description.job',
  'field.node.field_job_type.job' => 'field.node.field_job_type.job',
  'field.node.field_job_status.job' => 'field.node.field_job_status.job',
  'field.node.field_care_category.job' => 'field.node.field_care_category.job',
  'field.node.field_job_hours.job' => 'field.node.field_job_hours.job',
  'field.node.field_pay_basis.job' => 'field.node.field_pay_basis.job',
  'field.node.field_preferred_carer_gender.job' => 'field.node.field_preferred_carer_gender.job',
  'field.node.field_driver_licence_required.job' => 'field.node.field_driver_licence_required.job',
  'field.node.field_lgbt_care.job' => 'field.node.field_lgbt_care.job',
  'field.node.field_job_duties.job' => 'field.node.field_job_duties.job',
  'field.node.field_night_time_assistance.job' => 'field.node.field_night_time_assistance.job',
  'field.node.field_address.job' => 'field.node.field_address.job',
  'field.node.field_job_class.job' => 'field.node.field_job_class.job',
  'field.node.field_agency_contact.job' => 'field.node.field_agency_contact.job',
  'field.node.field_agency_contact_phone.job' => 'field.node.field_agency_contact_phone.job',
  'field.node.field_agency_contact_email.job' => 'field.node.field_agency_contact_email.job',
  'field.node.field_agency_contact_link.job' => 'field.node.field_agency_contact_link.job',
  'field.node.field_district.job' => 'field.node.field_district.job',
  'field.node.field_geofield.job' => 'field.node.field_geofield.job',
  'field.node.field_agency_job.job' => 'field.node.field_agency_job.job',
  'field.node.field_ni_number.job' => 'field.node.field_ni_number.job',
  'field.node.field_language.job' => 'field.node.field_language.job',
  'field.node.field_pay.job' => 'field.node.field_pay.job',
  'field.node.field_pay_rate_basis.job' => 'field.node.field_pay_rate_basis.job',
  'permission.create_job_content' => 'permission.create_job_content',
  'permission.edit_own_job_content' => 'permission.edit_own_job_content',
  'permission.edit_any_job_content' => 'permission.edit_any_job_content',
  'permission.delete_own_job_content' => 'permission.delete_own_job_content',
  'permission.delete_any_job_content' => 'permission.delete_any_job_content',
);

$modules = array(
  0 => 'node',
);
