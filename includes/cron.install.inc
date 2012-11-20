<?php

function _gsb_panopoly_setup_cron() {
  $variables = array(
    'cron_safe_threshold' => 0,
  );

  _gsb_panopoly_variable_set_multiple($variables);
}
