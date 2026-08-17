#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_trade.cpp
   Diagnostic line evidence: 283 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004ec050(int param_1)

{
  STT3DSprC *pSVar1;
  int exceptionCode;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x5ff) == 0) {
    pSVar1 = (STT3DSprC *)Library::MSVCRT::FUN_0072e530(0x40);
    if (pSVar1 == nullptr) {
      pSVar1 = nullptr;
    }
    else {
      /* ST_CALLSITE[004EC06D]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
      pSVar1 = STT3DSprC::STT3DSprC(pSVar1);
    }
    *(STT3DSprC **)(param_1 + 0x5ff) = pSVar1;
    /* ST_CALLSITE[004EC097]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    exceptionCode =
         STT3DSprC::Init(pSVar1,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (exceptionCode != 0) {
      RaiseInternalException
                (exceptionCode,g_overwriteContext_007ED77C,
                 "E:\\__titans\\Artem\\TLO_trade.cpp",0x11b);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004ad5e0(*(STT3DSprC **)(param_1 + 0x5ff));
  }
  return 0;
}

