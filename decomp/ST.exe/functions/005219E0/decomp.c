
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::InitIntercomPanel */

void __thiscall IntercomPanelTy::InitIntercomPanel(IntercomPanelTy *this)

{
  code *pcVar1;
  IntercomPanelTy *pIVar2;
  int iVar3;
  undefined4 *puVar4;
  LPSTR text;
  ushort *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  void *unaff_ESI;
  int *piVar10;
  ushort *puVar11;
  InternalExceptionFrame *pIVar12;
  undefined4 local_48 [16];
  IntercomPanelTy *local_8;
  
  pIVar12 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar12);
  pIVar2 = local_8;
  if (iVar3 == 0) {
    g_intercomPanel_0080169C = local_8;
    puVar4 = ccFntTy::operator(*(ccFntTy **)(DAT_00802a28 + 0x30),0x19d,
                               (int)*(ccFntTy **)(DAT_00802a28 + 0x30));
    pIVar2->field_0180 = puVar4;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    iVar3 = 1;
    piVar10 = (int *)0x0;
    text = thunk_FUN_00571240(s_BKG_EDITCHAT_007c40a0,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,text,piVar10,iVar3);
    puVar11 = puVar5 + 0x14;
    iVar3 = 1;
    pIVar2->field_0184 = puVar5;
    uVar6 = FUN_006b4fe0((int)puVar5);
    uVar7 = FUN_006b50c0((-(uint)(DAT_0080874e != '\x03') & 0x32) + 700,0x14,
                         (uint)pIVar2->field_0184[7],uVar6,(undefined4 *)puVar11,iVar3);
    pIVar2->field_019C = uVar7;
    DibPut((undefined4 *)pIVar2->field_0068,0,0,'\x01',(byte *)pIVar2->field_0184);
    puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    pIVar2->field_0198 = puVar8;
    Library::DKW::TBL::FUN_006b6020(puVar8,0,&DAT_008016a0);
    g_currentExceptionFrame = pIVar12;
    return;
  }
  g_currentExceptionFrame = pIVar12;
  iVar9 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x34,0,iVar3,&DAT_007a4ccc,
                             s_IntercomPanelTy__InitIntercomPan_007c4074);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x34);
  return;
}

