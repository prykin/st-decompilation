
void __fastcall FUN_004eef20(AnonShape_004EEF20_59DE1DA2 *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  if ((uint *)param_1->field_028A != nullptr) {
    ccFntTy::operator_delete((uint *)param_1->field_028A);
    param_1->field_028A = 0;
  }
  if (param_1->field_0292 != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_0292);
  }
  param_1->field_0292 = 0;
  puVar1 = (undefined4 *)&param_1->field_0x27a;
  iVar2 = 4;
  do {
    if ((DArrayTy *)*puVar1 != nullptr) {
      DArrayDestroy((DArrayTy *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  g_prodPanel_0080167C = nullptr;
  return;
}

