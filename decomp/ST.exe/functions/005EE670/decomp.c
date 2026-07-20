
void __fastcall FUN_005ee670(AnonShape_005EE670_EFEE702F *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0x124))(2000);
  if (iVar1 != 0) {
    thunk_FUN_005ec9f0(1);
    param_1->field_030E = 0xff;
    param_1->field_030F = 0;
    param_1->field_030D = 1;
    param_1->field_023A = 5;
  }
  return;
}

