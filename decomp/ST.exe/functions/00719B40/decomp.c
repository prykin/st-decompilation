
bool __cdecl FUN_00719b40(MCIDEVICEID *param_1,undefined4 param_2)

{
  MCIERROR MVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*param_1 == 0) {
    return false;
  }
  local_14 = 0;
  local_10 = 0;
  local_c = 0x4001;
  local_8 = param_2;
  MVar1 = mciSendCommandA(*param_1,0x814,0x112,(DWORD_PTR)&local_14);
  if (MVar1 != 0) {
    FUN_00719c90(MVar1,param_1);
    return false;
  }
  return local_10 == 0x440;
}

