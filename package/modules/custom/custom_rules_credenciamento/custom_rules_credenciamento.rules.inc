<?php

/**
 * @file custom_rules_credenciamento.rules.inc
 * TODO: Enter file description here.
 */

/**
 * Implements hook_rules_action_info().
 */

function custom_rules_credenciamento_rules_action_info() {
  return array(
    'custom_rules_webservice' => array(
      'label' => t('Envia informações para o WebService'),
      'group' => t('Rules Way'),
      'parameter' => array(
      	'url' => array(
          'type' => 'text',
          'label' => t('URL'),
          'save' => TRUE,
        )
      ),
      'base' => '_custom_rules_credenciamento_webservice',
      'access callback' => 'rules_system_integration_access',
    ),
  );
}