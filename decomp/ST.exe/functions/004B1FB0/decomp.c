#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004B1FB0_param_1Enum. Cases:
   CASE_5E=94;CASE_61=97;CASE_DC=220;CASE_DD=221;CASE_DE=222
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006777D0 @ 0067783D -> read as EAX on
   every CFG path | 006778C0 @ 00677922 -> read as EAX on every CFG path */

int __cdecl
FUN_004b1fb0(Global_sub_004B1FB0_param_1Enum param_1,int *param_2,int *param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar4;
  Global_sub_004B1FB0_param_1Enum GVar2;
  int iVar3;
  int iVar5;
  STWorldObject *this;
  int local_1c;
  STFishC *local_18;
  int local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;

  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  if (param_3 != nullptr) {
    *param_3 = 0;
  }
  if (param_1 == 0xe2) {
    if (param_2 != nullptr) {
      *param_2 = 1;
    }
    iVar1 = param_7 + param_5;
    iVar5 = 0;
    for (; param_5 < iVar1; param_5 = param_5 + 1) {
      if ((-1 < param_5) && (param_5 < g_worldGrid.sizeY)) {
        for (iVar3 = param_4; iVar3 < param_6 + param_4; iVar3 = iVar3 + 1) {
          if ((-1 < iVar3) && (iVar3 < g_worldGrid.sizeX)) {
            iVar5 = iVar5 + (uint)*(byte *)(g_worldGrid.sizeX * param_5 + DAT_007fa168 + iVar3);
          }
        }
      }
    }
    if (param_3 != nullptr) {
      *param_3 = iVar5;
      return 0;
    }
  }
  else if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;

    iVar4 = DArrayGetNext(g_array_007FA150,(byte *)&local_18);
    while (-1 < iVar4) {
      if (((local_18 != nullptr) &&
          /* ST_CALLSITE[004B209D]: CALL dword ptr [EDX + 0x2c] */
          (GVar2 = local_18->vfunc_2C(), GVar2 == param_1)) &&
         /* ST_CALLSITE[004B20B8]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
         (((STFishC::sub_004162B0(local_18,&local_8,&local_6,&local_a), param_4 < 0 ||
           (((param_5 < 0 || (param_6 < 0)) || (param_7 < 0)))) ||
          ((((param_4 <= local_8 && ((int)local_8 < param_6 + param_4)) && (param_5 <= local_6)) &&
           ((int)local_6 < param_7 + param_5)))))) {
        local_1c = local_1c + 1;
        if (((local_8 < 0) || (g_worldGrid.sizeX <= local_8)) ||
           ((local_6 < 0 ||
            (((g_worldGrid.sizeY <= local_6 || (local_a < 0)) || (g_worldGrid.sizeZ <= local_a))))))
        {
          this = nullptr;
        }
        else {
          this = STGridAt3D(g_worldGrid, local_8, local_6, local_a).objects[0];
        }
        switch(param_1) {
        case CASE_5E:
        case CASE_DD:
          local_10 = 0x39;
          break;
        case CASE_61:
          local_10 = 0xe0;
          break;
        case CASE_DC:
          local_10 = 0x38;
          break;
        case CASE_DE:
          local_10 = 0x4f;
        }
        if (((this == nullptr) || (this->value_20 != 1000)) ||
           /* ST_CALLSITE[004B21BF]: CALL dword ptr [EDX + 0x2c] */
           (iVar5 = this->GetObjectTypeId(), iVar5 != local_10)) {
          local_14 = local_14 + *(int *)&local_18->field_0x259;
        }
        else {
          /* ST_CALLSITE[004B21CD]: CALL dword ptr [EAX + 0x88]; [STIndirectCallsiteApplier] exact slot 0x88; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4 */
          iVar5 = (*this->vtable[2].slots_00_28[10])(this,0);
          local_14 = local_14 + iVar5;
        }
      }

      iVar4 = DArrayGetNext(g_array_007FA150,(byte *)&local_18);
    }
    if (param_2 != nullptr) {
      *param_2 = local_1c;
    }
    if (param_3 != nullptr) {
      *param_3 = local_14;
    }
  }
  return 0;
}

