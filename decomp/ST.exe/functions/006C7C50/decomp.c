
int * FUN_006c7c50(undefined4 param_1,uint param_2)

{
  int *piVar1;
  DWORD exceptionCode;
  
  piVar1 = FUN_006aac10(0x3e);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *(undefined4 *)((int)piVar1 + 0x2a) = param_1;
  *(code **)((int)piVar1 + 0x36) = FUN_006c7cb0;
  exceptionCode = FUN_006c7700(piVar1,param_2);
  if (exceptionCode != 0) {
    FUN_006c7980(piVar1);
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_GPC_C_pcxmemop_c_007ee048,0x37);
    return (int *)0x0;
  }
  return piVar1;
}

