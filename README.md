gsb-panopoly-profile
====================

Steps:

1. Clone the gsb-panopoly-profile using:

git clone https://github.com/gsbitse/gsb-panopoly-profile.git

2. Run drush make using:

drush make gsb-panopoly-profile/gsb_panopoly.make docroot

3. Run the drush system install using:

drush si panopoly --db-url="mysql://root:rootpass@localhost:33066/dbname"

