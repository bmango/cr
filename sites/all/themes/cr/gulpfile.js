var gulp = require('gulp');
var watchLess = require('gulp-watch-less');
var watch = require('gulp-watch');
//var less = require('gulp-less');
var less = require('gulp-less-sourcemap');
var gutil = require( 'gulp-util' );
var ftp = require( 'vinyl-ftp' );
//var sftp = require('gulp-sftp');
//var wait = require('gulp-wait');


gulp.task('deploy', ['less'], function() {

	var conn = ftp.create( {
		host:			'109.228.49.217',
		user:			'cr@carersregister.co.uk',
		password:			'vXU.O,AH3rk1',
		parallel: 10,
		log: gutil.log
	} );

	var globs = [
		//'src/**',
		'css/**'
		//'js/**',
		//'fonts/**',
		//'index.html'
	];

	// using base = '.' will transfer everything to /public_html correctly
	// turn off buffering in gulp.src for best performance

	return gulp.src( globs, { base: '.', buffer: false } )
		//.pipe( conn.newer( '/public_html' ) ) // only upload newer files
		.pipe( conn.dest( '/sites/all/themes/cr/' ) );

});


gulp.task('watch', function() {
   // Watch less files
  watch('less/*.less', function() {
	//gulp.start('less');
	gulp.start('deploy');
	});
 });
 
 gulp.task('less', function() {
    return gulp.src('less/style.less')
       .pipe(less({
			  sourceMap: {
					sourceMapRootpath: 'less' // Optional absolute or relative path to your LESS files 
			  }
		 }))
		  
		  
			.on('error', function (error) {
				 gutil.log(gutil.colors.red(error.message))
				 // Notify on error. Uses node-notifier 
				 notifier.notify({
					  title: 'Less compilation error',
					  message: error.message
				 })
			})
			        
			
		.pipe(gulp.dest('css'));
});
gulp.task('default', ['watch']);

