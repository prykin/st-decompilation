
bool __thiscall FUN_00417f30(void *this,short param_1,short param_2,short param_3)

{
  if (g_pathingGrid.cells
      [(int)g_pathingGrid.sizeX * (int)param_2 +
       (int)param_1 + (int)g_pathingGrid.planeStride * (int)param_3] < 0) {
    return false;
  }
  return g_worldGrid.cells
         [(int)g_worldGrid.sizeX * (int)param_2 +
          (int)param_1 + (int)g_worldGrid.planeStride * (int)param_3].objects
         [*(byte *)((int)this + 0x8e)] == (STWorldObject *)0x0;
}

