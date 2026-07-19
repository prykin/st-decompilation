
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\mfwav.cpp
   Diagnostic line evidence: 151 | 162 | 166 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __cdecl mfWavSaveFile(LPCSTR param_1,byte param_2,int param_3,char *param_4,char param_5)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  uint local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (((param_3 == 0) || (param_1 == (LPCSTR)0x0)) || (param_4 == (char *)0x0)) {
      RaiseInternalException(-6,DAT_007ed77c,s_E__Ourlib_mfwav_cpp_007f0800,0x97);
    }
    if (param_2 == 0) {
      local_8 = (byte *)ReadAllFile(param_1,&local_c);
    }
    else {
      local_8 = (byte *)GetPcmFromWavFile(param_1,(int *)&local_c);
    }
    mfWavSave(local_8,local_c,param_2,param_3,param_4,param_5);
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    g_currentExceptionFrame = local_50.previous;
    return 1;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = ReportDebugMessage(s_E__Ourlib_mfwav_cpp_007f0800,0xa2,0,errorCode,&DAT_007a4ccc,
                             s_mfWavSaveFile_007f0850);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (local_8 != (byte *)0x0) {
    FUN_006ab060(&local_8);
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfwav_cpp_007f0800,0xa6);
  return 0;
}

