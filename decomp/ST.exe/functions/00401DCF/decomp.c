
void __thiscall IntercomPanelTy::SwitchIntercomPanel(IntercomPanelTy *this,IntercomPanelTy param_1)

{
  short sVar1;
  code *pcVar2;
  IntercomPanelTy *pIVar3;
  int iVar4;
  int iVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 auStack_48 [16];
  IntercomPanelTy *pIStack_8;
  
  uVar6 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pIStack_8 = this;
  iVar4 = __setjmp3(auStack_48,0,unaff_ESI,uVar6);
  pIVar3 = pIStack_8;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined1 *)uVar6;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_intercom_cpp_007c401c,0x13b,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c401c,0x13b);
    return;
  }
  sVar1 = *(short *)(pIStack_8 + 0x172);
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      *(undefined2 *)(pIStack_8 + 0x172) = 3;
      pIStack_8[0x1a4] = param_1;
      iVar4 = 0xaf;
      goto LAB_00522dd6;
    }
    if (sVar1 != 3) {
      DAT_00858df8 = (undefined1 *)uVar6;
      return;
    }
  }
  *(undefined2 *)(pIStack_8 + 0x172) = 4;
  if (*(uint *)(pIStack_8 + 0x1a0) != 0) {
    FUN_006e56b0(*(void **)(pIStack_8 + 0xc),*(uint *)(pIStack_8 + 0x1a0));
  }
  *(undefined4 *)(pIVar3 + 0x1a0) = 0;
  iVar4 = 0xb0;
LAB_00522dd6:
  thunk_FUN_005252c0(iVar4);
  DAT_00858df8 = (undefined1 *)uVar6;
  return;
}

