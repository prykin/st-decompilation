
uint __cdecl thunk_FUN_005276e0(undefined1 param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = (DAT_0080874e == '\x03') + 0xa9;
  if (param_2 != 0xff) {
    switch(param_1) {
    case 1:
      return 0x14;
    case 2:
      return 0x15;
    case 3:
    case 0x80:
      return 10;
    case 4:
    case 0x81:
      if (param_2 == 0) {
        return 0x4e;
      }
      uVar1 = param_2 + 2;
      break;
    case 5:
    case 0x82:
      if (param_2 == 0) {
        return 0x4f;
      }
      uVar1 = param_2 - 1;
      break;
    case 6:
    case 0x83:
      if (param_2 == 0) {
        return 0x50;
      }
      uVar1 = param_2 + 5;
      break;
    case 7:
      return 0x16;
    case 8:
      return 0xd;
    case 9:
      return 0xb;
    case 10:
      return 0xc;
    case 0xb:
      return 0x1f;
    case 0xc:
      return 0x17;
    case 0xd:
    case 0x84:
      return 0x18;
    case 0xe:
      return 0xe;
    case 0xf:
      return 0x19;
    case 0x10:
    case 0x85:
      return 0x1a;
    case 0x11:
      return 0x1b;
    case 0x12:
      return 0xf;
    case 0x13:
    case 0x87:
      return 0x1c;
    case 0x14:
      return 0x10;
    case 0x15:
      return 0x1d;
    case 0x16:
      return 0x11;
    case 0x17:
    case 0x88:
      return 0x1e;
    case 0x18:
      return 0x12;
    case 0x19:
      return 0x23;
    case 0x1a:
      return 0x24;
    case 0x1b:
      return 0x13;
    case 0x1c:
      return 0x22;
    case 0x1d:
      return 0x21;
    case 0x1e:
    case 0x8a:
      return 0x25;
    case 0x1f:
      return 0x20;
    case 0x20:
    case 0x8b:
      return 0x26;
    case 0x21:
    case 0x8c:
      return 0x27;
    case 0x22:
      return 0x28;
    case 0x23:
      return 0x29;
    case 0x24:
      return 0x2c;
    case 0x25:
      return 0x2b;
    case 0x26:
      return 0x34;
    case 0x27:
      return 0x2d;
    case 0x28:
      return 0x2f;
    case 0x29:
      return 0x35;
    case 0x2a:
      return 0x36;
    case 0x2b:
      return 0x37;
    case 0x2c:
      return 0x30;
    case 0x2d:
      return 0x31;
    case 0x2e:
      return 0x32;
    case 0x2f:
      return 0x38;
    case 0x30:
      return 0x39;
    case 0x31:
      return 0x3a;
    case 0x32:
      return 0x3b;
    case 0x33:
      return 0x33;
    case 0x34:
      return 0x2a;
    case 0x35:
      return 0x2e;
    case 0x36:
      return 0x45;
    case 0x37:
      return 0x46;
    case 0x38:
      return 0x4a;
    case 0x39:
      return 0x4b;
    case 0x3a:
      return 0x43;
    case 0x3b:
      return 0x44;
    case 0x3c:
    case 0x91:
      return 0x47;
    case 0x3d:
    case 0x8d:
      return 0x41;
    case 0x3e:
      return 0x3f;
    case 0x3f:
    case 0x8e:
      return 0x42;
    case 0x40:
    case 0x8f:
      return 0x49;
    case 0x41:
    case 0x9a:
      return 0x48;
    case 0x42:
      return 0x4d;
    case 0x43:
      return 0x4c;
    case 0x44:
      return 0x59;
    case 0x45:
      return 0x5a;
    case 0x46:
      return 0x5b;
    case 0x47:
      return 0x5c;
    case 0x48:
      return 0x5d;
    case 0x49:
      return 0x5e;
    case 0x4a:
      return 0x5f;
    case 0x4b:
      return 0x60;
    case 0x4c:
      return 0x61;
    case 0x4d:
      return 0x62;
    case 0x4e:
      if (param_2 == 0) {
        uVar1 = 0xa6;
      }
      else {
        uVar1 = param_2 + 0x80;
      }
      break;
    case 0x4f:
      return 0x84;
    case 0x50:
      return 0x85;
    case 0x51:
      return 0x67;
    case 0x52:
      return 0x68;
    case 0x53:
      return 0x69;
    case 0x54:
      return 0x6a;
    case 0x55:
      return 0x77;
    case 0x56:
      return 0x78;
    case 0x57:
      return 0x79;
    case 0x58:
      return 0x7a;
    case 0x59:
      return 0x7b;
    case 0x5a:
      return 0x7c;
    case 0x5b:
      return 0x7d;
    case 0x5c:
      return 0x7e;
    case 0x5d:
      return 0x7f;
    case 0x5e:
      return 0x80;
    case 0x5f:
      return 0x86;
    case 0x60:
      return 0x87;
    case 0x61:
      return 0x74;
    case 0x62:
      return 0x89;
    case 99:
      return 0x75;
    case 100:
      return 0xa8;
    case 0x65:
      if (param_2 == 0) {
        uVar1 = 0xa4;
      }
      else {
        uVar1 = param_2 + 0x6a;
      }
      break;
    case 0x66:
      return 0x71;
    case 0x67:
      uVar1 = param_2 + 0x6d;
      break;
    case 0x68:
      return 0x72;
    case 0x69:
      return 0x8c;
    case 0x6a:
      return 0x8d;
    case 0x6b:
      return 0x8e;
    case 0x6c:
      return 0x8f;
    case 0x6d:
      if (param_2 == 0) {
        uVar1 = 0xa5;
      }
      else {
        uVar1 = param_2 + 0x62;
      }
      break;
    case 0x6e:
      return 0x66;
    case 0x6f:
      return 0x95;
    case 0x70:
      return 0x96;
    case 0x71:
      return 0x9a;
    case 0x72:
      return 0x91;
    case 0x73:
      return 0x97;
    case 0x74:
      return 0x98;
    case 0x75:
      return 0x9b;
    case 0x76:
      return 0x99;
    case 0x77:
      return 0xa2;
    case 0x78:
      return 0x92;
    case 0x79:
      return 0xa3;
    case 0x7a:
      uVar1 = param_2 + 0x9d;
      break;
    case 0x7b:
      return 0x93;
    case 0x7c:
      return 0xa0;
    case 0x7d:
      uVar1 = param_2 + 0x9b;
      break;
    case 0x7e:
      return 0xa1;
    case 0x7f:
    case 0x89:
      return 0x3c;
    case 0x86:
      return 0x3e;
    case 0x90:
      return 0xa7;
    case 0x92:
      return 0x52;
    case 0x93:
      return 0x56;
    case 0x94:
      return 0x53;
    case 0x95:
      return 0x57;
    case 0x96:
    case 0x99:
      return 0x58;
    case 0x97:
      return 0x55;
    case 0x98:
      return 0x54;
    }
    if (0xa9 < uVar1) {
      uVar1 = (DAT_0080874e == '\x03') + 0xa8;
    }
  }
  return uVar1;
}

