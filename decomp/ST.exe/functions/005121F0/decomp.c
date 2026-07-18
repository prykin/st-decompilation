
undefined4 __thiscall FUN_005121f0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(uint *)sizeHelp_exref != 0) {
    piVar2 = (int *)(*(int *)((int)this + 0x1c7) + 9);
    do {
      switch(*(char *)((int)piVar2 + -1)) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
      case '\v':
        if (*piVar2 == param_1) {
          if (*(char *)((int)piVar2 + -1) == '\x03') {
            return 1;
          }
          if (piVar2[1] == param_2) {
            return 1;
          }
        }
        break;
      case '\f':
        switch(param_1) {
        case 0xf2:
        case 0xf3:
        case 0xf4:
        case 0xf5:
          iVar1 = *piVar2;
          if ((((iVar1 == 0xf2) || (iVar1 == 0xf3)) || (iVar1 == 0xf4)) || (iVar1 == 0xf5)) {
            return 1;
          }
          break;
        case 0xf6:
        case 0xf7:
          if (*piVar2 == 0xf6) {
            return 1;
          }
          if (*piVar2 == 0xf7) {
            return 1;
          }
          break;
        case 0xf8:
        case 0xf9:
          if (*piVar2 == 0xf8) {
            return 1;
          }
          if (*piVar2 == 0xf9) {
            return 1;
          }
          break;
        case 0xfa:
        case 0xfb:
          if (*piVar2 == 0xfa) {
            return 1;
          }
          if (*piVar2 == 0xfb) {
            return 1;
          }
          break;
        default:
          if (*piVar2 == param_1) {
            return 1;
          }
        }
      }
      uVar3 = uVar3 + 1;
      piVar2 = (int *)((int)piVar2 + 0x11);
    } while (uVar3 < *(uint *)sizeHelp_exref);
  }
  return 0;
}

