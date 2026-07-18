
undefined4 __cdecl FUN_0067f0f0(char *param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 in_stack_ffffffbc;
  
  iVar1 = thunk_FUN_0067ee70(param_2);
  pvVar2 = DAT_00858df8;
  if (iVar1 != 0) {
    DAT_00858df8 = &stack0xffffffb8;
    iVar1 = __setjmp3((undefined4 *)&stack0xffffffbc,0,pvVar2,in_stack_ffffffbc);
    if (iVar1 == 0) {
      FUN_006b6020(DAT_00848a1c,param_2,param_1);
      DAT_00858df8 = pvVar2;
      return 1;
    }
  }
  DAT_00858df8 = pvVar2;
  return 0;
}

