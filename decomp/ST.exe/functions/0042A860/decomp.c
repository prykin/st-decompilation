#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tload.cpp
   Diagnostic line evidence: 1334 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void FUN_0042a860(void)

{
  int iVar1;
  byte *puVar1;
  short *psVar2;
  int iVar3;
  byte local_448 [1024];
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;

  iVar1 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    puVar1 = local_448 + 1;
    iVar3 = 0x100;
    psVar2 = PTR_00806750 + 7;
    do {
      puVar1[-1] = *(undefined1 *)((int)psVar2 + -1);
      *puVar1 = (char)*psVar2;
      puVar1[1] = STField<undefined1>(psVar2,1);
      puVar1 = puVar1 + 4;
      iVar3 = iVar3 + -1;
      psVar2 = psVar2 + 2;
    } while (iVar3 != 0);

    FUN_006b08f0((RecoveredGlobalRecordView_00854EB8 *)g_dDXContext_0080759C,(int)local_448,0,0x100);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  RaiseInternalException(iVar1,0,"E:\\__titans\\tload.cpp",0x536);
  return;
}

