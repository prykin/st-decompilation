#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_glsat.cpp
   Diagnostic line evidence: 176 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004d95a0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x4d0)) {
  case 0:
  case 1:
  case 4:
    uVar3 = 1;
    break;
  case 2:
    iVar2 = ReportDebugMessage(s_E____titans_Artem_TLO_glsat_cpp_007bf5b0,0xb0,0,0,&DAT_007a4ccc,
                               s_Please_Fill_this_case___007bf5d8);
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return uVar3;
}

