<?php
/**
 * @file
 * variable.tabtamer_tab_settings.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'tabtamer_tab_settings',
  'content' => array(
    'user/%/contact' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/contact',
      'tabtamer_title' => '',
    ),
    'user/%/imce' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/imce',
      'tabtamer_title' => '',
    ),
    'user/%/shortcuts' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/shortcuts',
      'tabtamer_title' => '',
    ),
    'user/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/devel',
      'tabtamer_title' => '',
    ),
    'user/%/view' => array(
      'weight' => '-10',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/view',
      'tabtamer_title' => '',
    ),
    'user/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/edit',
      'tabtamer_title' => '',
    ),
    'user/%/display' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/display',
      'tabtamer_title' => '',
    ),
    'user/%/membership' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%/membership',
      'tabtamer_title' => '',
    ),
    'user/%/orders' => array(
      'weight' => '15',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%views_arg/orders',
      'tabtamer_title' => '',
    ),
    'user/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/devel/load',
      'tabtamer_title' => '',
    ),
    'user/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/devel/render',
      'tabtamer_title' => '',
    ),
    'user/%/edit/account' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user_category/edit/account',
      'tabtamer_title' => '',
    ),
    'user/%/edit/main' => array(
      'weight' => '3',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user_category/edit/main',
      'tabtamer_title' => '',
    ),
    'user/login' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/login',
      'tabtamer_title' => '',
    ),
    'user/register' => array(
      'weight' => '0',
      'action' => 'disabled',
      'tabtamer_original_path' => 'user/register',
      'tabtamer_title' => '',
    ),
    'user/password' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/password',
      'tabtamer_title' => '',
    ),
    'node/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/view',
      'tabtamer_title' => '',
    ),
    'node/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/edit',
      'tabtamer_title' => '',
    ),
    'node/%/delete' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/delete',
      'tabtamer_title' => '',
    ),
    'node/%/revisions' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/revisions',
      'tabtamer_title' => '',
    ),
    'node/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/devel',
      'tabtamer_title' => '',
    ),
    'node/%/display' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/display',
      'tabtamer_title' => '',
    ),
    'node/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/devel/load',
      'tabtamer_title' => '',
    ),
    'node/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/devel/render',
      'tabtamer_title' => '',
    ),
    'profile-carer_employer/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer_employer/%profile2_by_uid/view',
      'tabtamer_title' => '',
    ),
    'profile-carer_employer/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer_employer/%profile2_by_uid/edit',
      'tabtamer_title' => '',
    ),
    'profile-carer_employer/%/delete' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer_employer/%profile2_by_uid/delete',
      'tabtamer_title' => '',
    ),
    'profile-carer_employer/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer_employer/%profile2_by_uid/devel',
      'tabtamer_title' => '',
    ),
    'profile-carer_employer/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer_employer/%profile2_by_uid/devel/load',
      'tabtamer_title' => '',
    ),
    'profile-carer_employer/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer_employer/%profile2_by_uid/devel/render',
      'tabtamer_title' => '',
    ),
    'profile-carer/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer/%profile2_by_uid/view',
      'tabtamer_title' => '',
    ),
    'profile-carer/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer/%profile2_by_uid/edit',
      'tabtamer_title' => '',
    ),
    'profile-carer/%/delete' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer/%profile2_by_uid/delete',
      'tabtamer_title' => '',
    ),
    'profile-carer/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer/%profile2_by_uid/devel',
      'tabtamer_title' => '',
    ),
    'profile-carer/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer/%profile2_by_uid/devel/load',
      'tabtamer_title' => '',
    ),
    'profile-carer/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'profile-carer/%profile2_by_uid/devel/render',
      'tabtamer_title' => '',
    ),
    'carer/register' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'carer/register',
      'tabtamer_title' => '',
    ),
    'carer/login' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'carer/login',
      'tabtamer_title' => '',
    ),
    'carer/password' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'carer/password',
      'tabtamer_title' => '',
    ),
    'carer-employer/register' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'carer-employer/register',
      'tabtamer_title' => '',
    ),
    'carer-employer/login' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'carer-employer/login',
      'tabtamer_title' => '',
    ),
    'carer-employer/password' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'carer-employer/password',
      'tabtamer_title' => '',
    ),
    'search/node' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/node',
      'tabtamer_title' => '',
    ),
    'search/user' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/user',
      'tabtamer_title' => '',
    ),
    'search/node/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/node/%menu_tail',
      'tabtamer_title' => '',
    ),
    'search/user/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/user/%menu_tail',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/view' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/view',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/edit' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/edit',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/devel',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/display' => array(
      'weight' => '11',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/display',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/devel/load',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/devel/render',
      'tabtamer_title' => '',
    ),
    'comment/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/devel',
      'tabtamer_title' => '',
    ),
    'comment/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/devel/load',
      'tabtamer_title' => '',
    ),
    'comment/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/devel/render',
      'tabtamer_title' => '',
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
