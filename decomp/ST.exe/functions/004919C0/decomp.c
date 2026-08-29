#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetCellForLoading

   [STSwitchEnumApplier] Switch target param_6 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_GetCellForLoading_param_6Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004732F0 @ 0047346F -> read as EAX on
   every CFG path | 004732F0 @ 00473657 -> read as EAX on every CFG path | 004732F0 @ 00473836 ->
   read as EAX on every CFG path | 00492080 @ 00492177 -> read as EAX on every CFG path */

int __thiscall
STBoatC::GetCellForLoading
          (STBoatC *this,short param_1,short param_2,short param_3,short param_4,short param_5,
          STBoatC_GetCellForLoading_param_6Enum param_6,undefined2 *param_7,undefined2 *param_8,
          undefined2 *param_9,short *param_10,short *param_11,undefined2 *param_12)

{
  ushort uVar1;
  int *piVar3;
  int iVar4;
  int iVar10;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar11;
  short *psVar14;
  int local_68;
  int local_64 [4];
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [10];
  int local_20 [5];
  STBoatC *local_c;
  int local_8;
  short *psVar12;
  short *psVar13;

  local_68 = (int)param_4;
  iVar9 = (int)param_5;
  local_64[1] = local_68 + -1;
  local_64[0] = iVar9 + -1;
  local_64[3] = local_68 + 1;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  uVar5 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
  local_4c = iVar9 + 1;
  psVar12 = g_pathingGrid.cells;
  psVar13 = g_pathingScratchGrid.cells;
  for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)psVar13 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    psVar13 = psVar13 + 2;
  }
  for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)psVar13 = (char)*psVar12;
    psVar12 = (short *)((int)psVar12 + 1);
    psVar13 = (short *)((int)psVar13 + 1);
  }
  local_48[5] = 0xffffffff;
  local_48[6] = 0xffffffff;
  local_48[7] = 0xffffffff;
  local_48[8] = 0xffffffff;
  local_48[9] = 0xffffffff;
  local_64[2] = iVar9;
  local_54 = iVar9;
  local_50 = local_68;
  local_c = this;

  FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
               (int)g_pathingGrid.sizeZ,(int)param_1,(int)param_2,(int)param_3,-1,-1,-1);
  iVar9 = g_pathingGrid.sizeX * iVar9;
  iVar8 = 0;
  if (g_pathingScratchGrid.cells
      [(short)param_6 * (int)g_pathingGrid.planeStride + iVar9 + (int)param_4] < 1) {
    return -2;
  }
  switch((short)param_6) {
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

    iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x5071,0,0,"%s",
                                "STBoatC::GetCellForLoading zo");
    if (iVar10 == 0) {
      return -2;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  do {
    local_8 = *(int *)((int)local_20 + iVar8) * (int)g_pathingGrid.planeStride;
    if (0 < g_pathingScratchGrid.cells[local_8 + iVar9 + (int)param_4]) {
      piVar3 = &local_68;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_3 = 1000000000;
      iVar11 = 0;
      do {
        iVar4 = *piVar3;
        if ((((-1 < iVar4) && (iVar4 <= g_pathingGrid.sizeX + -1)) &&
            (iVar7 = piVar3[1], -1 < iVar7)) && (iVar7 <= g_pathingGrid.sizeY + -1)) {
          iVar4 = iVar7 * g_pathingGrid.sizeX + local_8 + iVar4;
          iVar7 = (int)g_pathingScratchGrid.cells[iVar4];
          if (0 < iVar7) {
            if ((STBoatC *)g_worldGrid.cells[iVar4].objects[0] == local_c) {
              *(int *)((int)local_48 + iVar8 + 0x14) = iVar11;
              *(undefined4 *)((int)local_48 + iVar8) = 2;
              break;
            }
            if ((STBoatC *)g_worldGrid.cells[iVar4].objects[0] == nullptr) {
              if (*(int *)((int)local_48 + iVar8) == 0) {
                *(int *)((int)local_48 + iVar8 + 0x14) = iVar11;
                *(undefined4 *)((int)local_48 + iVar8) = 1;
                _param_3 = iVar7;
                goto cf_continue_loop_00491C1C;
              }
              if (*(int *)((int)local_48 + iVar8) != 1) goto LAB_00491c08;
            }
            else {
LAB_00491c08:
              if (*(int *)((int)local_48 + iVar8) != 0) goto cf_continue_loop_00491C1C;
            }
            if (iVar7 < _param_3) {
              *(int *)((int)local_48 + iVar8 + 0x14) = iVar11;
              _param_3 = iVar7;
            }
          }
        }
cf_continue_loop_00491C1C:
        iVar11 = iVar11 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar11 < 4);
    }
    iVar8 = iVar8 + 4;
    if (0x13 < iVar8) {
      iVar8 = (short)param_6 + 1;
      if (iVar8 < 5) {
        iVar11 = (short)param_6 + 2;
        psVar14 = g_pathingScratchGrid.cells +
                  g_pathingGrid.planeStride * iVar8 + iVar9 + (int)param_4;
        do {
          iVar8 = iVar11;
          if (*psVar14 < 1) {
            for (; iVar8 < 5; iVar8 = iVar8 + 1) {
              iVar4 = 0;
              piVar3 = local_20;
              do {
                if (*piVar3 == iVar8) {
                  local_48[iVar4 + 5] = -1;
                  break;
                }
                iVar4 = iVar4 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar4 < 5);
            }
          }
          psVar14 = psVar14 + g_pathingGrid.planeStride;
          iVar11 = iVar11 + 1;
        } while (iVar11 < 6);
      }
      iVar8 = (short)param_6 + -1;
      if (-1 < iVar8) {
        psVar14 = g_pathingScratchGrid.cells +
                  g_pathingGrid.planeStride * iVar8 + iVar9 + (int)param_4;
        do {
          if ((*psVar14 < 1) && (iVar9 = iVar8 + -1, 0 < iVar8)) {
            do {
              iVar11 = 0;
              piVar3 = local_20;
              do {
                if (*piVar3 == iVar9) {
                  local_48[iVar11 + 5] = -1;
                  break;
                }
                iVar11 = iVar11 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar11 < 5);
              iVar9 = iVar9 + -1;
            } while (-1 < iVar9);
          }
          iVar8 = iVar8 + -1;
          psVar14 = psVar14 + -(int)g_pathingGrid.planeStride;
        } while (-1 < iVar8);
      }
      iVar9 = -1;
      iVar8 = 0;
      _param_3 = 1000000000;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_6 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar11 = *(int *)((int)local_48 + iVar8 + 0x14);
        if (iVar11 != -1) {
          if ((iVar9 == -1) || ((*(int *)((int)local_48 + iVar8) == 1 && (local_48[iVar9] == 0)))) {
            _param_3 = (int)g_pathingScratchGrid.cells
                            [*(int *)((int)local_64 + iVar11 * 8) * (int)g_pathingGrid.sizeX +
                             *(int *)((int)local_20 + iVar8) * (int)g_pathingGrid.planeStride +
                             (&local_68)[iVar11 * 2]];
            iVar9 = _param_6;
          }
          else if (((*(int *)((int)local_48 + iVar8) != 0) || (local_48[iVar9] != 1)) &&
                  (g_pathingScratchGrid.cells
                   [*(int *)((int)local_64 + iVar11 * 8) * (int)g_pathingGrid.sizeX +
                    *(int *)((int)local_20 + iVar8) * (int)g_pathingGrid.planeStride +
                    (&local_68)[iVar11 * 2]] < _param_3)) {
            iVar9 = _param_6;
            _param_3 = (int)g_pathingScratchGrid.cells
                            [*(int *)((int)local_64 + iVar11 * 8) * (int)g_pathingGrid.sizeX +
                             *(int *)((int)local_20 + iVar8) * (int)g_pathingGrid.planeStride +
                             (&local_68)[iVar11 * 2]];
          }
        }
        iVar8 = iVar8 + 4;
        _param_6 = _param_6 + 1;
      } while (iVar8 < 0x14);
      if (iVar9 != -1) {
        iVar8 = local_20[iVar9];
        uVar1 = *(undefined2 *)((int)local_64 + local_48[iVar9 + 5] * 8);
        *param_7 = (short)(&local_68)[local_48[iVar9 + 5] * 2];
        *param_8 = uVar1;
        *param_9 = (short)iVar8;
        *param_10 = param_4;
        *param_11 = param_5;
        *param_12 = (short)iVar8;
        return 0;
      }
      return -1;
    }
  } while( true );
}

