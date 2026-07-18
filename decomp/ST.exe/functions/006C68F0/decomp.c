
int FUN_006c68f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d9f8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  iVar3 = 0;
  if (((0 < param_4) && (0 < param_5)) && ((*(uint *)(param_1 + 0xc) & 0x1100) != 0x100)) {
    ExceptionList = &local_14;
    puVar1 = &stack0xffffffc4;
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      ExceptionList = &local_14;
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
      puVar1 = local_1c;
    }
    local_1c = puVar1;
    local_30 = *(int *)(param_1 + 0x10) + param_2;
    local_2c = *(int *)(param_1 + 0x14) + param_3;
    local_28 = param_4;
    local_24 = param_5;
    iVar2 = FUN_006cfeb0(&local_30,&local_30,(int *)(param_1 + 0x484));
    if (iVar2 != 0) {
      iVar3 = FUN_006bb8b0(param_1);
      if (iVar3 == 0) {
        local_8 = iVar3;
        FUN_006d7ca0((byte *)(*(int *)(param_1 + 0x478) * local_2c + *(int *)(param_1 + 0x474) +
                             local_30),*(int *)(param_1 + 0x478),local_28,local_24,param_6);
        local_8 = 0xffffffff;
        FUN_006bb980(param_1);
      }
      if ((iVar3 == -0x7789ff60) || (iVar3 == -0x7789fe52)) {
        iVar3 = 0;
      }
    }
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7edfa4,0x29);
      ExceptionList = local_14;
      return iVar3;
    }
  }
  ExceptionList = local_14;
  return 0;
}

