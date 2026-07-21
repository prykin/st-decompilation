
void __cdecl FUN_005de5b0(UINT param_1,int param_2)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  LPCSTR lpCaption;
  UINT uType;
  CHAR local_108 [260];
  
  if (param_2 < 0) {
    LoadResourceString(param_1,HINSTANCE_00807618);
    wsprintfA(local_108,&DAT_007a4ccc,extraout_EAX_00);
  }
  else {
    LoadResourceString(param_1,HINSTANCE_00807618);
    wsprintfA(local_108,s__s__d_007cd928,extraout_EAX,param_2);
  }
  uType = 0x10;
  LoadResourceString(0x2648,HINSTANCE_00807618);
  MessageBoxA(HWND_00856d78,local_108,lpCaption,uType);
  return;
}

