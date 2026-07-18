
void __fastcall thunk_FUN_004924a0(void *param_1)

{
  int iVar1;
  void *pvStack_8;
  
  if (((*(int *)((int)param_1 + 0x45d) == 0x14) && (*(int *)((int)param_1 + 0x5a2) != 0)) &&
     (*(int *)((int)param_1 + 0x5c0) != 3)) {
    pvStack_8 = param_1;
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x5a2),(int *)&pvStack_8);
    if (iVar1 != -4) {
      thunk_FUN_00492280(pvStack_8,*(int *)((int)param_1 + 0x18));
    }
  }
  return;
}

