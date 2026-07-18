
undefined4 __fastcall FUN_0063cb30(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x266) < 0) {
    *(undefined4 *)(param_1 + 0x266) = 0;
    return 2;
  }
  if (*(int *)(param_1 + 0x26a) < 0) {
    *(undefined4 *)(param_1 + 0x26a) = 0;
    return 2;
  }
  if (*(int *)(param_1 + 0x26e) < 0x5a) {
    *(undefined4 *)(param_1 + 0x26e) = 0x5a;
    return 2;
  }
  uVar1 = *(int *)(param_1 + 0x266) - (int)*(short *)(param_1 + 0x253);
  uVar3 = (int)uVar1 >> 0x1f;
  if ((((int)((uVar1 ^ uVar3) - uVar3) < 6) &&
      (uVar1 = *(int *)(param_1 + 0x26a) - (int)*(short *)(param_1 + 0x255),
      uVar3 = (int)uVar1 >> 0x1f, (int)((uVar1 ^ uVar3) - uVar3) < 6)) &&
     ((uVar1 = *(int *)(param_1 + 0x26e) - *(int *)(param_1 + 0x282), uVar3 = (int)uVar1 >> 0x1f,
      iVar2 = (uVar1 ^ uVar3) - uVar3, iVar2 < 6 || (iVar2 < 0x97)))) {
    return 3;
  }
  return 0;
}

