<?php
/**
 * @file
 * views_view.faqs.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'faqs';
$view->description = 'Answers to common questions asked about how the Carers Register website works.';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'FAQs';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'FAQs';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Nodequeue: Queue */
$handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
$handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
$handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
  'faq' => 'faq',
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = 'faqs#id=[nid]';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Sort criterion: Nodequeue: Position */
$handler->display->display_options['sorts']['position']['id'] = 'position';
$handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['sorts']['position']['field'] = 'position';
$handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'faq' => 'faq',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Frequently Asked Questions';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'faqs questions';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = 'faqs#[nid]';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h4';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Nodequeue: Position */
$handler->display->display_options['fields']['position']['id'] = 'position';
$handler->display->display_options['fields']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['fields']['position']['field'] = 'position';
$handler->display->display_options['fields']['position']['relationship'] = 'nodequeue_rel';
$handler->display->display_options['fields']['position']['label'] = '';
$handler->display->display_options['fields']['position']['exclude'] = TRUE;
$handler->display->display_options['fields']['position']['element_label_colon'] = FALSE;
$handler->display->display_options['path'] = 'faqs';

/* Display: Attachment */
$handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'faqs answers';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<a name="[nid]">&nbsp;</a>';
$handler->display->display_options['fields']['nid']['element_class'] = 'anchor';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['path'] = 'faqs#id=[nid]';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h4';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['settings'] = array(
  'field_formatter_label' => '',
);
/* Field: Nodequeue: Position */
$handler->display->display_options['fields']['position']['id'] = 'position';
$handler->display->display_options['fields']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['fields']['position']['field'] = 'position';
$handler->display->display_options['fields']['position']['relationship'] = 'nodequeue_rel';
$handler->display->display_options['fields']['position']['label'] = '';
$handler->display->display_options['fields']['position']['exclude'] = TRUE;
$handler->display->display_options['fields']['position']['element_label_colon'] = FALSE;
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);
$handler->display->display_options['attachment_position'] = 'after';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
);
