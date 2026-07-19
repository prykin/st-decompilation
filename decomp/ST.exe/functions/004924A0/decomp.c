
void __fastcall FUN_004924a0(void *param_1)

{
  int iVar1;
  STBoatC *local_8;
  
  if (((*(int *)((int)param_1 + 0x45d) == 0x14) && (*(int *)((int)param_1 + 0x5a2) != 0)) &&
     (*(int *)((int)param_1 + 0x5c0) != 3)) {
    local_8 = param_1;
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x5a2),(int *)&local_8);
    if (iVar1 != -4) {
      STBoatC::CancelLoading(local_8,*(int *)((int)param_1 + 0x18));
    }
  }
  return;
}

