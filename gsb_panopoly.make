api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = "7.16"

; Add Dependencies
projects[webform][type] = module
projects[webform][download][type] = git
projects[webform][download][url] = http://git.drupal.org/project/webform.git
projects[webform][download][branch] = 7.x-3.18
