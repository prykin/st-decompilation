
bool __cdecl FUN_0064ec80(AnonShape_0064EC80_53C284F2 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&param_1[7].field_0xc)[iVar1] != '\b') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (param_1->field_0014 < 0) {
    return false;
  }
  return param_1->field_0014 <= param_1->field_0018;
}

