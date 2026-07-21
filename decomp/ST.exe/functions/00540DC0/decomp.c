#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 231 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl
SetAccelerator(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
              undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
              undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar7;
  bool bVar8;
  uint local_100 [19];
  InternalExceptionFrame local_b4;
  int local_70 [5];
  uint *local_5c;
  uint local_50 [5];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;

  local_b4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b4;
  iVar2 = Library::MSVCRT::__setjmp3(local_b4.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_b4.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\support.cpp",0xe7,0,iVar2,"%s",
                               "SetAccelerator");
    if (iVar4 == 0) {
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
    if (g_dArray_008026F0 == (DArrayTy *)0x0) {
      g_dArray_008026F0 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x4c,10);
    }
    Library::DKW::TBL::FUN_006ae1c0(&g_dArray_008026F0->flags,local_50);
    g_currentExceptionFrame = local_b4.previous;
    return;
  }
  if (g_dArray_008026F0 != (DArrayTy *)0x0) {
    g_dArray_008026F0->iteratorIndex = 0;
    uVar3 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)g_dArray_008026F0,local_100);
    if (-1 < (int)uVar3) {
      do {
        iVar2 = 0x13;
        bVar8 = true;
        puVar5 = local_100;
        puVar7 = local_50;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar8 = *puVar5 == *puVar7;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          FUN_006b0c70(g_dArray_008026F0,uVar3);
          if (g_dArray_008026F0->count != 0) {
            g_currentExceptionFrame = local_b4.previous;
            return;
          }
          DArrayDestroy(g_dArray_008026F0);
          g_dArray_008026F0 = (DArrayTy *)0x0;
          g_currentExceptionFrame = local_b4.previous;
          return;
        }
        uVar3 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)g_dArray_008026F0,local_100);
        if ((int)uVar3 < 0) {
          g_currentExceptionFrame = local_b4.previous;
          return;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_b4.previous;
  return;
}

