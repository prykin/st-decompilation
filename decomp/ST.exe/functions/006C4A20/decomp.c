
undefined4 * FUN_006c4a20(undefined4 param_1)

{
  undefined4 *puVar1;
  int exceptionCode;
  
  puVar1 = FUN_006aac10(0x3c);
  puVar1[8] = param_1;
  exceptionCode = FUN_006d7770((int)puVar1);
  if (exceptionCode != 0) {
    FUN_006a5e90(puVar1);
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_FLC_C_flcmopen_cpp_007edf24,0x10);
    return (undefined4 *)0x0;
  }
  return puVar1;
}

