//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'defaults.cpp'                             *
//                        Generated by version 1.9.3                         *
//                     november 10th, 2009, at 15h2'19"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 598
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "galgas/C_galgas_CLI_Options.h"
#include "defaults.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "defaults.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//              Implementation of routine "check_custom_field"               *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_check_custom_field (C_Compiler & inLexique,
                                GGS_ident_map  & var_cas_others,
                                GGS_lstring   var_cas_field,
                                GGS_imp_type   var_cas_f_def COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_check_custom_field at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  const GGS_bool cond_1291 = (var_cas_others.reader_hasKey (inLexique, var_cas_field.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (39)) COMMA_SOURCE_FILE_AT_LINE (39))).operator_not () ;
  if (cond_1291.isBuiltAndTrue ()) {
    { const GGS_imp_type _var_1275 = var_cas_f_def ; // CAST instruction
      if (_var_1275.getPtr () != NULL) {
        macroValidPointer (_var_1275.getPtr ()) ;
        if (typeid (cPtr_uint32_type) == typeid (* (_var_1275.getPtr ()))) {
          const GGS_uint32_type var_cas_f (_var_1275.getPtr ()) ;
          var_cas_others.modifier_put (inLexique, var_cas_field, var_cas_f.reader_def_val (inLexique COMMA_SOURCE_FILE_AT_LINE (42)) COMMA_SOURCE_FILE_AT_LINE (42)) ;
        }else if (typeid (cPtr_sint32_type) == typeid (* (_var_1275.getPtr ()))) {
          const GGS_sint32_type var_cas_f (_var_1275.getPtr ()) ;
          var_cas_others.modifier_put (inLexique, var_cas_field, var_cas_f.reader_def_val (inLexique COMMA_SOURCE_FILE_AT_LINE (43)) COMMA_SOURCE_FILE_AT_LINE (43)) ;
        }else if (typeid (cPtr_uint64_type) == typeid (* (_var_1275.getPtr ()))) {
          const GGS_uint64_type var_cas_f (_var_1275.getPtr ()) ;
          var_cas_others.modifier_put (inLexique, var_cas_field, var_cas_f.reader_def_val (inLexique COMMA_SOURCE_FILE_AT_LINE (44)) COMMA_SOURCE_FILE_AT_LINE (44)) ;
        }else if (typeid (cPtr_sint64_type) == typeid (* (_var_1275.getPtr ()))) {
          const GGS_sint64_type var_cas_f (_var_1275.getPtr ()) ;
          var_cas_others.modifier_put (inLexique, var_cas_field, var_cas_f.reader_def_val (inLexique COMMA_SOURCE_FILE_AT_LINE (45)) COMMA_SOURCE_FILE_AT_LINE (45)) ;
        }else{
        }
      }
    }
  }
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_check_custom_field\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//                 Implementation of routine "check_range"                   *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_check_range (C_Compiler & inLexique,
                                GGS_basic_type   var_cas_var,
                                GGS_imp_type   var_cas_def COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_check_range at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  { const GGS_basic_type _var_1777 = var_cas_var ; // CAST instruction
    if (_var_1777.getPtr () != NULL) {
      macroValidPointer (_var_1777.getPtr ()) ;
      if (typeid (cPtr_uint32_class) == typeid (* (_var_1777.getPtr ()))) {
        const GGS_uint32_class var_cas_ui (_var_1777.getPtr ()) ;
        { const GGS_imp_type _var_1703 = var_cas_def ; // CAST instruction
          if (_var_1703.getPtr () != NULL) {
            macroValidPointer (_var_1703.getPtr ()) ;
            if (typeid (cPtr_uint32_type) == typeid (* (_var_1703.getPtr ()))) {
              const GGS_uint32_type var_cas_d (_var_1703.getPtr ()) ;
              ::routine_check_uint32_range (inLexique,  var_cas_d.reader_set (inLexique COMMA_SOURCE_FILE_AT_LINE (62)),  var_cas_ui.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (62)),  var_cas_ui.reader_value (inLexique COMMA_SOURCE_FILE_AT_LINE (62)) COMMA_SOURCE_FILE_AT_LINE (62)) ;
            }else{
              var_cas_def.reader_loc (inLexique COMMA_SOURCE_FILE_AT_LINE (64)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("Internal error") COMMA_SOURCE_FILE_AT_LINE (65)) ;
            }
          }
        }
      }else{
        var_cas_var.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (67)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("Internal error") COMMA_SOURCE_FILE_AT_LINE (68)) ;
      }
    }
  }
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_check_range\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//        Implementation of routine "verify_and_set_tasks_defaults"          *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_verify_and_set_tasks_defaults (C_Compiler & inLexique,
                                GGS_task_map  & var_cas_tasks,
                                GGS_implementation_spec   var_cas_spec COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_verify_and_set_tasks_defaults at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_task_map  var_cas_tp = var_cas_tasks ;
  {
    GGS_task_map::cEnumerator enumerator_2047 (var_cas_tp, true) ;
    const GGS_task_map::cElement * operand_2047 = NULL ;
    while (((operand_2047 = enumerator_2047.nextObject ()))) {
      macroValidPointer (operand_2047) ;
      GGS_task_obj  automatic_var_0 ;
      var_cas_tasks.modifier_del (inLexique, operand_2047->mKey, automatic_var_0 COMMA_SOURCE_FILE_AT_LINE (82)) ;
      GGS_ident_map  var_cas_others = operand_2047->mInfo.task.reader_others (inLexique COMMA_SOURCE_FILE_AT_LINE (83)) ;
      {
        GGS_implementation_spec::cEnumerator enumerator_2178 (var_cas_spec, true) ;
        const GGS_implementation_spec::cElement * operand_2178 = NULL ;
        while (((operand_2178 = enumerator_2178.nextObject ()))) {
          macroValidPointer (operand_2178) ;
          const GGS_bool cond_2339 = (operand_2178->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (85))).operator_isEqual (GGS_string ("PRIORITY")) ;
          if (cond_2339.isBuiltAndTrue ()) {
            ::routine_check_range (inLexique,  operand_2047->mInfo.task.reader_priority (inLexique COMMA_SOURCE_FILE_AT_LINE (86)),  operand_2178->mInfo.type COMMA_SOURCE_FILE_AT_LINE (86)) ;
          }else if (cond_2339.isBuiltAndFalse ()) {
            const GGS_bool cond_2383 = (operand_2178->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (87))).operator_isEqual (GGS_string ("")) ;
            if (cond_2383.isBuiltAndTrue ()) {
            }else if (cond_2383.isBuiltAndFalse ()) {
              const GGS_bool cond_2427 = (operand_2178->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (88))).operator_isEqual (GGS_string ("")) ;
              if (cond_2427.isBuiltAndTrue ()) {
              }else if (cond_2427.isBuiltAndFalse ()) {
                const GGS_bool cond_2471 = (operand_2178->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (89))).operator_isEqual (GGS_string ("")) ;
                if (cond_2471.isBuiltAndTrue ()) {
                }else if (cond_2471.isBuiltAndFalse ()) {
                  const GGS_bool cond_2515 = (operand_2178->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (90))).operator_isEqual (GGS_string ("")) ;
                  if (cond_2515.isBuiltAndTrue ()) {
                  }else if (cond_2515.isBuiltAndFalse ()) {
                    const GGS_bool cond_2559 = (operand_2178->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (91))).operator_isEqual (GGS_string ("")) ;
                    if (cond_2559.isBuiltAndTrue ()) {
                    }else if (cond_2559.isBuiltAndFalse ()) {
                      const GGS_bool cond_2602 = (operand_2178->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (92))).operator_isEqual (GGS_string ("")) ;
                      if (cond_2602.isBuiltAndTrue ()) {
                      }else if (cond_2602.isBuiltAndFalse ()) {
                        ::routine_check_custom_field (inLexique,  var_cas_others,  operand_2178->mKey,  operand_2178->mInfo.type COMMA_SOURCE_FILE_AT_LINE (94)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      GGS_task_obj  var_cas_updated_task = GGS_task_obj ::constructor_new (inLexique, operand_2047->mInfo.task.reader_desc (inLexique COMMA_SOURCE_FILE_AT_LINE (98)), operand_2047->mInfo.task.reader_priority (inLexique COMMA_SOURCE_FILE_AT_LINE (99)), operand_2047->mInfo.task.reader_schedule (inLexique COMMA_SOURCE_FILE_AT_LINE (100)), operand_2047->mInfo.task.reader_activation (inLexique COMMA_SOURCE_FILE_AT_LINE (101)), operand_2047->mInfo.task.reader_autostart (inLexique COMMA_SOURCE_FILE_AT_LINE (102)), operand_2047->mInfo.task.reader_resources (inLexique COMMA_SOURCE_FILE_AT_LINE (103)), operand_2047->mInfo.task.reader_events (inLexique COMMA_SOURCE_FILE_AT_LINE (104)), operand_2047->mInfo.task.reader_messages (inLexique COMMA_SOURCE_FILE_AT_LINE (105)), operand_2047->mInfo.task.reader_acc_apps (inLexique COMMA_SOURCE_FILE_AT_LINE (106)), operand_2047->mInfo.task.reader_timing_prot (inLexique COMMA_SOURCE_FILE_AT_LINE (107)), var_cas_others COMMA_HERE) ;
      var_cas_tasks.modifier_put (inLexique, operand_2047->mKey, var_cas_updated_task COMMA_SOURCE_FILE_AT_LINE (110)) ;
    }
  }
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_verify_and_set_tasks_defaults\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//         Implementation of routine "verify_and_set_isrs_defaults"          *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_verify_and_set_isrs_defaults (C_Compiler & inLexique,
                                GGS_isr_map  & var_cas_isrs,
                                GGS_implementation_spec   var_cas_spec COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_verify_and_set_isrs_defaults at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_isr_map  var_cas_ip = var_cas_isrs ;
  {
    GGS_isr_map::cEnumerator enumerator_3393 (var_cas_ip, true) ;
    const GGS_isr_map::cElement * operand_3393 = NULL ;
    while (((operand_3393 = enumerator_3393.nextObject ()))) {
      macroValidPointer (operand_3393) ;
      GGS_isr_obj  automatic_var_1 ;
      var_cas_isrs.modifier_del (inLexique, operand_3393->mKey, automatic_var_1 COMMA_SOURCE_FILE_AT_LINE (125)) ;
      GGS_ident_map  var_cas_others = operand_3393->mInfo.isr.reader_other_fields (inLexique COMMA_SOURCE_FILE_AT_LINE (126)) ;
      {
        GGS_implementation_spec::cEnumerator enumerator_3526 (var_cas_spec, true) ;
        const GGS_implementation_spec::cElement * operand_3526 = NULL ;
        while (((operand_3526 = enumerator_3526.nextObject ()))) {
          macroValidPointer (operand_3526) ;
          const GGS_bool cond_3656 = (operand_3526->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (128))).operator_isEqual (GGS_string ("PRIORITY")) ;
          if (cond_3656.isBuiltAndTrue ()) {
            inLexique.printMessage (GGS_string ("PRIORITY!\n") COMMA_SOURCE_FILE_AT_LINE (129)) ;
          }else if (cond_3656.isBuiltAndFalse ()) {
            const GGS_bool cond_3700 = (operand_3526->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (130))).operator_isEqual (GGS_string ("")) ;
            if (cond_3700.isBuiltAndTrue ()) {
            }else if (cond_3700.isBuiltAndFalse ()) {
              const GGS_bool cond_3744 = (operand_3526->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (131))).operator_isEqual (GGS_string ("")) ;
              if (cond_3744.isBuiltAndTrue ()) {
              }else if (cond_3744.isBuiltAndFalse ()) {
                const GGS_bool cond_3788 = (operand_3526->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (132))).operator_isEqual (GGS_string ("")) ;
                if (cond_3788.isBuiltAndTrue ()) {
                }else if (cond_3788.isBuiltAndFalse ()) {
                  const GGS_bool cond_3832 = (operand_3526->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (133))).operator_isEqual (GGS_string ("")) ;
                  if (cond_3832.isBuiltAndTrue ()) {
                  }else if (cond_3832.isBuiltAndFalse ()) {
                    const GGS_bool cond_3876 = (operand_3526->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (134))).operator_isEqual (GGS_string ("")) ;
                    if (cond_3876.isBuiltAndTrue ()) {
                    }else if (cond_3876.isBuiltAndFalse ()) {
                      const GGS_bool cond_3919 = (operand_3526->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (135))).operator_isEqual (GGS_string ("")) ;
                      if (cond_3919.isBuiltAndTrue ()) {
                      }else if (cond_3919.isBuiltAndFalse ()) {
                        ::routine_check_custom_field (inLexique,  var_cas_others,  operand_3526->mKey,  operand_3526->mInfo.type COMMA_SOURCE_FILE_AT_LINE (137)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      GGS_isr_obj  var_cas_updated_isr = GGS_isr_obj ::constructor_new (inLexique, operand_3393->mInfo.isr.reader_desc (inLexique COMMA_SOURCE_FILE_AT_LINE (141)), operand_3393->mInfo.isr.reader_category (inLexique COMMA_SOURCE_FILE_AT_LINE (142)), operand_3393->mInfo.isr.reader_priority (inLexique COMMA_SOURCE_FILE_AT_LINE (143)), operand_3393->mInfo.isr.reader_resources (inLexique COMMA_SOURCE_FILE_AT_LINE (144)), operand_3393->mInfo.isr.reader_messages (inLexique COMMA_SOURCE_FILE_AT_LINE (145)), operand_3393->mInfo.isr.reader_acc_apps (inLexique COMMA_SOURCE_FILE_AT_LINE (146)), operand_3393->mInfo.isr.reader_timing_prot (inLexique COMMA_SOURCE_FILE_AT_LINE (147)), var_cas_others COMMA_HERE) ;
      var_cas_isrs.modifier_put (inLexique, operand_3393->mKey, var_cas_updated_isr COMMA_SOURCE_FILE_AT_LINE (150)) ;
    }
  }
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_verify_and_set_isrs_defaults\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//              Implementation of routine "add_system_counter"               *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_add_system_counter (C_Compiler & inLexique,
                                GGS_root_obj  & var_cas_cpu COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_add_system_counter at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_counter_map  var_cas_counters = var_cas_cpu.reader_counters (inLexique COMMA_SOURCE_FILE_AT_LINE (164)) ;
  GGS_counter_obj  var_cas_sys_cnt ;
  GGS_lstringlist  var_cas_all_apps = var_cas_cpu.reader_applis (inLexique COMMA_SOURCE_FILE_AT_LINE (166)).reader_keyList (inLexique COMMA_SOURCE_FILE_AT_LINE (166)) ;
  {
    GGS_app_map::cEnumerator enumerator_4676 (var_cas_cpu.reader_applis (inLexique COMMA_SOURCE_FILE_AT_LINE (167)), true) ;
    const GGS_app_map::cElement * operand_4676 = NULL ;
    while (((operand_4676 = enumerator_4676.nextObject ()))) {
      macroValidPointer (operand_4676) ;
      var_cas_all_apps.addAssign_operation (operand_4676->mKey) ;
    }
  }
  const GGS_bool cond_5818 = var_cas_counters.reader_hasKey (inLexique, GGS_string ("SystemCounter") COMMA_SOURCE_FILE_AT_LINE (171)) ;
  if (cond_5818.isBuiltAndTrue ()) {
    var_cas_counters.modifier_del (inLexique, GGS_lstring ::constructor_new (inLexique, GGS_string ("SystemCounter"), GGS_location (inLexique) COMMA_HERE), var_cas_sys_cnt COMMA_SOURCE_FILE_AT_LINE (172)) ;
    { const GGS_basic_type _var_4999 = var_cas_sys_cnt.reader_max_allowed_value (inLexique COMMA_SOURCE_FILE_AT_LINE (173)) ; // CAST instruction
      if (_var_4999.getPtr () != NULL) {
        macroValidPointer (_var_4999.getPtr ()) ;
        if (typeid (cPtr_void) == typeid (* (_var_4999.getPtr ()))) {
          var_cas_sys_cnt.modifier_setMax_allowed_value (inLexique, GGS_uint32_class ::constructor_new (inLexique, GGS_location (inLexique), GGS_uint (32767U) COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (175)) ;
        }else{
        }
      }
    }
    { const GGS_basic_type _var_5151 = var_cas_sys_cnt.reader_ticks_per_base (inLexique COMMA_SOURCE_FILE_AT_LINE (178)) ; // CAST instruction
      if (_var_5151.getPtr () != NULL) {
        macroValidPointer (_var_5151.getPtr ()) ;
        if (typeid (cPtr_void) == typeid (* (_var_5151.getPtr ()))) {
          var_cas_sys_cnt.modifier_setTicks_per_base (inLexique, GGS_uint32_class ::constructor_new (inLexique, GGS_location (inLexique), GGS_uint (1U) COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (180)) ;
        }else{
        }
      }
    }
    { const GGS_basic_type _var_5293 = var_cas_sys_cnt.reader_min_cycle (inLexique COMMA_SOURCE_FILE_AT_LINE (183)) ; // CAST instruction
      if (_var_5293.getPtr () != NULL) {
        macroValidPointer (_var_5293.getPtr ()) ;
        if (typeid (cPtr_void) == typeid (* (_var_5293.getPtr ()))) {
          var_cas_sys_cnt.modifier_setMin_cycle (inLexique, GGS_uint32_class ::constructor_new (inLexique, GGS_location (inLexique), GGS_uint (1U) COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (185)) ;
        }else{
        }
      }
    }
    const GGS_bool cond_5413 = (var_cas_sys_cnt.reader_source (inLexique COMMA_SOURCE_FILE_AT_LINE (188)).reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (188))).operator_isEqual (GGS_string ("")) ;
    if (cond_5413.isBuiltAndTrue ()) {
      var_cas_sys_cnt.reader_source (inLexique COMMA_SOURCE_FILE_AT_LINE (189)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("SystemCounter has no SOURCE") COMMA_SOURCE_FILE_AT_LINE (190)) ;
    }
    const GGS_bool cond_5807 = gOption_goil_5F_options_autosar_5F_on.value () ;
    if (cond_5807.isBuiltAndTrue ()) {
      const GGS_bool cond_5628 = (var_cas_sys_cnt.reader_acc_apps (inLexique COMMA_SOURCE_FILE_AT_LINE (193)).reader_length (inLexique COMMA_SOURCE_FILE_AT_LINE (193))).operator_isEqual (GGS_uint (0U)) ;
      if (cond_5628.isBuiltAndTrue ()) {
        var_cas_sys_cnt.modifier_setAcc_apps (inLexique, var_cas_all_apps COMMA_SOURCE_FILE_AT_LINE (194)) ;
      }
      { const GGS_counter_type _var_5793 = var_cas_sys_cnt.reader_type (inLexique COMMA_SOURCE_FILE_AT_LINE (196)) ; // CAST instruction
        if (_var_5793.getPtr () != NULL) {
          macroValidPointer (_var_5793.getPtr ()) ;
          if (typeid (cPtr_software_counter) == typeid (* (_var_5793.getPtr ()))) {
            const GGS_software_counter var_cas_sc (_var_5793.getPtr ()) ;
            var_cas_sc.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (198)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("Incompatible TYPE for SystemCounter") COMMA_SOURCE_FILE_AT_LINE (199)) ;
          }else{
          }
        }
      }
    }
  }else if (cond_5818.isBuiltAndFalse ()) {
    GGS_hardware_counter  var_cas_type = GGS_hardware_counter ::constructor_new (inLexique, GGS_location (inLexique), GGS_void_driver ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE), GGS_time_constants ::constructor_emptyList () COMMA_HERE) ;
    var_cas_sys_cnt = GGS_counter_obj ::constructor_new (inLexique, GGS_lstring ::constructor_new (inLexique, GGS_string ("Predefined SystemCounter"), GGS_location (inLexique) COMMA_HERE), GGS_uint32_class ::constructor_new (inLexique, GGS_location (inLexique), GGS_uint (32767U) COMMA_HERE), GGS_uint32_class ::constructor_new (inLexique, GGS_location (inLexique), GGS_uint (1U) COMMA_HERE), GGS_uint32_class ::constructor_new (inLexique, GGS_location (inLexique), GGS_uint (1U) COMMA_HERE), GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE), var_cas_all_apps, var_cas_type, GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) COMMA_HERE) ;
  }
  var_cas_counters.modifier_put (inLexique, GGS_lstring ::constructor_new (inLexique, GGS_string ("SystemCounter"), GGS_location (inLexique) COMMA_HERE), var_cas_sys_cnt COMMA_SOURCE_FILE_AT_LINE (216)) ;
  var_cas_cpu.modifier_setCounters (inLexique, var_cas_counters COMMA_SOURCE_FILE_AT_LINE (218)) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_add_system_counter\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//                 Implementation of routine "set_defaults"                  *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_set_defaults (C_Compiler & inLexique,
                                const GGS_implementation   var_cas_imp,
                                GGS_root_obj  & var_cas_cpu COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_set_defaults at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  const GGS_bool cond_6940 = var_cas_imp.reader_hasKey (inLexique, GGS_string ("task") COMMA_SOURCE_FILE_AT_LINE (226)) ;
  if (cond_6940.isBuiltAndTrue ()) {
    GGS_task_map  var_cas_tasks = var_cas_cpu.reader_tasks (inLexique COMMA_SOURCE_FILE_AT_LINE (227)) ;
    GGS_implementation_spec  var_cas_spec ;
    const GGS_implementation  temp_6786 = var_cas_imp ;
    if (temp_6786.isBuilt ()) {
      temp_6786 (HERE)->method_get (inLexique, GGS_lstring ::constructor_new (inLexique, GGS_string ("task"), GGS_location (inLexique) COMMA_HERE), var_cas_spec COMMA_SOURCE_FILE_AT_LINE (229)) ;
    }
    ::routine_verify_and_set_tasks_defaults (inLexique,  var_cas_tasks,  var_cas_spec COMMA_SOURCE_FILE_AT_LINE (230)) ;
    var_cas_cpu.modifier_setTasks (inLexique, var_cas_tasks COMMA_SOURCE_FILE_AT_LINE (231)) ;
    var_cas_tasks = var_cas_cpu.reader_tasks (inLexique COMMA_SOURCE_FILE_AT_LINE (232)) ;
  }
  const GGS_bool cond_7201 = var_cas_imp.reader_hasKey (inLexique, GGS_string ("isr") COMMA_SOURCE_FILE_AT_LINE (236)) ;
  if (cond_7201.isBuiltAndTrue ()) {
    GGS_isr_map  var_cas_isrs = var_cas_cpu.reader_isrs (inLexique COMMA_SOURCE_FILE_AT_LINE (237)) ;
    GGS_implementation_spec  var_cas_spec ;
    const GGS_implementation  temp_7080 = var_cas_imp ;
    if (temp_7080.isBuilt ()) {
      temp_7080 (HERE)->method_get (inLexique, GGS_lstring ::constructor_new (inLexique, GGS_string ("isr"), GGS_location (inLexique) COMMA_HERE), var_cas_spec COMMA_SOURCE_FILE_AT_LINE (239)) ;
    }
    ::routine_verify_and_set_isrs_defaults (inLexique,  var_cas_isrs,  var_cas_spec COMMA_SOURCE_FILE_AT_LINE (240)) ;
    var_cas_cpu.modifier_setIsrs (inLexique, var_cas_isrs COMMA_SOURCE_FILE_AT_LINE (241)) ;
  }
  ::routine_add_system_counter (inLexique,  var_cas_cpu COMMA_SOURCE_FILE_AT_LINE (244)) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_set_defaults\n") ;
  #endif
}

//---------------------------------------------------------------------------*

