
uint __cdecl thunk_FUN_005259b0(undefined2 param_1,ushort param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = -(uint)(param_3 != '\0') & 0xff;
  if (param_2 < 5) {
    switch(param_1) {
    case 0x96:
      return (uint)param_2;
    case 0x97:
      return param_2 + 5;
    case 0x98:
      return param_2 + 10;
    case 0x99:
      return 0x1d;
    case 0x9a:
      return 0x10;
    case 0x9c:
      return 0x13;
    case 0x9d:
      return 0x12;
    case 0x9e:
      return 0x11;
    case 0x9f:
    case 0xa0:
      return 0x14;
    case 0xa3:
      return 0x1b;
    case 0xa4:
      return 0x15;
    case 0xa6:
      return 0x17;
    case 0xa7:
      return 0x18;
    case 0xa8:
      return 0x1a;
    case 0xa9:
      return 0x19;
    case 0xab:
      return 0x16;
    case 0xac:
      return 0xf;
    case 0xad:
      return 0x23;
    case 0xae:
      return 0x25;
    case 0xaf:
      return 0x1e;
    case 0xb0:
      return 0x2b;
    case 0xb2:
      uVar1 = 0x2c;
      break;
    case 0xb3:
      return 0x20;
    case 0xb5:
      return 0x21;
    case 0xb6:
      return 0x27;
    case 0xb7:
      return 0x28;
    case 0xb8:
      return 0x24;
    case 0xba:
      return 0x29;
    case 0xbc:
      return 0x1f;
    case 0xbd:
      return 0x22;
    case 0xbe:
      return 0x26;
    case 0xbf:
      return 0x2a;
    case 0xff:
      return 0x1c;
    }
  }
  return uVar1;
}

