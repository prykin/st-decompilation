
int __cdecl FUN_0052a430(AnonShape_0052A430_8E4D893F *param_1)

{
  AnonNested_0052A430_0014_F40A3334 *pAVar1;
  uint local_8;

  local_8 = 0;
  pAVar1 = param_1->field_0014;
  switch(pAVar1->field_0004) {
  case 0:
  case 2:
    return pAVar1->field_0000 * 2 + -2;
  case 1:
    return pAVar1->field_0000 * 2 + -1;
  case 3:
    local_8 = (uint)(pAVar1->field_0008 != 0);
  }
  return (local_8 - 2) + pAVar1->field_0000 * 2;
}

