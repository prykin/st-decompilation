
int __cdecl FUN_0073d050(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_008572e8 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_008572e8 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_008572e8 != (FARPROC)0x0) {
        DAT_008572ec = GetProcAddress(hModule,"GetActiveWindow");
        DAT_008572f0 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_0073d0c3;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_0073d0c3:
    if (DAT_008572ec != (FARPROC)0x0) {
      local_8 = (*DAT_008572ec)();
    }
    if ((local_8 != 0) && (DAT_008572f0 != (FARPROC)0x0)) {
      local_8 = (*DAT_008572f0)(local_8);
    }
    iVar1 = (*DAT_008572e8)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}

