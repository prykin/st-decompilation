#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel3.cpp
   CPanelTy::PaintMap */

void __thiscall CPanelTy::PaintMap(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0190,0,0,'\x01',(byte *)local_8->field_0994
          );
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0190,0,5,6,0x2a,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar4 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
    iVar6 = -1;
    iVar3 = -2;
    puVar5 = (uint *)LoadResourceString(0x2712,HINSTANCE_00807618);
    ccFntTy::WrTxt(pCVar2->field_01B8,puVar5,iVar3,iVar6,uVar4,iVar7,iVar8);
    if (-1 < (int)pCVar2->field_0158) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pCVar2->field_0158,0xffffffff,pCVar2->field_004C,pCVar2->field_00A4);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel3.cpp",0x13,0,iVar3,"%s",
                             "CPanelTy::PaintMap");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel3.cpp",0x13);
  return;
}

