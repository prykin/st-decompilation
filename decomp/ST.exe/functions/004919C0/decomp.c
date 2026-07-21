
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetCellForLoading
   
   [STSwitchEnumApplier] Switch target param_6 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_GetCellForLoading_param_6Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

undefined4 __thiscall
STBoatC::GetCellForLoading
          (STBoatC *this,short param_1,short param_2,short param_3,short param_4,short param_5,
          STBoatC_GetCellForLoading_param_6Enum param_6,undefined2 *param_7,undefined2 *param_8,
          undefined2 *param_9,short *param_10,short *param_11,undefined2 *param_12)

{
  undefined2 uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  short *psVar13;
  int local_68;
  int local_64 [4];
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [10];
  int local_20 [5];
  STBoatC *local_c;
  int local_8;
  
  local_68 = (int)param_4;
  iVar10 = (int)param_5;
  local_64[1] = local_68 + -1;
  local_64[0] = iVar10 + -1;
  local_64[3] = local_68 + 1;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  uVar6 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
  local_4c = iVar10 + 1;
  psVar12 = g_pathingGrid.cells;
  psVar13 = g_pathingScratchGrid.cells;
  for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)psVar13 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    psVar13 = psVar13 + 2;
  }
  for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)psVar13 = (char)*psVar12;
    psVar12 = (short *)((int)psVar12 + 1);
    psVar13 = (short *)((int)psVar13 + 1);
  }
  local_48[5] = 0xffffffff;
  local_48[6] = 0xffffffff;
  local_48[7] = 0xffffffff;
  local_48[8] = 0xffffffff;
  local_48[9] = 0xffffffff;
  local_64[2] = iVar10;
  local_54 = iVar10;
  local_50 = local_68;
  local_c = this;
  FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
               (int)g_pathingGrid.sizeZ,(int)param_1,(int)param_2,(int)param_3,-1,-1,-1);
  iVar10 = g_pathingGrid.sizeX * iVar10;
  iVar9 = 0;
  if (g_pathingScratchGrid.cells
      [(int)(short)param_6 * (int)g_pathingGrid.planeStride + iVar10 + (int)param_4] < 1) {
    return 0xfffffffe;
  }
  switch((int)(short)param_6) {
  case 0:
    local_20[0] = 0;
    local_20[1] = 1;
    local_20[2] = 2;
    local_20[3] = 3;
    local_20[4] = 4;
    break;
  case 1:
    local_20[0] = 1;
    local_20[1] = 2;
    local_20[2] = 0;
    local_20[3] = 3;
    local_20[4] = 4;
    break;
  case 2:
    local_20[0] = 2;
    local_20[1] = 3;
    local_20[2] = 1;
    local_20[3] = 4;
    local_20[4] = 0;
    break;
  case 3:
    local_20[0] = 3;
    local_20[1] = 4;
    goto LAB_00491b42;
  case 4:
    local_20[0] = 4;
    local_20[1] = 3;
LAB_00491b42:
    local_20[2] = 2;
    local_20[3] = 1;
    local_20[4] = 0;
    break;
  default:
    iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5071,0,0,&DAT_007a4ccc,
                                s_STBoatC__GetCellForLoading_zo_007abb04);
    if (iVar10 == 0) {
      return 0xfffffffe;
    }
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  do {
    local_8 = *(int *)((int)local_20 + iVar9) * (int)g_pathingGrid.planeStride;
    if (0 < g_pathingScratchGrid.cells[local_8 + iVar10 + (int)param_4]) {
      piVar3 = &local_68;
      _param_3 = 1000000000;
      iVar11 = 0;
      do {
        iVar4 = *piVar3;
        if ((((-1 < iVar4) && (iVar4 <= g_pathingGrid.sizeX + -1)) &&
            (iVar8 = piVar3[1], -1 < iVar8)) && (iVar8 <= g_pathingGrid.sizeY + -1)) {
          iVar4 = iVar8 * g_pathingGrid.sizeX + local_8 + iVar4;
          iVar8 = (int)g_pathingScratchGrid.cells[iVar4];
          if (0 < iVar8) {
            if ((STBoatC *)g_worldGrid.cells[iVar4].objects[0] == local_c) {
              *(int *)((int)local_48 + iVar9 + 0x14) = iVar11;
              *(undefined4 *)((int)local_48 + iVar9) = 2;
              break;
            }
            if ((STBoatC *)g_worldGrid.cells[iVar4].objects[0] == (STBoatC *)0x0) {
              if (*(int *)((int)local_48 + iVar9) == 0) {
                *(int *)((int)local_48 + iVar9 + 0x14) = iVar11;
                *(undefined4 *)((int)local_48 + iVar9) = 1;
                _param_3 = iVar8;
                goto cf_continue_loop_00491C1C;
              }
              if (*(int *)((int)local_48 + iVar9) != 1) goto LAB_00491c08;
            }
            else {
LAB_00491c08:
              if (*(int *)((int)local_48 + iVar9) != 0) goto cf_continue_loop_00491C1C;
            }
            if (iVar8 < _param_3) {
              *(int *)((int)local_48 + iVar9 + 0x14) = iVar11;
              _param_3 = iVar8;
            }
          }
        }
cf_continue_loop_00491C1C:
        iVar11 = iVar11 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar11 < 4);
    }
    iVar9 = iVar9 + 4;
    if (0x13 < iVar9) {
      iVar9 = (short)param_6 + 1;
      if (iVar9 < 5) {
        iVar11 = (short)param_6 + 2;
        psVar12 = g_pathingScratchGrid.cells +
                  g_pathingGrid.planeStride * iVar9 + iVar10 + (int)param_4;
        do {
          iVar9 = iVar11;
          if (*psVar12 < 1) {
            for (; iVar9 < 5; iVar9 = iVar9 + 1) {
              iVar4 = 0;
              piVar3 = local_20;
              do {
                if (*piVar3 == iVar9) {
                  local_48[iVar4 + 5] = -1;
                  break;
                }
                iVar4 = iVar4 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar4 < 5);
            }
          }
          psVar12 = psVar12 + g_pathingGrid.planeStride;
          iVar11 = iVar11 + 1;
        } while (iVar11 < 6);
      }
      iVar9 = (short)param_6 + -1;
      if (-1 < iVar9) {
        psVar12 = g_pathingScratchGrid.cells +
                  g_pathingGrid.planeStride * iVar9 + iVar10 + (int)param_4;
        do {
          if ((*psVar12 < 1) && (iVar10 = iVar9 + -1, 0 < iVar9)) {
            do {
              iVar11 = 0;
              piVar3 = local_20;
              do {
                if (*piVar3 == iVar10) {
                  local_48[iVar11 + 5] = -1;
                  break;
                }
                iVar11 = iVar11 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar11 < 5);
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          iVar9 = iVar9 + -1;
          psVar12 = psVar12 + -(int)g_pathingGrid.planeStride;
        } while (-1 < iVar9);
      }
      iVar10 = -1;
      iVar9 = 0;
      _param_3 = 1000000000;
      _param_6 = 0;
      do {
        iVar11 = *(int *)((int)local_48 + iVar9 + 0x14);
        if (iVar11 != -1) {
          if ((iVar10 == -1) || ((*(int *)((int)local_48 + iVar9) == 1 && (local_48[iVar10] == 0))))
          {
            _param_3 = (int)g_pathingScratchGrid.cells
                            [*(int *)((int)local_64 + iVar11 * 8) * (int)g_pathingGrid.sizeX +
                             *(int *)((int)local_20 + iVar9) * (int)g_pathingGrid.planeStride +
                             (&local_68)[iVar11 * 2]];
            iVar10 = _param_6;
          }
          else if (((*(int *)((int)local_48 + iVar9) != 0) || (local_48[iVar10] != 1)) &&
                  (g_pathingScratchGrid.cells
                   [*(int *)((int)local_64 + iVar11 * 8) * (int)g_pathingGrid.sizeX +
                    *(int *)((int)local_20 + iVar9) * (int)g_pathingGrid.planeStride +
                    (&local_68)[iVar11 * 2]] < _param_3)) {
            iVar10 = _param_6;
            _param_3 = (int)g_pathingScratchGrid.cells
                            [*(int *)((int)local_64 + iVar11 * 8) * (int)g_pathingGrid.sizeX +
                             *(int *)((int)local_20 + iVar9) * (int)g_pathingGrid.planeStride +
                             (&local_68)[iVar11 * 2]];
          }
        }
        iVar9 = iVar9 + 4;
        _param_6 = _param_6 + 1;
      } while (iVar9 < 0x14);
      if (iVar10 != -1) {
        iVar9 = local_20[iVar10];
        uVar1 = *(undefined2 *)((int)local_64 + local_48[iVar10 + 5] * 8);
        *param_7 = (short)(&local_68)[local_48[iVar10 + 5] * 2];
        *param_8 = uVar1;
        *param_9 = (short)iVar9;
        *param_10 = param_4;
        *param_11 = param_5;
        *param_12 = (short)iVar9;
        return 0;
      }
      return 0xffffffff;
    }
  } while( true );
}

