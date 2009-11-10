//---------------------------------------------------------------------------*
//                                                                           *
//                          File 'isrs_verif.cpp'                            *
//                        Generated by version 1.9.3                         *
//                     november 10th, 2009, at 15h2'21"                      *
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
#include "isrs_verif.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "isrs_verif.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//               Implementation of routine "isrs_well_formed"                *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_isrs_well_formed (C_Compiler & inLexique,
                                const GGS_isr_map   var_cas_isrs COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_isrs_well_formed at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  {
    GGS_isr_map::cEnumerator enumerator_771 (var_cas_isrs, true) ;
    const GGS_isr_map::cElement * operand_771 = NULL ;
    while (((operand_771 = enumerator_771.nextObject ()))) {
      macroValidPointer (operand_771) ;
      { const GGS_basic_type _var_959 = operand_771->mInfo.isr.reader_category (inLexique COMMA_SOURCE_FILE_AT_LINE (46)) ; // CAST instruction
        if (_var_959.getPtr () != NULL) {
          macroValidPointer (_var_959.getPtr ()) ;
          if (typeid (cPtr_void) == typeid (* (_var_959.getPtr ()))) {
            operand_771->mKey.reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, (GGS_string ("CATEGORY attribute undefined for ISR ")).operator_concat (operand_771->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (48))) COMMA_SOURCE_FILE_AT_LINE (49)) ;
          }else{
          }
        }
      }
      { const GGS_basic_type _var_1116 = operand_771->mInfo.isr.reader_priority (inLexique COMMA_SOURCE_FILE_AT_LINE (52)) ; // CAST instruction
        if (_var_1116.getPtr () != NULL) {
          macroValidPointer (_var_1116.getPtr ()) ;
          if (typeid (cPtr_void) == typeid (* (_var_1116.getPtr ()))) {
            operand_771->mKey.reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, (GGS_string ("PRIORITY attribute undefined for ISR ")).operator_concat (operand_771->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (54))) COMMA_SOURCE_FILE_AT_LINE (55)) ;
          }else{
          }
        }
      }
    }
  }
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_isrs_well_formed\n") ;
  #endif
}

//---------------------------------------------------------------------------*

