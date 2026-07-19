
undefined4 * FUN_00751fc0(undefined4 param_1)

{
  undefined4 *puVar1;
  int exceptionCode;
  
  puVar1 = FUN_006aac10(0x76);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *(undefined4 *)((int)puVar1 + 0x32) = param_1;
  *(code **)((int)puVar1 + 0x42) = FUN_00752030;
  *(code **)((int)puVar1 + 0x4a) = FUN_00752060;
  *(code **)((int)puVar1 + 0x4e) = FUN_00752080;
  exceptionCode = FUN_006c6ae0((int)puVar1);
  if (exceptionCode != 0) {
    FUN_006c6fc0(puVar1);
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_GPC_C_giffileo_c_007f2b78,0x44);
    return (undefined4 *)0x0;
  }
  return puVar1;
}

