# Installation

  1. `git clone git@github.com:ilrWebServices/ilr-website.git`
  2. `git clone git@github.com:ilrWebServices/vagrant-development-vm.git`
  3. Follow the configuration instructions for the [Vagrant Development VM](https://github.com/ilrWebServices/vagrant-development-vm).
  4. Open your system's [hosts](http://www.howtogeek.com/howto/27350/beginner-geek-how-to-edit-your-hosts-file/) file and create a new record `33.33.33.40    www.ilr-website.dev` *Note that the vagrant-development-vm is set up to grab the 2nd section of the url to determine the path to the virtual docroot. In the above case, apache will be looking for a folder called "ilr-website" in the parent directory of the vagrant-development-vm folder*
  5. Before installing Drupal, use [PHPMyAdmin](http://33.33.33.40/phpmyadmin) (username 'root' and blank password) to create a new empty database and grant user 'root' full rights to it.
  6. Run the [Drupal site installer](http://www.ilr-website.dev/install.php)
  7. Choose the Cornell University | ILR School installation profile
  8. At the database configuration step, make sure that the host is set to "33.33.33.40" under advanced settings. The username is 'root' and the password is blank.
  9. [Configure](/docs/rewrites.md) the RewriteBase
  10. See "Simplifying CSS compilation" in the [theming readme](/docs/theming.md)
