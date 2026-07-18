
void __thiscall HelpPanelTy::MObjProc(HelpPanelTy *this)

{
  HelpPanelTy HVar1;
  code *pcVar2;
  HelpPanelTy *pHVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  HelpPanelTy *pHStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pHStack_8 = this;
  iVar4 = __setjmp3(auStack_48,0,unaff_ESI,unaff_EBX);
  pHVar3 = pHStack_8;
  if (iVar4 == 0) {
    HVar1 = pHStack_8[0x1a1];
    if (((HVar1 == (HelpPanelTy)0x0) || (HVar1 == (HelpPanelTy)0x6)) || (HVar1 == (HelpPanelTy)0xa))
    {
      pHStack_8[0x1a2] = HVar1;
      *(undefined4 *)(pHStack_8 + 0x1ab) = *(undefined4 *)(pHStack_8 + 0x1a3);
    }
    else {
      pHStack_8[0x1a2] = (HelpPanelTy)0x0;
      *(undefined4 *)(pHStack_8 + 0x1ab) = 0;
    }
    pHStack_8[0x1a1] = (HelpPanelTy)0x7;
    *(undefined4 *)(pHStack_8 + 0x1a7) = 0;
    *(undefined4 *)(pHStack_8 + 0x1a3) = 0;
    *(undefined2 *)(pHStack_8 + 0x1af) = 0;
    *(undefined2 *)(pHStack_8 + 0x1b1) = 0;
    if (*(int *)(pHStack_8 + 0x178) != 0) {
      *(undefined4 *)(pHStack_8 + 0x28) = 0x4202;
      *(undefined2 *)(pHStack_8 + 0x2c) = 0;
      *(undefined2 *)(pHStack_8 + 0x2e) = 2;
      *(int *)(pHStack_8 + 0x30) = *(int *)(pHStack_8 + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(pHStack_8 + 0x18);
      }
    }
    if (*(uint *)(pHVar3 + 0x19c) != 0) {
      FUN_006e56b0(*(void **)(pHVar3 + 0xc),*(uint *)(pHVar3 + 0x19c));
    }
    thunk_FUN_00512be0(*(int *)(pHVar3 + 0x1d3));
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x46e,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7c383c,0x46e);
  return;
}

