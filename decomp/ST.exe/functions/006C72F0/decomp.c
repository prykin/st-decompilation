
void FUN_006c72f0(AnonShape_006C72F0_54F06289 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  InternalExceptionFrame local_70;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079da08;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff7c;
  local_20 = param_1->field_0062 + *(int *)param_1;
  iVar5 = param_1->field_006A;
  iVar3 = *(int *)(param_1->field_003A + 4);
  if (iVar3 < iVar5 + local_20) {
    iVar5 = iVar3 - local_20;
  }
  local_24 = param_1->field_0066 + *(int *)&param_1->field_0x4;
  iVar3 = param_1->field_006E;
  uVar1 = *(uint *)(param_1->field_003A + 8);
  uVar6 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar6) - uVar6;
  if (iVar2 < iVar3 + local_24) {
    iVar3 = iVar2 - local_24;
  }
  ExceptionList = &local_14;
  local_2c = iVar3;
  local_28 = iVar5;
  FreeAndNull((void **)&param_1->field_0072);
  if ((iVar5 == param_1->field_006A) && (iVar3 == param_1->field_006E)) {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    iVar5 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,local_8);
    local_1c = &stack0xffffff7c;
    if (iVar5 == 0) {
      local_8 = 0;
      puVar4 = Library::DKW::WGR::FUN_006b55f0
                         ((AnonShape_006B84D0_7C7D97C6 *)0x0,0,0,0,(byte *)param_1->field_003A,
                          param_1->field_003E,local_20,local_24,local_28,local_2c);
      param_1->field_0072 = puVar4;
      g_currentExceptionFrame = local_70.previous;
      ExceptionList = local_14;
      return;
    }
    g_currentExceptionFrame = local_70.previous;
    param_1->field_0072 = 0;
  }
  ExceptionList = local_14;
  return;
}

