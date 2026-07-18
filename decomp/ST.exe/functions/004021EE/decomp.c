
void __thiscall IntercomPanelTy::DoneIntercomPanel(IntercomPanelTy *this)

{
  code *pcVar1;
  IntercomPanelTy *pIVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  IntercomPanelTy *pIStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pIStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pIVar2 = pIStack_8;
  if (iVar3 == 0) {
    if (*(byte **)(pIStack_8 + 0x198) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pIStack_8 + 0x198));
      *(undefined4 *)(pIVar2 + 0x198) = 0;
    }
    if (*(uint *)(pIVar2 + 0x1a0) != 0) {
      FUN_006e56b0(*(void **)(pIVar2 + 0xc),*(uint *)(pIVar2 + 0x1a0));
    }
    *(undefined4 *)(pIVar2 + 0x1a0) = 0;
    DAT_0080169c = 0;
    if (*(uint **)(pIVar2 + 0x180) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pIVar2 + 0x180));
      *(undefined4 *)(pIVar2 + 0x180) = 0;
    }
    if (*(int *)(pIVar2 + 0x184) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pIVar2 + 0x184));
    }
    if (*(int *)(pIVar2 + 0x19c) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pIVar2 + 0x19c));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_intercom_cpp_007c401c,0x4a,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c401c,0x4a);
  return;
}

