#include "../../pseudocode_runtime.h"


int __thiscall FUN_004de4f0(void *this,int param_1)

{
  STAllPlayersC_GetBoatWeaponInfo_param_1Enum SVar1;
  int iVar2;
  int iVar3;
  DArrayTy *array;
  DArrayOf_STGameObjCPtr *array_00;
  uint uVar4;
  int *piVar5;
  int aiStackY_3e4 [45];
  int aiStackY_330 [97];
  uint uStackY_1ac;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int local_18c [45];
  int local_d8 [45];
  uint local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;

  iVar3 = param_1;
  local_20 = this;
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  local_14 = param_1 * 0xa62;
  array_00 = g_packedRecords_A62x8[param_1].field3_0x9;
  iVar2 = 0;
  if (array_00 != nullptr) {
    memset(local_18c, 0, 0xb4); /* compiler bulk-zero initialization */
    uVar4 = 0;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar2 = param_1 * 0xa62;
    if (array_00->count != 0) {
      do {

        DArrayGetElement((DArrayTy *)array_00,uVar4,&local_8);
        if (local_8 != nullptr) {
          auto param_1_after_write = 0; /* compiler stack-slot lifetime split */
          if (local_8[8] == 0x14) {
            puVar7 = &local_24;
            piVar5 = &local_c;
            piVar6 = &param_1_after_write;
            /* ST_CALLSITE[004DE57B]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4 */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            SVar1 = (**(code **)(*local_8 + 0x2c))();
            uStackY_1ac = 0x4de587;
            /* ST_CALLSITE[004DE582]: CALL 0x00403995; direct=00403995 STAllPlayersC::GetBoatWeaponInfo */
            iVar2 = STAllPlayersC::GetBoatWeaponInfo(SVar1,piVar6,piVar5,puVar7);
            if (iVar2 == 1) {
LAB_004de602:
              if (param_1_after_write != 0) {
                local_18 = 1;
                aiStackY_3e4[param_1_after_write] = aiStackY_3e4[param_1_after_write] + (int)(0x5dc / (longlong)local_c);
              }
            }
            else {
              param_1_after_write = 0;
            }
          }
          else if (local_8[8] == 1000) {
            /* ST_CALLSITE[004DE5A1]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
            iVar2 = STStructuralVirtualCall<undefined4>(local_8, 0x2C);
            if (*(int *)(&DAT_007926b0 + iVar2 * 4) != 0) {
              /* ST_CALLSITE[004DE5B2]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
              iVar2 = STStructuralVirtualCall<undefined4>(local_8, 0x2C);
              if (*(int *)(&DAT_00793c98 + iVar2 * 8) == 1) {
                /* ST_CALLSITE[004DE5C4]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
                iVar2 = STStructuralVirtualCall<undefined4>(local_8, 0x2C);
                iVar8 = 0;
                param_1_after_write = (&DAT_00792ca0)[(iVar2 + -0x32) * 6];
                /* ST_CALLSITE[004DE5DD]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                iVar2 = (**(code **)(*local_8 + 0x2c))();

                local_c = thunk_FUN_004e8230(iVar3,iVar2 + -0x32,iVar8);
                /* ST_CALLSITE[004DE5F5]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
                iVar2 = STStructuralVirtualCall<undefined4>(local_8, 0x2C);
                local_24 = *(undefined4 *)(&DAT_00793ea8 + iVar2 * 8);
              }
            }
            goto LAB_004de602;
          }
        }
        uVar4 = uVar4 + 1;
        array_00 = *(DArrayOf_STGameObjCPtr **)
                    ((int)&g_packedRecords_A62x8[0].field3_0x9 + local_14);
        iVar2 = local_14;
      } while (uVar4 < array_00->count);
    }
    memset(local_d8, 0, 0xb4); /* compiler bulk-zero initialization */
    array = *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1966_0x9ce + iVar2);
    if (array != nullptr) {
      uVar4 = 0;
      if (array->count != 0) {
        do {

          DArrayGetElement(array,uVar4,&local_1c);
          auto param_1_after_write_2 = 0x96; /* compiler stack-slot lifetime split */
          do {

            local_c = thunk_FUN_004ddba0(local_1c,param_1_after_write_2);
            if (local_c != 0) {
              aiStackY_330[param_1_after_write_2] = aiStackY_330[param_1_after_write_2] + (int)(0x5dc / (longlong)local_c);
            }
            param_1_after_write_2 = param_1_after_write_2 + 1;
          } while (param_1_after_write_2 < 0xc3);
          uVar4 = uVar4 + 1;
          array = *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1966_0x9ce + local_14);
        } while (uVar4 < array->count);
      }
      iVar3 = 0;
      do {
        iVar2 = *(int *)((int)local_d8 + iVar3);
        if ((iVar2 != 0) && (iVar2 < *(int *)((int)local_18c + iVar3))) {
          iVar2 = (*(int *)((int)local_18c + iVar3) / iVar2) / 0x1e;
          if (local_10 < iVar2) {
            local_10 = iVar2;
          }
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < 0xb4);
      return local_10;
    }
    iVar2 = 1;
    if (local_18 == 0) {
      iVar2 = local_10;
    }
  }
  return iVar2;
}

