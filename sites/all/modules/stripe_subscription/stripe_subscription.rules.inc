<?php
/**
* Implementation of hook_rules_event_info().
* @ingroup rules
*/
function stripe_subscription_rules_event_info() {
  return array(
    'stripe_subscription_event' => array(
      'label' => t('Subscription event'),
      'module' => 'stripe_subscription',
      'group' => 'Stripe Subscription',
      'variables' => array(
        'acting_user' => array('type' => 'user', 'label' => t('The user who is subscribing.')),
        'plan' => array('type' => 'text', 'label' => t('The purchased plan.')),
        'subscription_action' => array('type' => 'text', 'label' => t('The subscription acton')),
        'subscription_amount' => array('type' => 'text', 'label' => t('The subscription amount')),
        'subscription_renewal' => array('type' => 'text', 'label' => t('The subscription renewal date')),
        //'subscription' => array('type' => 'stripe-subscription', 'label' => t('The subscription')),
      ),
    ),
  );
}

/**
 * Implementation hook_rules_data_info().
 */
function stripe_subscription_rules_data_info() {
  return array(
    'stripe-subscription' => array(
      'label' => t('Stripe subscription'),
    ),
  );
}

/**
 * Implements hook_access().
 */
/**
 * Implements hook_rules_condition_info().
 */
function stripe_subscription_rules_condition_info() {
  $conditions = array();

  $conditions['stripe_subscription_action_condition'] = array(
    'label' => t('what is the subscription action?'),
    'group' => t('Stripe Subscription'),
    'parameter' => array(
      'subscription_action' => array(
        'type' => 'text',
        'label' => t('Subscription action'),
        'options list' => 'Subscription_actions_list',
        'restriction' => 'input',
      ),
    ),
  );
  return $conditions;
}



function Subscription_actions_list() {
  return array(
    'created', 'deleted', 'updated'
  );
}

function stripe_subscription_action_condition($subscription_action) {
  return true;
}
?> 