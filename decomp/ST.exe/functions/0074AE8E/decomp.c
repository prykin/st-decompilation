
void __fastcall FUN_0074ae8e(AnonShape_0074AE8E_9E31CE72 *param_1)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = timeGetTime();
  iVar2 = (DVar1 - param_1->field_00E4) * 10000;
  if ((iVar2 < param_1->field_00DC * 2) || (iVar2 < param_1->field_00E0 * 2)) {
    param_1->field_00DC = (iVar2 + param_1->field_00DC * 3) / 4;
  }
  param_1->field_00E0 = iVar2;
  FUN_0074ae16((int)param_1);
  return;
}

