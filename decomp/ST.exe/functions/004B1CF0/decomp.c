
int __cdecl FUN_004b1cf0(int param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;

  iVar2 = thunk_FUN_004b1690(*param_2,*param_3,*param_4,param_1,0);
  if (iVar2 == 0) {
    sVar1 = g_worldGrid.sizeX;
    if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
      sVar1 = g_worldGrid.sizeY;
    }
    iVar4 = 1;
    if (1 < sVar1) {
      do {
        local_8 = 0;
        if (g_worldGrid.sizeZ != 1 && -1 < g_worldGrid.sizeZ + -1) {
          do {
            iVar5 = *param_2 - iVar4;
            if (iVar5 <= *param_2 + iVar4) {
              do {
                if ((-1 < iVar5) && (iVar5 < g_worldGrid.sizeX)) {
                  iVar6 = *param_3 - iVar4;
                  if ((-1 < iVar6) &&
                     ((iVar6 < g_worldGrid.sizeY &&
                      (iVar3 = thunk_FUN_004b1690(iVar5,iVar6,local_8,param_1,0), iVar3 != 0)))) {
                    *param_2 = iVar5;
                    *param_3 = iVar6;
                    *param_4 = local_8;
                    return 1;
                  }
                  iVar6 = *param_3 + iVar4;
                  if (((-1 < iVar6) && (iVar6 < g_worldGrid.sizeY)) &&
                     (iVar3 = thunk_FUN_004b1690(iVar5,iVar6,local_8,param_1,0), iVar3 != 0)) {
                    *param_2 = iVar5;
                    *param_3 = iVar6;
                    *param_4 = local_8;
                    return 1;
                  }
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 <= *param_2 + iVar4);
            }
            iVar5 = *param_3;
            iVar6 = (iVar5 - iVar4) + 1;
            if (iVar6 <= iVar5 + -1 + iVar4) {
              do {
                if ((-1 < iVar6) && (iVar6 < g_worldGrid.sizeY)) {
                  iVar5 = iVar5 - iVar4;
                  if ((-1 < iVar5) &&
                     ((iVar5 < g_worldGrid.sizeX &&
                      (iVar3 = thunk_FUN_004b1690(iVar5,iVar6,local_8,param_1,0), iVar3 != 0)))) {
                    *param_2 = iVar5;
                    *param_3 = iVar6;
                    *param_4 = local_8;
                    return 1;
                  }
                  iVar5 = *param_2 + iVar4;
                  if (((-1 < iVar5) && (iVar5 < g_worldGrid.sizeX)) &&
                     (iVar3 = thunk_FUN_004b1690(iVar5,iVar6,local_8,param_1,0), iVar3 != 0)) {
                    *param_2 = iVar5;
                    *param_3 = iVar6;
                    *param_4 = local_8;
                    return 1;
                  }
                }
                iVar6 = iVar6 + 1;
                iVar5 = *param_3;
              } while (iVar6 <= iVar5 + -1 + iVar4);
            }
            local_8 = local_8 + 1;
          } while (local_8 < g_worldGrid.sizeZ + -1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < sVar1);
    }
  }
  return iVar2;
}

