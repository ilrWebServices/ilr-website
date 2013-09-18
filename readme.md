# Cornell University | ILR School

This repository houses the ILR School's Drupal migration. The project was initialized using Singlebrook's [Drupal Streamline](https://github.com/singlebrook/drupal_streamline).

## Installation

These instructions assume that you're using the [Vagrant Development VM](https://github.com/ilrWebServices/vagrant-development-vm) to host this Drupal site.

  1. `git clone git@github.com:ilrWebServices/ilr-website.git`
  2. `git clone git@github.com:ilrWebServices/vagrant-development-vm.git`
  3. Follow the configuration instructions for the [Vagrant Development VM](https://github.com/ilrWebServices/vagrant-development-vm).
  4. Before installing Drupal, use [PHPMyAdmin](http://33.33.33.40/phpmyadmin) (username 'root' and blank password) to create a new empty database and grant user 'root' full rights to it.  
  5. Run the [Drupal site installer](http://33.33.33.40/install.php)
  6. Choose the Cornell University | ILR School installation profile
  7. At the database configuration step, make sure that the host is set to "33.33.33.40" under advanced settings. The username is 'root' and the password is blank.

## Configuring Drush

Follow the additional instruction for configuring Drush in the [Vagrant Development VM](https://github.com/ilrWebServices/vagrant-development-vm).

## Theming with Sass and LiveReload
This project is configured with guard to watch for changes to the scss files and compile them, as well as automatic style and js updates using an open source version of [LiveReload](http://livereload.com/).

### Requirements (Windows users see section below)

  - [Bundler](http://bundler.io/)
  - run `$ bundle install` once from the project root to download guard, sass, and livereload

To start theming, run `$ bundle exec guard -i` from the project root. Edited Sass files will automagically compile to CSS and reload in the browser (although you may need to reload the browser once to connect to the livereload server). To stop the guard and livereload processes, hit `^c` (control + c).

### Windows Sass/Livereload PreReqs

  1. [Ruby installer](http://rubyinstaller.org/) (tested with 1.9.3-p448)
  2. Find the appropriate [DEVELOPMENT KIT](http://rubyinstaller.org/downloads/), and follow the [installation instructions](https://github.com/oneclick/rubyinstaller/wiki/Development-Kit)
  3. `$ gem install bundler`
  4. run `$ bundle install` once from the project root.

From the project root, you now start guard with `$ bundle exec guard -i`, which will watch for scss file changes and start the livereload server. Use `^c` (control + c) to exit guard.
