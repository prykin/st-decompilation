#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::InitIntercomPanel */

void __thiscall IntercomPanelTy::InitIntercomPanel(IntercomPanelTy *this)

{
  IntercomPanelTy *pIVar2;
  int iVar3;
  uint *puVar3;
  LPSTR text;
  ushort *puVar4;
  uint uVar5;
  int puVar6_mg1;
  DArrayTy *pDVar6;
  int iVar9;
  int *piVar7;
  ushort *puVar8;
  int iVar10;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (iVar3 == 0) {
    g_intercomPanel_0080169C = local_8;
    /* ST_CALLSITE[00521A2A]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new */
    puVar3 = ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0030);
    pIVar2->field_0180 = puVar3;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    iVar10 = 1;
    piVar7 = nullptr;
    text = thunk_FUN_00571240("BKG_EDITCHAT",0);
    puVar4 = cMf32::RecGet(g_cMf32_00806790,1,text,piVar7,iVar10);
    puVar8 = puVar4 + 0x14;
    iVar10 = 1;
    pIVar2->field_0184 = puVar4;

    uVar5 = FUN_006b4fe0(puVar4);
    /* ST_CALLSITE[00521AA0]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
    puVar6_mg1 = FUN_006b50c0((-(uint)(DAT_0080874e != '\x03') & 0x32) + 700,0x14,
                              (uint)pIVar2->field_0184[7],uVar5,(undefined4 *)puVar8,iVar10);
    pIVar2->field_019C = (ushort *)puVar6_mg1;
    /* ST_CALLSITE[00521ABC]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)pIVar2->field_0068,0,0,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)pIVar2->field_0184);
    pDVar6 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    pIVar2->field_0198 = pDVar6;

    Library::DKW::TBL::FUN_006b6020(pDVar6,0,&CHAR_00h_008016a0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\intercom.cpp",0x34,0,iVar3,"%s",
                             "IntercomPanelTy::InitIntercomPanel");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\intercom.cpp",0x34);
  return;
}

