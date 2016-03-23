<?php

/**
 * inoERP
 *
 * @copyright   2014 Nishit R. Das
 * @license     https://www.mozilla.org/MPL/2.0/
 * @link        http://inoideas.org
 * @source code https://github.com/inoerp/inoERP
 */

/**
 * pm_recipe_material_header CLass
 * Contains all the pm_recipe_material_header information, such as - document_type, so_number, ar_customer_id
 *
 */
class pm_recipe_material_header extends dbObject {

 public static $table_name = "pm_recipe_material_header";
 public static $dependent_classes = ['pm_recipe_material_line'];
 public static $primary_column = "pm_recipe_material_header_id";
 public static $key_column = 'routing_name';
 public static $module = "pm";
 public static $system_info = [
  'name' => 'Recipe Material',
  'number' => '5118',
  'description' => 'Create & Mainten Recipe Material',
  'version' => '0.1.1',
  'db_version' => '1001',
  'mod_version' => '1.1.1',
  'dependent_class' => array('pm_recipe_material_line'),
  'primary_entity_cb' => '',
  'module_name' => 'hd',
  'weight' => 1
 ];
 public static $line_category_a = [
  'ORDER' => 'Order',
  'RETURN' => 'Return'
 ];
 public static $status_a = [
  'APPROVED' => 'Approved',
  'PEND_APPROVAL' => 'Pening Approval',
  'ON_HOLD' => 'On Hold',
  'INACTIVE' => 'In Active',
 ];
 public $field_a = [
  'pm_recipe_material_header_id',
  'pm_recipe_header_id',
  'status',
  'description',
  'created_by',
  'creation_date',
  'last_update_by',
  'last_update_date',
  'pm_recipe_material_line_id',
  'pm_recipe_material_header_id',
  'step',
  'pm_formula_ingredient_id',
  'description',
  'pm_process_routing_line_id',
  'created_by',
  'creation_date',
  'last_update_by',
  'last_update_date',
 ];
 public $initial_search = [
  'routing_name',
  'status',
  'description',
 ];
 public $requiredField = [
  'routing_name',
  'org_id',
 ];
 public $fields_inForm_notInDataBase = [
  'action',
 ];
 public $search = [
  '_show_update_path' => 1,
  '_show_view_path' => 1
 ];
 public static $json_label_fields = [
  'routing_name',
  'description',
  'routing_class',
  'status',
  'org_id',
 ];
 public $pageTitle = " Recipe Header "; //page Title
 public $pm_recipe_material_header_id;
 public $pm_recipe_header_id;
 public $status;
 public $description;
 public $created_by;
 public $creation_date;
 public $last_update_by;
 public $last_update_date;
 public $pm_recipe_material_line_id;
 public $pm_recipe_material_header_id;
 public $step;
 public $pm_formula_ingredient_id;
 public $description;
 public $pm_process_routing_line_id;
 public $created_by;
 public $creation_date;
 public $last_update_by;
 public $last_update_date;


}

//end of pm_recipe_material_header class
?>