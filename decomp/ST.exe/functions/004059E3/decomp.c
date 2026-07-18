
undefined4 __fastcall thunk_FUN_004e03e0(int param_1)

{
  void *this;
  
  if (((*(int *)(param_1 + 0x245) == 1) || (*(int *)(param_1 + 0x245) == 6)) &&
     (*(int *)(param_1 + 0x4d4) != 0)) {
    this = thunk_FUN_004d85e0(*(int *)(param_1 + 0x5b0),*(int *)(param_1 + 0x5b4),
                              *(int *)(param_1 + 0x5b8));
    if (this != (void *)0x0) {
      thunk_FUN_0057dfd0(this,*(int *)(param_1 + 0x4e0),1);
      *(undefined4 *)(param_1 + 0x4e0) = 0;
      thunk_FUN_00580570((int)this);
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
  }
  if (*(int *)(param_1 + 0x5ac) == 0x61) {
    thunk_FUN_004e4100(*(int *)(param_1 + 0x24));
  }
  return 0;
}

