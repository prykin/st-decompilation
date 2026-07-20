
undefined4 FUN_00555880(AnonShape_00555880_021D11E5 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  undefined3 extraout_var;
  
  sVar1 = param_1->field_001C;
  if ((((-1 < sVar1) && (sVar1 < SHORT_007fb240)) && (sVar2 = param_1->field_001E, -1 < sVar2)) &&
     (((sVar2 < SHORT_007fb242 && (sVar3 = param_1->field_0020, -1 < sVar3)) &&
      (sVar3 < SHORT_007fb244)))) {
    bVar4 = thunk_FUN_004961b0(sVar1,sVar2,sVar3);
    if (CONCAT31(extraout_var,bVar4) != 0) {
      return 1;
    }
    return 0;
  }
  if (-1 < param_1->field_0020) {
    return 1;
  }
  return 0;
}

