#include "../../pseudocode_runtime.h"


int __thiscall FUN_004dfc70(void *this,int *param_1)

{
  int *piVar1;
  STAllPlayersC_GetBoatWeaponInfo_param_1Enum SVar2;
  int iVar3;
  int local_8_mg1;
  DArrayOf_STGameObjCPtr *array;
  DArrayTy *array_00;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  uint local_20;
  RecoveredRecord_004DF910_541A5D53 *local_1c;
  uint local_18;
  void *local_14;
  int local_10;
  int local_c;
  int local_8;

  piVar1 = param_1;
  uVar4 = 0;
  local_8 = 0;
  array = g_packedRecords_A62x8[(int)param_1].field3_0x9;
  if (array != nullptr) {
    local_c = 0;
    local_10 = 0;
    local_14 = this;
    if (array->count != 0) {
      do {

        DArrayGetElement((DArrayTy *)array,uVar4,&param_1);
        if (param_1 != nullptr) {
          if (param_1[8] == 0x14) {
            puVar7 = &local_18;
            piVar6 = &local_8;
            puVar5 = &local_20;
            /* ST_CALLSITE[004DFCE1]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4 */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            SVar2 = (**(code **)(*param_1 + 0x2c))();
            /* ST_CALLSITE[004DFCE8]: CALL 0x00403995; direct=00403995 STAllPlayersC::GetBoatWeaponInfo */
            iVar3 = STAllPlayersC::GetBoatWeaponInfo(SVar2,puVar5,piVar6,puVar7);
            if (iVar3 == 2) {
LAB_004dfd49:
              local_10 = 1;
              local_c = local_c + (int)(0x5dc / (longlong)local_8);
            }
          }
          else if (((param_1[8] == 1000) &&
                   /* ST_CALLSITE[004DFCFD]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
                   (iVar3 = STStructuralVirtualCall<undefined4>(param_1, 0x2C),
                   *(int *)(&DAT_007926b0 + iVar3 * 4) != 0)) &&
                  /* ST_CALLSITE[004DFD10]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
                  (iVar3 = STStructuralVirtualCall<undefined4>(param_1, 0x2C),
                  *(int *)(&DAT_00793c98 + iVar3 * 8) == 2)) {
            iVar8 = 0;
            /* ST_CALLSITE[004DFD24]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar3 = (**(code **)(*param_1 + 0x2c))();

            local_8 = thunk_FUN_004e8230((int)piVar1,iVar3 + -0x32,iVar8);
            /* ST_CALLSITE[004DFD3C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
            iVar3 = STStructuralVirtualCall<undefined4>(param_1, 0x2C);
            local_18 = *(undefined4 *)(&DAT_00793ea8 + iVar3 * 8);
            goto LAB_004dfd49;
          }
        }
        array = g_packedRecords_A62x8[(int)piVar1].field3_0x9;
        uVar4 = uVar4 + 1;
      } while (uVar4 < array->count);
    }
    uVar4 = 0;
    array_00 = g_packedRecords_A62x8[(int)piVar1].field1967_0x9d2;
    iVar3 = 0;
    if (array_00 == nullptr) {
      if (local_10 != 0) {
        return 1;
      }
    }
    else {
      if (array_00->count != 0) {
        do {

          DArrayGetElement(array_00,uVar4,&local_1c);

          local_8_mg1 = thunk_FUN_004df910(local_1c);
          local_8 = (uint)local_8_mg1 / 500;
          if (local_8 != 0) {
            iVar3 = iVar3 + (int)(0x5dc / (ulonglong)(longlong)local_8);
          }
          array_00 = g_packedRecords_A62x8[(int)piVar1].field1967_0x9d2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < array_00->count);
      }
      if ((iVar3 < local_c) && (iVar3 = (((local_c - iVar3) * 100) / iVar3 + -100) / 100, 0 < iVar3)
         ) {
        return iVar3;
      }
    }
  }
  return 0;
}

