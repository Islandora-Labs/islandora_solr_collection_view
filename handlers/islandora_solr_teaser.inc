<?php
/**
 * @file
 * Views base handler for images.
 */

/**
 * Views handler function.
 */
class IslandoraSolrCollectionViewHandlerTeaser extends views_handler_field {
  /**
   * Inherits.
   *
   * @param object $values
   *   An object containing the values of the query thus far.
   *
   * @return string
   *   The rendered markup string.
   */
  public function render($values) {
    $values = (array) $values;
    return theme('islandora_solr_teaser', array('values' => $values));
  }

}
