#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_004b31c0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DArrayTy *array;
  int iVar5;
  uint index;
  AnonShape_004B31C0_DBC5A6CD *local_c;
  int local_8;

  piVar1 = param_1;
  iVar5 = 0;
  local_8 = 0;
  iVar2 = thunk_FUN_0044e1b0((int)param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (g_array_007FA170 != nullptr) {
    g_array_007FA170->iteratorIndex = 0;
    iVar3 = DArrayGetNext(g_array_007FA170,(byte *)&local_c);
    iVar4 = param_2;
    while (-1 < iVar3) {
      if ((((local_c != nullptr) && (local_c->field_0024 == piVar1)) &&
          ((iVar4 == 0 || (local_c->field_0018 != iVar4)))) &&
         ((((local_c->field_02EC == 3 || (local_c->field_02A0 != 0)) || (local_c->field_02E0 != 0))
          || (local_c->field_02DC != 0)))) {
        local_8 = local_8 + 1;
      }
      iVar3 = DArrayGetNext(g_array_007FA170,(byte *)&local_c);
      iVar5 = local_8;
    }
    if (DAT_00808a97 <= (uint)(ushort)g_packedRecords_A62x8[(int)piVar1].field4_0xd + iVar5) {
      return 0;
    }
  }
  array = (DArrayTy *)g_packedRecords_A62x8[(int)piVar1].field3_0x9;
  if (array != nullptr) {
    index = 0;
    if (array->count != 0) {
      do {
        DArrayGetElement(array,index,&param_1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if (((param_1 != nullptr) &&
            ((((iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x32 ||
               (iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x40)) ||
              ((iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x49 ||
               (iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x5c)))) &&
             (((STField<int>(param_1,0x361) == 1 && (iVar4 = param_1[0x134], iVar4 != 0)) &&
              (iVar4 != 1)))))) && (iVar4 != 2)) {
          iVar5 = iVar5 + 1;
        }
        array = (DArrayTy *)g_packedRecords_A62x8[(int)piVar1].field3_0x9;
        index = index + 1;
      } while (index < array->count);
    }
    if (DAT_00808a97 <= (uint)(ushort)g_packedRecords_A62x8[(int)piVar1].field4_0xd + iVar5) {
      return 0;
    }
  }
  return 1;
}

