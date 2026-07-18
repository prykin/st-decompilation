
int FUN_006db640(int param_1)

{
  if (param_1 < 0) {
    if (param_1 < -0x167) {
      param_1 = 0x168 - -param_1 % 0x168;
    }
    else {
      param_1 = param_1 + 0x168;
    }
  }
  else if (0x167 < param_1) {
    param_1 = param_1 % 0x168;
  }
  if (0xb4 < param_1) {
    if (0x10e < param_1) {
      return -*(int *)(s_AppClassTy__AddSystem_Warning___T_007ee990 + param_1 * -4 + 0x28);
    }
    return -*(int *)(s_KW_STR_C_strtodbl_c_007ee148 + param_1 * 4);
  }
  if (0x5a < param_1) {
    return *(int *)(&DAT_007ee6e8 + param_1 * -4);
  }
  return *(int *)(&DAT_007ee418 + param_1 * 4);
}

