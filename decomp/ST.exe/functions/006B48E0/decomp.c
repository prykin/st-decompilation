
int FUN_006b48e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,uint param_8,int param_9,int param_10,byte param_11,uint param_12)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d8e8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffac;
  iVar4 = 0;
  local_2c = 0;
  local_28 = 0;
  if ((((0 < (int)param_8) && (0 < param_9)) && ((*(uint *)(param_1 + 0xc) & 0x1100) != 0x100)) &&
     (*(int *)(param_1 + 0x40) != 0)) {
    ExceptionList = &local_14;
    puVar1 = &stack0xffffffac;
    if (param_5 == 0) {
      ExceptionList = &local_14;
      param_5 = FUN_006b4fa0(param_4);
      puVar1 = local_1c;
    }
    local_1c = puVar1;
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    local_40 = *(int *)(param_1 + 0x10) + param_2;
    local_3c = *(int *)(param_1 + 0x14) + param_3;
    local_38 = param_8;
    local_34 = param_9;
    iVar2 = FUN_006cfeb0(&local_40,&local_40,(int *)(param_1 + 0x484));
    if (iVar2 != 0) {
      local_44 = 0;
      do {
        iVar4 = FUN_006bbe40(*(int **)(param_1 + 0x40),&local_2c,&local_28,0);
        local_24 = iVar4;
        if (iVar4 == 0) goto LAB_006b49e8;
        if (iVar4 != -0x7789fe3e) break;
        FUN_006cec40(param_1);
        local_44 = local_44 + 1;
      } while (local_44 < 2);
      if (iVar4 == 0) {
LAB_006b49e8:
        iVar4 = param_7 + ((local_3c - *(int *)(param_1 + 0x14)) - param_3);
        if (*(int *)(param_4 + 8) < 0) {
          uVar3 = (uint)*(ushort *)(param_4 + 0xe) * *(int *)(param_4 + 4) + 0x1f >> 3 & 0x1ffffffc;
          iVar4 = uVar3 * iVar4;
        }
        else {
          uVar3 = (uint)*(ushort *)(param_4 + 0xe) * *(int *)(param_4 + 4) + 0x1f >> 3 & 0x1ffffffc;
          iVar4 = ((*(int *)(param_4 + 8) - iVar4) + -1) * uVar3;
        }
        local_8 = 0;
        FUN_006d0f50((uint *)(local_3c * local_28 + local_40 + local_2c),local_28,
                     (uint *)(iVar4 + param_6 + ((local_40 - *(int *)(param_1 + 0x10)) - param_2) +
                             param_5),-uVar3,local_38,local_34,param_10,param_11,param_12);
        iVar4 = local_24;
        local_8 = 0xffffffff;
        (**(code **)(**(int **)(param_1 + 0x40) + 0x80))(*(int **)(param_1 + 0x40),0);
      }
      if ((iVar4 == -0x7789ff60) || (iVar4 == -0x7789fe52)) {
        iVar4 = 0;
      }
    }
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (iVar4 != 0) {
      FUN_006a5e40(iVar4,DAT_007ed77c,0x7edb20,0x46);
      ExceptionList = local_14;
      return iVar4;
    }
  }
  ExceptionList = local_14;
  return 0;
}

