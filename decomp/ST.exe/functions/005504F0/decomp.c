#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=5; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
STPlaySystemC::sub_005504F0(STPlaySystemC *this,int param_1,UINT param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  CHAR local_10c [260];
  STPlaySystemC *local_8;

  uVar2 = 0;
  local_8 = this;
  if (DAT_00808aaf != 0) {
    pcVar3 = &DAT_00808af6;
    do {
      if (((*(int *)(pcVar3 + -6) == param_1) && (*pcVar3 != '\0')) && (param_2 != 0)) {
        pcVar1 = LoadResourceString(param_2,g_hINSTANCE_00807618);
        /* ST_CALLSITE[00550543]: CALL dword ptr [0x0085bde8] */
        wsprintfA(local_10c,"%s %s",pcVar3 + -0x46,pcVar1);
        if (g_popUp_008016D8 != nullptr) {
          /* ST_CALLSITE[0055055F]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
          PopUpTy::sub_0052D320(g_popUp_008016D8,local_10c,8);
        }
      }
      uVar2 = uVar2 + 1;
      pcVar3 = pcVar3 + 0x9c;
    } while (uVar2 < DAT_00808aaf);
  }
  if (param_3 != 0) {
    /* ST_CALLSITE[00550587]: CALL 0x00401370; direct=00401370 STPlaySystemC::sub_005508F0 */
    sub_005508F0(local_8,param_1);
  }
  return;
}

