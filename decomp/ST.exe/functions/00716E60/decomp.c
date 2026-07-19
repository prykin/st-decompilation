
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\mftspr.cpp
   Diagnostic line evidence: 210 | 211 | 216 | 222 | 224 (metadata/report site, not the function
   definition)
   [STSourceProvenanceApplier end] */

int __cdecl mfTSprGetNumFas(cMf32 *param_1,char *param_2,char param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  short local_14 [5];
  short local_a;
  ushort *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_3 == '\x1d') {
      local_8 = cMf32::RecGet(param_1,0x1d,param_2,(int *)0x0,param_4);
      if (local_8 == (ushort *)0x0) {
        RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0xd2);
      }
      puVar3 = cMf32::RecGetParam(param_1,6,(char *)local_8,(undefined4 *)local_14,param_4);
      if (puVar3 == (undefined4 *)0x0) {
        RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0xd3);
      }
      cMf32::RecMemFree(param_1,(uint *)&local_8);
      g_currentExceptionFrame = local_58.previous;
      return (int)local_a;
    }
    puVar3 = cMf32::RecGetParam(param_1,0x13,param_2,(undefined4 *)local_14,param_4);
    if (puVar3 == (undefined4 *)0x0) {
      RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0xd8);
    }
    g_currentExceptionFrame = local_58.previous;
    return (int)local_14[0];
  }
  g_currentExceptionFrame = local_58.previous;
  if ((param_4 == 0) && (iVar2 == -4)) {
    return -4;
  }
  iVar4 = ReportDebugMessage(s_E__Ourlib_mftspr_cpp_007f0504,0xde,0,iVar2,&DAT_007a4ccc,
                             s_mfTSprGetNumFas_007f051c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mftspr_cpp_007f0504,0xe0);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

