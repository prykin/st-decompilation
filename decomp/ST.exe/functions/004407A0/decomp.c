#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=004407A3 MOVSX EAX,byte ptr [EBP + 0x8] */

void FUN_004407a0(char param_1,undefined4 param_2,undefined4 param_3)

{
  DArrayTy *array;
  dword dVar1;
  uint index;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;

  array = g_packedRecords_A62x8[param_1].field2_0x5;
  if (((array != nullptr) && (dVar1 = array->count, dVar1 != 0)) &&
     (index = 0, 0 < (int)dVar1)) {
    do {

      DArrayGetElement(array,index,&param_1);
      if (_param_1 != nullptr) {
        /* ST_CALLSITE[004407EC]: CALL 0x0040348b; direct=0040348B STGroupBoatC::ReMakePVecAndTgtListExt */
        STGroupBoatC::ReMakePVecAndTgtListExt(_param_1,(char)param_2,(short)param_3);
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
  }
  return;
}

