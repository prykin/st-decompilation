#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_005845b0(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            int *param_8,int *param_9,uint param_10)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;

  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) < param_3) &&
     (param_10 = param_10 * 0x41c64e6d + 0x3039, (param_10 & 0x10000) == 0)) {
LAB_00584666:
    if ((int)param_2 < 0) {
      if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
        piVar2 = (int *)&DAT_007cb658;
      }
      else {
        piVar2 = (int *)&DAT_007cb610;
      }
    }
    else if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
      piVar2 = (int *)&DAT_007cb634;
    }
    else {
      piVar2 = (int *)&DAT_007cb5ec;
    }
  }
  else {
    if ((int)param_2 < 1) {
      uVar1 = (uint)(param_2 != 0);
      if (uVar1 == 1) {
        piVar2 = (int *)&DAT_007cb6c4;
        if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
          piVar2 = (int *)&DAT_007cb6e8;
        }
        goto LAB_005846f7;
      }
      if (uVar1 == 0) goto LAB_00584666;
      if (uVar1 != 0xffffffff) {
        piVar2 = &DAT_007cb5c8;
        goto LAB_005846f7;
      }
    }
    if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
      piVar2 = (int *)&DAT_007cb6a0;
    }
    else {
      piVar2 = (int *)&DAT_007cb67c;
    }
  }
LAB_005846f7:
  if (piVar2 == nullptr) {
    piVar2 = &DAT_007cb5c8;
  }
  auto param_10_after_write = 0; /* compiler stack-slot lifetime split */
  do {
    iVar3 = (*piVar2 + param_1 * 9) * 6;
    iVar6 = *(short *)(&DAT_007cb418 + iVar3) + param_4;
    iVar5 = *(short *)(&DAT_007cb41c + iVar3) + param_6;
    iVar3 = *(short *)(&DAT_007cb41a + iVar3) + param_5;
    if (((((-1 < iVar6) && (-1 < iVar3)) && (-1 < iVar5)) &&
        ((iVar6 < g_worldGrid.sizeX && (iVar3 < g_worldGrid.sizeY)))) && (iVar5 < g_worldGrid.sizeZ)
       ) {
      sVar7 = (short)iVar6;
      sVar8 = (short)iVar3;
      sVar9 = (short)iVar5;
      iVar4 = thunk_FUN_004961b0(sVar7,sVar8,sVar9);
      if ((iVar4 != 0) &&
         (((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7)) ||
          ((((sVar8 < 0 ||
             (((g_worldGrid.sizeY <= sVar8 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))) ||
            (STGridAt3D(g_worldGrid, sVar7, sVar8, sVar9).objects[0] == nullptr)) &&
           ((((g_worldGrid.sizeX <= sVar7 || (sVar8 < 0)) ||
             ((g_worldGrid.sizeY <= sVar8 || ((sVar9 < 0 || (g_worldGrid.sizeZ <= sVar9)))))) ||
            (STGridAt3D(g_worldGrid, sVar7, sVar8, sVar9).objects[1] == nullptr)))))))) {
        *param_7 = iVar6;
        *param_8 = iVar3;
        *param_9 = iVar5;
        return 1;
      }
    }
    param_10_after_write = param_10_after_write + 1;
    piVar2 = piVar2 + 1;
    if (8 < (int)param_10_after_write) {
      return 0;
    }
  } while( true );
}

