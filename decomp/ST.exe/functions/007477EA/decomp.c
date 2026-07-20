
undefined4 FUN_007477ea(AnonShape_007477EA_440BD1E9 *param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  bVar1 = FUN_00747e4e((int)param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
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

