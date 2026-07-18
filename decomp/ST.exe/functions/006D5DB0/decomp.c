
void __fastcall FUN_006d5db0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_0079dd1c;
  param_1[3] = &PTR_FUN_0079dcf8;
  if ((*(int *)(param_1[0x17] + 0x310) == 0) &&
     (piVar1 = (int *)param_1[0x19], piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x19] = 0;
  }
  FUN_00749091((int)param_1);
  return;
}

