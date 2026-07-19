
void __thiscall IntercomPanelTy::InitIntercomPanel(IntercomPanelTy *this)

{
  code *pcVar1;
  IntercomPanelTy *pIVar2;
  int iVar3;
  undefined4 *puVar4;
  LPSTR pCVar5;
  ushort *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  void *unaff_ESI;
  int *piVar11;
  ushort *puVar12;
  InternalExceptionFrame *pIVar13;
  undefined4 auStack_48 [16];
  IntercomPanelTy *pIStack_8;
  
  pIVar13 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pIStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,pIVar13);
  pIVar2 = pIStack_8;
  if (iVar3 == 0) {
    DAT_0080169c = pIStack_8;
    puVar4 = FUN_0070df00(0x19d,*(int *)(DAT_00802a28 + 0x30));
    *(undefined4 **)(pIVar2 + 0x180) = puVar4;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    iVar3 = 1;
    piVar11 = (int *)0x0;
    pCVar5 = thunk_FUN_00571240(s_BKG_EDITCHAT_007c40a0,0);
    puVar6 = FUN_006f1ce0(1,pCVar5,piVar11,iVar3);
    puVar12 = puVar6 + 0x14;
    iVar3 = 1;
    *(ushort **)(pIVar2 + 0x184) = puVar6;
    uVar7 = FUN_006b4fe0((int)puVar6);
    uVar8 = FUN_006b50c0((-(uint)(DAT_0080874e != '\x03') & 0x32) + 700,0x14,
                         (uint)*(ushort *)(*(int *)(pIVar2 + 0x184) + 0xe),uVar7,
                         (undefined4 *)puVar12,iVar3);
    *(undefined4 *)(pIVar2 + 0x19c) = uVar8;
    thunk_FUN_00540760(*(undefined4 **)(pIVar2 + 0x68),0,0,'\x01',*(byte **)(pIVar2 + 0x184));
    puVar9 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(pIVar2 + 0x198) = puVar9;
    FUN_006b6020((int)puVar9,0,&DAT_008016a0);
    g_currentExceptionFrame = pIVar13;
    return;
  }
  g_currentExceptionFrame = pIVar13;
  iVar10 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x34,0,iVar3,&DAT_007a4ccc,
                              s_IntercomPanelTy__InitIntercomPan_007c4074);
  if (iVar10 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x34);
  return;
}

