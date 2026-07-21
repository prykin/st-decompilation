#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::OutText */

void __thiscall CPanelTy::OutText(CPanelTy *this,int *param_1,undefined4 param_2)

{
  ushort *puVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int errorCode;
  uint *puVar4;
  DArrayTy *pDVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar3 = local_c;
  if (errorCode == 0) {
    puVar4 = ccFntTy::FormIndentSarr
                       (local_c->field_01D0,(uint *)*param_1," ,.;:!?/\\()[]{}",
                        (uint *)&DAT_007c21ec,local_c->field_0104,0,0xffffffff,(char *)0x0,1);
    if ((AnonShape_006B5570_4D68B99C *)*param_1 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)*param_1);
    }
    if (puVar4 == (uint *)0x0) {
      pDVar5 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
      *param_1 = (int)pDVar5;
    }
    else {
      *param_1 = (int)puVar4;
    }
    puVar1 = pCVar3->field_01B0;
    local_8 = *(uint *)(puVar1 + 10);
    if (local_8 == 0) {
      local_8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int)puVar1);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    ccFntTy::WrSarr(pCVar3->field_01D0,*param_1,0,-1,0,0,0);
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)*param_1);
    pCVar3->field_0243 = pCVar3->field_09A0;
    pCVar3->field_0247 = param_2;
    Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,pCVar3->field_0178);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x32f,0,errorCode,
                             "%s","CPanelTy::OutText(*str_arr, time)");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x32f);
  return;
}

