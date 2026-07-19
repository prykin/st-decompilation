
void FUN_007562e0(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0xfe) {
    *(undefined4 *)(*(int *)(param_1 + 0x1a6) + 0xc) = param_3;
    return;
  }
  if ((0xdf < param_2) && (param_2 < 0xf0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x1a6) + -0x370 + param_2 * 4) = param_3;
    return;
  }
  RaiseInternalException(0x43,DAT_007ed77c,s_E__DKW_JPG_C_jdapimin_c_007f2d38,0x74);
  return;
}

