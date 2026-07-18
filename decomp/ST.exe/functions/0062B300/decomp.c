
undefined4 __fastcall FUN_0062b300(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined1 *)(param_1 + 0x15)) {
  case 1:
    if (*(byte *)(param_1 + 0x14) < 4) {
      return 1;
    }
    break;
  case 2:
  case 8:
    if (*(byte *)(param_1 + 0x14) < 7) {
      return 1;
    }
    break;
  case 0x80:
    if (*(char *)(param_1 + 0x14) == '\0') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

