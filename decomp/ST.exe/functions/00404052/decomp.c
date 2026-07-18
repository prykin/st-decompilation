
undefined4 thunk_FUN_00601db0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  default:
    return 1;
  case 0xa6:
  case 0xa7:
  case 0xaf:
  case 0xbd:
    return 3;
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
    return 4;
  case 0xfd:
    return 2;
  case 0xfe:
    return 5;
  }
}

