
bool __thiscall FUN_004fab10(void *this,undefined1 param_1)

{
  switch(param_1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 0xe:
  case 0xf:
    return *(short *)((int)this + 0x23f) == 1;
  case 6:
    if (DAT_008016e8 != 0) {
      return *(short *)(DAT_008016e8 + 0x172) != 2;
    }
  case 7:
    if (DAT_0080167c != 0) {
      return *(short *)(DAT_0080167c + 0x172) != 2;
    }
  case 8:
    if (DAT_00801684 != 0) {
      return *(short *)(DAT_00801684 + 0x172) != 2;
    }
  case 9:
    if (DAT_00801698 != 0) {
      return *(short *)(DAT_00801698 + 0x172) != 2;
    }
  case 10:
    if (DAT_00802a44 != 0) {
      return *(short *)(DAT_00802a44 + 0x172) != 2;
    }
  case 0xb:
    if (DAT_00801678 != 0) {
      return *(short *)(DAT_00801678 + 0x172) != 2;
    }
  case 0xc:
    if (DAT_00801680 != 0) {
      return *(short *)(DAT_00801680 + 0x172) != 2;
    }
  case 0x10:
    if (DAT_00802a48 != 0) {
      return *(short *)(DAT_00802a48 + 0x172) != 2;
    }
    break;
  default:
    return false;
  case 0x11:
    break;
  case 0x12:
    goto switchD_004fab25_caseD_12;
  }
  if (DAT_0080168c != 0) {
    return *(short *)(DAT_0080168c + 0x172) != 2;
  }
switchD_004fab25_caseD_12:
  if (DAT_008016ec == 0) {
    return false;
  }
  return *(short *)(DAT_008016ec + 0x172) != 2;
}

