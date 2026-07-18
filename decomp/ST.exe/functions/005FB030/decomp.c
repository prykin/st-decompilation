
void __fastcall FUN_005fb030(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x2dd)) {
  case 1:
    *(undefined4 *)(param_1 + 0x2ea) = 1;
    *(undefined1 *)(param_1 + 0x2ee) = 0;
    return;
  case 3:
  case 6:
  case 0xc:
    *(undefined4 *)(param_1 + 0x2ef) = 0;
  case 2:
  case 4:
    *(undefined4 *)(param_1 + 0x2ea) = 1;
    *(undefined1 *)(param_1 + 0x2ee) = 1;
    return;
  case 5:
    *(undefined4 *)(param_1 + 0x2ea) = 1;
    *(undefined1 *)(param_1 + 0x2ee) = 1;
  case 8:
  case 9:
  case 10:
  case 0xb:
    *(undefined4 *)(param_1 + 0x2ea) = 1;
    *(undefined1 *)(param_1 + 0x2ee) = 1;
    return;
  default:
    return;
  }
}

