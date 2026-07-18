
undefined4 __cdecl
FUN_004b1fb0(int param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0xe2) {
    if (param_2 != (int *)0x0) {
      *param_2 = 1;
    }
    iVar1 = param_7 + param_5;
    iVar3 = 0;
    for (; param_5 < iVar1; param_5 = param_5 + 1) {
      if ((-1 < param_5) && (param_5 < DAT_007fb242)) {
        for (iVar2 = param_4; iVar2 < param_6 + param_4; iVar2 = iVar2 + 1) {
          if ((-1 < iVar2) && (iVar2 < DAT_007fb240)) {
            iVar3 = iVar3 + (uint)*(byte *)(DAT_007fb240 * param_5 + DAT_007fa168 + iVar2);
          }
        }
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar3;
      return 0;
    }
  }
  else if (DAT_007fa150 != 0) {
    *(undefined4 *)(DAT_007fa150 + 4) = 0;
    iVar3 = FUN_006b1190(DAT_007fa150,&local_18);
    while (-1 < iVar3) {
      if (((local_18 != (int *)0x0) && (iVar3 = (**(code **)(*local_18 + 0x2c))(), iVar3 == param_1)
          ) && (((thunk_FUN_004162b0(local_18,&local_8,&local_6,&local_a), param_4 < 0 ||
                 (((param_5 < 0 || (param_6 < 0)) || (param_7 < 0)))) ||
                ((((param_4 <= local_8 && ((int)local_8 < param_6 + param_4)) &&
                  (param_5 <= local_6)) && ((int)local_6 < param_7 + param_5)))))) {
        local_1c = local_1c + 1;
        if (((local_8 < 0) || (DAT_007fb240 <= local_8)) ||
           ((local_6 < 0 ||
            (((DAT_007fb242 <= local_6 || (local_a < 0)) || (DAT_007fb244 <= local_a)))))) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = *(int **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)local_a + (int)DAT_007fb240 * (int)local_6 +
                            (int)local_8) * 8);
        }
        switch(param_1) {
        case 0x5e:
        case 0xdd:
          local_10 = 0x39;
          break;
        case 0x61:
          local_10 = 0xe0;
          break;
        case 0xdc:
          local_10 = 0x38;
          break;
        case 0xde:
          local_10 = 0x4f;
        }
        if (((piVar4 == (int *)0x0) || (piVar4[8] != 1000)) ||
           (iVar3 = (**(code **)(*piVar4 + 0x2c))(), iVar3 != local_10)) {
          local_14 = local_14 + *(int *)((int)local_18 + 0x259);
        }
        else {
          iVar3 = (**(code **)(*piVar4 + 0x88))(0);
          local_14 = local_14 + iVar3;
        }
      }
      iVar3 = FUN_006b1190(DAT_007fa150,&local_18);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_1c;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_14;
    }
  }
  return 0;
}

