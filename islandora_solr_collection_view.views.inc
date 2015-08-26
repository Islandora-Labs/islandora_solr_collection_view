<?php
/**
 * @file
 * Views hook implementations for Islandora Solr Collection View.
 */

/**
 * Implements hook_views_data_alter().
 */
function islandora_solr_collection_view_views_data_alter(&$data) {
  $data['islandora_solr']['TN Image'] = array(
    'title' => 'TN Image',
    'help' => 'Returns an <img> tag containing the thumbnail.',
    'field' => array(
      'handler' => 'IslandoraSolrCollectionViewHandlerTN',
    ),
  );
  $data['islandora_solr']['Islandora Teaser'] = array(
    'title' => 'Teaser',
    'help' => 'A default teaser view of the object, including thumbnail and label.',
    'field' => array(
      'handler' => 'IslandoraSolrCollectionViewHandlerTeaser',
    ),
  );

}
