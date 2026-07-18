
void FUN_006b03d0(char *param_1,char *param_2,int param_3,int param_4,char param_5)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079d8a0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  FUN_006cebe0(param_1,param_3,param_2,param_3,param_3,param_4,param_5);
  ExceptionList = local_14;
  return;
}

