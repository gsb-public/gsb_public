<?php

function _gsb_panopoly_setup_cache() {
  $variables = array(
    'cache' => 1,
    'cache_lifetime' => '3600',
    'page_cache_maximum_age' => '3600',
    'page_compression' => 1,
    'preprocess_css' => 1,
    'preprocess_js' => 1,
  );

  _gsb_panopoly_variable_set_multiple($variables);
}
