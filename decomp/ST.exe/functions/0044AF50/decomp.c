#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PushTV

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=55, used=0), and
   decompilation contains no value return */

void STAllPlayersC::PushTV(char param_1,int param_2)

{
  DArrayTy *array;
  int iVar2;
  AnonPointee_TLOBaseTy_0607 *pAVar3;
  Global_sub_0043FC50_param_1Enum GVar4;

  if (param_2 == 0) {
    GVar4 = CASE_E;
    pAVar3 = (AnonPointee_TLOBaseTy_0607 *)&g_packedRecords_A62x8[param_1].field96_0x163;
  }
  else {
    if (param_2 != 1) {

      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x3028,0,0,"%s",
                                 "STAllPlayersC::PushTV");
      if (iVar2 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    GVar4 = CASE_F;
    pAVar3 = (AnonPointee_TLOBaseTy_0607 *)&g_packedRecords_A62x8[param_1].field149_0x1b3;
  }
  thunk_FUN_0043fc50(GVar4,0);
  array = *(DArrayTy **)((int)&pAVar3[3].field_0000 + 2);
  if (array != nullptr) {
    DArrayDestroy(array);
    *(undefined4 *)((int)&pAVar3[3].field_0000 + 2) = 0;
    *(undefined2 *)((int)&pAVar3[3].field_0004 + 2) = 0;
  }
  pAVar3[2].field_0010 = 0;

  Library::MSVCRT::FUN_0072da70
            ((RecoveredRecord_006BFE70_3123BCE8 *)&pAVar3->field_0010,pAVar3,0x40);
  pAVar3->field_0000 = 0;
  STField<undefined4>(pAVar3,0xA) = 0;
  STField<undefined2>(pAVar3,0xE) = 0;
  return;
}

