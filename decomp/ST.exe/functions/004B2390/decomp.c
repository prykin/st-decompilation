
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004B2520 -> 004B2390 @ 004B25DA | 004B2520 -> 004B2390 @ 004B2996 | 004B2520 ->
   004B2390 @ 004B29F2 | 004B2520 -> 004B2390 @ 004B2A8B | 004B2520 -> 004B2390 @ 004B2ADB */

undefined4 __cdecl
FUN_004b2390(uint param_1,int param_2,int param_3,undefined4 param_4,int *param_5,int param_6)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((-1 < param_2) && (param_2 < g_worldGrid.sizeX)) && (-1 < param_3)) &&
     (param_3 < g_worldGrid.sizeY)) {
    sVar3 = (short)param_2;
    if (-1 < sVar3) {
      sVar1 = (short)param_3;
      sVar4 = (short)param_4;
      if (((((g_worldGrid.sizeX <= sVar3) || (sVar1 < 0)) ||
           ((g_worldGrid.sizeY <= sVar1 || ((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)))))) ||
          (g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar4 + (int)sVar1 * (int)g_worldGrid.sizeX +
            (int)sVar3].objects[0] == (STWorldObject *)0x0)) &&
         (((((sVar3 < g_worldGrid.sizeX && (-1 < sVar1)) && (sVar1 < g_worldGrid.sizeY)) &&
           ((-1 < sVar4 && (sVar4 < g_worldGrid.sizeZ)))) &&
          (((g_pathingGrid.cells
             [(int)g_pathingGrid.sizeX * (int)sVar1 + (int)g_pathingGrid.planeStride * (int)sVar4 +
              (int)sVar3] == 0 &&
            ((local_8 = 1, param_6 != 0 && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)))) &&
           (iVar2 = thunk_FUN_0055b1c0(g_visibleClass_00802A88,param_2,param_3,param_4,param_1),
           iVar2 != 0)))))) {
        local_8 = 0;
        *param_5 = 1;
      }
    }
    return local_8;
  }
  return 0;
}

