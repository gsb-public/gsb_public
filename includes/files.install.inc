<?php

function _gsb_panopoly_setup_files() {
  $variables = array(
    'file_default_scheme' => 'public',
    'file_private_path' => 'sites/default/files/private',
    'file_public_path' => 'sites/default/files',
  );

  _gsb_panopoly_variable_set_multiple($variables);
}
