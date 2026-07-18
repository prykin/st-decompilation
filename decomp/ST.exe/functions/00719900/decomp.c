
undefined4 __cdecl FUN_00719900(MCIDEVICEID *param_1)

{
  MCIERROR MVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*param_1 == 0) {
    return 1;
  }
  local_10 = 0;
  local_8 = 0;
  local_c = 10;
  MVar1 = mciSendCommandA(*param_1,0x80d,0x400,(DWORD_PTR)&local_10);
  if (MVar1 != 0) {
    FUN_00719c90(MVar1,param_1);
    return 1;
  }
  return 0;
}

