
void thunk_FUN_005aafb0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    if (-1 < (int)*(uint *)(iStack_8 + 3)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(iStack_8 + 3));
    }
    *(undefined4 *)(iStack_8 + 3) = 0xffffffff;
    if (*(int *)(iStack_8 + 0xb) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 0xb));
    }
    if (*(int *)(iStack_8 + 7) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 7));
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_hologram_cpp_007cc674,0xaa,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cc674,0xaa);
  return;
}

