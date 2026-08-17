#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_005809e0(short param_1,short param_2,int param_3,int param_4)

{
  STWorldObject *this;
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;

  sVar4 = (short)param_3;
  iVar2 = thunk_FUN_004961b0(param_1,param_2,sVar4);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    sVar1 = sVar4 + -1;
    if (param_1 < 0) {
      return 1;
    }
    if ((((param_1 < g_worldGrid.sizeX) && (-1 < param_2)) && (param_2 < g_worldGrid.sizeY)) &&
       (((-1 < sVar1 && (sVar1 < g_worldGrid.sizeZ)) &&
        (STGridAt3D(g_pathingGrid, param_1, param_2, sVar1) != -1)))) {
      return 0;
    }
  }
  if (((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) ||
     (((param_2 < 0 ||
       (((g_worldGrid.sizeY <= param_2 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))) ||
      (this = STGridAt3D(g_worldGrid, param_1, param_2, sVar4).objects[0], this == nullptr)))) {
    return 1;
  }
  /* ST_CALLSITE[00580AD0]: CALL dword ptr [EAX + 0x2c] */
  iVar3 = this->GetObjectTypeId();
  if (iVar3 != 0x39) {
    if (iVar3 == 0x4f) {
      if (param_4 != 0xde) {
        return 0;
      }
      return 1;
    }
    if (iVar3 != 0x5e) {
      return 0;
    }
  }
  if (param_4 != 0xdd) {
    return 0;
  }
  return 1;
}

