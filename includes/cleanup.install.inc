<?php

function _gsb_public_setup_cleanup() {

  cache_clear_all();

  $variables = array();

  _gsb_public_variable_set_multiple($variables);
}
