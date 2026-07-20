
void __fastcall FUN_0074ffd2(AnonShape_0074FFD2_D127A427 *param_1)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  local_8 = param_1->field_0020;
  while (local_8 != 0) {
    iVar2 = FUN_0074dec2(&local_8);
    (**(code **)(*(int *)(iVar2 + 0xc) + 8))(iVar2 + 0xc);
  }
  FUN_0074de91(&param_1->field_0020);
  local_8 = param_1->field_0038;
  while (local_8 != 0) {
    iVar2 = FUN_0074dec2(&local_8);
    (**(code **)(*(int *)(iVar2 + 0xc) + 8))(iVar2 + 0xc);
  }
  FUN_0074de91(&param_1->field_0038);
  piVar1 = param_1->field_0060;
  if (piVar1 != (int *)0x0) {
    if (param_1->field_0054 != 0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,param_1->field_0054);
      param_1->field_0054 = 0;
    }
    (**(code **)(*param_1->field_0060 + 8))(param_1->field_0060);
  }
  FUN_0074d204((undefined4 *)&param_1->field_0x50);
  FUN_0074de7f(&param_1->field_0038);
  FUN_0074de7f(&param_1->field_0020);
  DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x8);
  return;
}

