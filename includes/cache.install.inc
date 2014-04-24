<?php

function _gsb_public_setup_cache() {
  $variables = array(
    'cache' => 1,
    'cache_lifetime' => '3600',
    'page_cache_maximum_age' => '3600',
    'page_compression' => 0,
    'preprocess_css' => 0,
    'preprocess_js' => 0,
    'expire_node_actions' => array(
      1 => 1,
      2 => 2,
    ),
    'expire_node_node_page' => TRUE,
    'expire_node_reference_pages' => TRUE,
  );

  _gsb_public_variable_set_multiple($variables);
}
