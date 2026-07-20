
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_erc.cpp
   Diagnostic line evidence: 86 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl FUN_0064a830(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  iVar1 = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar3);
  if (iVar1 == 0) {
    if (*param_1 <= param_1[1]) {
      iVar1 = *param_1 + 10;
      *param_1 = iVar1;
      iVar1 = Library::DKW::LIB::FUN_006acf50(param_1[2],iVar1 * 5);
      param_1[2] = iVar1;
    }
    puVar2 = (undefined4 *)(param_1[1] * 5 + param_1[2]);
    *puVar2 = *param_2;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    g_currentExceptionFrame = pIVar3;
    return iVar1;
  }
  g_currentExceptionFrame = pIVar3;
  RaiseInternalException(iVar1,0,s_E____titans_ai_ai_erc_cpp_007d2a04,0x56);
  if (iVar1 < 0) {
    return iVar1;
  }
  return -1;
}

