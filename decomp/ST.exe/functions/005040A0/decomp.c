#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel3.cpp
   CPanelTy::PaintMap */

void __thiscall CPanelTy::PaintMap(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  char *resourceString;
  int iVar5;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    DibPut((RecoveredSourceFamily_dibcopy *)local_8->field_0190,0,0,'\x01',
           (byte *)local_8->field_0994);
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0190,0,5,6,0x2a,10);
    iVar7 = -1;
    iVar6 = -1;
    uVar4 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
    iVar5 = -1;
    iVar3 = -2;
    resourceString = LoadResourceString(0x2712,g_hINSTANCE_00807618);
    ccFntTy::WrTxt(pCVar2->field_01B8,resourceString,iVar3,iVar5,uVar4,iVar6,iVar7);
    if (-1 < (int)pCVar2->field_0148[4]) {
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,(uint)pCVar2->field_0148[4],0xffffffff,
                 pCVar2->field_004C,pCVar2->field_00A4);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel3.cpp",0x13,0,iVar3,"%s",
                             "CPanelTy::PaintMap");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel3.cpp",0x13);
  return;
}

