
undefined4 __cdecl FUN_00719a60(undefined4 param_1,byte param_2,MCIDEVICEID *param_3)

{
  MCIERROR MVar1;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  if (*param_3 == 0) {
    return 1;
  }
  local_10 = param_1;
  local_c = (uint)param_2;
  local_8 = (uint)(byte)(param_2 + 1);
  MVar1 = mciSendCommandA(*param_3,0x806,0xd,(DWORD_PTR)&local_10);
  if (MVar1 != 0) {
    FUN_00719c90(MVar1,param_3);
    return 1;
  }
  return 0;
}

