#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::CheckFiles */

undefined4 __thiscall OptPanelTy::CheckFiles(OptPanelTy *this,byte *param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  InternalExceptionFrame local_54;
  OptPanelTy *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x459,0,iVar4,
                               &DAT_007a4ccc,s_OptPanelTy__CheckFiles_007c72dc);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x459);
    return 0;
  }
  uVar9 = 0;
  uVar2 = local_c->field_01E9->field_0008;
  if (uVar2 == 0) {
    g_currentExceptionFrame = local_54.previous;
    return local_8;
  }
  do {
    pbVar8 = param_1;
    if ((int)uVar9 < (int)uVar2) {
      pbVar5 = *(byte **)(local_c->field_01E9->field_0014 + uVar9 * 4);
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    do {
      bVar1 = *pbVar5;
      bVar10 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_005334fb:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00533500;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar10 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_005334fb;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00533500:
    if (iVar4 == 0) {
      g_currentExceptionFrame = local_54.previous;
      return 1;
    }
    uVar9 = uVar9 + 1;
    if (uVar2 <= uVar9) {
      g_currentExceptionFrame = local_54.previous;
      return local_8;
    }
  } while( true );
}

