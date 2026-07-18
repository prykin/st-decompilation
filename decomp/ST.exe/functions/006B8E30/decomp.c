
int FUN_006b8e30(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar2 = 0;
  if (*(int *)(*param_1 + 0x40) == 0) {
    return 0;
  }
  local_c = param_1[6];
  local_8 = param_1[7];
  local_10 = 0;
  local_24 = param_1[4];
  local_14 = 0;
  local_20 = param_1[5];
  local_1c = param_1[6] + local_24;
  local_18 = param_1[7] + local_20;
  while( true ) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 0x40) + 0x14))
                      (*(int **)(*param_1 + 0x40),&local_24,param_1[0xf],&local_14,0x1000000,0);
    if (iVar1 == 0) break;
    if (iVar1 == -0x7789fe3e) {
      (**(code **)(*(int *)param_1[0xf] + 0x6c))((int *)param_1[0xf]);
      FUN_006cec40(*param_1);
    }
    else {
      if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (iVar2 != 0)) break;
      Sleep(2);
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
  }
  if ((iVar1 == -0x7789ff60) || (iVar1 == -0x7789fe52)) {
    iVar1 = 0;
  }
  param_1[1] = param_1[1] & 0xffffbfff;
  return iVar1;
}

