#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_004b2d10(byte param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  STWorldObject *this;
  uint uVar3;
  uint uVar5;
  int uVar4;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  if ((param_2 < 0x32) || (0x73 < param_2)) {
    if (param_2 < 1) {
      return 0;
    }
    if (0x28 < param_2) {
      return 0;
    }
    local_24 = *(int *)(&DAT_007dfbac + param_2 * 4);
  }
  else {
    uVar4 = LookupRecordByte(param_1);
    uVar4 = (int)(byte)uVar4;
    local_24 = *(int *)(&DAT_007e3f20 + (uVar4 + param_2 * 3) * 4);
  }
  local_34 = 0;
  if (DAT_007951b0 / 0xc9 < 1) {
    return 0;
  }
  local_c = param_3;
  local_10 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  do {
    local_30 = 0;
    if (0 < local_10) {
      do {
        if (local_30 < local_34 * 2) {
          iVar7 = (local_30 - local_34) + param_3;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (param_4 - param_3) + local_c;
        }
        else if (local_30 < local_14) {
          iVar7 = param_3 + local_34;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = local_30 + local_34 * -3 + param_4;
        }
        else {
          if (local_30 < local_18) {
            iVar7 = (local_1c - local_30) + param_3;
            iVar6 = local_34;
          }
          else {
            iVar6 = local_20 - local_30;
            iVar7 = local_c;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = iVar6 + param_4;
        }
        if (((((-1 < iVar7) && (iVar7 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
            ((param_2 < g_worldGrid.sizeY &&
             (iVar6 = FUN_006aced8(param_3,param_4,iVar7,param_2), iVar6 <= DAT_007951b0 / 0xc9))))
           && (local_2c = 0, 0 < g_worldGrid.sizeZ)) {
          do {
            this = STGridAt3D(g_worldGrid, iVar7, param_2, local_2c).
                   objects[0];
            if ((((this != nullptr) && (this[1].vtable < (STWorldObjectVTable *)0x8))
                && ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[(int)this[1].vtable].field_0022 < 8)))) &&
               (iVar6 = this->GetObjectTypeId(), iVar6 == 0x73)) {
              bVar1 = *(byte *)&this[1].vtable;
              if (g_app_00806728->field_146F == '\0') {
                if (bVar1 == param_1) {
LAB_004b2fd4:
                  iVar6 = 0;
                }
                else {
                  uVar3 = (uint)bVar1;
                  uVar5 = (uint)param_1;
                  cVar2 = (&g_app_00806728->field_0x142f)[uVar5 + uVar3 * 8];
                  if ((cVar2 == '\0') &&
                     ((&g_app_00806728->field_0x142f)[uVar3 + uVar5 * 8] == '\0')) {
                    iVar6 = -2;
                  }
                  else if ((cVar2 == '\x01') &&
                          ((&g_app_00806728->field_0x142f)[uVar3 + uVar5 * 8] == '\0')) {
                    iVar6 = -1;
                  }
                  else if ((cVar2 == '\0') &&
                          ((&g_app_00806728->field_0x142f)[uVar3 + uVar5 * 8] == '\x01')) {
                    iVar6 = 1;
                  }
                  else {
                    if ((cVar2 != '\x01') ||
                       ((&g_app_00806728->field_0x142f)[uVar3 + uVar5 * 8] != '\x01'))
                    goto LAB_004b2fd4;
                    iVar6 = 2;
                  }
                }
                bVar8 = iVar6 < 0;
              }
              else {
                bVar8 = (&g_app_00806728->field_0x11ca)[(uint)param_1 * 0x51] !=
                        (&g_app_00806728->field_0x11ca)[(uint)bVar1 * 0x51];
              }
              if ((bVar8) && (local_24 <= *(int *)&this[0x22].field_0x8)) {
                local_24 = *(int *)&this[0x22].field_0x8 - local_24;
                *(int *)&this[0x22].field_0x8 = local_24;
                if (local_24 < 0) {
                  *(undefined4 *)&this[0x22].field_0x8 = 0;
                }
                *(uint *)&this[0x22].field_0xc = g_playSystem_00802A38->field_00E4;
                return 1;
              }
            }
            local_2c = local_2c + 1;
          } while (local_2c < g_worldGrid.sizeZ);
        }
        local_30 = local_30 + 1;
      } while (local_30 < local_10);
    }
    local_14 = local_14 + 4;
    local_1c = local_1c + 5;
    local_34 = local_34 + 1;
    local_18 = local_18 + 6;
    local_c = local_c + -1;
    local_10 = local_10 + 8;
    local_20 = local_20 + 7;
    if (DAT_007951b0 / 0xc9 <= local_34) {
      return 0;
    }
  } while( true );
}

