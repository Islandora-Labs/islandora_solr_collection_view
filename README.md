# Islandora Solr Collection View

# Introduction

This module replaces the browse display provided by Islandora collection objects with a View, providing enhanced customization and performance.

This module was started at the 2015 Islandora Conference Hackfest.

## Requirements

* [Islandora](https://github.com/Islandora/islandora)
* [Islandora Solr Views](https://github.com/Islandora/islandora_solr_views)
* [Views](https://www.drupal.org/project/views)
* Views UI - included with Views

## Installation

Install as usual, see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

## Usage

1. To set options, go to Admin > Islandora > Islandora Utility Modules > Collection view.
2. To modify the view provided by this module, go to Admin > Structure > Views, and choose the "Collection" view (or whatever name was configured in the module's admin settings, as above).
3. Modify the view however you want (it's just a standard view).
4. If you want to enable caching for the collection view, use Block caching / Per page option.
5. You should also disable the Collection Solution Pack's collection display. To do this, go to Admin > Islandora > Solution pack configuration > Collection Solution Pack, and check "Completely disable default collection display generation."


It is possible to create displays that apply to specific collections:

1. Add a new block display to the view. You probably want to name it so it's clear which collection it applies to.
2. Add a filter to the new display, configuring it so that "RELS_EXT_isMemberOfCollection_uri_ms" is equal to your collection PID in the form "info:fedora/your:pid".
3. When you save the view, a new block is created with the name you gave the display.
  1. In Structure > Blocks, add the new block to the "Content" region.
  2. In the block's "Configure" settings, make the block only show up on the page for the specific collection. To do this, in the "Show block on specific pages" settings, select "Only the listed pages" and enter "islandora/object/your:pid".
4. Tell Views to not show the default block display for each collection that has its own block. Otherwise, both the default display and the collection-specific display will show up. To do this, for each collection that has its own block display (in other words, for each collection-specific block display you create), add a filter criteria to the default display so that "RELS_EXT_isMemberOfCollection_uri_ms" is *not* equal to your collection PID in the form 'info:fedora/your:pid.

## Maintainers/Sponsors

Current maintainers:

* [Mark Jordan](https://github.com/mjordan)
* [Rosemary Le Faive](https://github.com/rosiel)

## Troubleshooting/issues/feedback

* [Islandora Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora)
* [Islandora Dev Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora-dev)

