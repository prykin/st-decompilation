
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\Mfimg.cpp
   Diagnostic line evidence: 283 | 289 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl mfGifLoadToDib(cMf32 *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int errorCode;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_54;
  int *local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0;
  local_8 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x11b,0,errorCode,&DAT_007a4ccc,
                               s_mfGifLoadToDib_007f0050);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar1)();
      return puVar4;
    }
    if (local_10 != (undefined4 *)0x0) {
      FUN_006c6fc0(local_10);
    }
    cMf32::RecMemFree(param_1,&local_c);
    if (local_8 != (undefined4 *)0x0) {
      FUN_006ab060(&local_8);
    }
    RaiseInternalException(errorCode,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x121);
    return (undefined4 *)0x0;
  }
  local_c = FUN_0070aab0(param_1,param_2,0,param_3);
  if (local_c == 0) {
    g_currentExceptionFrame = local_54.previous;
    return (undefined4 *)0x0;
  }
  piVar2 = Library::DKW::GPC::FUN_006c7dc0(local_c);
  local_10 = piVar2;
  local_8 = Library::DKW::GPC::FUN_006c7070(piVar2,(undefined4 *)0x0,0);
  if (piVar2 != (int *)0x0) {
    FUN_006c6fc0(piVar2);
  }
  cMf32::RecMemFree(param_1,&local_c);
  g_currentExceptionFrame = local_54.previous;
  return local_8;
}

