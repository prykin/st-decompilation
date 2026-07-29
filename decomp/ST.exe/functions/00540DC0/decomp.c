#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 231 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2

   [STPrototypeApplier] Propagated parameter 9.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2

   [STPrototypeApplier] Propagated parameter 10.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2

   [STPrototypeApplier] Propagated parameter 11.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2 */

void __cdecl
SetAccelerator(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
              undefined4 param_6,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
              uint param_12)

{
  code *pcVar1;
  int iVar2;
  uint index;
  int iVar3;
  uint *puVar4;
  uint *puVar6;
  bool bVar7;
  uint local_100 [19];
  InternalExceptionFrame local_b4;
  int local_70 [5];
  uint *local_5c;
  uint local_50 [5];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  uint local_c;

  local_b4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b4;
  iVar2 = Library::MSVCRT::__setjmp3(local_b4.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_b4.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\support.cpp",0xe7,0,iVar2,"%s",
                               "SetAccelerator");
    if (iVar3 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\support.cpp",0xe7);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  memset(local_50, 0, 0x4c); /* compiler bulk-zero initialization */
  iVar2 = 0;
  local_3c = param_2;
  local_1c = param_2;
  local_38 = param_3;
  local_18 = param_3;
  local_14 = param_8;
  local_34 = param_4;
  local_10 = param_10;
  local_50[0] = param_5 | 8;
  local_30 = param_9;
  local_50[2] = param_7;
  local_2c = param_11;
  memset(local_70, 0, 0x20); /* compiler bulk-zero initialization */
  local_c = param_12;
  local_5c = local_50;
  local_50[1] = param_6;
  local_70[4] = 0x11 - (uint)(param_1 != 0);
  local_70[2] = 1;
  local_70[3] = 3;
  FUN_006e3db0((int)local_70);
  if (param_1 != 0) {
    if (g_array_008026F0 == (DArrayTy *)0x0) {
      g_array_008026F0 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x4c,10);
    }
    Library::DKW::TBL::FUN_006ae1c0(&g_array_008026F0->flags,local_50);
    g_currentExceptionFrame = local_b4.previous;
    return;
  }
  if (g_array_008026F0 != (DArrayTy *)0x0) {
    g_array_008026F0->iteratorIndex = 0;
    index = DArrayGetNext(g_array_008026F0,(byte *)local_100);
    if (-1 < (int)index) {
      do {
        iVar2 = 0x13;
        bVar7 = true;
        puVar4 = local_100;
        puVar6 = local_50;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar7 = *puVar4 == *puVar6;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          DArrayRemoveAt(g_array_008026F0,index);
          if (g_array_008026F0->count != 0) {
            g_currentExceptionFrame = local_b4.previous;
            return;
          }
          DArrayDestroy(g_array_008026F0);
          g_array_008026F0 = (DArrayTy *)0x0;
          g_currentExceptionFrame = local_b4.previous;
          return;
        }
        index = DArrayGetNext(g_array_008026F0,(byte *)local_100);
        if ((int)index < 0) {
          g_currentExceptionFrame = local_b4.previous;
          return;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_b4.previous;
  return;
}

