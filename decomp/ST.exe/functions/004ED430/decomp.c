#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_vqb.cpp
   Diagnostic line evidence: 143 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004ed430(int param_1)

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
    iVar2 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_vqb.cpp",0x8f,0,0,"%s",
                               "Please Fill this case !");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return uVar3;
}

