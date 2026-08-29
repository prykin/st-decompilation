#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STDcResourcC.
   Evidence: this_call_owners=[STDcResourcC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 * __thiscall STDcResourcC::sub_0057F470(STDcResourcC *this,int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar6_mg0;

  pcVar6_mg0 = PTR_s_rmeta__d_007cb0a0;
  if (param_1 == -1) {

    param_1 = thunk_FUN_0057f240(0xde,this->field_0259);
    pcVar6_mg0 = PTR_s_rmeta_c_d_007cb09c;
  }
  /* ST_CALLSITE[0057F4A3]: CALL dword ptr [0x0085bde8] */
  wsprintfA(&CHAR_00h_00811690,pcVar6_mg0,param_1);
  if (param_2 == 0) {
    return (undefined4 *)&CHAR_00h_00811690;
  }
  uVar2 = 0xffffffff;
  pcVar5 = &CHAR_m_007cb260;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  pcVar5 = &CHAR_00h_00811690;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
  return (undefined4 *)&CHAR_00h_00811690;
}

