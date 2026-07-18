
undefined4 __cdecl FUN_00719810(MCIDEVICEID *param_1,int param_2)

{
  MCIERROR MVar1;
  MCIDEVICEID mciId;
  DWORD_PTR dwParam1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (param_2 == 0) {
    dwParam1 = 0x5002;
    mciId = *param_1;
  }
  else {
    dwParam1 = 0x3002;
    mciId = *param_1;
  }
  MVar1 = mciSendCommandA(mciId,0x80d,dwParam1,(DWORD_PTR)&local_10);
  if (MVar1 != 0) {
    FUN_00719c90(MVar1,param_1);
    return 1;
  }
  return 0;
}

