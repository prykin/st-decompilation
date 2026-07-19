
void FUN_006e3970(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int errorCode;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  errorCode = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    uVar5 = *(int *)(*(int *)(local_8 + 0xc) + 0xc) - 1;
    uVar3 = FUN_006acc70(*(int *)(local_8 + 0xc),uVar5,&local_10);
    while (-1 < (int)uVar3) {
      if (local_c[2] == param_1) {
        FUN_006b0c70(*(int *)(local_8 + 0xc),uVar5);
        thunk_FUN_006a4950(local_c);
        for (puVar1 = *(undefined4 **)(local_8 + 0x30); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          uVar3 = puVar1[1];
          if ((uVar5 <= uVar3) && (uVar3 != 0)) {
            puVar1[1] = uVar3 - 1;
          }
        }
      }
      uVar5 = uVar5 - 1;
      uVar3 = FUN_006acc70(*(int *)(local_8 + 0xc),uVar5,&local_10);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0xa1,0,errorCode,&DAT_007a4ccc,
                             s_AppClassTy__DeleteObject_Error___007ee83c);
  if (iVar4 == 0) {
    RaiseInternalException(errorCode,0,s_E__Ourlib_Sapp_cpp_007ee78c,0xa2);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

