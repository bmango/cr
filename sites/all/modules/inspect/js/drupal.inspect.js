/**
 * Drupal Inspect module using generic Inspect library.
 */

/*jslint browser: true, continue: true, indent: 2, newcap: true, nomen: true, plusplus: true, regexp: true, white: true, ass: true*/
/*global alert: false, confirm: false, console: false*/
/*global jQuery: false, Drupal: false*/

/**
 * Configures window.inspect, makes it a Drupal attribute (Drupal.inspect),
 * and adds a Drupal JS behavior.
 *
 * @param {jquery} $
 */
(function($) {
  'use strict';

  var f = window.inspect;
  if (typeof f === 'function') {
    Drupal.inspect = f;

    $(document).bind('ready', function() {
      // Configure when Drupal.settings is available.
      f.configure({
        inspect: {
          func_body: false
        },
        localizeFunc: Drupal.t,
        logMessage: {
          url: Drupal.settings.basePath + 'inspect/ajax',
          argsUrl: [
            'sessionCounter',
            'logNo',
            'severity'
          ]
          //argsGET: {
          //  property: 'GET arg name'
          //}
        }
      });
      // Format all inspection outputs appearing upon Drupal AJAX html update.
      Drupal.behaviors.inspectFormatInspectOutputs = {
        attach: function(context) {
          // Output formatting isn't enabled for old IEs
          // (see inspect_output_format.js).
          if (typeof Drupal.inspect.formatOutput === 'function') {
            Drupal.inspect.formatOutput(true, context);
          }
        }
      };
    });
  }
  else {
    try { // Detecting console is not possible.
      console.log('Warning: window.inspect ' + (f === undefined ? 'doesnt exist.' : 'isnt a function.'));
    }
    catch (ignore) {
    }
  }

})(jQuery);
