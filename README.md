gsb_public
====================

Steps for installing:

1) Clone the gsb-panopoly using:

> git clone https://github.com/gsbitse/gsb_public.git

2) Run drush make using:

> drush make gsb_public/gsb_public.make docroot

3) Switch to the docroot directory

> cd docroot

4) Run the drush site install command:

> drush si panopoly --db-url="mysql://root:@localhost:33066/dbname"

Notes specific to using the Acquia Developer Desktop: 

Using the [Acquia Dev Desktop](https://www.acquia.com/products-services/dev-desktop "Acquia Dev Desktop")  may require the following change to the vhosts.conf file:

```
<VirtualHost *>
  ServerName localhost
  DocumentRoot "/Users/macgmercer/Sites/pantest2/docroot"
  <Directory "/Users/macgmercer/Sites/pantest2/docroot">
    Options Indexes FollowSymLinks
    AllowOverride All
    Order allow,deny
    Allow from all
  </Directory>
</VirtualHost>
```

Also, you'll need to update the settings.php file to use 127.0.0.1 something like the following for 
the database connection:

<pre>
$databases = array (
  'default' => 
  array (
    'default' => 
    array (
      'database' => 'dbname',
      'username' => 'root',
      'password' => '',
      'host' => '127.0.0.1',
      'port' => '33066',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);
</pre>




