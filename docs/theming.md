# Theming

This project is configured with gulp to watch for changes to the scss files and compile them, as well as automatic style and js updates using an open source version of [LiveReload](http://livereload.com/).

### General Requirements

  - Node (run `nvm use` to pin Node to version 8.x)
  - Run `npm install` once from the project root to download gulp, libsass, and livereload
  - Enable the drupal_streamline_dev module with `cd docroot && drush en drupal_streamline_dev -y`

### Starting/Stopping Gulp for Theming

  - Go to the project root of this repository
  - Run `npm start`
  - Exit gulp with `^c` (control + c)

While running Gulp, edited Sass files will automagically compile to CSS and reload in the browser (although you may need to reload the browser once to connect to the livereload server). To stop the gulp and livereload processes, hit `^c` (control + c).

To compile CSS _without_ watching the filesystem from changes to `.scss` files, run:

```
$ npm run build
```
