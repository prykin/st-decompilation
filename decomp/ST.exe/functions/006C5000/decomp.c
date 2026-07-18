
int FUN_006c5000(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,uint param_8,int param_9,int param_10,byte param_11)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d9a0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb8;
  local_24 = 0;
  if (((0 < (int)param_8) && (0 < param_9)) && ((*(uint *)(param_1 + 0xc) & 0x1100) != 0x100)) {
    ExceptionList = &local_14;
    puVar1 = &stack0xffffffb8;
    if (param_5 == 0) {
      ExceptionList = &local_14;
      param_5 = FUN_006b4fa0(param_4);
      puVar1 = local_1c;
    }
    local_1c = puVar1;
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    local_38 = *(int *)(param_1 + 0x10) + param_2;
    local_34 = *(int *)(param_1 + 0x14) + param_3;
    local_30 = param_8;
    local_2c = param_9;
    iVar2 = FUN_006cfeb0(&local_38,&local_38,(int *)(param_1 + 0x484));
    if (iVar2 != 0) {
      local_24 = FUN_006bb8b0(param_1);
      if (local_24 == 0) {
        iVar2 = param_7 + ((local_34 - *(int *)(param_1 + 0x14)) - param_3);
        if (*(int *)(param_4 + 8) < 0) {
          uVar3 = (uint)*(ushort *)(param_4 + 0xe) * *(int *)(param_4 + 4) + 0x1f >> 3 & 0x1ffffffc;
          iVar2 = uVar3 * iVar2;
        }
        else {
          uVar3 = (uint)*(ushort *)(param_4 + 0xe) * *(int *)(param_4 + 4) + 0x1f >> 3 & 0x1ffffffc;
          iVar2 = ((*(int *)(param_4 + 8) - iVar2) + -1) * uVar3;
        }
        local_8 = 0;
        FUN_006d0f50((uint *)(*(int *)(param_1 + 0x474) +
                             *(int *)(param_1 + 0x478) * local_34 + local_38),
                     *(int *)(param_1 + 0x478),
                     (uint *)(iVar2 + param_6 + ((local_38 - *(int *)(param_1 + 0x10)) - param_2) +
                             param_5),-uVar3,local_30,local_2c,param_10,param_11,0xffffffff);
        local_8 = 0xffffffff;
        FUN_006bb980(param_1);
      }
      if ((local_24 == -0x7789ff60) || (local_24 == -0x7789fe52)) {
        local_24 = 0;
      }
    }
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    iVar2 = local_24;
    if (local_24 != 0) {
      FUN_006a5e40(local_24,DAT_007ed77c,0x7edf5c,0x3a);
      ExceptionList = local_14;
      return iVar2;
    }
  }
  ExceptionList = local_14;
  return 0;
}

