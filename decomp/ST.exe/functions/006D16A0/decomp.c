
undefined4 *
FUN_006d16a0(undefined4 *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
            int param_7,int param_8,int param_9,uint param_10,int param_11,int param_12)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  uint local_248 [2];
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  uint local_228;
  ushort local_224 [258];
  uint *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_12;
  iVar3 = param_11;
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079dab0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffd98;
  if (((param_1 != (undefined4 *)0x0) && (param_5 != *(ushort *)((int)param_1 + 0xe))) ||
     (param_10 != *(ushort *)(param_6 + 0xe))) {
    ExceptionList = &local_14;
    local_1c = &stack0xfffffd98;
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7ee1e4,0x19);
    ExceptionList = local_14;
    return (undefined4 *)0x0;
  }
  local_240 = 0;
  ExceptionList = &local_14;
  puVar2 = &stack0xfffffd98;
  if (param_1 == (undefined4 *)0x0) {
    ExceptionList = &local_14;
    param_1 = FUN_006d10f0(param_11,param_12,param_5,(param_5 != 0x10) - 1 & 3,1);
    if (param_1 == (undefined4 *)0x0) {
      ExceptionList = local_14;
      return (undefined4 *)0x0;
    }
    param_4 = 0;
    param_3 = 0;
    param_2 = FUN_006b4fa0((int)param_1);
    local_240 = 1;
    puVar2 = local_1c;
  }
  local_1c = puVar2;
  iVar4 = param_8;
  iVar6 = param_6;
  local_258 = param_8;
  local_254 = param_9;
  local_250 = iVar3;
  local_24c = iVar1;
  local_23c = param_3;
  local_238 = param_4;
  local_234 = iVar3;
  local_230 = iVar1;
  iVar3 = FUN_006d0680((int)param_1,&local_23c,&local_228,param_6,&local_258,local_248);
  if (iVar3 == 0) {
    if (local_240 != 0) {
      FUN_006ab060(&param_1);
      ExceptionList = local_14;
      return param_1;
    }
  }
  else {
    if (param_7 == 0) {
      param_7 = FUN_006b4fa0(iVar6);
    }
    if (param_2 == 0) {
      param_2 = FUN_006b4fa0((int)param_1);
    }
    if ((int)local_248[0] < 0) {
      iVar4 = iVar4 * param_10;
      iVar3 = ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) - (param_9 + -1 + iVar1) * local_248[0];
    }
    else {
      iVar4 = iVar4 * param_10;
      iVar3 = ((*(int *)(iVar6 + 8) - param_9) - iVar1) * local_248[0] +
              ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3);
    }
    if ((int)local_228 < 0) {
      iVar6 = ((int)(param_3 * param_5 + ((int)(param_3 * param_5) >> 0x1f & 7U)) >> 3) -
              (param_4 + -1 + iVar1) * local_228;
    }
    else {
      iVar6 = ((param_1[2] - param_4) - iVar1) * local_228 +
              ((int)(param_3 * param_5 + ((int)(param_3 * param_5) >> 0x1f & 7U)) >> 3);
    }
    local_8 = 0;
    if (param_5 == 0x10) {
      if (param_1[4] == 3) {
        puVar5 = param_1 + 10;
      }
      else {
        puVar5 = (uint *)0x0;
      }
      local_20 = puVar5;
      if (param_10 == 8) {
        iVar4 = FUN_006b4fe0(param_6);
        FUN_006d14c0(local_224,param_6 + 0x28,iVar4,puVar5);
        FUN_006d05b0((undefined4 *)(iVar6 + param_2),local_228,(uint *)(iVar3 + param_7),
                     local_248[0],param_11,iVar1,(int)local_224);
        ExceptionList = local_14;
        return param_1;
      }
      if (param_10 == 0x18) {
        FUN_006da4f0((ushort *)(iVar6 + param_2),local_228,(byte *)(iVar3 + param_7),local_248[0],
                     param_11,iVar1,puVar5);
        ExceptionList = local_14;
        return param_1;
      }
    }
    else if (param_5 == 0x18) {
      FUN_006d3a50((undefined2 *)(iVar6 + param_2),local_228,(byte *)(iVar3 + param_7),local_248[0],
                   param_11,iVar1,param_6 + 0x28);
    }
  }
  ExceptionList = local_14;
  return param_1;
}

