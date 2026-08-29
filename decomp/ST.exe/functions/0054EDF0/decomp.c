#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00503BB0 -> 0054EDF0 @ 00503E68; address of zeroed full register at 00503E53 | 0052F2B0
   -> 0054EDF0 @ 0052F54F; address of zeroed full register at 0052F51C | 0053CA80 -> 0054EDF0 @
   0053CC2B; address of zeroed full register at 0053CBFD

   [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=44; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=18;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall
STPlaySystemC::sub_0054EDF0
          (STPlaySystemC *this,undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  char cVar2;

  cVar2 = (char)param_1;
  if ((((*(char *)(g_bulkInitializedRecords_008087C7 + DAT_0080874d) == '\0') &&
       (DAT_0080874f == '\0')) || (cVar2 == '\x05')) && (DAT_008087a5 == 0)) {
    if (param_3 != 0) {
      /* ST_CALLSITE[0054EE42]: CALL 0x0040422d; direct=0040422D STPlaySystemC::SetCtrlCmd */
      SetCtrlCmd(this,DAT_0080874d,0,cVar2,param_2,param_4,nullptr,0);
      return;
    }
    undefined4 * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
    /* ST_CALLSITE[0054EE62]: CALL 0x00401fff; direct=00401FFF STAllPlayersC::PrepareToCmd */
    uVar1 = STAllPlayersC::PrepareToCmd(g_allPlayers_007FA174,&param_1_after_write,&param_3);
    if (uVar1 != 0xffffffff) {
      /* ST_CALLSITE[0054EE87]: CALL 0x0040422d; direct=0040422D STPlaySystemC::SetCtrlCmd */
      SetCtrlCmd(this,DAT_0080874d,uVar1,cVar2,param_2,param_4,param_1_after_write,param_3);
    }
    if (param_1_after_write != nullptr) {
      FreeAndNull(&param_1_after_write);
    }
  }
  return;
}

