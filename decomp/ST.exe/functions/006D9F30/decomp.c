
int FUN_006d9f30(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_1[0x71] < param_4) || (param_1[0x72] < param_5)) {
    piVar1 = (int *)param_1[0x73];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (param_1[0x71] < param_4) {
      param_1[0x71] = param_4;
    }
    if (param_1[0x72] < param_5) {
      param_1[0x72] = param_5;
    }
    iVar2 = FUN_006bb6c0(*param_1,param_1 + 0x73,param_1[0x71],param_1[0x72],-1,0x800);
    if (iVar2 != 0) {
      param_1[0x71] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      return iVar2;
    }
  }
  local_24 = 0;
  local_20 = 0;
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_2 + param_4;
  local_8 = param_3 + param_5;
  local_1c = param_4;
  local_18 = param_5;
  iVar2 = 0;
  while (iVar3 = (**(code **)(*(int *)param_1[0x73] + 0x14))
                           ((int *)param_1[0x73],&local_24,*(undefined4 *)(*param_1 + 0x44),
                            &local_14,0x1000000,0), iVar3 != 0) {
    if (iVar3 == -0x7789fe3e) {
      (**(code **)(*(int *)param_1[0x73] + 0x6c))((int *)param_1[0x73]);
      FUN_006cec40(*param_1);
    }
    else {
      if (((iVar3 != -0x7789ff60) && (iVar3 != -0x7789fe52)) || (iVar2 != 0)) break;
      Sleep(2);
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
  }
  if ((iVar3 != -0x7789ff60) && (iVar3 != -0x7789fe52)) {
    return iVar3;
  }
  return 0;
}

