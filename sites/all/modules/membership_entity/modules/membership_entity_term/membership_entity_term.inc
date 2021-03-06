<?php

/**
 * @file
 * Contains the MembershipEntity class.
 */

/**
 * Defines a membership entity.
 */
class MembershipEntityTerm extends Entity {
  /**
   * The membership identifier.
   */
  public $mid;

  /**
   * The human readable term length. eg. 1 year.
   */
  public $term;

  /**
   * An array term length modifiers. eg. +1 month.
   */
  public $modifiers;

  /**
   * The UNIX timestamp when this term starts.
   */
  public $start;

  /**
   * The UNIX timestamp when this term ends.
   */
  public $end;

  /**
   * Build a new membership entity term.
   */
  public function __construct($values = array()) {
    return parent::__construct($values, 'membership_entity_term');
  }

  /**
   * Returns the full url to the membership term.
   */
  public function url() {
    $uri = $this->uri();
    return url($uri['path'], $uri);
  }

  /**
   * Returns the Drupal path to the membership term.
   */
  public function path() {
    $uri = $this->uri();
    return $uri['path'];
  }

  /**
   * Overrides Entity::defaultUri().
   */
  public function defaultUri() {
    return array('path' => "membership/$this->mid/term/$this->id");
  }

  /**
   * Overrides Entity::save().
   */
  public function save() {
    // Check for valid term length that is understood by DateTime::modify().
    if (preg_match(MEMBERSHIP_ENTITY_TERM_LENGTH_REGEX, $this->term)) {
      $this->calculateEndDate();
    }
    elseif ($this->term == 'lifetime') {
      $this->end = NULL;
    }
    return parent::save();
  }

  /**
   * Calculate the term end date.
   */
  protected function calculateEndDate() {
    // Add the term length.
    $end = new DateObject($this->start, new DateTimezone('UTC'));
    $end = _membership_entity_term_modify_date($end, $this->term);

    // Add modifiers.
    foreach ($this->modifiers as $modifier) {
      $end = _membership_entity_term_modify_date($end, $modifier);
    }
    $this->end = date_format_date($end, 'custom', DATE_FORMAT_DATETIME);
  }
}
