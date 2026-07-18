
void __fastcall thunk_FUN_004167a0(int param_1)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_007901d0;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(param_1 + 0x97) != 0) {
    ExceptionList = &pvStack_14;
    FUN_006ab060((int *)(param_1 + 0x97));
    *(undefined4 *)(param_1 + 0x9b) = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
    *(undefined1 *)(param_1 + 0xe3) = 0;
  }
  ExceptionList = pvStack_14;
  return;
}

