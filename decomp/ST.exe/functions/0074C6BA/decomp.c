
void __fastcall FUN_0074c6ba(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x29];
  *param_1 = &PTR_FUN_007a1868;
  param_1[3] = &PTR_LAB_007a1820;
  param_1[4] = &PTR_LAB_007a1808;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_00747bb4((int)param_1);
  return;
}

