#include "../../pseudocode_runtime.h"


int __thiscall FUN_00614ee0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  STFishC *this_00;
  STFishC *local_1c;
  short local_18 [2];
  int local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_10 = 0;
  sVar1 = STField<short>(this,0x2c5);
  sVar2 = STField<short>(this,0x2c9);
  sVar3 = STField<short>(this,0x2c7);
  local_14 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
      ((g_worldGrid.sizeZ <= sVar2 ||
       ((this_00 = (STFishC *)
                   STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], this_00 == nullptr ||
        (this_00->field_0018 != STField<int>(this,0x2d1))))))) &&
     (iVar4 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x2d1),
                         (int *)&local_1c), this_00 = local_1c, iVar4 == -4)) {
    return -1;
  }
  thunk_FUN_00416270(this_00,&local_10,&local_14,local_18);
  if ((((short)local_10 == STField<short>(this,0x2cb)) &&
      ((short)local_14 == STField<short>(this,0x2cd))) &&
     (local_18[0] == STField<short>(this,0x2cf))) {
    return 0;
  }
  iVar5 = (int)local_18[0] - (int)STField<short>(this,499);
  iVar6 = (int)(short)local_14 - (int)STField<short>(this,0x1f1);
  iVar4 = (int)(short)local_10 - (int)STField<short>(this,0x1ef);
  if (iVar4 * iVar4 + iVar6 * iVar6 + iVar5 * iVar5 < 0x191) {
    iVar4 = 0;
  }
  else {
    STFishC::sub_004162B0(this_00,&local_a,&local_6,&local_8);
    if (((local_a == STField<short>(this,0x2c5)) && (local_6 == STField<short>(this,0x2c7)))
       && (local_8 == STField<short>(this,0x2c9))) {
      iVar4 = 1;
    }
    else {
      iVar4 = STField<short>(this,0x2c5) - param_2;
      iVar5 = STField<short>(this,0x2c7) - param_3;
      iVar6 = STField<short>(this,0x2c9) - param_4;
      iVar4 = ((local_8 - param_4) * (local_8 - param_4) + (local_6 - param_3) * (local_6 - param_3)
               + (local_a - param_2) * (local_a - param_2) <
              iVar6 * iVar6 + iVar5 * iVar5 + iVar4 * iVar4) + 1;
    }
    if (((param_1 == STField<int>(this,0x2d5) + -3) && (iVar4 == 2)) ||
       ((param_1 == STField<int>(this,0x2d5) + -2 && (iVar4 != 0)))) {
      STField<undefined2>(this,0x2cb) = (undefined2)local_10;
      STField<undefined2>(this,0x2cd) = (undefined2)local_14;
      STField<short>(this,0x2cf) = local_18[0];
      return iVar4;
    }
  }
  return iVar4;
}

