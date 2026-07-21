#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::InitIntercomPanel */

void __thiscall IntercomPanelTy::InitIntercomPanel(IntercomPanelTy *this)

{
  code *pcVar1;
  IntercomPanelTy *pIVar2;
  int iVar3;
  ccFntTy *pcVar4;
  LPSTR text;
  ushort *puVar5;
  uint uVar6;
  AnonPointee_IntercomPanelTy_019C *pAVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  ushort *puVar11;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (iVar3 == 0) {
    g_intercomPanel_0080169C = local_8;
    pcVar4 = (ccFntTy *)
             ccFntTy::operator(*(ccFntTy **)&PTR_00802a28->field_0x30,0x19d,
                               (int)*(ccFntTy **)&PTR_00802a28->field_0x30);
    pIVar2->field_0180 = pcVar4;
    pcVar4->field_0058 = 0;
    pcVar4->field_005C = 0;
    iVar3 = 1;
    piVar10 = (int *)0x0;
    text = thunk_FUN_00571240("BKG_EDITCHAT",0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,text,piVar10,iVar3);
    puVar11 = puVar5 + 0x14;
    iVar3 = 1;
    pIVar2->field_0184 = puVar5;
    uVar6 = FUN_006b4fe0((int)puVar5);
    pAVar7 = (AnonPointee_IntercomPanelTy_019C *)
             FUN_006b50c0((-(uint)(DAT_0080874e != '\x03') & 0x32) + 700,0x14,
                          (uint)pIVar2->field_0184[7],uVar6,(undefined4 *)puVar11,iVar3);
    pIVar2->field_019C = pAVar7;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pIVar2->field_0068,0,0,'\x01',(byte *)pIVar2->field_0184);
    puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    pIVar2->field_0198 = puVar8;
    Library::DKW::TBL::FUN_006b6020(puVar8,0,&DAT_008016a0);
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

