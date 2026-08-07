#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::InitIntercomPanel */

void __thiscall IntercomPanelTy::InitIntercomPanel(IntercomPanelTy *this)

{
  IntercomPanelTy *pIVar2;
  int iVar3;
  undefined4 *puVar3;
  LPSTR text;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  DArrayTy *pDVar7;
  int iVar9;
  int *piVar8;
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
    puVar3 = ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0030);
    pIVar2->field_0180 = puVar3;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    iVar10 = 1;
    piVar8 = nullptr;
    text = thunk_FUN_00571240("BKG_EDITCHAT",0);
    puVar4 = cMf32::RecGet(g_cMf32_00806790,1,text,piVar8,iVar10);
    puVar6 = puVar4 + 0x14;
    iVar10 = 1;
    pIVar2->field_0184 = puVar4;
    uVar5 = FUN_006b4fe0((int)puVar4);
    puVar6 = (ushort *)
             FUN_006b50c0((-(uint)(DAT_0080874e != '\x03') & 0x32) + 700,0x14,
                          (uint)pIVar2->field_0184[7],uVar5,(undefined4 *)puVar6,iVar10);
    pIVar2->field_019C = puVar6;
    DibPut((RecoveredSourceFamily_dibcopy *)pIVar2->field_0068,0,0,'\x01',(byte *)pIVar2->field_0184
          );
    pDVar7 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    pIVar2->field_0198 = pDVar7;
    Library::DKW::TBL::FUN_006b6020(pDVar7,0,&CHAR_00h_008016a0);
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

