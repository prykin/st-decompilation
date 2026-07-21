#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintIDSObj */

void __thiscall CPanelTy::PaintIDSObj(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  UINT resourceId;
  uint uVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0xa0,0,iVar3,"%s",
                               "CPanelTy::PaintIDSObj");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0xa0);
    return;
  }
  if (DAT_0080874e == '\x03') {
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0194,0xf,0x8d,'\x01',
           (byte *)local_8->field_09F1);
    if (pCVar2->field_0C4D == 0) goto cf_common_exit_00504F81;
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,0x10,0x8e,
                     *(int *)(pCVar2->field_09F1 + 2),0xb);
    resourceId = pCVar2->field_0C4D;
  }
  else {
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0194,4,0x89,'\x01',
           (byte *)local_8->field_09F1);
    if (pCVar2->field_0C4D == 0) goto cf_common_exit_00504F81;
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,6,0x8b,200,0xb);
    resourceId = pCVar2->field_0C4D;
  }
  iVar8 = -1;
  iVar7 = -1;
  uVar6 = 0;
  iVar5 = -1;
  iVar3 = -2;
  puVar4 = (uint *)LoadResourceString(resourceId,HINSTANCE_00807618);
  ccFntTy::WrTxt(pCVar2->field_01B8,puVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
cf_common_exit_00504F81:
  if (-1 < (int)pCVar2->field_015C) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pCVar2->field_015C,0xffffffff,pCVar2->field_0050,pCVar2->field_00A8);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

