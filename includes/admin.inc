<?php

/**
 * @file
 * The administration form for this module.
 */

/**
 * The administration form definition.
 *
 * @param array $form
 *   The Drupal form definition.
 * @param array $form_state
 *   The Drupal form state.
 *
 * @return array
 *   The Drupal form definition.
 */
function islandora_solr_collection_view_admin(array $form, array &$form_state) {
  $form['islandora_solr_collection_view_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable'),
    '#default_value' => variable_get('islandora_solr_collection_view_enabled', 0),
    '#description' => t('Enable substitution for the standard collection view'),
    '#required' => FALSE,
   );
  $form['islandora_solr_collection_view_default_view_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Collection view'),
    '#default_value' => variable_get('islandora_solr_collection_view_default_view_name', ISLANDORA_SOLR_COLLECTION_VIEW_DEFAULT_VIEW),
    '#description' => t('Provide the name of the view that you wish to use'),
    '#required' => FALSE,
  );
  $form['islandora_solr_collection_view_default_display_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Collection display'),
    '#default_value' => variable_get('islandora_solr_collection_view_default_display_name', ISLANDORA_SOLR_COLLECTION_VIEW_DEFAULT_DISPLAY),
    '#description' => t('Provide the name of the display that you wish to use'),
    '#required' => FALSE,
  );
  return system_settings_form($form);
}

