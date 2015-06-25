<?php
/**
 * @file
 *       Drush integration of custom.
 *       
 *       * drush cache-clear custom - Clears the custom specific caches.
 *       * custom-revert - Drush command to revert custom overridden in the system.
 */
/**
 * Implement hook_drush_command().
 */

function fs_global_drush_command()
{
    $items = array();
    $items['usercreate'] = array(
        'callback' => '_fs_global_usercreate',
        'drupal dependencies' => array(
            'user',
            'fs_global'
        ) ,
        'description' => 'Cria usuários de teste',
        'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
        'aliases' => array(
            'uc'
        ) ,
        'examples' => array(
            'drush usercreate' => 'Cria usuário para todos os papéis.',
        ) ,
    );
    return $items;
}

function _fs_global_usercreate()
{
    $administrator = array(
        'name' => 'administrator',
        'pass' => '123',
        'mail' => 'administrator@mail.invalid',
        'status' => 1,
        'init' => 'administrator@mail.invalid',
        'roles' => array(
            DRUPAL_AUTHENTICATED_RID => 'authenticated user',
            3 => 'administrator',
        ),
    );
    user_save('', $administrator);

    $role1 = array(
        'name' => 'role1',
        'pass' => '123',
        'mail' => 'role1@mail.invalid',
        'status' => 1,
        'init' => 'role1@mail.invalid',
        'roles' => array(
            DRUPAL_AUTHENTICATED_RID => 'authenticated user',
            4 => 'role1',
        ),
    );
    user_save('', $role1);

    $role2 = array(
        'name' => 'role2',
        'pass' => '123',
        'mail' => 'role2@mail.invalid',
        'status' => 1,
        'init' => 'role2@mail.invalid',
        'roles' => array(
            DRUPAL_AUTHENTICATED_RID => 'authenticated user',
            5 => 'role2',
        ),
    );
    user_save('', $role2);

    drush_log('Usuários de teste criados com sucesso', 'success');
}