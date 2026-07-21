
undefined4 __cdecl FUN_0067f180(byte *param_1,char *param_2)

{
  int iVar1;
  uint local_8;

  local_8 = 0xffffffff;
  iVar1 = thunk_FUN_0067f030((char *)param_1,param_2,&local_8);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return local_8;
}

