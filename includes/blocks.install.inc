<?php

function _gsb_public_setup_blocks() {
  $default_theme = variable_get('theme_default', 'bartik');
  // Enable our menu block.
  $values = array(
    array(
      'module' => 'system',
      'delta' => 'main-menu',
      'theme' => $default_theme,
      'status' => 1,
      'weight' => 0,
      'region' => 'navigation',
      'pages' => '',
      'title' => '<none>',
      'cache' => -1,
    ),
  );
  $query = db_insert('block')->fields(array('module', 'delta', 'theme', 'status', 'weight', 'region', 'pages', 'cache'));
  foreach ($values as $record) {
    $query->values($record);
  }
  $query->execute();
}
