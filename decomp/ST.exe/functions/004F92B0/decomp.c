#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::OutText */

void __thiscall CPanelTy::OutText(CPanelTy *this,int *param_1,undefined4 param_2)

{
  AnonPointee_CPanelTy_01B0 *pAVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int errorCode;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
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
      puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
      *param_1 = (int)puVar4;
    }
    else {
      *param_1 = (int)puVar4;
    }
    pAVar1 = pCVar3->field_01B0;
    local_8 = pAVar1->field_0014;
    if (local_8 == 0) {
      local_8 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                pAVar1->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::WrSarr(pCVar3->field_01D0,*param_1,0,-1,0,0,0);
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)*param_1);
    pCVar3->field_0243 = pCVar3->field_09A0;
    pCVar3->field_0247 = param_2;
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pCVar3->field_0178);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x32f,0,errorCode,
                             "%s","CPanelTy::OutText(*str_arr, time)");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x32f);
  return;
}

