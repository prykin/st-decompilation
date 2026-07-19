
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\ourlib\Mfstmap.cpp
   Diagnostic line evidence: 263 | 265 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl mfTMapErase(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_ESI;
  int iVar3;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = *param_1;
    if (iVar2 != 0) {
      iVar3 = 0;
      if (0 < *(int *)(iVar2 + 0x455)) {
        do {
          if (*(int *)(iVar2 + 0x459 + iVar3 * 4) != 0) {
            FUN_006ab060((undefined4 *)(iVar2 + 0x459 + iVar3 * 4));
          }
          iVar2 = *param_1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar2 + 0x455));
      }
      iVar2 = 0;
      do {
        cMf32::RecMemFree(*(cMf32 **)(*param_1 + 5),(uint *)(iVar2 + 0x40d + *param_1));
        iVar2 = iVar2 + 4;
      } while (iVar2 < 0x40);
      FUN_006ab060(param_1);
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x107,0,iVar2,&DAT_007a4ccc,
                             s_mfTMapErase_007eeffc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x109);
  return;
}

