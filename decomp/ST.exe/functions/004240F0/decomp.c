#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::SaveGrpData */

int __thiscall STGroupC::SaveGrpData(STGroupC *this,int *param_1)

{
  int iVar2;
  void *pvVar2;
  int iVar3;
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
    if (local_10->field_0029 != nullptr) {
      local_c = (undefined4 *)FUN_006b0020(local_10->field_0029,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
    }
    if (pSVar6->field_002D != nullptr) {
      local_c = (undefined4 *)FUN_006b0020(pSVar6->field_002D,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
    }
    pvVar2 = Library::DKW::LIB::MemAlloc(*param_1);
    local_8 = 0;
    STField<int>(pvVar2,4) = (int)pSVar6->field_0024;
    STField<undefined4>(pvVar2,0xc) = 2;
    STField<undefined4>(pvVar2,0x14) = pSVar6->field_0020;
    STField<undefined2>(pvVar2,0x18) = pSVar6->field_0025;
    STField<undefined2>(pvVar2,0x1a) = pSVar6->field_0027;
    STField<undefined4>(pvVar2,0x2c) = pSVar6->field_0031;
    STField<undefined4>(pvVar2,0x30) = pSVar6->field_0035;
    STField<undefined4>(pvVar2,0x34) = pSVar6->field_0039;
    local_18 = pvVar2;
    if (pSVar6->field_0029 == nullptr) {
      local_8 = 0;
      STField<undefined4>(pvVar2,0x1c) = 0xffffffff;
      STField<undefined4>(pvVar2,0x20) = 0;
    }
    else {
      local_c = (undefined4 *)FUN_006b0020(pSVar6->field_0029,(int *)&local_8);
      puVar7 = (byte *)(local_c);
      puVar8 = (byte *)((int)pvVar2 + 0x40);
      memmove(puVar8, puVar7, local_8); /* compiler REP MOVS byte copy */
      uVar5 = 0;
      STField<undefined4>(pvVar2,0x1c) = 0x40;
      STField<uint>(pvVar2,0x20) = local_8;
      FreeAndNull(&local_c);
      pSVar6 = local_10;
    }
    iVar4 = local_8 + 0x40;
    if (pSVar6->field_002D == nullptr) {
      STField<undefined4>(pvVar2,0x24) = 0xffffffff;
      STField<uint>(pvVar2,0x28) = local_8;
    }
    else {
      local_14 = iVar4;
      local_c = (undefined4 *)FUN_006b0020(pSVar6->field_002D,(int *)&local_8);
      puVar7 = (byte *)(local_c);
      puVar8 = (byte *)(iVar4 + (int)pvVar2);
      memmove(puVar8, puVar7, local_8); /* compiler REP MOVS byte copy */
      STField<int>(pvVar2,0x24) = local_14;
      STField<uint>(pvVar2,0x28) = local_8;
      FreeAndNull(&local_c);
    }
    STField<undefined4>(pvVar2,0x38) = 0xffffffff;
    STField<undefined4>(pvVar2,0x3c) = 0;
    g_currentExceptionFrame = local_5c.previous;
    return (int)pvVar2;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\tc_grp.cpp",0x1b9,0,iVar2,"%s",
                             "STGroupC::SaveGrpData");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\tc_grp.cpp",0x1ba);
  return (int)local_18;
}

