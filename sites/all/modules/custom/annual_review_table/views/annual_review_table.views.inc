<?php

/**
 * @file
 * Views integration for the mydons custom module
 */

/**
 * Implements hook_views_data()
 *
 */
function annual_review_table_views_data() {

 $table = array(
    'ar_confirmation' => array(  // Custom table
       'table' => array(
          'group' => 'AR',      // Groupname
             'base' => array(
               'field' => 'id',  //Primary key
               'title' => 'ar_confirmation',
               'help' => 'ar_confirmation database table'
            )
        ),
     //Description of id
        'id' => array(  
           'title' => t('ID'),
           'help' => t('Id field'),
           // is mydons_custom_id field sortable TRUE
           'field' => array(
              'click sortable' => TRUE,  
            ),
      //Filter handler for filtering records by id     
           'filter' => array(
               'handler' => 'views_handler_filter_numeric'   
            ),  

           'sort' => array(
              'handler' => 'views_handler_sort'       
           )
         ),
      //Description of aid field
        'aid' => array(      
           'title' => t('Advisor'),
           'help' => t('Advisor ID field'),
           'field' => array(
              'click sortable' => TRUE,
           ),
           'filter' => array(
              'handler' => 'views_handler_filter_string'
           ),

           'sort' => array(
              'handler' => 'views_handler_sort'
           )
        ),
     //Description of cid field
       'cid' => array(           
           'title' => t('Client'),
           'help' => t('Client ID field'),
           'field' => array(
                'click sortable' => TRUE,
             ),
           'filter' => array(
                 'handler' => 'views_handler_filter_string'
             ),
          'sort' => array(
             'handler' => 'views_handler_sort'
          )
        ),
	  //Description of ate field
       'date' => array(           
           'title' => t('Date'),
           'help' => t('Date field'),
           'field' => array(
                'click sortable' => TRUE,
             ),
           'filter' => array(
                 'handler' => 'views_handler_filter_string'
             ),
          'sort' => array(
             'handler' => 'views_handler_sort'
          )
        )
      )
	  
    );
    return $table;
}