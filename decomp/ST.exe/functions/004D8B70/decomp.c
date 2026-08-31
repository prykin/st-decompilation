#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=45; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=29;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

undefined4 __thiscall STAllPlayersC::sub_004D8B70(STAllPlayersC *this,char param_1)

{
  byte bVar1;
  int uVar2;
  int iVar3;
  int iVar2;
  int uVar5;
  int iVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;

  uVar6 = (uint)param_1;
  if (uVar6 == 0xff) {
    return 0;
  }
  if ((uVar6 == DAT_0080874d) && (g_money_008016D4 != nullptr)) {
    if (g_packedRecords_A62x8[uVar6].field0_0x0 == '\x03') {

      uVar2 = thunk_FUN_004e41c0(uVar6);

      iVar3 = thunk_FUN_004e4180(uVar6);
      iVar2 = (uVar2 * 0x14) / iVar3;
      if (0x14 < iVar2) {
        iVar2 = 0x14;
      }
      bVar1 = (byte)iVar2;
      uVar7 = g_packedRecords_A62x8[uVar6].field16_0x23;
      iVar2 = 0;
      bVar9 = 1;
      uVar8 = g_packedRecords_A62x8[uVar6].field1951_0x99e;
      /* ST_CALLSITE[004D8C0C]: CALL 0x004036a7; direct=004036A7 thunk_FUN_004e41c0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/MoneyTy; source view only; no Ghidra override */
      uVar5 = thunk_FUN_004e41c0(uVar6);
      /* ST_CALLSITE[004D8C18]: CALL 0x00401e83; direct=00401E83 MoneyTy::sub_0052BC30 */
      MoneyTy::sub_0052BC30(g_money_008016D4,uVar5,uVar7,uVar8,bVar1,bVar9,iVar2);
      return 0;
    }
    iVar2 = g_packedRecords_A62x8[uVar6].field1940_0x972;
    iVar4 = iVar2 - g_packedRecords_A62x8[uVar6].field1941_0x976;
    if (iVar4 < 0) {
      /* ST_CALLSITE[004D8C55]: CALL 0x00401e83; direct=00401E83 MoneyTy::sub_0052BC30 */
      MoneyTy::sub_0052BC30
                (g_money_008016D4,g_packedRecords_A62x8[uVar6].field15_0x1f,
                 g_packedRecords_A62x8[uVar6].field16_0x23,g_packedRecords_A62x8[uVar6].field17_0x27
                 ,0xd,0,0);
      return 0;
    }
    if (((iVar2 != 0) && (iVar4 != 0)) && (iVar4 = (iVar4 * 0xd) / iVar2, 0xd < iVar4)) {
      iVar4 = 0xd;
    }
    /* ST_CALLSITE[004D8C9A]: CALL 0x00401e83; direct=00401E83 MoneyTy::sub_0052BC30 */
    MoneyTy::sub_0052BC30
              (g_money_008016D4,g_packedRecords_A62x8[uVar6].field15_0x1f,
               g_packedRecords_A62x8[uVar6].field16_0x23,g_packedRecords_A62x8[uVar6].field17_0x27,
               (byte)iVar4,1,0);
  }
  return 0;
}

