# Cornell University | ILR School

This repository houses the ILR School's Drupal migration. The project was initialized using Singlebrook's [Drupal Streamline](https://github.com/singlebrook/drupal_streamline).

## Installation

  1. `git clone git@github.com:ilrWebServices/ilr-website.git`
  2. `git clone git@github.com:ilrWebServices/vagrant-development-vm.git`
  3. Follow the configuration instructions for the [Vagrant Development VM](https://github.com/ilrWebServices/vagrant-development-vm).
  4. Open your system's [hosts](http://www.howtogeek.com/howto/27350/beginner-geek-how-to-edit-your-hosts-file/) file and create a new record `33.33.33.40    www.ilr-website.dev` *Note that the vagrant-development-vm is set up to grab the 2nd section of the url to determine the path to the virtual docroot. In the above case, apache will be looking for a folder called "ilr-website" in the parent directory of the vagrant-development-vm folder*
  5. Before installing Drupal, use [PHPMyAdmin](http://33.33.33.40/phpmyadmin) (username 'root' and blank password) to create a new empty database and grant user 'root' full rights to it.  
  6. Run the [Drupal site installer](http://www.ilr-website.dev/install.php)
  7. Choose the Cornell University | ILR School installation profile
  8. At the database configuration step, make sure that the host is set to "33.33.33.40" under advanced settings. The username is 'root' and the password is blank.

## Theming with Sass and LiveReload
This project is configured with guard to watch for changes to the scss files and compile them, as well as automatic style and js updates using an open source version of [LiveReload](http://livereload.com/).

### Windows Sass/Livereload PreReqs 

  1. [Ruby installer](http://rubyinstaller.org/) (tested with 1.9.3-p448)
  2. Find the appropriate [DEVELOPMENT KIT](http://rubyinstaller.org/downloads/), and follow the [installation instructions](https://github.com/oneclick/rubyinstaller/wiki/Development-Kit)

### General Requirements

  - Ruby 1.9.3
  - [Bundler](http://bundler.io/)
  - run `bundle install` once from the project root to download guard, sass, and livereload
  - Enable the drupal_streamline_dev module with `cd docroot && drush en drupal_streamline_dev -y`

### Starting/Stopping Guard for Theming

  - Go to the project root of this repository
  - run `bundle exec guard -i`
  - Refresh your browser, and you should see `browser connected` in your CLI (exit Guard and start again if browser doesn't connect)
  - Exit guard with `^c` (control + c)
  
While running Guard, edited Sass files will automagically compile to CSS and reload in the browser (although you may need to reload the browser once to connect to the livereload server). To stop the guard and livereload processes, hit `^c` (control + c).
