#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=3; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; incoming_this_forward_calls=3;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

int __thiscall STAllPlayersC::sub_004E6FE0(STAllPlayersC *this,int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_10;
  int local_c;
  int local_8;

  uVar4 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((-1 < param_1) && (param_1 < 8)) {
    /* ST_CALLSITE[004E700C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte((char)param_1);
    uVar3 = 0;
    do {
      if ((&PTR_DAT_007bfc04)[bVar1 - 1] + uVar3 != nullptr) {

        iVar2 = thunk_FUN_004e60d0(param_1,uVar4);
        if ((int)(uint)*(byte *)(uVar4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x73B)) <= iVar2) {
          local_c = local_c + 1;
        }

        iVar2 = thunk_FUN_004e5910(param_1,uVar4);
        if (iVar2 != 0) {
          local_8 = local_8 + 1;
        }
      }
      uVar3 = uVar3 + 0x9b;
      uVar4 = uVar4 + 1;
    } while (uVar3 < 0x5dd9);
    if (local_8 != 0) {
      local_8 = (local_c * 100) / local_8;
      if (local_8 < 0x65) {
        return local_8;
      }
      local_10 = 100;
    }
    return local_10;
  }
  return 0;
}

