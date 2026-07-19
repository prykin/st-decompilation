
int FUN_006c6660(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                undefined4 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d9e8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc4;
  if (((param_6 != 0) &&
      (ExceptionList = &local_14, puVar1 = &stack0xffffffc4, param_6 * 2 <= (int)param_4)) &&
     (ExceptionList = &local_14, puVar1 = &stack0xffffffc4, param_6 * 2 <= (int)param_5)) {
    local_30 = *(int *)(param_1 + 0x10) + param_2;
    local_2c = *(int *)(param_1 + 0x14) + param_3;
    local_28 = param_4;
    local_24 = param_5;
    ExceptionList = &local_14;
    iVar2 = FUN_006cfeb0(&local_30,&local_30,(int *)(param_1 + 0x484));
    if (iVar2 != 0) {
      puVar1 = local_1c;
      if ((local_28 != param_4) || (local_24 != param_5)) goto LAB_006c682e;
      if ((*(uint *)(param_1 + 0xc) & 0x1100) == 0x100) {
        ExceptionList = local_14;
        return 0;
      }
      if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
      }
      local_20 = FUN_006bb8b0(param_1);
      if (local_20 == 0) {
        local_8 = local_20;
        FUN_006d7a30(*(int *)(param_1 + 0x478) * local_2c + *(int *)(param_1 + 0x474) + local_30,
                     *(int *)(param_1 + 0x478),param_4,param_5,param_6,(char)param_7);
        local_8 = 0xffffffff;
        FUN_006bb980(param_1);
      }
      if ((local_20 == -0x7789ff60) || (local_20 == -0x7789fe52)) {
        local_20 = 0;
      }
      if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
      }
      if (local_20 != 0) {
        RaiseInternalException(local_20,DAT_007ed77c,s_E__DKW_DDX_C_ddrrect_c_007edf8c,0x58);
        ExceptionList = local_14;
        return local_20;
      }
    }
    ExceptionList = local_14;
    return 0;
  }
LAB_006c682e:
  local_1c = puVar1;
  iVar2 = FUN_006ba9e0(param_1,param_2,param_3,param_4,param_5,param_7);
  ExceptionList = local_14;
  return iVar2;
}

