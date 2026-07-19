
undefined4 thunk_FUN_005dab70(int param_1,undefined4 param_2)

{
  int iVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 auStack_48 [16];
  StartSystemTy *pSStack_8;
  
  pIVar2 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar1 = __setjmp3(auStack_48,0,unaff_ESI,pIVar2);
  if (iVar1 == 0) {
    if (DAT_00811764 != (int *)0x0) {
      FUN_006b76d0(DAT_00811764);
      if (DAT_0080877e == '\0') {
        if (*(int *)(pSStack_8 + 0x68e) != 0) {
          FUN_006b68e0(DAT_00811764,
                       (undefined4 *)(*(int *)(pSStack_8 + 0x68e) + 0xc + param_1 * 0x14));
        }
      }
      else {
        FUN_006b6750(DAT_00811764,0,param_2,0x20);
      }
      DAT_0080877f = DAT_00811764[0xe];
      StartSystemTy::GetIP(pSStack_8);
    }
    g_currentExceptionFrame = pIVar2;
    return 0;
  }
  g_currentExceptionFrame = pIVar2;
  return 0xfffffffa;
}

