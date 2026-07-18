
undefined4 __fastcall FUN_004b9d90(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x245);
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 6) {
    return 0;
  }
  if (iVar2 == 4) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x5ac);
  switch(iVar2) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    iVar1 = *(int *)(param_1 + 0x4d0);
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
    if (*(int *)(param_1 + 0x4d0) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x4f8) != 0) {
      return 0;
    }
    break;
  case 0x37:
  case 0x6c:
    if (*(int *)(param_1 + 0x4d8) != 0xffff) {
      return 0;
    }
    if (iVar2 == 0x6c) {
      iVar2 = thunk_FUN_004e9930(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x61b);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x20) != 1000) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x4d8) != 0xffff) {
        return 0;
      }
      if (DAT_007fb244 + -1 <= *(int *)(iVar2 + 0x5b8)) {
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
    if (*(int *)(param_1 + 0x4d0) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x4d8) != -1) {
      return 0;
    }
    break;
  case 0x45:
    bVar3 = *(int *)(param_1 + 0x4d0) == 3;
    goto LAB_004b9e45;
  case 0x4e:
  case 0x70:
  case 0x72:
    bVar3 = *(int *)(param_1 + 0x4d0) == 4;
LAB_004b9e45:
    if (bVar3) {
      return 0;
    }
    break;
  case 99:
    if ((*(int *)(param_1 + 0x4d0) == 0) && (*(int *)(param_1 + 0x4d4) == 0)) {
      return 0;
    }
  }
  return 1;
}

