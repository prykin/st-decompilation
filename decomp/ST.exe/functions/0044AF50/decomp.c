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
  code *pcVar1;
  int iVar2;
  AnonPointee_TLOBaseTy_0607 *pAVar3;
  Global_sub_0043FC50_param_1Enum GVar4;

  if (param_2 == 0) {
    GVar4 = CASE_E;
    pAVar3 = (AnonPointee_TLOBaseTy_0607 *)&g_packedRecords_A62x8[param_1].field332_0x163;
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
    pAVar3 = (AnonPointee_TLOBaseTy_0607 *)&g_packedRecords_A62x8[param_1].field390_0x1b3;
  }
  thunk_FUN_0043fc50(GVar4,0);
  array = *(DArrayTy **)((int)&pAVar3[3].field_0000 + 2);
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
    *(undefined4 *)((int)&pAVar3[3].field_0000 + 2) = 0;
    *(undefined2 *)((int)&pAVar3[3].field_0004 + 2) = 0;
  }
  pAVar3[2].field_0010 = 0;
  Library::MSVCRT::FUN_0072da70(&pAVar3->field_0010,pAVar3,0x40);
  pAVar3->field_0000 = 0;
  *(undefined4 *)((int)&pAVar3->field_0008 + 2) = 0;
  *(undefined2 *)((int)&pAVar3->field_000C + 2) = 0;
  return;
}

