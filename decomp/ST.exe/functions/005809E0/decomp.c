
undefined4 __cdecl FUN_005809e0(short param_1,short param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  short sVar3;
  undefined3 extraout_var;
  int iVar4;
  short sVar5;
  
  sVar5 = (short)param_3;
  bVar2 = thunk_FUN_004961b0(param_1,param_2,sVar5);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if (param_3 != 0) {
    sVar3 = sVar5 + -1;
    if (param_1 < 0) {
      return 1;
    }
    if ((((param_1 < DAT_007fb240) && (-1 < param_2)) && (param_2 < DAT_007fb242)) &&
       (((-1 < sVar3 && (sVar3 < DAT_007fb244)) &&
        (*(short *)(DAT_007fb280 +
                   ((int)DAT_007fb27e * (int)sVar3 + (int)DAT_007fb278 * (int)param_2 + (int)param_1
                   ) * 2) != -1)))) {
      return 0;
    }
  }
  if (((param_1 < 0) || (DAT_007fb240 <= param_1)) ||
     (((param_2 < 0 || (((DAT_007fb242 <= param_2 || (sVar5 < 0)) || (DAT_007fb244 <= sVar5)))) ||
      (piVar1 = *(int **)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)param_2 +
                         (int)param_1) * 8), piVar1 == (int *)0x0)))) {
    return 1;
  }
  iVar4 = (**(code **)(*piVar1 + 0x2c))();
  if (iVar4 != 0x39) {
    if (iVar4 == 0x4f) {
      if (param_4 != 0xde) {
        return 0;
      }
      return 1;
    }
    if (iVar4 != 0x5e) {
      return 0;
    }
  }
  if (param_4 != 0xdd) {
    return 0;
  }
  return 1;
}

