
void __fastcall FUN_004dc150(void *param_1)

{
  int iVar1;
  void *local_8;
  
  if (*(int *)((int)param_1 + 0x4c0) != 0) {
    *(undefined4 *)((int)param_1 + 0x4c0) = 0;
    local_8 = param_1;
    if (*(int **)((int)param_1 + 0x61f) != (int *)0x0) {
      thunk_FUN_00635fd0(*(int **)((int)param_1 + 0x61f));
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)((int)param_1 + 0x61f));
      *(undefined4 *)((int)param_1 + 0x61f) = 0;
    }
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x4c4),(int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_004dbe00(local_8,*(int **)((int)param_1 + 0x18));
    }
  }
  return;
}

