#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintNameRes */

void __thiscall CPanelTy::PaintNameRes(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar4;
  UINT resourceId;
  char *resourceString;
  HINSTANCE module;
  int iVar5;
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
  if (iVar3 == 0) {

    iVar3 = thunk_FUN_005276e0(local_8->field_0C31,local_8->field_0C32);
    /* ST_CALLSITE[00504BD2]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
    pBVar4 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_029A,iVar3);
    /* ST_CALLSITE[00504BEA]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,param_1 + 5,0x65,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar4);

    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,param_1 + 2,0x52,0xb2,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 0;
    iVar5 = -1;
    iVar3 = -2;
    module = g_hINSTANCE_00807618;

    resourceId = thunk_FUN_00528060(pCVar2->field_0C31,pCVar2->field_0C32);
    /* ST_CALLSITE[00504C3A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    resourceString = LoadResourceString(resourceId,module);

    ccFntTy::WrTxt(pCVar2->field_01B8,resourceString,iVar3,iVar5,uVar6,iVar7,iVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x76,0,iVar3,"%s",
                             "CPanelTy::PaintNameRes");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x76);
  return;
}

