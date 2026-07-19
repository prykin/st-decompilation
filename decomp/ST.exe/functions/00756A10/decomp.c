
void FUN_00756a10(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xc) != 0xcf) && (*(int *)(param_1 + 0xc) != 0xcc)) {
    RaiseInternalException(0x12,DAT_007ed77c,s_E__DKW_JPG_C_jdapistd_c_007f2d50,0xea);
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if ((*(int *)(*(int *)(param_1 + 0x1a2) + 0x14) != 0) && (*(int *)(param_1 + 0x88) < param_2)) {
    param_2 = *(int *)(param_1 + 0x88);
  }
  *(int *)(param_1 + 0x90) = param_2;
  FUN_00756800(param_1);
  return;
}

