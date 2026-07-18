
undefined4 __fastcall FUN_004e4b60(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  switch(*(undefined4 *)((int)param_1 + 0x245)) {
  case 0:
    if ((param_1[0x16b] == 0x36) || (param_1[0x16b] == 0x5d)) {
      if (param_1[9] != *(int *)((int)param_1 + 0x23d)) {
        uVar1 = thunk_FUN_004406c0((char)*(int *)((int)param_1 + 0x23d));
        iVar3 = *(int *)((int)param_1 + 0x235);
        uVar2 = thunk_FUN_004406c0((char)param_1[9]);
        if ((&DAT_007e1984)[(uVar2 & 0xff) + (iVar3 * 3 + (uVar1 & 0xff)) * 3] == '\0') {
          return 0;
        }
      }
      if (param_1[0x137] == 0) {
        iVar3 = thunk_FUN_004e60d0(param_1[9],
                                   *(int *)(&DAT_00798fb0 + *(int *)((int)param_1 + 0x239) * 4));
        iVar3 = *(int *)(&DAT_00798f98 + (iVar3 + *(int *)((int)param_1 + 0x239) * 2) * 4);
        param_1[0x134] = iVar3;
        thunk_FUN_0041ce40(param_1,iVar3);
        param_1[0x137] = 1;
        return 0;
      }
    }
    break;
  case 1:
  case 2:
  case 6:
    if ((((param_1[0x16b] == 0x36) || (param_1[0x16b] == 0x5d)) && (0 < param_1[0x134])) &&
       (param_1[0x137] != 0)) {
      thunk_FUN_0041cf50(param_1);
      param_1[0x137] = 0;
    }
    if ((param_1[0x16b] == 0x3d) || (param_1[0x16b] == 0x5d)) {
      if (param_1[0x138] != 0) {
        thunk_FUN_0041d100(param_1);
        param_1[0x138] = 0;
      }
      if (param_1[0x139] != 0) {
        thunk_FUN_0041d2b0(param_1);
        param_1[0x139] = 0;
      }
    }
  }
  return 0;
}

