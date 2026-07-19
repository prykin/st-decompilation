
undefined4 * __cdecl FUN_0070ac10(cMf32 *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int errorCode;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x14b,0,errorCode,&DAT_007a4ccc,
                               s_mfPcxLoadToDib_007f0060);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (undefined4 *)(*pcVar1)();
      return puVar5;
    }
    if (local_10 != (undefined4 *)0x0) {
      FUN_006c7980(local_10);
    }
    cMf32::RecMemFree(param_1,&local_8);
    if (local_c != (undefined4 *)0x0) {
      FUN_006ab060(&local_c);
    }
    RaiseInternalException(errorCode,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x151);
    return (undefined4 *)0x0;
  }
  local_8 = FUN_0070abf0(param_1,param_2,0,param_3);
  if (local_8 == 0) {
    g_currentExceptionFrame = local_54.previous;
    return (undefined4 *)0x0;
  }
  uVar2 = FUN_0070a650(param_1,4,param_2,param_3);
  piVar3 = Library::DKW::GPC::FUN_006c7c50(local_8,uVar2);
  local_10 = piVar3;
  local_c = Library::DKW::GPC::FUN_006c79a0(piVar3,(undefined4 *)0x0,0);
  if (piVar3 != (int *)0x0) {
    FUN_006c7980(piVar3);
  }
  cMf32::RecMemFree(param_1,&local_8);
  g_currentExceptionFrame = local_54.previous;
  return local_c;
}

