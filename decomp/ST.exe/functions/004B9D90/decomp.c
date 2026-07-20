
undefined4 __fastcall FUN_004b9d90(AnonShape_004B9D90_4F3151F9 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = param_1->field_0245;
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 6) {
    return 0;
  }
  if (iVar2 == 4) {
    return 0;
  }
  iVar2 = param_1->field_05AC;
  switch(iVar2) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    iVar1 = param_1->field_04D0;
    if (iVar1 != 0) {
      if ((iVar1 != 1) && (iVar1 != 2)) {
        return 0;
      }
      if (iVar2 == 0x40) {
        return 0;
      }
      if (iVar2 == 0x49) {
        return 0;
      }
    }
    break;
  case 0x33:
    if (param_1->field_04D0 != 0) {
      return 0;
    }
    if (param_1->field_04F8 != 0) {
      return 0;
    }
    break;
  case 0x37:
  case 0x6c:
    if (param_1->field_04D8 != 0xffff) {
      return 0;
    }
    if (iVar2 == 0x6c) {
      iVar2 = thunk_FUN_004e9930((int)param_1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = param_1->field_061B;
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x20) != 1000) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x4d8) != 0xffff) {
        return 0;
      }
      if (SHORT_007fb244 + -1 <= *(int *)(iVar2 + 0x5b8)) {
        return 0;
      }
    }
    break;
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x4f:
  case 0x52:
  case 0x5e:
  case 0x5f:
  case 0x60:
    if (param_1->field_04D0 != 0) {
      return 0;
    }
    if (param_1->field_04D8 != -1) {
      return 0;
    }
    break;
  case 0x45:
    bVar3 = param_1->field_04D0 == 3;
    goto LAB_004b9e45;
  case 0x4e:
  case 0x70:
  case 0x72:
    bVar3 = param_1->field_04D0 == 4;
LAB_004b9e45:
    if (bVar3) {
      return 0;
    }
    break;
  case 99:
    if ((param_1->field_04D0 == 0) && (param_1->field_04D4 == 0)) {
      return 0;
    }
  }
  return 1;
}

