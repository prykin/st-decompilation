#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PushTV
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042CE1F MOVSX EAX,byte ptr [EBP + 0x8] | 0042CE3A MOVSX
   EAX,byte ptr [EBP + 0x8] */

undefined4 STAllPlayersC::PushTV(char param_1,int param_2,int param_3,char param_4,short param_5)

{
  DArrayTy *array;
  dword dVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint index;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;

  if (param_2 == 0) {
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    iVar3 = param_1 * 0xa62 + 0x7f4f83;
  }
  else {
    if (param_2 != 1) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x36a,0,0,"%s",
                                 "STAllPlayersC::PushTV");
      if (iVar3 == 0) {
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    iVar3 = param_1 * 0xa62 + 0x7f4fd3;
  }
  iVar3 = iVar3 + param_3 * 0x10;
  if (*(int *)(iVar3 + 4) == (int)param_4) {
    array = *(DArrayTy **)(iVar3 + 10);
    index = 0;
    dVar1 = array->count;
    if (0 < (int)dVar1) {
      do {
        DArrayGetElement(array,index,&stack0x00000006);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        if (in_stack_00000006 == param_5) {
          return 1;
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
      return 0;
    }
  }
  return 0;
}

