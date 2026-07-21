#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::CreateSlider */

int __thiscall
ProdPanelTy::CreateSlider
          (ProdPanelTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  ProdPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int local_42c [6];
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined2 local_398;
  undefined2 local_396;
  undefined4 local_394;
  undefined4 local_38c;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined2 local_374;
  undefined2 local_372;
  undefined4 local_370;
  undefined4 local_368;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_2a8;
  int local_2a4 [26];
  undefined4 local_23c;
  undefined4 local_214;
  undefined4 local_1f0;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  InternalExceptionFrame local_54;
  ProdPanelTy *local_10;
  ushort *local_c;
  int local_8;

  local_8 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar2 == 0) {
    memset(local_42c, 0, 0x3d8); /* compiler bulk-zero initialization */
    local_6c = param_7;
    local_84 = this_00->field_0008;
    local_68 = param_8;
    local_42c[0] = param_6;
    local_80 = 2;
    local_7c = param_5;
    if (DAT_0080734c != '\0') {
      local_64 = 1;
    }
    iVar8 = 1;
    piVar7 = (int *)0x0;
    uVar6 = 0;
    iVar2 = 1;
    local_42c[2] = (int)(param_6 == 1);
    local_42c[1] = 2;
    local_2a8 = 2;
    local_42c[3] = 2;
    local_318 = 1;
    local_31c = 1;
    pCVar3 = thunk_FUN_00571240("BUT_SLLT",0);
    pCVar3 = FUN_006f2c00(pCVar3,iVar2,uVar6);
    local_c = cMf32::RecGet(DAT_00806790,1,pCVar3,piVar7,iVar8);
    local_414 = *(undefined4 *)(local_c + 2);
    local_410 = *(undefined4 *)(local_c + 4);
    cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
    iVar2 = this_00->field_003C;
    iVar8 = this_00->field_005C;
    local_42c[4] = iVar2 + param_3;
    iVar4 = DAT_00806734;
    if (iVar8 != 0) {
      iVar4 = this_00->field_0044;
    }
    local_3c0 = 2;
    local_42c[5] = iVar4 + param_4;
    local_3c4 = this_00->field_0008;
    local_38c = 0;
    local_380 = 0x101;
    local_3a4 = 0x101;
    local_374 = 0;
    local_398 = 0;
    local_37c = 3;
    local_3a0 = 3;
    local_372 = 2;
    local_396 = 2;
    local_370 = 0x272e;
    local_394 = 0x272e;
    local_3bc = 0xc005;
    local_368 = 1;
    local_39c = 0x4201;
    local_378 = 0x4202;
    local_314 = 500;
    local_310 = 0x32;
    piVar7 = local_42c + 2;
    piVar5 = local_2a4;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar5 = piVar5 + 1;
    }
    local_2a4[2] = iVar2 + param_1;
    local_2a4[3] = DAT_00806734;
    if (iVar8 != 0) {
      local_2a4[3] = this_00->field_0044;
    }
    local_2a4[3] = local_2a4[3] + param_2;
    local_23c = 0xc006;
    local_1f0 = 0x272f;
    local_214 = 0x272f;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_00->field_000C->vtable->field_0008)(4,&local_8,0,local_42c,0);
    if ((this_00->field_005C == 0) || (uVar6 = 0x55, DAT_0080734c == '\0')) {
      uVar6 = 0x56;
    }
    this_00->field_0028 = uVar6;
    if (local_8 != 0) {
      FUN_006e6080(this_00,0x80000002,local_8,(undefined4 *)&this_00->field_0x18);
    }
    g_currentExceptionFrame = local_54.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x239,0,iVar2,"%s",
                             "ProdPanelTy::CreateSlider");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\specpan.cpp",0x239);
  return -1;
}

