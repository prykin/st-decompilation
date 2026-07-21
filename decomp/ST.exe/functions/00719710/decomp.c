
undefined4 __cdecl FUN_00719710(undefined4 *param_1,MCIDEVICEID *param_2)

{
  MCIERROR mcierr;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_2 == 0) {
    return 1;
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  mcierr = mciSendCommandA(*param_2,0x843,0x20002,(DWORD_PTR)&local_18);
  if (mcierr != 0) {
    FUN_00719c90(mcierr,param_2);
    return 1;
  }
  *param_1 = local_14;
  param_1[1] = local_10;
  param_1[2] = local_c;
  param_1[3] = local_8;
  return 0;
}

