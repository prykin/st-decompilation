
undefined4 __fastcall FUN_004e4f30(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1[0x16b] != 0x5d) && (param_1[0x16b] != 0x3d)) {
    return 0;
  }
  if (param_1[0x138] != 0) {
    thunk_FUN_0041d100(param_1);
    param_1[0x138] = 0;
  }
  if (param_1[9] != *(int *)((int)param_1 + 0x23d)) {
    uVar2 = thunk_FUN_004406c0((char)*(int *)((int)param_1 + 0x23d));
    iVar4 = *(int *)((int)param_1 + 0x235);
    uVar3 = thunk_FUN_004406c0((char)param_1[9]);
    if ((&DAT_007e1984)[(uVar3 & 0xff) + ((uVar2 & 0xff) + iVar4 * 3) * 3] == '\0')
    goto LAB_004e4ffe;
  }
  if ((param_1[0x16b] != 0x5d) || (iVar4 = thunk_FUN_004e60d0(param_1[9],0x46), iVar4 != 0)) {
    thunk_FUN_0041cff0(param_1,*(int *)(&DAT_00798fbc + *(int *)((int)param_1 + 0x239) * 4));
    param_1[0x138] = 1;
  }
LAB_004e4ffe:
  if (param_1[0x16b] == 0x5d) {
    iVar4 = 0x4a;
  }
  else if ((param_1[0x16b] == 0x3d) &&
          (iVar4 = thunk_FUN_004406c0((char)param_1[9]), (char)iVar4 == '\x01')) {
    iVar4 = 0x12;
  }
  else {
    iVar4 = 0;
  }
  if (param_1[0x139] != 0) {
    thunk_FUN_0041d2b0(param_1);
    param_1[0x139] = 0;
  }
  if (param_1[9] != *(int *)((int)param_1 + 0x23d)) {
    uVar2 = thunk_FUN_004406c0((char)*(int *)((int)param_1 + 0x23d));
    iVar1 = *(int *)((int)param_1 + 0x235);
    uVar3 = thunk_FUN_004406c0((char)param_1[9]);
    if ((&DAT_007e1984)[(uVar3 & 0xff) + ((uVar2 & 0xff) + iVar1 * 3) * 3] == '\0') {
      return 0;
    }
  }
  if ((iVar4 != 0) && (iVar4 = thunk_FUN_004e60d0(param_1[9],iVar4), iVar4 == 0)) {
    return 0;
  }
  thunk_FUN_0041d1a0(param_1,10);
  param_1[0x139] = 1;
  return 0;
}

