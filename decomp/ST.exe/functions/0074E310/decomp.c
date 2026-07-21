
void __fastcall FUN_0074e310(int *param_1)

{
  int *piVar1;

  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

