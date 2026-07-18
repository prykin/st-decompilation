
undefined4 __cdecl thunk_FUN_006a55d0(void *param_1,UINT_PTR param_2,int param_3)

{
  BOOL BVar1;
  
  if ((param_1 == (void *)0x0) || (BVar1 = IsBadReadPtr(param_1,param_2), BVar1 != 0)) {
    return 0;
  }
  if ((param_3 != 0) && (BVar1 = IsBadWritePtr(param_1,param_2), BVar1 != 0)) {
    return 0;
  }
  return 1;
}

