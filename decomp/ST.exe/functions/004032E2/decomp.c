
undefined4 __fastcall thunk_FUN_004e4520(int param_1)

{
  int iVar1;
  uint uVar2;
  int iStack_8;
  
  iVar1 = *(int *)(&DAT_007f57f6 + *(int *)(param_1 + 0x24) * 0xa62);
  if (iVar1 != 0) {
    uVar2 = 0;
    iStack_8 = param_1;
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        FUN_006acc70(iVar1,uVar2,&iStack_8);
        if (iStack_8 == param_1) {
          FUN_006b0c70(*(int *)(&DAT_007f57f6 + *(int *)(param_1 + 0x24) * 0xa62),uVar2);
          break;
        }
        uVar2 = uVar2 + 1;
        iVar1 = *(int *)(&DAT_007f57f6 + *(int *)(param_1 + 0x24) * 0xa62);
      } while ((int)uVar2 < *(int *)(iVar1 + 0xc));
    }
    if (*(int *)(*(byte **)(&DAT_007f57f6 + *(int *)(param_1 + 0x24) * 0xa62) + 0xc) == 0) {
      FUN_006ae110(*(byte **)(&DAT_007f57f6 + *(int *)(param_1 + 0x24) * 0xa62));
      *(undefined4 *)(&DAT_007f57f6 + *(int *)(param_1 + 0x24) * 0xa62) = 0;
    }
  }
  return 0;
}

