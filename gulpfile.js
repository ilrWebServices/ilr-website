var gulp = require('gulp');
var plugins = require('gulp-load-plugins')();
var livereload = require('gulp-livereload');
// var sassGlob = require('gulp-sass-glob');

// var localConfig = {
//     cssConfig: {
//       includePaths: [
//         'node_modules/breakpoint-sass/stylesheets/',
//         'node_modules/singularitygs/stylesheets/',
//         'node_modules/modularscale-sass/stylesheets',
//         'node_modules/sass-tools/lib',
//         // 'node_modules/singularity-extras/stylesheets/',
//         'node_modules/compass-mixins/lib/',
//         'node_modules/float-label-css/scss/',
//         './node_modules'
//       ]
//     },
//     browserSync: {
//       // We want the local static server for Pattern Lab to serve from the same place as Drupal does: the `./web` folder in the base of the repo (which is `../../../` from here). This allows us to load JS libraries like drupal.js & jQuery.js from the `/core` directory).
//       startPath: 'themes/custom/prism/pattern-lab/public/',
//       baseDir: '../../../',
//       openBrowserAtStart: true
//     }
//   };

gulp.task('sass', function() {
  return gulp.src('docroot/sites/all/themes/ilr_theme/scss/style.scss')
    .pipe(plugins.sassGlob())
    .pipe(plugins.sass({
      outputStyle: 'nested',
      includePaths: [
        'node_modules/breakpoint-sass/stylesheets/',
        'node_modules/compass-mixins/lib/',
        'node_modules/modularscale-sass/stylesheets',
        'node_modules/singularitygs/stylesheets/',
      ]
    })
    .on('error', plugins.sass.logError))
    .pipe(gulp.dest('docroot/sites/all/themes/ilr_theme/css'))
    .pipe(livereload());
  });

gulp.task('default', ['sass'], function() {
  console.log('Watching for .scss file changes in /scss.');
  livereload.listen({
    'port': 35777
  });
  gulp.watch(['docroot/sites/all/themes/ilr_theme/scss/**/*.scss'], ['sass']);
});
