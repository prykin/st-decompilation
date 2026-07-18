
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00733b40(int param_1)

{
  code *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  switch(param_1) {
  case 2:
    local_14 = &DAT_008571e4;
    local_18 = DAT_008571e4;
    break;
  default:
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    local_14 = siglookup(param_1);
    local_14 = local_14 + 2;
    local_18 = (code *)*local_14;
    break;
  case 0xf:
    local_14 = &DAT_008571f0;
    local_18 = DAT_008571f0;
    break;
  case 0x15:
    local_14 = &DAT_008571e8;
    local_18 = DAT_008571e8;
    break;
  case 0x16:
    local_14 = &DAT_008571ec;
    local_18 = DAT_008571ec;
  }
  if (local_18 != (code *)0x1) {
    if (local_18 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      __exit(3);
    }
    if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
      local_10 = DAT_008572f4;
      DAT_008572f4 = 0;
      if (param_1 == 8) {
        local_8 = DAT_007f1ff4;
        DAT_007f1ff4 = 0x8c;
      }
    }
    if (param_1 == 8) {
      for (local_c = DAT_007f1fe8; local_c < DAT_007f1fe8 + _DAT_007f1fec; local_c = local_c + 1) {
        *(undefined4 *)(local_c * 0xc + 0x7f1f78) = 0;
      }
    }
    else {
      *local_14 = 0;
    }
    if (param_1 == 8) {
      (*local_18)(8,DAT_007f1ff4);
    }
    else {
      (*local_18)(param_1);
      if ((param_1 != 0xb) && (param_1 != 4)) {
        return 0;
      }
    }
    if (param_1 == 8) {
      DAT_007f1ff4 = local_8;
    }
    DAT_008572f4 = local_10;
    return 0;
  }
  return 0;
}

