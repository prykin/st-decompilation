
undefined4 __cdecl FUN_007199f0(undefined4 param_1,uint param_2,MCIDEVICEID *param_3)

{
  MCIERROR MVar1;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
  if (*param_3 == 0) {
    return 1;
  }
  local_10 = param_1;
  local_8 = 0;
  local_c = param_2 & 0xff;
  MVar1 = mciSendCommandA(*param_3,0x806,5,(DWORD_PTR)&local_10);
  if (MVar1 != 0) {
    FUN_00719c90(MVar1,param_3);
    return 1;
  }
  return 0;
}

