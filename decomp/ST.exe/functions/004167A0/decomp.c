
void __fastcall FUN_004167a0(int param_1)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_007901d0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  if (*(LPVOID *)(param_1 + 0x97) != (LPVOID)0x0) {
    ExceptionList = &local_14;
    FUN_006ab060((LPVOID *)(param_1 + 0x97));
    *(undefined4 *)(param_1 + 0x9b) = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
    *(undefined1 *)(param_1 + 0xe3) = 0;
  }
  ExceptionList = local_14;
  return;
}

