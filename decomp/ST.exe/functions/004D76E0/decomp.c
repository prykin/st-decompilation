#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004C7460 -> 004D76E0 @ 004C7688; /TLOBaseTy+0x18

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=6; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=6;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

undefined4 __thiscall
STAllPlayersC::sub_004D76E0
          (STAllPlayersC *this,char param_1,int param_2,int *param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int *piVar3;

  iVar2 = (int)param_1;
  (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
  while (uVar1 = (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11],
        uVar1 < (&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11]) {
    piVar3 = (int *)((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                    (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]);
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
    if (piVar3 == nullptr) break;
    if ((int *)*piVar3 == param_3) {
      (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] - piVar3[1];
      (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] - piVar3[2];
      (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] - piVar3[3];
      (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] - piVar3[4];
      if ((&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] = 0;
      }
      if ((&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] = 0;
      }
      if ((&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] = 0;
      }
      if ((&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] = 0;
      }
      piVar3[2] = param_5;
      piVar3[3] = param_6;
      piVar3[1] = param_4;
      piVar3[4] = param_7;
      (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] + param_4;
      (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] + piVar3[2];
      (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] + piVar3[3];
      (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] + piVar3[4];

      thunk_FUN_004d78e0(param_1);
      return 0;
    }
  }
  /* ST_CALLSITE[004D7854]: CALL 0x00405556; direct=00405556 STAllPlayersC::sub_004D7480 */
  sub_004D7480(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return 0;
}

