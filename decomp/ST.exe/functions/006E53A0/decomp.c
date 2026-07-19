
int FUN_006e53a0(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_8 = -4;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar2 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    FUN_006b98c0((int *)(local_c + 0xc),&local_14);
    iVar3 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x3a2,0,iVar2,&DAT_007a4ccc,
                               s_SystemClassTy__FindFirstObject_E_007eeaa0);
    if (iVar3 == 0) {
      RaiseInternalException(iVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x3a3);
      return iVar2;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006b9910((int *)(local_c + 0xc),&local_14);
  iVar2 = *(int *)(local_c + 0x10);
  local_10 = 0;
  if (*(int *)(iVar2 + 0xc) != 0) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar3 = 0;
      goto LAB_006e540d;
    }
    do {
      iVar3 = *(int *)(iVar2 + 8) * local_10 + *(int *)(iVar2 + 0x1c);
LAB_006e540d:
      if (*(int *)(*(int *)(iVar3 + 4) + 4) == param_1) {
        if (param_2 != (int *)0x0) {
          *param_2 = *(int *)(iVar3 + 4);
        }
        local_8 = 0;
        break;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(uint *)(iVar2 + 0xc));
  }
  FUN_006b98c0((int *)(local_c + 0xc),&local_14);
  g_currentExceptionFrame = local_58.previous;
  return local_8;
}

