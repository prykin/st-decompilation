
undefined4 __cdecl FUN_00719bb0(MCIDEVICEID *param_1)

{
  MCIDEVICEID MVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_1 != 0) {
    local_14 = 0;
    local_10 = 0;
    local_8 = 0;
    local_c = 4;
    mciSendCommandA(*param_1,0x814,0x102,(DWORD_PTR)&local_14);
    if ((local_10 == 0x20c) || (local_10 == 0x212)) {
      MVar1 = *param_1;
    }
    else {
      local_c = 5;
      mciSendCommandA(*param_1,0x814,0x102,(DWORD_PTR)&local_14);
      if (local_10 != 0) {
        return 1;
      }
      MVar1 = *param_1;
      local_10 = 0;
    }
    if (MVar1 != 0) {
      FUN_00719560((DWORD_PTR)param_1);
      FUN_00719c60((DWORD_PTR)param_1);
    }
  }
  return 0;
}

