
undefined4 FUN_006c2cc0(int *param_1,int *param_2,int *param_3)

{
  undefined4 extraout_EAX;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && ((param_1[2] & 0x40000000U) != 0)) {
    if (param_2 != (int *)0x0) {
      *param_2 = param_1[0xf];
    }
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x10];
    }
    return 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  RaiseInternalException(-0x34,DAT_007ed77c,s_E__DKW_DV_C_dkbvideo_cpp_007ede64,0xe8);
  return extraout_EAX;
}

