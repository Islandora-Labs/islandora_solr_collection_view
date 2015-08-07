<?php

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
  /* Field: Islandora Solr: fgs_label_s */
  $handler->display->display_options['fields'][$label_field]['id'] = $label_field;
  $handler->display->display_options['fields'][$label_field]['table'] = 'islandora_solr';
  $handler->display->display_options['fields'][$label_field]['field'] = $label_field;
  $handler->display->display_options['fields'][$label_field]['label'] = '';
  $handler->display->display_options['fields'][$label_field]['element_label_colon'] = FALSE;
  $handler->display->display_options['fields'][$label_field]['link_to_object'] = 1;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['PID']['alter']['text'] = '([PID])';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_ms */
  $handler->display->display_options['arguments'][$collection_field]['id'] = $collection_field;
  $handler->display->display_options['arguments'][$collection_field]['table'] = 'islandora_solr';
  $handler->display->display_options['arguments'][$collection_field]['field'] = $collection_field;
  $handler->display->display_options['arguments'][$collection_field]['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments'][$collection_field]['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments'][$collection_field]['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments'][$collection_field]['summary_options']['items_per_page'] = '25';

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