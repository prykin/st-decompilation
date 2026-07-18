
int FUN_006da080(int *param_1,int param_2,int param_3,int param_4,int param_5,byte *param_6,
                int param_7,int param_8,int param_9,byte *param_10,undefined1 *param_11)

{
  int iVar1;
  int iVar2;
  int local_2c [3];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079df38;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar2 = 0;
  local_2c[0] = 0;
  local_20 = 0;
  ExceptionList = &local_14;
  do {
    iVar1 = FUN_006bbe40((int *)param_1[0x73],local_2c,&local_20,0x10);
    if (iVar1 == 0) goto LAB_006da0f3;
    if (iVar1 != -0x7789fe3e) break;
    (**(code **)(*(int *)param_1[0x73] + 0x6c))((int *)param_1[0x73]);
    FUN_006cec40(*param_1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  if (iVar1 == 0) {
LAB_006da0f3:
    local_2c[0] = local_2c[0] + local_20 * param_5 + param_4;
    local_8 = 0;
    FUN_006da1a0(param_2,param_3,local_2c[0],local_20,param_6,param_7,param_8,param_9,param_10,
                 param_11);
    local_8 = 0xffffffff;
    (**(code **)(*(int *)param_1[0x73] + 0x80))((int *)param_1[0x73],0);
  }
  if ((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) {
    ExceptionList = local_14;
    return iVar1;
  }
  ExceptionList = local_14;
  return 0;
}

