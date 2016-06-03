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


## Maintainers/Sponsors

Current maintainers:

* [Mark Jordan](https://github.com/mjordan)

## Troubleshooting/issues/feedback

* [Islandora Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora)
* [Islandora Dev Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora-dev)

