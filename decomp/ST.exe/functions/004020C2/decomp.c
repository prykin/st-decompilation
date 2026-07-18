
int __cdecl thunk_FUN_006753a0(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)(param_1 + -0x32) >> 8);
  switch(param_1) {
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x4f:
  case 0x50:
    return (uint)uVar1 << 8;
  case 0x35:
  case 0x37:
  case 0x3c:
  case 0x40:
  case 0x41:
  case 0x44:
  case 0x49:
  case 0x4e:
  case 0x52:
    return CONCAT31(uVar1,1);
  case 0x36:
  case 0x3d:
  case 0x42:
  case 0x43:
  case 0x4d:
    return CONCAT31(uVar1,2);
  default:
    return CONCAT31(uVar1,0x7f);
  }
}

