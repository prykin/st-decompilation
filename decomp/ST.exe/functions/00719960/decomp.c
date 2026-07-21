
undefined4 __cdecl FUN_00719960(MCIDEVICEID *param_1)

{
  MCIERROR mcierr;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_1 == 0) {
    return 1;
  }
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_c = 3;
  mcierr = mciSendCommandA(*param_1,0x814,0x100,(DWORD_PTR)&local_14);
  if (mcierr != 0) {
    FUN_00719c90(mcierr,param_1);
    return 1;
  }
  DAT_00857038 = local_10;
  if (local_10 == 0) {
    FUN_00719c60((DWORD_PTR)param_1);
    return 1;
  }
  return 0;
}

