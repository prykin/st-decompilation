
undefined4 __fastcall FUN_004ce860(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  iVar1 = *(int *)(&DAT_007f57fe + *(int *)(param_1 + 0x24) * 0xa62);
  if ((iVar1 != 0) && (uVar2 = 0, local_8 = param_1, 0 < *(int *)(iVar1 + 0xc))) {
    while( true ) {
      FUN_006acc70(iVar1,uVar2,&local_8);
      if (*(int *)(local_8 + 0x4dc + *(int *)(param_1 + 0x369) * 4) != 0) break;
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(&DAT_007f57fe + *(int *)(param_1 + 0x24) * 0xa62);
      if (*(int *)(iVar1 + 0xc) <= (int)uVar2) {
        return 0;
      }
    }
    *(int *)(local_8 + 0x4dc + *(int *)(param_1 + 0x369) * 4) =
         *(int *)(local_8 + 0x4dc + *(int *)(param_1 + 0x369) * 4) + -1;
    *(int *)(param_1 + 0x398) = (*(int *)(param_1 + 0x398) * 0x32) / 100;
    *(int *)(param_1 + 0x39c) = (*(int *)(param_1 + 0x39c) * 0x32) / 100;
    *(int *)(param_1 + 0x3a0) = (*(int *)(param_1 + 0x3a0) * 0x32) / 100;
    *(int *)(param_1 + 0x3a4) = (*(int *)(param_1 + 0x3a4) * 0x32) / 100;
  }
  return 0;
}

