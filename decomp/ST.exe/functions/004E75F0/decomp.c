#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; incoming_this_forward_calls=5;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall STAllPlayersC::sub_004E75F0(STAllPlayersC *this,int param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;

  iVar2 = param_1;
  if ((-1 < param_1) && (param_1 < 8)) {
    /* ST_CALLSITE[004E760D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar3 = LookupRecordByte((char)param_1);
    auto param_1_after_write = 0; /* compiler stack-slot lifetime split */
    if (0 < *(int *)(&DAT_007995bc + (bVar3 - 1) * 0x4bf)) {
      puVar5 = (uint *)(&DAT_007995bc + (bVar3 - 1) * 0x4bf);
      do {
        if (0x50 < param_1_after_write) {
          return;
        }
        iVar4 = thunk_FUN_004e60d0(iVar2,*puVar5);
        if (((iVar4 < (int)(uint)(byte)puVar5[1]) &&
            (iVar4 = thunk_FUN_004e5910(iVar2,*puVar5), iVar4 != 0)) &&
           (iVar4 = thunk_FUN_004e5f90(iVar2,*puVar5), iVar4 == 0)) {
          /* ST_CALLSITE[004E7687]: CALL 0x00402130; direct=00402130 STAllPlayersC::sub_004E6310 */
          sub_004E6310(this,(byte *)iVar2,*puVar5,(uint)(byte)puVar5[1]);
        }
        piVar1 = (int *)((int)puVar5 + 5);
        puVar5 = (uint *)((int)puVar5 + 5);
        param_1_after_write = param_1_after_write + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

