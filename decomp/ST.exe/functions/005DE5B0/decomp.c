
void __cdecl FUN_005de5b0(UINT param_1,int param_2)

{
  char *pcVar1;
  UINT uType;
  CHAR local_108 [260];

  if (param_2 < 0) {
    pcVar1 = LoadResourceString(param_1,g_module_00807618);
    wsprintfA(local_108,"%s",pcVar1);
  }
  else {
    pcVar1 = LoadResourceString(param_1,g_module_00807618);
    wsprintfA(local_108,"%s\n%d",pcVar1,param_2);
  }
  uType = 0x10;
  pcVar1 = LoadResourceString(0x2648,g_module_00807618);
  MessageBoxA(HWND_00856d78,local_108,pcVar1,uType);
  return;
}

