
undefined4 FUN_00496140(short param_1,short param_2,short param_3)

{
  int iVar1;

  iVar1 = (int)g_pathingGrid.sizeX * (int)param_2 + (int)g_pathingGrid.planeStride * (int)param_3 +
          (int)param_1;
  if (g_pathingGrid.cells[iVar1] == 0) {
    return 0xffffffff;
  }
  g_pathingGrid.cells[iVar1] = 0;
  return 0;
}

