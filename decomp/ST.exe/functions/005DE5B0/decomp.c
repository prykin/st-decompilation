
void __cdecl FUN_005de5b0(UINT param_1,int param_2)

{
  undefined4 uVar1;
  LPCSTR lpCaption;
  UINT uType;
  CHAR local_108 [260];
  
  if (param_2 < 0) {
    uVar1 = FUN_006b0140(param_1,DAT_00807618);
    wsprintfA(local_108,&DAT_007a4ccc,uVar1);
  }
  else {
    uVar1 = FUN_006b0140(param_1,DAT_00807618);
    wsprintfA(local_108,s__s__d_007cd928,uVar1,param_2);
  }
  uType = 0x10;
  lpCaption = (LPCSTR)FUN_006b0140(0x2648,DAT_00807618);
  MessageBoxA(DAT_00856d78,local_108,lpCaption,uType);
  return;
}

