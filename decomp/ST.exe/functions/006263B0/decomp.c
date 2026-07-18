
undefined4 FUN_006263b0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 2:
  case 0xd:
  case 0xe:
  case 0x1e:
  case 0x20:
  case 0x24:
  case 0x25:
    return 1;
  case 3:
  case 0xf:
  case 0x10:
  case 0x1f:
    return 2;
  case 4:
  case 9:
  case 10:
  case 0x15:
  case 0x17:
  case 0x1c:
    return 8;
  case 5:
  case 6:
  case 0xb:
  case 0x11:
  case 0x12:
  case 0x16:
  case 0x21:
  case 0x22:
  case 0x23:
    return 4;
  default:
    return 0x20;
  case 0x36:
  case 0x3e:
  case 0x3f:
  case 0x42:
  case 0x46:
  case 0x47:
  case 0x4a:
  case 0x4b:
  case 0x6b:
    return 0x10;
  }
}

