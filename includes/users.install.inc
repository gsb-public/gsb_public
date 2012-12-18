<?php

function _gsb_public_setup_users() {
  $uid = 1;// User ID of user that you want to add role to.
  $role_name = 'administrator'; // The name of the role to add.
  if ($role = user_role_load_by_name($role_name)) {
    user_multiple_role_edit(array($uid), 'add_role', $role->rid);
  }
}
