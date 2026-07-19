
undefined4 * FUN_007537c0(LPCSTR param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  uint exceptionCode;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;
  
  puVar1 = FUN_006aac10(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = DAT_007f2c38;
  puVar1[1] = 0x101;
  local_8 = puVar1;
  exceptionCode = FUN_00755180((int)puVar1,param_1,param_2,2);
  if (exceptionCode == 0) {
    *(undefined4 *)(puVar1[2] + 0x10) = *puVar1;
    *(undefined2 *)(puVar1[2] + 0x14) = *(undefined2 *)(puVar1 + 1);
    *(undefined4 *)(puVar1[2] + 0x1c) = 0xffffffff;
    *(undefined2 *)(puVar1[2] + 0x16) = 0x800;
    *(undefined2 *)(puVar1[2] + 0x20) = 0;
    *(undefined4 *)(puVar1[2] + 0x22) = 0x20;
    *(undefined4 *)(puVar1[2] + 0x18) = 0x20;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    exceptionCode = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar1 = local_8;
    if (exceptionCode == 0) {
      FUN_006d4860(local_8[2],0,(undefined4 *)(local_8[2] + 0x10),0x20);
      *(int *)(puVar1[2] + 0x18) = *(int *)(puVar1[2] + 0x18) + 0x20;
      *(undefined2 *)(*(int *)(puVar1[2] + 0x50) + 0x28) = *(undefined2 *)(puVar1[2] + 0x20);
      *(short *)(puVar1[2] + 0x20) = *(short *)(puVar1[2] + 0x20) + 1;
      *(undefined4 *)(*(int *)(puVar1[2] + 0x50) + 0x20) = 0xffffffff;
      exceptionCode = FUN_00754fd0((int)puVar1,*(undefined4 *)(puVar1[2] + 0x22),param_3);
      if (exceptionCode != 0) goto LAB_007538e9;
      FUN_00750f20((int)puVar1,0,0);
    }
    g_currentExceptionFrame = local_4c.previous;
    if (exceptionCode == 0) {
      return puVar1;
    }
  }
LAB_007538e9:
  FUN_007532a0(puVar1);
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DB_C_btcreate_c_007f2c20,0x35);
  return (undefined4 *)0x0;
}

