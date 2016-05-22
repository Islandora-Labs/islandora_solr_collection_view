<?php

/**
 * @file
 * Tempate: islandora-solr-teaser.tpl.php.
 *
 * @TODO: needs documentation about file and variables
 */
?>

    <div class="islandora islandora-basic-collection-object islandora-basic-collection-list-item clearfix">
      <dl>
        <dt>
          <!-- Thumbnail -->
          <?php if (isset($values['PID'])): ?>
            <?php print $values['thumb_link']; ?>
          <?php endif; ?>
        </dt>

        <dd class="collection-value">
          <?php if (isset($values['title_link'])): ?>
            <strong><?php print filter_xss($values['title_link']); ?></strong>
          <?php endif; ?>
        </dd>
        <?php if (isset($values['dc.description'])): ?>
          <dd class="collection-value">
            <?php print filter_xss($values['dc.description']['0']); ?>
          </dd>
        <?php endif; ?>


      </dl>
    </div>
