#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::SaveGrpData */

int __thiscall STGroupC::SaveGrpData(STGroupC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  STGroupC *pSVar6;
  byte *puVar7;
  byte *puVar8;
  InternalExceptionFrame local_5c;
  void *local_18;
  int local_14;
  STGroupC *local_10;
  undefined4 *local_c;
  uint local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pSVar6 = local_10;
  if (iVar2 == 0) {
    *param_1 = 0x40;
    if (local_10->field_0029 != (uint *)0x0) {
      local_c = (undefined4 *)FUN_006b0020(local_10->field_0029,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
    }
    if (pSVar6->field_002D != (uint *)0x0) {
      local_c = (undefined4 *)FUN_006b0020(pSVar6->field_002D,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
    }
    pvVar3 = Library::DKW::LIB::MemAlloc(*param_1);
    local_8 = 0;
    *(int *)((int)pvVar3 + 4) = (int)pSVar6->field_0024;
    *(undefined4 *)((int)pvVar3 + 0xc) = 2;
    *(undefined4 *)((int)pvVar3 + 0x14) = pSVar6->field_0020;
    *(undefined2 *)((int)pvVar3 + 0x18) = pSVar6->field_0025;
    *(undefined2 *)((int)pvVar3 + 0x1a) = pSVar6->field_0027;
    *(undefined4 *)((int)pvVar3 + 0x2c) = pSVar6->field_0031;
    *(undefined4 *)((int)pvVar3 + 0x30) = pSVar6->field_0035;
    *(undefined4 *)((int)pvVar3 + 0x34) = pSVar6->field_0039;
    local_18 = pvVar3;
    if (pSVar6->field_0029 == (uint *)0x0) {
      local_8 = 0;
      *(undefined4 *)((int)pvVar3 + 0x1c) = 0xffffffff;
      *(undefined4 *)((int)pvVar3 + 0x20) = 0;
    }
    else {
      local_c = (undefined4 *)FUN_006b0020(pSVar6->field_0029,(int *)&local_8);
      puVar7 = (byte *)(local_c);
      puVar8 = (byte *)((int)pvVar3 + 0x40);
      memmove(puVar8, puVar7, local_8); /* compiler REP MOVS byte copy */
      uVar5 = 0;
      *(undefined4 *)((int)pvVar3 + 0x1c) = 0x40;
      *(uint *)((int)pvVar3 + 0x20) = local_8;
      FreeAndNull(&local_c);
      pSVar6 = local_10;
    }
    iVar2 = local_8 + 0x40;
    if (pSVar6->field_002D == (uint *)0x0) {
      *(undefined4 *)((int)pvVar3 + 0x24) = 0xffffffff;
      *(uint *)((int)pvVar3 + 0x28) = local_8;
    }
    else {
      local_14 = iVar2;
      local_c = (undefined4 *)FUN_006b0020(pSVar6->field_002D,(int *)&local_8);
      puVar7 = (byte *)(local_c);
      puVar8 = (byte *)(iVar2 + (int)pvVar3);
      memmove(puVar8, puVar7, local_8); /* compiler REP MOVS byte copy */
      *(int *)((int)pvVar3 + 0x24) = local_14;
      *(uint *)((int)pvVar3 + 0x28) = local_8;
      FreeAndNull(&local_c);
    }
    *(undefined4 *)((int)pvVar3 + 0x38) = 0xffffffff;
    *(undefined4 *)((int)pvVar3 + 0x3c) = 0;
    g_currentExceptionFrame = local_5c.previous;
    return (int)pvVar3;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\tc_grp.cpp",0x1b9,0,iVar2,"%s",
                             "STGroupC::SaveGrpData");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\tc_grp.cpp",0x1ba);
  return (int)local_18;
}

