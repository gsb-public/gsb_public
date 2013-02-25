<?php

function _gsb_public_setup_migration_prep() {
  // Begin node id at 300,000 so we can leave room for old nid's coming from the
  // old site.
  db_query("ALTER TABLE {node} AUTO_INCREMENT=300000");
}

