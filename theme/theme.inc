<?php

/**
 * @file
 * This file contains all theme and preprocess functions.
 */

/**
 * Implements hook_preprocess_THEME().
 */
function islandora_solr_collection_view_preprocess_islandora_solr_teaser(&$variables) {
  $object = islandora_object_load($variables['values']['PID']);
  $object_url = 'islandora/object/' . $variables['values']['PID'];

  // Set title_link.
  if (isset($variables['values']['fgs_label_s'])) {
    $title = $variables['values']['fgs_label_s'];
  }
  else {
    $title = $variables['values']['PID'];
  }
  $variables['values']['title_link'] = l($title, $object_url, array('html' => TRUE, 'attributes' => array('title' => $title)));

  if (isset($object['TN']) && islandora_datastream_access(ISLANDORA_VIEW_OBJECTS, $object['TN'])) {
    $thumbnail_img = theme('image', array('path' => "$object_url/datastream/TN/view"));
  }
  else {
    $image_path = drupal_get_path('module', 'islandora');
    $thumbnail_img = theme('image', array('path' => "$image_path/images/folder.png"));
  }
  $variables['values']['thumb_link'] = l($thumbnail_img, $object_url, array('html' => TRUE, 'attributes' => array('title' => $title)));
}

/**
 * Implements hook_preprocess_THEME().
 */
function islandora_solr_collection_view_preprocess_islandora_solr_thumbnail(&$variables) {
  $object = islandora_object_load($variables['values']['PID']);
  $object_url = 'islandora/object/' . $variables['values']['PID'];

  // Get the title.
  if (isset($variables['values']['fgs_label_s'])) {
    $title = $variables['values']['fgs_label_s'];
  }
  else {
    $title = $variables['values']['PID'];
  }

  if (isset($object['TN']) && islandora_datastream_access(ISLANDORA_VIEW_OBJECTS, $object['TN'])) {
    $thumbnail_img = theme('image', array('path' => "$object_url/datastream/TN/view"));
  }
  else {
    $image_path = drupal_get_path('module', 'islandora');
    $thumbnail_img = theme('image', array('path' => "$image_path/images/folder.png"));
  }
  $variables['values']['thumb_link'] = l($thumbnail_img, $object_url, array('html' => TRUE, 'attributes' => array('title' => $title)));
}
