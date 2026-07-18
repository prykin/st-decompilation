
undefined4 __cdecl FUN_00719790(undefined4 *param_1,MCIDEVICEID *param_2)

{
  MCIERROR MVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*param_2 == 0) {
    return 1;
  }
  local_18 = 0;
  local_14 = *param_1;
  local_10 = param_1[1];
  local_c = param_1[2];
  local_8 = param_1[3];
  MVar1 = mciSendCommandA(*param_2,0x842,0x50002,(DWORD_PTR)&local_18);
  if (MVar1 != 0) {
    FUN_00719c90(MVar1,param_2);
    return 1;
  }
  return 0;
}

