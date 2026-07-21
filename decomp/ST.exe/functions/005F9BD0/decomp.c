
void FUN_005f9bd0(short param_1,short param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  short sVar1;
  short sVar2;
  int local_8;

  *param_5 = 0;
  *param_6 = 0;
  local_8 = 0;
  sVar2 = g_worldGrid.sizeX;
  for (; param_4 < param_3; param_4 = param_4 + 1) {
    if ((((-1 < param_1) && (param_1 < sVar2)) && (-1 < param_2)) &&
       (((param_2 < g_worldGrid.sizeY && (sVar1 = (short)param_4, -1 < sVar1)) &&
        ((sVar1 < g_worldGrid.sizeZ &&
         (g_worldGrid.cells
          [(int)sVar1 * (int)g_worldGrid.planeStride + (int)sVar2 * (int)param_2 + (int)param_1].
          objects[0] != (STWorldObject *)0x0)))))) {
      if (local_8 == 0) {
        *param_5 = param_4;
      }
      local_8 = local_8 + 1;
      *param_6 = param_4;
      sVar2 = g_worldGrid.sizeX;
    }
  }
  return;
}

