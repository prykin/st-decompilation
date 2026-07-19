
int FUN_006e5c70(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int local_10;
  uint local_c;
  int local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar2 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    FUN_006b98c0((int *)(local_8 + 0xc),&local_10);
    iVar3 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x473,0,iVar2,&DAT_007a4ccc,
                               s_SystemClassTy__GetToAllObjects_E_007eeb90);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x474);
    return iVar2;
  }
  FUN_006b9910((int *)(local_8 + 0xc),&local_10);
  iVar2 = *(int *)(local_8 + 0x10);
  local_c = 0;
  if (*(int *)(iVar2 + 0xc) != 0) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar2 = 0;
      goto LAB_006e5cd8;
    }
    do {
      iVar2 = *(int *)(iVar2 + 8) * local_c + *(int *)(iVar2 + 0x1c);
LAB_006e5cd8:
      iVar2 = (**(code **)**(undefined4 **)(iVar2 + 4))(param_1);
      if (iVar2 == 0xffff) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x46b);
      }
      iVar2 = *(int *)(local_8 + 0x10);
      local_c = local_c + 1;
    } while (local_c < *(uint *)(iVar2 + 0xc));
  }
  FUN_006b98c0((int *)(local_8 + 0xc),&local_10);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

