#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=7; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; incoming_this_forward_calls=3;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=3;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004E6C20 -> 004E6010 @ 004E6C90 | 004E6D00 -> 004E6C20 @ 004E6D31; FUN_004e6d00
   parameter param_2 */

int __thiscall STAllPlayersC::sub_004E6C20(STAllPlayersC *this,byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;

  if (((((int)param_1 < 0) || (7 < (int)param_1)) || (param_2 < 0x32)) || (0x73 < param_2)) {
    return 0;
  }
  iVar4 = 1;
  /* ST_CALLSITE[004E6C51]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar3 = LookupRecordByte((char)param_1);
  iVar5 = 0;
  iVar1 = param_2 + -0x32 + (bVar3 - 1) * 0x42;
  iVar2 = iVar1 * 3;
  if ((&DAT_007c0e4c)[iVar1 * 3] != '\0') {
    while (iVar5 < 3) {
      if (iVar5 == 0) {

        iVar4 = thunk_FUN_004e6010(param_1,(uint)(byte)(&DAT_007c0e4c)[iVar2]);
      }
      else {

        iVar4 = thunk_FUN_004e60d0((int)param_1,(uint)(byte)(&DAT_007c0e4c + iVar2)[iVar5]);
      }
      if (iVar4 == 0) {
        return 0;
      }
      iVar1 = iVar5 + iVar2;
      iVar5 = iVar5 + 1;
      if ((&DAT_007c0e4d)[iVar1] == '\0') {
        return iVar4;
      }
    }
  }
  return iVar4;
}

