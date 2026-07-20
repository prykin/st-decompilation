
void FUN_006c7430(AnonShape_006C7430_D1D36538 *param_1)

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
  local_20 = param_1->field_0062 + *(int *)param_1;
  local_28 = param_1->field_006A;
  iVar2 = *(int *)(param_1->field_003A + 4);
  if (iVar2 < local_28 + local_20) {
    local_28 = iVar2 - local_20;
  }
  local_24 = param_1->field_0066 + *(int *)&param_1->field_0x4;
  local_2c = param_1->field_006E;
  uVar1 = *(uint *)(param_1->field_003A + 8);
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar3) - uVar3;
  if (iVar2 < local_2c + local_24) {
    local_2c = iVar2 - local_24;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  ExceptionList = &local_14;
  local_8 = Library::MSVCRT::__setjmp3
                      (local_70.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,0xffffffff);
  local_1c = &stack0xffffff7c;
  if (local_8 == 0) {
    if (param_1->field_0072 == (byte *)0x0) {
      FUN_006b4170(param_1->field_003A,param_1->field_003E,local_20,local_24,local_28,local_2c,
                   param_1->field_0011);
    }
    else {
      local_1c = &stack0xffffff7c;
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)param_1->field_003A,param_1->field_003E,local_20,local_24,
                 param_1->field_0072,0,0,0,local_28,local_2c);
    }
    g_currentExceptionFrame = local_70.previous;
    ExceptionList = local_14;
    return;
  }
  g_currentExceptionFrame = local_70.previous;
  ExceptionList = local_14;
  return;
}

