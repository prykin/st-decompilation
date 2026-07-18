
uint __cdecl FUN_00740f90(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint uVar2;
  byte local_10;
  
  local_10 = 0;
  if ((param_2 & 8) != 0) {
    local_10 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    local_10 = local_10 | 0x80;
  }
  if ((param_2 & 0x80) != 0) {
    local_10 = local_10 | 0x10;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
    uVar2 = 0xffffffff;
  }
  else {
    if (DVar1 == 2) {
      local_10 = local_10 | 0x40;
    }
    else if (DVar1 == 3) {
      local_10 = local_10 | 8;
    }
    uVar2 = FUN_00740c80();
    if (uVar2 == 0xffffffff) {
      DAT_00857148 = 0x18;
      DAT_0085714c = 0;
      uVar2 = 0xffffffff;
    }
    else {
      __set_osfhnd(uVar2,(intptr_t)param_1);
      *(byte *)((&DAT_0085a1a0)[(int)uVar2 >> 5] + 4 + (uVar2 & 0x1f) * 8) = local_10 | 1;
    }
  }
  return uVar2;
}

