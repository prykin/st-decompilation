#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STAllPlayersC::sub_004EB010(STAllPlayersC *this,int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_8;

  iVar6 = 0;
  local_8 = 0;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  iVar7 = param_1 * 0xa62;
  g_packedRecords_A62x8[param_1].field1964_0x9c6 = 0;
  local_10 = 0;
  while( true ) {
    do {
      /* ST_CALLSITE[004EB052]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar2 = LookupRecordByte((char)param_1);
      if (bVar2 == 3) {
        iVar5 = local_10 + iVar6 * 2;
        uVar1 = (&DAT_007c1620)[iVar5];
        *(undefined4 *)(iVar7 + 0x7f57c6 + iVar5 * 8) = uVar1;
        *(undefined4 *)(iVar7 + 0x7f57c2 + iVar5 * 8) = uVar1;
      }
      else {
        iVar6 = local_10 + iVar6 * 2;
        iVar4 = iVar6 * 8;
        iVar6 = (&DAT_007c15c4)[iVar6 * 2];
        iVar5 = *(int *)(&DAT_007c15c0 +
                        (local_10 +
                        (local_8 + g_packedRecords_A62x8[param_1].field1964_0x9c6 * 2) * 2) * 8);
        uVar3 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar3;
        iVar5 = iVar5 + (uVar3 >> 0x10) % ((iVar6 - iVar5) + 1U);
        *(int *)(iVar4 + 0x7f57c6 + iVar7) = iVar5;
        *(int *)(iVar4 + 0x7f57c2 + iVar7) = iVar5;
        iVar6 = local_8;
      }
      local_10 = local_10 + 1;
    } while (local_10 < 2);
    iVar6 = iVar6 + 1;
    if (1 < iVar6) break;
    local_10 = 0;
    local_8 = iVar6;
  }
  g_packedRecords_A62x8[param_1].field1963_0x9c2 = g_playSystem_00802A38->field_00E4;
  return 0;
}

