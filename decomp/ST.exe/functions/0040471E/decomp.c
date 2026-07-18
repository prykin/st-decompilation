
void __thiscall SettMapMTy::RunGame(SettMapMTy *this)

{
  code *pcVar1;
  SettMapMTy *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  SettMapMTy *pSStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pSStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,unaff_EBX);
  if (iVar3 == 0) {
    if (DAT_0080877e != '\0') {
      FUN_006b7070(DAT_00811764);
    }
    pSVar2 = pSStack_8;
    thunk_FUN_005b6350(pSStack_8,0x6948,0,0);
    pSVar2[0x21e6] = (SettMapMTy)0x1;
    pSVar2[0x21e5] = (SettMapMTy)0x1;
    pSVar2[0x21e4] = (SettMapMTy)0x1;
    pSVar2[0x21e7] = (SettMapMTy)0x1;
    pSVar2[0x21e2] = (SettMapMTy)0x1;
    pSVar2[0x21e1] = (SettMapMTy)0x1;
    (**(code **)(*(int *)pSVar2 + 8))();
    if (*(MMsgTy **)(*(int *)(pSVar2 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(pSVar2 + 0x1a5b) + 0x2e6),1,0,1);
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x998,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cd258,0x998);
  return;
}

