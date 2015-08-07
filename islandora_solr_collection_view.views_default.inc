<?php

/**
 * Implements hook_views_default_views().
 */
function islandora_solr_collection_view_views_default_views() {
  $view = new view();
  $view->name = 'collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Collection';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: fgs_label_t */
  $handler->display->display_options['fields']['fgs_label_t']['id'] = 'fgs_label_t';
  $handler->display->display_options['fields']['fgs_label_t']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_t']['field'] = 'fgs_label_t';
  $handler->display->display_options['fields']['fgs_label_t']['label'] = '';
  $handler->display->display_options['fields']['fgs_label_t']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fgs_label_t']['link_to_object'] = 0;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_t */
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_t']['id'] = 'RELS_EXT_isMemberOfCollection_uri_t';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_t']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_t']['field'] = 'RELS_EXT_isMemberOfCollection_uri_t';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_t']['default_action'] = 'default';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_t']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_t']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_t']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_t']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_t']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'collection';
}