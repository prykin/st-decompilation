#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_004b31c0(RecoveredRecord_004B31C0_F3AB8C37 *param_1,int param_2)

{
  RecoveredRecord_004B31C0_F3AB8C37 *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DArrayOf_STGameObjCPtr *array;
  int iVar5;
  uint index;
  AnonShape_004B31C0_DBC5A6CD *local_c;
  int local_8;

  pRVar1 = param_1;
  iVar5 = 0;
  local_8 = 0;

  iVar2 = thunk_FUN_0044e1b0(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (g_array_007FA170 != nullptr) {
    g_array_007FA170->iteratorIndex = 0;

    iVar3 = DArrayGetNext(g_array_007FA170,(byte *)&local_c);
    iVar4 = param_2;
    while (-1 < iVar3) {
      if ((((local_c != nullptr) &&
           ((RecoveredRecord_004B31C0_F3AB8C37 *)local_c->field_0024 == pRVar1)) &&
          ((iVar4 == 0 || (local_c->field_0018 != iVar4)))) &&
         ((((local_c->field_02EC == 3 || (local_c->field_02A0 != 0)) || (local_c->field_02E0 != 0))
          || (local_c->field_02DC != 0)))) {
        local_8 = local_8 + 1;
      }

      iVar3 = DArrayGetNext(g_array_007FA170,(byte *)&local_c);
      iVar5 = local_8;
    }
    if (DAT_00808a97 <= (uint)(ushort)g_packedRecords_A62x8[(int)pRVar1].field4_0xd + iVar5) {
      return 0;
    }
  }
  array = g_packedRecords_A62x8[(int)pRVar1].field3_0x9;
  if (array != nullptr) {
    index = 0;
    if (array->count != 0) {
      do {

        DArrayGetElement((DArrayTy *)array,index,&param_1);
        if (((param_1 != nullptr) &&
            /* ST_CALLSITE[004B32C7]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
            ((((iVar4 = STStructuralVirtualCall<undefined4>(param_1, 0x2C), iVar4 == 0x32 ||
               /* ST_CALLSITE[004B32D4]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
               (iVar4 = STStructuralVirtualCall<undefined4>(param_1, 0x2C), iVar4 == 0x40)) ||
              /* ST_CALLSITE[004B32E1]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
              ((iVar4 = STStructuralVirtualCall<undefined4>(param_1, 0x2C), iVar4 == 0x49 ||
               /* ST_CALLSITE[004B32EE]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
               (iVar4 = STStructuralVirtualCall<undefined4>(param_1, 0x2C), iVar4 == 0x5c)))) &&
             (((param_1->field_0361 == 1 && (iVar4 = *(int *)&param_1[1].field_0x16b, iVar4 != 0))
              && (iVar4 != 1)))))) && (iVar4 != 2)) {
          iVar5 = iVar5 + 1;
        }
        array = g_packedRecords_A62x8[(int)pRVar1].field3_0x9;
        index = index + 1;
      } while (index < array->count);
    }
    if (DAT_00808a97 <= (uint)(ushort)g_packedRecords_A62x8[(int)pRVar1].field4_0xd + iVar5) {
      return 0;
    }
  }
  return 1;
}

