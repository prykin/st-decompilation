
void FUN_006b7740(int *param_1)

{
  int *piVar1;

  if (param_1 != (int *)0x0) {
    FUN_006b76d0(param_1);
    if ((*(byte *)(param_1 + 1) & 4) != 0) {
      CoUninitialize();
    }
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    FUN_006a5e90((short *)param_1);
  }
  return;
}

