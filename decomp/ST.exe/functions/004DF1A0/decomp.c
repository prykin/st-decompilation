
undefined4 __fastcall FUN_004df1a0(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  iVar1 = *(int *)(&DAT_007f580e + *(int *)(param_1 + 0x24) * 0xa62);
  if (iVar1 != 0) {
    uVar2 = 0;
    local_8 = param_1;
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        FUN_006acc70(iVar1,uVar2,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70(*(int *)(&DAT_007f580e + *(int *)(param_1 + 0x24) * 0xa62),uVar2);
          break;
        }
        uVar2 = uVar2 + 1;
        iVar1 = *(int *)(&DAT_007f580e + *(int *)(param_1 + 0x24) * 0xa62);
      } while ((int)uVar2 < *(int *)(iVar1 + 0xc));
    }
    if (*(int *)(*(byte **)(&DAT_007f580e + *(int *)(param_1 + 0x24) * 0xa62) + 0xc) == 0) {
      FUN_006ae110(*(byte **)(&DAT_007f580e + *(int *)(param_1 + 0x24) * 0xa62));
      *(undefined4 *)(&DAT_007f580e + *(int *)(param_1 + 0x24) * 0xa62) = 0;
    }
  }
  return 0;
}

