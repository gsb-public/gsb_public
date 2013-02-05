<?php

function _gsb_public_setup_panopoly() {
  $variables = array(
    'panopoly_magic_live_preview' => 2,
    'panopoly_magic_pane_add_preview' => 0,
  );

  _gsb_public_variable_set_multiple($variables);
}
