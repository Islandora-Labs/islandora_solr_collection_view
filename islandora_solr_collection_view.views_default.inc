<?php

/**
 * @file
 * This file contains hooks provided by Views.
 */

/**
 * Implements hook_views_default_views().
 */
function islandora_solr_collection_view_views_default_views() {

  $label_field = variable_get('islandora_solr_object_label_field', 'fgs_label_s');
  $collection_field = variable_get('islandora_solr_member_of_collection_field', 'RELS_EXT_isMemberOfCollection_uri_ms');

  // ---- COPY PASTA STARTS HERE!! -----
  $view = new view();
  $view->name = 'collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Collection';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: main */
  $handler = $view->new_display('default', 'main', 'default');
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
  /* Field: Islandora Solr: Teaser */
  $handler->display->display_options['fields']['Islandora Teaser']['id'] = 'Islandora Teaser';
  $handler->display->display_options['fields']['Islandora Teaser']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['Islandora Teaser']['field'] = 'Islandora Teaser';
  $handler->display->display_options['fields']['Islandora Teaser']['label'] = '';
  $handler->display->display_options['fields']['Islandora Teaser']['element_label_colon'] = FALSE;
  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_ms */
  $handler->display->display_options['arguments'][$collection_field]['id'] = $collection_field;
  $handler->display->display_options['arguments'][$collection_field]['table'] = 'islandora_solr';
  $handler->display->display_options['arguments'][$collection_field]['field'] = $collection_field;
  $handler->display->display_options['arguments'][$collection_field]['default_action'] = 'not found';
  $handler->display->display_options['arguments'][$collection_field]['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments'][$collection_field]['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments'][$collection_field]['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments'][$collection_field]['summary_options']['items_per_page'] = '25';

  // -- COPY PASTA ENDS HERE -------
  // Add view to list of views to provide.
  $views[$view->name] = $view;

  // ...Repeat all of the above for each view the module should provide.
  // At the end, return array of default views.
  return $views;
}
