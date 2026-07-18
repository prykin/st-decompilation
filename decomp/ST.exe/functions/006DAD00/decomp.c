
int FUN_006dad00(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                int param_7,int param_8,int param_9,int param_10,undefined1 param_11)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  puStack_c = &DAT_0079df48;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc0;
  iVar3 = 0;
  if ((*(uint *)(param_1 + 0xc) & 0x1100) != 0x100) {
    ExceptionList = &local_14;
    puVar1 = &stack0xffffffc0;
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      ExceptionList = &local_14;
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
      puVar1 = local_1c;
    }
    local_1c = puVar1;
    local_30 = *(int *)(param_1 + 0x10) + param_2;
    local_2c = *(int *)(param_1 + 0x14) + param_3;
    local_28 = param_9;
    local_24 = param_10;
    iVar2 = FUN_006cfeb0(&local_30,&local_30,(int *)(param_1 + 0x484));
    if (iVar2 != 0) {
      iVar4 = param_7 + ((local_30 - *(int *)(param_1 + 0x10)) - param_2);
      iVar2 = local_2c - *(int *)(param_1 + 0x14);
      iVar3 = FUN_006bb8b0(param_1);
      if (iVar3 == 0) {
        iVar2 = (param_5 + 7) * (param_8 + (iVar2 - param_3));
        local_8 = iVar3;
        FUN_006dac70((undefined1 *)
                     (*(int *)(param_1 + 0x478) * local_2c + *(int *)(param_1 + 0x474) + local_30),
                     *(int *)(param_1 + 0x478),
                     (byte *)(((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) +
                             param_4 + ((int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3)),param_5,
                     (byte)iVar4,param_9,param_10,param_11);
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
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7ee400,0x177);
      ExceptionList = local_14;
      return iVar3;
    }
  }
  ExceptionList = local_14;
  return 0;
}

