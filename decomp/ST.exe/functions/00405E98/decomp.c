
undefined4 __cdecl thunk_FUN_0067f180(byte *param_1,char *param_2)

{
  int iVar1;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  iVar1 = thunk_FUN_0067f030(param_1,param_2,&uStack_8);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return uStack_8;
}

