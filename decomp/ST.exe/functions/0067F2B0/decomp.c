
void FUN_0067f2b0(LPCSTR param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;
  uint *puVar4;
  
  if (param_2 == 0) {
    if (0 < DAT_00848a24) {
      DAT_00848a24 = DAT_00848a24 + -1;
      puVar4 = (uint *)0x0;
      pbVar2 = thunk_FUN_0067ece0(DAT_00848a24);
      pcVar3 = (char *)thunk_FUN_0067eea0(pbVar2);
      iVar1 = thunk_FUN_0067f030((byte *)s__curr_path_007d55f4,pcVar3,puVar4);
      if (iVar1 == 0) {
        RaiseInternalException(-2,DAT_007ed77c,s___ai_ai_script_v_inl_007d55d8,0xbb);
      }
    }
  }
  else {
    GetFullPathNameA(param_1,0x104,&DAT_0084868c,(LPSTR *)0x0);
    FUN_0072e730(&DAT_0084868c,&DAT_008478a8,&DAT_00848790,&DAT_0084858c,&DAT_00811990);
    __makepath(&DAT_0084868c,&DAT_008478a8,&DAT_00848790,(char *)0x0,(char *)0x0);
    iVar1 = thunk_FUN_0067f030((byte *)s__curr_path_007d55f4,&DAT_0084868c,(uint *)0x0);
    if (iVar1 == 0) {
      RaiseInternalException(-2,DAT_007ed77c,s___ai_ai_script_v_inl_007d55d8,0xb5);
    }
    puVar4 = (uint *)0x0;
    DAT_00848a24 = DAT_00848a24 + 1;
    pcVar3 = &DAT_0084868c;
    pbVar2 = thunk_FUN_0067ece0(DAT_00848a24);
    iVar1 = thunk_FUN_0067f030(pbVar2,pcVar3,puVar4);
    if (iVar1 == 0) {
      RaiseInternalException(-2,DAT_007ed77c,s___ai_ai_script_v_inl_007d55d8,0xb6);
      return;
    }
  }
  return;
}

