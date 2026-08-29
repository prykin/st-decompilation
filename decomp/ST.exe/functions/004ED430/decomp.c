#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_vqb.cpp
   Diagnostic line evidence: 143 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004ed430(RecoveredRecord_004ED430_B731E46F *param_1)

{
  int iVar2;
  uint uVar3;
  uVar3 = 0;
  switch(param_1->field_04D0) {
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

