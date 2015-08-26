<?php

/**
 * @file
 * This file contains all theme and preprocess functions.
 */

/**
 * Implements hook_preprocess_THEME().
 */
function islandora_solr_collection_view_preprocess_islandora_solr_teaser(&$variables) {
  // Set title_link.
  if (isset($variables['values']['fgs_label_s'])) {
    $title = $variables['values']['fgs_label_s'];
  }
  else {
    $title = $variables['values']['PID'];
  }
  $variables['values']['title_link'] = "<a href=\"/islandora/object/{$variables['values']['PID']}\">$title</a>";
}
