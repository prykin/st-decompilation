#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STDcResourcC.
   Evidence: this_call_owners=[STDcResourcC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=6; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 * __thiscall STDcResourcC::sub_0057F3A0(STDcResourcC *this,int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar5_mg0;

  pcVar5_mg0 = PTR_s_rgold__d_007cb098;
  if (param_1 == -1) {
    iVar4 = this->field_0259 / 999999;
    if (0 < iVar4) {
      iVar4 = 0;
    }
    param_1 = -iVar4;
    pcVar5_mg0 = PTR_s_rgold_c0_007cb094;
  }
  wsprintfA((LPSTR)&DAT_00811650,pcVar5_mg0,param_1);
  if (param_2 == 0) {
    return &DAT_00811650;
  }
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_007cb260;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar5 = (char *)&DAT_00811650;
  do {
    pcVar6 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
  return &DAT_00811650;
}

