
void thunk_FUN_0053f3a0(int param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x1bf,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7c7870,0x1bf);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  sVar1 = *(short *)((int)piStack_8 + 0x172);
  if (sVar1 == 1) {
    if (param_1 != 0) {
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    (**(code **)(*piStack_8 + 0x18))(0);
  }
  else {
    if (sVar1 == 2) {
      if (param_1 == 0) {
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      }
      *(undefined2 *)((int)piStack_8 + 0x172) = 3;
      thunk_FUN_005252c0(0xaf);
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      }
      thunk_FUN_004fa570(DAT_00801688,*(int *)((int)piStack_8 + 0x195),0);
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    if (sVar1 != 3) {
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
  }
  if (param_1 == 0) {
    *(undefined2 *)((int)piStack_8 + 0x172) = 4;
    thunk_FUN_005252c0(0xb0);
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return;
}

