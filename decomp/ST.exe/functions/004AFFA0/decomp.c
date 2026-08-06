#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004AFFA0_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97 */

undefined4 __cdecl
FUN_004affa0(undefined4 param_1,Global_sub_004AFFA0_param_2Enum param_2,int *param_3,int *param_4,
            int *param_5,int param_6,int param_7)

{
  int local_EAX_44;
  dword dVar1;
  int iVar2;
  int iVar1;
  int local_EAX_441;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  int local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  uVar4 = 0;
  local_14 = -1;
  local_18 = 0;
  if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;
    local_EAX_44 = DArrayGetNext(g_array_007FA150,(byte *)&local_10);
    if (-1 < local_EAX_44) {
      do {
        if (local_10 == nullptr) goto switchD_004afffd_caseD_3a;
        switch(param_2) {
        case CASE_38:
          dVar1 = local_10->slot_2C();
          if (dVar1 != 0xdc) break;
          goto LAB_004b004a;
        case CASE_39:
        case CASE_5E:
          dVar1 = local_10->slot_2C();
          if (dVar1 == 0xdd) goto LAB_004b004a;
          break;
        case CASE_4F:
          dVar1 = local_10->slot_2C();
          goto joined_r0x004b0044;
        case CASE_61:
          dVar1 = local_10->slot_2C();
joined_r0x004b0044:
          if (dVar1 == 0xde) {
LAB_004b004a:
            STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
            iVar2 = (int)local_8;
            iVar3 = (int)local_6;
            uVar4 = local_18;
            if ((((((STGridAt3D(g_worldGrid, iVar3, iVar2, local_a).objects[0] ==
                     nullptr) && (-1 < local_6)) && (local_6 < g_worldGrid.sizeX)) &&
                 ((-1 < local_8 && (local_8 < g_worldGrid.sizeY)))) &&
                ((-1 < local_a &&
                 ((local_a < g_worldGrid.sizeZ &&
                  (STGridAt3D(g_pathingGrid, iVar3, iVar2, local_a) == 0)))))) &&
               ((local_a < 4 &&
                ((iVar1 = FUN_006aced8(iVar3,iVar2,param_6,param_7), local_14 < 0 ||
                 (iVar1 < local_14)))))) {
              *param_3 = (int)local_6;
              *param_4 = (int)local_8;
              *param_5 = (int)local_a;
              local_18 = 1;
              uVar4 = 1;
              local_14 = iVar1;
            }
          }
        }
switchD_004afffd_caseD_3a:
        local_EAX_441 = DArrayGetNext(g_array_007FA150,(byte *)&local_10);
        if (local_EAX_441 < 0) {
          return uVar4;
        }
      } while( true );
    }
  }
  return 0;
}

