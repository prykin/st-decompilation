
undefined4 __fastcall FUN_005f8d10(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  short local_a;
  short local_8;
  short local_6;
  
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  thunk_FUN_005fa0b0((int)param_1);
  switch(uVar1) {
  case 0:
    uVar1 = 5;
    if (*(char *)((int)param_1 + 0x29d) == '\x01') {
      if (*(char *)((int)param_1 + 699) == '\x01') {
        thunk_FUN_004162b0(param_1,&local_a,&local_8,&local_6);
        if ((((int)local_a == *(int *)((int)param_1 + 0x291)) &&
            ((int)local_8 == *(int *)((int)param_1 + 0x295))) &&
           ((int)local_6 == *(int *)((int)param_1 + 0x299))) {
          *(undefined1 *)((int)param_1 + 699) = 3;
          return 5;
        }
      }
      else {
        iVar2 = thunk_FUN_005fa180(param_1);
        if (*(short *)(DAT_00806724 + 0x23) <= iVar2) {
          *(undefined4 *)((int)param_1 + 0x2dd) = 2;
          return 5;
        }
      }
    }
    break;
  case 1:
    if (*(int *)((int)param_1 + 0x2ea) != 0) {
      thunk_FUN_005f9450((int)param_1);
      *(undefined4 *)((int)param_1 + 0x2d5) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      iVar2 = *(int *)(DAT_00802a38 + 0xe4);
      *(undefined4 *)((int)param_1 + 0x2ef) = 0;
      *(int *)((int)param_1 + 0x2d9) = iVar2 + 0x32;
      *(undefined1 *)((int)param_1 + 699) = 1;
      *(undefined4 *)((int)param_1 + 0x76) = 1;
      if (0 < param_1[0xa8]) {
        *(undefined1 *)((int)param_1 + 0x29f) = 1;
        return 0xc;
      }
      *(undefined1 *)((int)param_1 + 0x29f) = 0;
      return 0xc;
    }
    if (*(char *)((int)param_1 + 0x29f) == '\0') {
      if (*(char *)((int)param_1 + 0x29d) != '\x01') {
        if (*(char *)((int)param_1 + 0x29d) == '\x03') {
          *(undefined4 *)((int)param_1 + 0x2d5) = *(undefined4 *)(DAT_00802a38 + 0xe4);
          iVar2 = *(int *)(DAT_00802a38 + 0xe4);
          *(undefined1 *)((int)param_1 + 699) = 1;
          *(undefined4 *)((int)param_1 + 0x76) = 1;
          *(int *)((int)param_1 + 0x2d9) = iVar2 + 0x32;
          *(undefined4 *)((int)param_1 + 0x2ef) = 0;
          return 0xc;
        }
        goto LAB_005f8ea2;
      }
    }
    else {
      if ((param_1[0xa8] != 0) && (*(char *)((int)param_1 + 0x29d) == '\0')) {
        thunk_FUN_004162b0(param_1,&local_a,&local_8,&local_6);
        return 10;
      }
      if (*(char *)((int)param_1 + 0x29d) != '\x01') {
LAB_005f8ea2:
        *(undefined1 *)((int)param_1 + 699) = 2;
        return 8;
      }
    }
  default:
    uVar1 = 6;
    *(undefined1 *)((int)param_1 + 699) = 3;
    break;
  case 2:
    iVar2 = thunk_FUN_005f8cc0(param_1);
    if (-1 < iVar2) {
      return 5;
    }
    *(undefined4 *)((int)param_1 + 0x2dd) = 0xc;
    *(undefined4 *)((int)param_1 + 0x76) = 1;
    *(undefined4 *)((int)param_1 + 0x2d5) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    *(int *)((int)param_1 + 0x2d9) = *(int *)(DAT_00802a38 + 0xe4) + 0x32;
    return 0;
  }
  return uVar1;
}

