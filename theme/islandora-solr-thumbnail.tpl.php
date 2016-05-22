<?php

/**
 * @file
 * Tempate: islandora-solr-thumbnail.tpl.php.
 *
 * @TODO: needs documentation about file and variables
 */
?>
  <!-- Thumbnail -->
  <dt class="islandora-basic-collection-thumb">
    <?php if (isset($values['PID'])): ?>
      <?php print $values['thumb_link']; ?>
    <?php endif; ?>
  </dt>
