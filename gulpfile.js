var gulp = require('gulp');
var plugins = require('gulp-load-plugins')();

gulp.task('sass', function() {
  return gulp.src('docroot/sites/all/themes/ilr_theme/scss/style.scss')
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
    .pipe(plugins.livereload());
  });

gulp.task('default', ['sass'], function() {
  console.log('Watching for .scss file changes in /scss.');
  plugins.livereload.listen({
    'port': 35777
  });
  gulp.watch(['docroot/sites/all/themes/ilr_theme/scss/**/*.scss'], ['sass']);
});
