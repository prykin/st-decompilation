
undefined4 FUN_007477ea(AnonShape_007477EA_440BD1E9 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00747e4e((AnonShape_00747E4E_3F64CF30 *)param_1);
  if (iVar1 == 1) {
    uVar2 = 0x80040203;
  }
  else if ((uint)(param_1->field_0008 - param_1->field_0004) < param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    param_1->field_0004 = param_2 + param_1->field_0004;
  }
  return uVar2;
}

