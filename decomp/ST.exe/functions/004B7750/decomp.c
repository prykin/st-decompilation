#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B6E30 -> 004B7750 @ 004B6F30; unproven partial register write at 004B6F26 | 004B7750
   -> 004B7350 @ 004B7836 | 004B7750 -> 004B7520 @ 004B77F5

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; incoming_this_forward_calls=8;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

undefined4 __thiscall STAllPlayersC::sub_004B7750(STAllPlayersC *this,uint param_1)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Global_sub_004B7350_param_2Enum GVar5;
  char cVar6;
  DArrayOf_STGameObjCPtr *array;
  DArrayTy *array_00;
  uint index;
  byte local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c;
  STAllPlayersC *local_8;

  cVar6 = (char)param_1;
  iVar2 = (int)cVar6;
  if (g_packedRecords_A62x8[iVar2].field1948_0x992 != nullptr) {
    (g_packedRecords_A62x8[iVar2].field1948_0x992)->count = 0;
    local_8 = this;

    iVar3 = thunk_FUN_004b72b0(cVar6);

    iVar4 = thunk_FUN_004b71c0(cVar6);
    if (iVar4 < iVar3) {
      array = g_packedRecords_A62x8[iVar2].field3_0x9;
      iVar3 = 0;
      if ((array != nullptr) && (local_10 = 0, array->count != 0)) {
LAB_004b77c4:

        DArrayGetElement((DArrayTy *)array,local_10,&local_c);
        if ((local_c != nullptr) &&
           /* ST_CALLSITE[004B77DD]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
           ((iVar4 = STStructuralVirtualCall<undefined4>(local_c, 0x2C), iVar4 != 0x78 ||

            (iVar4 = thunk_FUN_004b7520(param_1,STField<Global_sub_004B7520_param_2Enum>(local_c,0x259)), iVar4 != 0)))) {
          /* ST_CALLSITE[004B7807]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
          iVar4 = STStructuralVirtualCall<undefined4>(local_c, 0x2C);

          local_14 = thunk_FUN_004b72e0(cVar6,iVar4);
          if (0 < local_14) {
            local_1c = local_c[6];
            /* ST_CALLSITE[004B782C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
            GVar5 = STStructuralVirtualCall<undefined4>(local_c, 0x2C);

            local_18 = thunk_FUN_004b7350(param_1,GVar5);
            array_00 = g_packedRecords_A62x8[iVar2].field1948_0x992;
            index = 0;
            if (array_00->count != 0) {
              do {

                DArrayGetElement(array_00,index,local_28);
                if (*(int *)(STRecordByteAddress(g_packedRecords_A62x8, iVar2, 0x97A) + local_24 * 4) <
                    *(int *)(STRecordByteAddress(g_packedRecords_A62x8, iVar2, 0x97A) + local_18 * 4)) {

                  Library::DKW::TBL::FUN_006b11d0
                            (&(g_packedRecords_A62x8[iVar2].field1948_0x992)->flags,index,&local_1c);
                  iVar3 = iVar3 + local_14;

                  iVar4 = thunk_FUN_004b71c0(cVar6);
                  if (iVar4 < iVar3) goto LAB_004b78f0;
                  goto cf_continue_loop_004B78A7;
                }
                array_00 = g_packedRecords_A62x8[iVar2].field1948_0x992;
                index = index + 1;
              } while (index < array_00->count);
            }

            iVar4 = thunk_FUN_004b71c0(cVar6);
            if (local_14 + iVar3 <= iVar4) {

              Library::DKW::TBL::DArrayAppend
                        (g_packedRecords_A62x8[iVar2].field1948_0x992,&local_1c);
              iVar3 = iVar3 + local_14;
            }
          }
        }
        goto cf_continue_loop_004B78A7;
      }
    }
  }
  return 0;
  while( true ) {

    DArrayGetElement(g_packedRecords_A62x8[iVar2].field1948_0x992,dVar1 - 1,local_28);
    iVar3 = iVar3 - local_20;

    DArrayRemoveAt(g_packedRecords_A62x8[iVar2].field1948_0x992,
                   (g_packedRecords_A62x8[iVar2].field1948_0x992)->count - 1);

    iVar4 = thunk_FUN_004b71c0(cVar6);
    if (iVar3 <= iVar4) break;
LAB_004b78f0:
    dVar1 = (g_packedRecords_A62x8[iVar2].field1948_0x992)->count;
    if (dVar1 == 0) break;
  }
cf_continue_loop_004B78A7:
  array = g_packedRecords_A62x8[iVar2].field3_0x9;
  local_10 = local_10 + 1;
  if (array->count <= local_10) {
    return 0;
  }
  goto LAB_004b77c4;
}

