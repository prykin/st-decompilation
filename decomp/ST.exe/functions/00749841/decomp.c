
int FUN_00749841(AnonShape_00749841_39B3C899 *param_1)

{
  int iVar1;
  
  iVar1 = param_1->field_0008;
  if (iVar1 < 0) {
    iVar1 = -((param_1->field_0004 * (uint)param_1->field_000E + 0x1f >> 3 & 0x1ffffffc) * iVar1);
  }
  else {
    iVar1 = (param_1->field_0004 * (uint)param_1->field_000E + 0x1f >> 3 & 0x1ffffffc) * iVar1;
  }
  return iVar1;
}

