
int __fastcall FUN_004b8c00(AnonShape_004B8C00_93076312 *param_1)

{
  int iVar1;

  iVar1 = -1;
  if (param_1->field_0249 < 0) {
    switch(param_1->field_0245) {
    case 0:
    case 3:
    case 5:
      return 0;
    case 1:
      return 1;
    case 2:
    case 4:
      return 4;
    case 6:
      iVar1 = 6;
    }
    return iVar1;
  }
  return param_1->field_0249;
}

