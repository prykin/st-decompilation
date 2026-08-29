#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004E80F0_param_2Enum. Cases:
   CASE_A3=163;CASE_A8=168;CASE_B2=178;CASE_BE=190

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=6; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_sub_004E80F0_param_2Enum. Cases:
   CASE_A3=163;CASE_A8=168;CASE_B2=178;CASE_BE=190
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (6), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00660F70 @ 006610BC -> read as EAX on
   every CFG path | 00662240 @ 00662384 -> read as EAX on every CFG path | 00662240 @ 00662723 ->
   read as EAX on every CFG path | 00662240 @ 00662A53 -> read as EAX on every CFG path | 00662240 @
   00662CE2 -> read as EAX on every CFG path | 00662240 @ 0066300F -> read as EAX on every CFG path
    */

int __thiscall
STAllPlayersC::sub_004E80F0
          (STAllPlayersC *this,int param_1,STAllPlayersC_sub_004E80F0_param_2Enum param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  switch(param_2) {
  case CASE_A3:
  case CASE_A8:
  case CASE_B2:
  case CASE_BE:
    iVar1 = param_2 * 3 + -0x1c2;
    iVar2 = (&DAT_007bf67c)[iVar1];
    if (((iVar2 < 0) || (iVar2 == 0)) ||

       (iVar2 = thunk_FUN_004e60d0(param_1,iVar2), (int)(&DAT_007bf680)[iVar1] <= iVar2)) {
      iVar3 = 1;
    }
  }
  return iVar3;
}

