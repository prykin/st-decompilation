
undefined4 __cdecl FUN_007194d0(undefined4 param_1,MCIDEVICEID *param_2)

{
  MCIERROR MVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*param_2 == 0) {
    return 1;
  }
  MVar1 = mciSendCommandA(*param_2,0x807,0x102,0);
  if (MVar1 != 0) {
    FUN_00719c90(MVar1,param_2);
    return 1;
  }
  local_c = 0;
  local_8 = 0;
  local_10 = param_1;
  MVar1 = mciSendCommandA(*param_2,0x806,1,(DWORD_PTR)&local_10);
  if (MVar1 != 0) {
    FUN_00719c90(MVar1,param_2);
    return 1;
  }
  return 0;
}

