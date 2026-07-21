
undefined4 __cdecl FUN_005809e0(short param_1,short param_2,int param_3,int param_4)

{
  STWorldObject *this;
  short sVar1;
  int iVar2;
  short sVar3;

  sVar3 = (short)param_3;
  iVar2 = thunk_FUN_004961b0(param_1,param_2,sVar3);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    sVar1 = sVar3 + -1;
    if (param_1 < 0) {
      return 1;
    }
    if ((((param_1 < g_worldGrid.sizeX) && (-1 < param_2)) && (param_2 < g_worldGrid.sizeY)) &&
       (((-1 < sVar1 && (sVar1 < g_worldGrid.sizeZ)) &&
        (g_pathingGrid.cells
         [(int)g_pathingGrid.planeStride * (int)sVar1 + (int)g_pathingGrid.sizeX * (int)param_2 +
          (int)param_1] != -1)))) {
      return 0;
    }
  }
  if (((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) ||
     (((param_2 < 0 ||
       (((g_worldGrid.sizeY <= param_2 || (sVar3 < 0)) || (g_worldGrid.sizeZ <= sVar3)))) ||
      (this = g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)param_2 +
               (int)param_1].objects[0], this == (STWorldObject *)0x0)))) {
    return 1;
  }
  iVar2 = (*this->vtable->GetObjectTypeId)(this);
  if (iVar2 != 0x39) {
    if (iVar2 == 0x4f) {
      if (param_4 != 0xde) {
        return 0;
      }
      return 1;
    }
    if (iVar2 != 0x5e) {
      return 0;
    }
  }
  if (param_4 != 0xdd) {
    return 0;
  }
  return 1;
}

