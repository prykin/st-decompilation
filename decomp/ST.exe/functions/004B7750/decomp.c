#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B6E30 -> 004B7750 @ 004B6F30; unproven partial register write at 004B6F26 | 004B7750
   -> 004B7350 @ 004B7836 | 004B7750 -> 004B7520 @ 004B77F5 */

undefined4 FUN_004b7750(uint param_1)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Global_sub_004B7350_param_2Enum GVar5;
  char cVar6;
  DArrayTy *pDVar7;
  uint index;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c [2];

  cVar6 = (char)param_1;
  iVar2 = (int)cVar6;
  if (g_packedRecords_A62x8[iVar2].field1948_0x992 != nullptr) {
    (g_packedRecords_A62x8[iVar2].field1948_0x992)->count = 0;
    iVar3 = thunk_FUN_004b72b0(cVar6);
    iVar4 = thunk_FUN_004b71c0(cVar6);
    if (iVar4 < iVar3) {
      pDVar7 = (DArrayTy *)g_packedRecords_A62x8[iVar2].field3_0x9;
      iVar3 = 0;
      if ((pDVar7 != nullptr) && (local_10 = 0, pDVar7->count != 0)) {
LAB_004b77c4:
        DArrayGetElement(pDVar7,local_10,local_c);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if ((local_c[0] != nullptr) &&
           ((iVar4 = (**(code **)(*local_c[0] + 0x2c))(), iVar4 != 0x78 ||
            (iVar4 = thunk_FUN_004b7520(param_1,*(Global_sub_004B7520_param_2Enum *)
                                                 ((int)local_c[0] + 0x259)), iVar4 != 0)))) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar4 = (**(code **)(*local_c[0] + 0x2c))();
          local_14 = thunk_FUN_004b72e0(cVar6,iVar4);
          if (0 < local_14) {
            local_1c = local_c[0][6];
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            GVar5 = (**(code **)(*local_c[0] + 0x2c))();
            local_18 = thunk_FUN_004b7350(param_1,GVar5);
            pDVar7 = g_packedRecords_A62x8[iVar2].field1948_0x992;
            index = 0;
            if (pDVar7->count != 0) {
              do {
                DArrayGetElement(pDVar7,index,local_28);
                if (*(int *)(STRecordByteAddress(g_packedRecords_A62x8, iVar2, 0x97A) + local_24 * 4) <
                    *(int *)(STRecordByteAddress(g_packedRecords_A62x8, iVar2, 0x97A) + local_18 * 4)) {
                  Library::DKW::TBL::FUN_006b11d0
                            (&(g_packedRecords_A62x8[iVar2].field1948_0x992)->flags,index,&local_1c);
                  iVar3 = iVar3 + local_14;
                  iVar4 = thunk_FUN_004b71c0(cVar6);
                  if (iVar4 < iVar3) goto LAB_004b78f0;
                  goto cf_continue_loop_004B78A7;
                }
                pDVar7 = g_packedRecords_A62x8[iVar2].field1948_0x992;
                index = index + 1;
              } while (index < pDVar7->count);
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
  pDVar7 = (DArrayTy *)g_packedRecords_A62x8[iVar2].field3_0x9;
  local_10 = local_10 + 1;
  if (pDVar7->count <= local_10) {
    return 0;
  }
  goto LAB_004b77c4;
}

