
undefined4 * thunk_FUN_00649eb0(void)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 *puVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_58 [16];
  uint uStack_18;
  uint uStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  puStack_c = (undefined4 *)0x0;
  puStack_8 = (undefined4 *)0x0;
  puStack_10 = (undefined4 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  errorCode = __setjmp3(auStack_58,0,unaff_ESI,pIVar4);
  if (errorCode == 0) {
    puStack_8 = thunk_FUN_00648400(s_Default_Arbiter_007d2988,1);
    puStack_10 = thunk_FUN_0065cd10(*(undefined4 **)((int)puStack_8 + 0x4e),&uStack_14);
    puStack_c = thunk_FUN_00648620(puStack_8,puStack_10,uStack_14,&uStack_18);
    thunk_FUN_0065d0f0((int *)&puStack_10);
    thunk_FUN_006484f0((int *)&puStack_8);
    g_currentExceptionFrame = pIVar4;
    return puStack_c;
  }
  g_currentExceptionFrame = pIVar4;
  thunk_FUN_0065d0f0((int *)&puStack_10);
  thunk_FUN_006484f0((int *)&puStack_8);
  thunk_FUN_006484f0((int *)&puStack_c);
  iVar2 = ReportDebugMessage(s_E____titans_ai_ai_creat_cpp_007d2880,0x1c1,0,errorCode,&DAT_007a4ccc,
                             s_CreateDefaultBossData_007d296c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_creat_cpp_007d2880,0x1c2);
  return (undefined4 *)0x0;
}

