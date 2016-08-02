<?php

/**
 * @file
 * Display Suite 1 column template with layout wrapper.
 */
 
 //dsm($classes);
 //print $classes;
 //dsm($node);
//dsm($comment);
 if(isset($node)) {
   $na = $node->uid;
 }
 
 if(isset($comment)) {
   $ca = $comment->uid;
 }
 
 $by = "";
 
 if(isset($ca)) {
   if($na == $ca) {
     $by = "reply-by-author";
   } else {
     $by = "reply-by-receiver";
   }
 }
 
 //print $by;
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="ds-1col <?php print $classes . ' ' . $by;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <<?php print $ds_content_wrapper ?> class="<?php print trim($ds_content_classes); ?>">
    <?php print $ds_content; ?>
  </<?php print $ds_content_wrapper ?>>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>