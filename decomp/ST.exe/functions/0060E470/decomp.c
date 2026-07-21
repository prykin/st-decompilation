
undefined4 __cdecl
FUN_0060e470(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,undefined4 param_9,int *param_10,int *param_11,int *param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;

  iVar1 = param_4;
  if (0x22a748 <
      (param_8 - param_5) * (param_8 - param_5) + (param_7 - param_4) * (param_7 - param_4)) {
    *param_10 = param_4;
    *param_11 = param_5;
    *param_12 = param_6;
    return 0;
  }
  if (0x22a749 <
      (param_8 - param_2) * (param_8 - param_2) + (param_7 - param_1) * (param_7 - param_1)) {
    iVar4 = (param_4 - param_1) / 2 + param_1;
    iVar5 = (param_5 - param_2) / 2 + param_2;
    iVar3 = (param_6 - param_3) / 2 + param_3;
    local_8 = param_3;
    param_4 = 3;
    param_3 = iVar1;
    do {
      iVar1 = iVar4;
      iVar2 = iVar5;
      if (0x22a749 < (iVar5 - param_8) * (iVar5 - param_8) + (iVar4 - param_7) * (iVar4 - param_7))
      {
        iVar1 = param_1;
        iVar2 = param_2;
        param_3 = iVar4;
        param_5 = iVar5;
        param_6 = iVar3;
        iVar3 = local_8;
      }
      local_8 = iVar3;
      param_2 = iVar2;
      param_1 = iVar1;
      iVar4 = (param_1 - param_3) / 2 + param_3;
      iVar5 = (param_2 - param_5) / 2 + param_5;
      iVar3 = (local_8 - param_6) / 2 + param_6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    *param_10 = iVar4;
    *param_11 = iVar5;
    *param_12 = iVar3;
    return 1;
  }
  *param_10 = ((int)((param_4 - param_1) + (param_4 - param_1 >> 0x1f & 7U)) >> 3) + param_1;
  *param_11 = ((int)((param_5 - param_2) + (param_5 - param_2 >> 0x1f & 7U)) >> 3) + param_2;
  *param_12 = ((int)((param_6 - param_3) + (param_6 - param_3 >> 0x1f & 7U)) >> 3) + param_3;
  return 1;
}

