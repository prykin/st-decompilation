#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E2C30 -> 004E6310 @ 004E2CDD; /TLOBaseTy+0x24 | 004E7390 -> 004E6310 @ 004E755C;
   FUN_004e7390 parameter param_1

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=10; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall
STAllPlayersC::sub_004E6310(STAllPlayersC *this,byte *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar11;
  uint *puVar6;
  DArrayOf_STGameObjCPtr *pDVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar12;
  int local_10;
  RecoveredRecordView_004DDCC0_A8DE46ED *local_c;
  RecoveredRecordView_00494AE0_424326F5 *local_8;

  if ((((-1 < (int)param_1) && ((int)param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b))
  {
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar12 = (int)param_1 * 0xa62;
    *(uint *)(iVar12 + 0x7f5147 + param_2 * 4) = param_3;
    pbVar2 = (byte *)(iVar12 + 0x7f511f + ((int)(param_2 ^ 7) >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << ((param_2 ^ 7) & 7));
    if (*(int *)(iVar12 + 0x7f5147 + param_2 * 4) != 0) {
      iVar3 = (byte)g_packedRecords_A62x8[(int)param_1].field0_0x0 - 1;
      piVar4 = (int *)(&PTR_DAT_007c0dc8)[iVar3];
      if (*piVar4 != 0) {
        iVar9 = 0;
        local_10 = 5;
LAB_004e63ab:
        if ((*(int *)(iVar12 + 0x7f5147 + *(uint *)(iVar9 + (int)piVar4) * 4) ==
             *(byte *)(iVar9 + 4 + (int)piVar4) - 1) &&
           (iVar8 = 0, *(int *)(local_10 + (int)piVar4) != 0)) {
          puVar5 = (uint *)(iVar9 + 5 + (int)piVar4);
          puVar6 = puVar5;
          do {
            if (3 < iVar8) break;
            if ((*puVar6 == param_2) && ((byte)puVar6[1] == param_3)) {
              iVar8 = 0;
              goto LAB_004e63fe;
            }
            piVar1 = (int *)((int)puVar6 + 5);
            puVar6 = (uint *)((int)puVar6 + 5);
            iVar8 = iVar8 + 1;
          } while (*piVar1 != 0);
        }
        goto cf_continue_loop_004E643C;
      }
LAB_004e645f:
      if (g_packedRecords_A62x8[(int)param_1].field1966_0x9ce != nullptr) {
        (g_packedRecords_A62x8[(int)param_1].field1966_0x9ce)->iteratorIndex = 0;

        iVar11 = DArrayGetNext(g_packedRecords_A62x8[(int)param_1].field1966_0x9ce,(byte *)&local_c);
        while (-1 < iVar11) {

          thunk_FUN_004dd880(local_c);

          iVar11 = DArrayGetNext(g_packedRecords_A62x8[(int)param_1].field1966_0x9ce,
                                 (byte *)&local_c);
        }
      }
      if (((((param_2 == 0x1d) || (param_2 == 0x89)) || (param_2 == 0x46)) ||
          ((param_2 == 0x4a || (param_2 == 0x12)))) &&
         ((pDVar7 = g_packedRecords_A62x8[(int)param_1].field3_0x9,
          pDVar7 != nullptr && (uVar10 = 0, pDVar7->count != 0)))) {
        do {

          DArrayGetElement((DArrayTy *)pDVar7,uVar10,&local_8);
          if ((local_8 != nullptr) &&
             /* ST_CALLSITE[004E64DF]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
             (((iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 0x36 ||
               /* ST_CALLSITE[004E64EC]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
               (iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 0x5d)) ||
              /* ST_CALLSITE[004E64F9]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
              (iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 0x3d)))) {

            thunk_FUN_004e4d60((RecoveredRecordView_004E4D60_1AFEFB7D *)local_8);

            thunk_FUN_004e4f30((STMineSetC *)local_8);
          }
          pDVar7 = g_packedRecords_A62x8[(int)param_1].field3_0x9;
          uVar10 = uVar10 + 1;
        } while (uVar10 < pDVar7->count);
      }
      if ((((((param_2 == 0x3c) || (param_2 == 0x91)) || (param_2 == 0x9a)) ||
           ((param_2 == 0x4b || (param_2 == 0x4c)))) || (param_2 == 0x41)) &&
         ((pDVar7 = g_packedRecords_A62x8[(int)param_1].field3_0x9,
          pDVar7 != nullptr && (uVar10 = 0, pDVar7->count != 0)))) {
        do {

          DArrayGetElement((DArrayTy *)pDVar7,uVar10,&local_8);
          if ((local_8 != nullptr) &&
             /* ST_CALLSITE[004E656B]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
             (((iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 5 ||
               /* ST_CALLSITE[004E6578]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
               (iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 0x21)) ||
              /* ST_CALLSITE[004E6585]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
              (iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 0x11)))) {
            thunk_FUN_00494ae0(local_8);
          }
          pDVar7 = g_packedRecords_A62x8[(int)param_1].field3_0x9;
          uVar10 = uVar10 + 1;
        } while (uVar10 < pDVar7->count);
      }
    }
    thunk_FUN_004e6680((int)param_1);
    thunk_FUN_0043fc50(CASE_13,0);
  }
  return;
  while( true ) {
    if (*(int *)(iVar12 + 0x7f5147 + *puVar5 * 4) < (int)(uint)(byte)puVar5[1])
    goto cf_continue_loop_004E643C;
    piVar1 = (int *)((int)puVar5 + 5);
    puVar5 = (uint *)((int)puVar5 + 5);
    iVar8 = iVar8 + 1;
    if (*piVar1 == 0) break;
LAB_004e63fe:
    if (3 < iVar8) break;
  }
  uVar10 = *(uint *)(iVar9 + (int)piVar4) ^ 7;
  pbVar2 = (byte *)(iVar12 + 0x7f511f + ((int)uVar10 >> 3));
  *pbVar2 = *pbVar2 | '\x01' << (uVar10 & 7);
cf_continue_loop_004E643C:
  local_10 = local_10 + 0x19;
  iVar9 = iVar9 + 0x19;
  piVar4 = (int *)(&PTR_DAT_007c0dc8)[iVar3];
  if (*(int *)(iVar9 + (int)piVar4) == 0) goto LAB_004e645f;
  goto LAB_004e63ab;
}

