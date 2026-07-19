
int FUN_006b8f10(byte *param_1,int *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 local_b4;
  undefined4 local_b0;
  byte *local_ac;
  uint local_a8;
  int local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte *local_8;
  
  pbVar2 = param_1;
  if (*(int *)(*(int *)param_1 + 0x40) == 0) {
    return 0;
  }
  param_2[3] = 0;
  param_2[2] = 0;
  if ((*(uint *)(param_1 + 4) & 0x8000) != 0) {
    *param_2 = *(int *)(param_1 + 0x10);
    param_2[1] = *(int *)(param_1 + 0x14);
    param_2[2] = *(int *)(param_1 + 0x18);
    param_2[3] = *(int *)(param_1 + 0x1c);
  }
  if (((*(uint *)(param_1 + 4) & 0x4000) != 0) && (iVar3 = FUN_006b8e30((int *)param_1), iVar3 != 0)
     ) {
    return iVar3;
  }
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 & 0xffffefff;
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x20);
  local_18 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x24);
  local_14 = iVar3;
  local_10 = local_18;
  if ((uVar1 & 0x8000000) == 0) {
    if ((uVar1 & 0x20000000) == 0) {
      if ((uVar1 & 0xa0000000) == 0) {
        return -0x51;
      }
      param_1 = *(byte **)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x28) * 4);
      local_b4 = 0x7c;
      local_b0 = 6;
      iVar4 = (**(code **)(*(int *)param_1 + 0x58))(param_1,&local_b4);
      if (iVar4 != 0) {
        return iVar4;
      }
      local_c = local_a8;
      local_8 = local_ac;
    }
    else {
      local_c = *(uint *)(param_1 + 0x30);
      local_8 = *(byte **)(param_1 + 0x34);
      param_1 = *(byte **)(param_1 + 0x38);
    }
  }
  else {
    param_1 = *(byte **)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x28) * 4);
    local_c = *(uint *)(param_1 + 4);
    local_8 = *(byte **)(param_1 + 8);
  }
  iVar4 = FUN_006b91a0((int *)pbVar2,&local_14);
  if (iVar4 == 0) {
    *(int *)(pbVar2 + 0x10) = local_14;
    *(int *)(pbVar2 + 0x14) = local_10;
    *(uint *)(pbVar2 + 0x18) = local_c;
    *(byte **)(pbVar2 + 0x1c) = local_8;
    if ((local_c != 0) && (local_8 != (byte *)0x0)) {
      local_28 = local_14 - iVar3;
      local_24 = local_10 - local_18;
      if ((*(uint *)(pbVar2 + 4) & 0x8000000) != 0) {
        iVar3 = Library::DKW::DDX::FUN_006b82e0
                          (*(int *)pbVar2,local_14,local_10,param_1,local_28,local_24,local_c,
                           local_8);
        *(uint *)(pbVar2 + 4) = *(uint *)(pbVar2 + 4) | 0x4000;
        return iVar3;
      }
      if ((*(uint *)(pbVar2 + 4) & 0x20000000) != 0) {
        local_24 = local_24 +
                   ((*(int *)(pbVar2 + 0x2c) - *(int *)(pbVar2 + 0x28)) + -1) *
                   *(int *)(pbVar2 + 0x34);
      }
      local_38 = local_14;
      local_20 = local_28 + local_c;
      local_30 = local_c + local_14;
      local_1c = local_8 + local_24;
      local_2c = local_8 + local_10;
      local_34 = local_10;
      param_2 = (int *)0x0;
      while (iVar3 = (**(code **)(**(int **)(*(int *)pbVar2 + 0x40) + 0x14))
                               (*(int **)(*(int *)pbVar2 + 0x40),&local_38,param_1,&local_28,
                                0x1008000,0), iVar3 != 0) {
        if (iVar3 == -0x7789fe3e) {
          (**(code **)(*(int *)param_1 + 0x6c))(param_1);
          FUN_006cec40(*(int *)pbVar2);
        }
        else {
          if (((iVar3 != -0x7789ff60) && (iVar3 != -0x7789fe52)) || (param_2 != (int *)0x0)) break;
          Sleep(2);
        }
        param_2 = (int *)((int)param_2 + 1);
        if (1 < (int)param_2) break;
      }
      if ((iVar3 == -0x7789ff60) || (iVar3 == -0x7789fe52)) {
        iVar3 = 0;
      }
      *(uint *)(pbVar2 + 4) = *(uint *)(pbVar2 + 4) | 0x4000;
      return iVar3;
    }
  }
  return iVar4;
}

