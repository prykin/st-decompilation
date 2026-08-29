#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_vqb.cpp
   Diagnostic line evidence: 155 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004ed4b0(RecoveredRecord_004ED4B0_7C418538 *param_1)

{
  int iVar2;
  uint uVar3;
  uVar3 = 0;
  switch(param_1->field_04D0) {
  case 2:

    iVar2 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_vqb.cpp",0x9b,0,0,"%s",
                               "Please Fill thid case !");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    break;
  case 4:
    if (param_1->field_04D4 < DAT_0079aab8) {
      return 0;
    }
  case 0:
  case 1:
    uVar3 = 1;
  }
  return uVar3;
}

