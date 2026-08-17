#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_005eda50(AnonShape_005EDA50_4BDBD797 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STBoatC *this;
  int iVar4;
  dword dVar5;
  undefined4 uVar6;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  uVar6 = 0;
  local_18 = 0;
  if (0 < param_1->field_005F) {
    sVar2 = param_1->field_005D;
    sVar1 = param_1->field_005F + -1;
    sVar3 = param_1->field_005B;
    if ((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
       (((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)) &&
        ((sVar1 < g_worldGrid.sizeZ &&
         (this = (STBoatC *)
                 STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0], uVar6 = local_18, this != nullptr)))))) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      if ((param_1->field_02E9 != '\0') &&
         /* ST_CALLSITE[005EDAF9]: CALL dword ptr [EDX + 0x128] */
         (iVar4 = (**(code **)(param_1->field_0000 + 0x128))(), this->field_0018 == iVar4)) {
        return 0;
      }
      /* ST_CALLSITE[005EDB11]: CALL dword ptr [EAX + 0x2c] */
      dVar5 = this->slot_2C();
      if ((((dVar5 == 0x52) || (dVar5 == 0x5f)) && (iVar4 = thunk_FUN_004e1490(this), iVar4 != 0))
         && (this->field_0508 == CASE_0)) {
        /* ST_CALLSITE[005EDB3B]: CALL dword ptr [EDX + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (**(code **)(param_1->field_0000 + 0xc))();
        thunk_FUN_004ebcb0(this,*(int *)&param_1->field_0x18,iVar4);
        thunk_FUN_004ebfd0(this,&local_14,&local_10,&local_c,&local_8);
        iVar4 = thunk_FUN_005ecd70(param_1,local_14,local_10,local_c,local_8,'\x01',0x3c);
        if (iVar4 != 0) {
          uVar6 = 1;
          if (param_1->field_0211 != nullptr) {
            Library::Ourlib::ST3DSMAP::SprSetLevBefore
                      (param_1->field_0211,param_1->field_01ED,this->field_01ED);
            return 1;
          }
        }
      }
    }
  }
  return uVar6;
}

