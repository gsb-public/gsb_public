<?php

function _gsb_public_setup_backup_migrate() {
  $settings = array(
    'chmod' => '',
    'chgrp' => '',
  );

  db_insert('backup_migrate_destinations')
    ->fields(array(
      'destination_id' => 'cc5f668fd558e415d1b8564e7d17b3cb',
      'name' => 'profile',
      'type' => 'file',
      'location' => 'profiles/gsb_public',
      'settings' => serialize($settings)))
    ->execute();
}
