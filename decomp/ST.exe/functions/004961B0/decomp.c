
bool FUN_004961b0(short param_1,short param_2,short param_3)

{
  if ((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
     (((param_2 < g_worldGrid.sizeY && (-1 < param_3)) && (param_3 < g_worldGrid.sizeZ)))) {
    return g_pathingGrid.cells
           [(int)g_pathingGrid.sizeX * (int)param_2 + (int)g_pathingGrid.planeStride * (int)param_3
            + (int)param_1] == 0;
  }
  return false;
}

