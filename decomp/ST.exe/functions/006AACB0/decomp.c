
void FUN_006aacb0(void)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d860;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  GetSystemInfo((LPSYSTEM_INFO)&DAT_00858e00);
  local_8 = 0;
  FUN_006aad10();
  ExceptionList = local_14;
  return;
}

