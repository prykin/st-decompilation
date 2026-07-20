
undefined4 __cdecl FUN_007196a0(undefined4 param_1,MCIDEVICEID *param_2)

{
  MCIERROR mcierr;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*param_2 == 0) {
    return 1;
  }
  local_14 = 0;
  local_10 = param_1;
  local_c = 0;
  local_8 = 0;
  mcierr = mciSendCommandA(*param_2,0x841,0x10000,(DWORD_PTR)&local_14);
  if (mcierr != 0) {
    FUN_00719c90(mcierr,param_2);
    return 1;
  }
  return 0;
}

