
void __thiscall cLoadingTy::DrawLine(cLoadingTy *this,uint *param_1)

{
  code *pcVar1;
  cLoadingTy *pcVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  cLoadingTy *pcStack_8;
  
  pcStack_8 = this;
  thunk_FUN_00555570((int)this);
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  pcVar2 = pcStack_8;
  if (iVar3 == 0) {
    FUN_006b4170(*(int *)(pcStack_8 + 4),0,*(int *)(pcStack_8 + 0x14) + *(int *)(pcStack_8 + 0xc),
                 *(int *)(pcStack_8 + 0x10) + *(int *)(pcStack_8 + 0x18),*(int *)(pcStack_8 + 0x1c),
                 *(int *)(pcStack_8 + 0x34),0);
    ccFntTy::WrStr(*(ccFntTy **)(pcVar2 + 8),param_1,*(int *)(pcVar2 + 0xc),*(int *)(pcVar2 + 0x10),
                   *(undefined4 *)(pcVar2 + 0x24));
    FUN_006b42d0((uint)DAT_0080759c,*(int *)(pcVar2 + 0xc) + *(int *)(pcVar2 + 0x14),
                 *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(BITMAPINFO **)pcVar2,
                 (uint *)0x0,*(int *)(pcVar2 + 0xc) + *(int *)(pcVar2 + 0x14),
                 *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(DWORD *)(pcVar2 + 0x1c),
                 *(DWORD *)(pcVar2 + 0x34));
    FUN_006b4680(DAT_0080759c,*(int *)(pcVar2 + 0x14) + *(int *)(pcVar2 + 0xc),
                 *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(BITMAPINFO **)(pcVar2 + 4),
                 (uint *)0x0,*(int *)(pcVar2 + 0x14) + *(int *)(pcVar2 + 0xc),
                 *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(DWORD *)(pcVar2 + 0x1c),
                 *(DWORD *)(pcVar2 + 0x34),0);
    FUN_006bb370((int)DAT_0080759c,0,0);
    if (*(code **)(pcVar2 + 0x58) != (code *)0x0) {
      (**(code **)(pcVar2 + 0x58))(*(undefined4 *)(pcVar2 + 0x54));
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_grig_loading_cpp_007c8f0c,0xcc,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c8f0c,0xcd);
  return;
}

