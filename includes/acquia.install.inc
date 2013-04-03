<?php

function _gsb_public_setup_acquia() {
  $variables = array(
    'acquia_agent_hide_signup_messages' => 1,
  );

  _gsb_public_variable_set_multiple($variables);
}
