
void FUN_006c7430(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  InternalExceptionFrame local_70;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079da18;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff7c;
  local_20 = *(int *)((int)param_1 + 0x62) + *param_1;
  local_28 = *(int *)((int)param_1 + 0x6a);
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x3a) + 4);
  if (iVar2 < local_28 + local_20) {
    local_28 = iVar2 - local_20;
  }
  local_24 = *(int *)((int)param_1 + 0x66) + param_1[1];
  local_2c = *(int *)((int)param_1 + 0x6e);
  uVar1 = *(uint *)(*(int *)((int)param_1 + 0x3a) + 8);
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar3) - uVar3;
  if (iVar2 < local_2c + local_24) {
    local_2c = iVar2 - local_24;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  ExceptionList = &local_14;
  local_8 = __setjmp3(local_70.jumpBuffer,2,FUN_0072da21,0xffffffff);
  local_1c = &stack0xffffff7c;
  if (local_8 == 0) {
    if (*(int *)((int)param_1 + 0x72) == 0) {
      FUN_006b4170(*(int *)((int)param_1 + 0x3a),*(int *)((int)param_1 + 0x3e),local_20,local_24,
                   local_28,local_2c,*(undefined1 *)((int)param_1 + 0x11));
    }
    else {
      local_1c = &stack0xffffff7c;
      FUN_006b55f0(*(undefined4 **)((int)param_1 + 0x3a),*(int *)((int)param_1 + 0x3e),local_20,
                   local_24,*(int *)((int)param_1 + 0x72),0,0,0,local_28,local_2c);
    }
    g_currentExceptionFrame = local_70.previous;
    ExceptionList = local_14;
    return;
  }
  g_currentExceptionFrame = local_70.previous;
  ExceptionList = local_14;
  return;
}

