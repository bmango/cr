INTRODUCTION
------------
This module alters Drupal contact form and replaces the contact form 
with an AJAX form.

The module adds a block that you can publish in any page.

REQUIREMENTS
------------
This module requires the following modules:
 * Contact (core)

INSTALLATION
------------
 * Install as you would normally install a contributed drupal module. See:
  https://drupal.org/documentation/install/modules-themes/modules-7
  for further information.
 * After installation, go to Adminstration > Structure > Blocks (admin/structure/block)
 * Search for 'Contact Form Block' block.
 * Publish the block in your desired region and page.

TROUBLESHOOTING
---------------
 * If the contact form does not display, check the following:
  - Are the "Use the site-wide contact form" permissions enabled for 
    the appropriate roles?

FAQ
---
Q: I enabled "Ajax Contact" module. Will I still see the contact form 
   in /contact page?
A: Yes, you will. But the form will be submitted by AJAX.

MAINTAINERS
-----------
Current maintainers:
 * Ron - https://drupal.org/user/891780