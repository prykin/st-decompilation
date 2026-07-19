
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
  STBoatC *pSVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
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
  iVar11 = (int)param_5;
  local_64[1] = local_68 + -1;
  local_64[0] = iVar11 + -1;
  local_64[3] = local_68 + 1;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  uVar7 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
  local_4c = iVar11 + 1;
  puVar14 = DAT_007fb280;
  puVar15 = DAT_007fb238;
  for (uVar8 = (uVar7 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  local_48[5] = 0xffffffff;
  local_48[6] = 0xffffffff;
  local_48[7] = 0xffffffff;
  local_48[8] = 0xffffffff;
  local_48[9] = 0xffffffff;
  local_64[2] = iVar11;
  local_54 = iVar11;
  local_50 = local_68;
  local_c = this;
  FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,(int)param_1,
               (int)param_2,(int)param_3,-1,-1,-1);
  iVar11 = DAT_007fb278 * iVar11;
  iVar10 = 0;
  if (*(short *)((int)DAT_007fb238 +
                ((int)(short)param_6 * (int)DAT_007fb27e + iVar11 + (int)param_4) * 2) < 1) {
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
    iVar11 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5071,0,0,&DAT_007a4ccc,
                                s_STBoatC__GetCellForLoading_zo_007abb04);
    if (iVar11 == 0) {
      return 0xfffffffe;
    }
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  do {
    local_8 = *(int *)((int)local_20 + iVar10) * (int)DAT_007fb27e;
    if (0 < *(short *)((int)DAT_007fb238 + (local_8 + iVar11 + (int)param_4) * 2)) {
      piVar4 = &local_68;
      _param_3 = 1000000000;
      iVar12 = 0;
      do {
        iVar5 = *piVar4;
        if ((((-1 < iVar5) && (iVar5 <= DAT_007fb278 + -1)) && (iVar9 = piVar4[1], -1 < iVar9)) &&
           (iVar9 <= DAT_007fb27a + -1)) {
          iVar5 = iVar9 * DAT_007fb278 + local_8 + iVar5;
          iVar9 = (int)*(short *)((int)DAT_007fb238 + iVar5 * 2);
          if (0 < iVar9) {
            pSVar2 = *(STBoatC **)(DAT_007fb248 + iVar5 * 8);
            if (pSVar2 == local_c) {
              *(int *)((int)local_48 + iVar10 + 0x14) = iVar12;
              *(undefined4 *)((int)local_48 + iVar10) = 2;
              break;
            }
            if (pSVar2 == (STBoatC *)0x0) {
              if (*(int *)((int)local_48 + iVar10) == 0) {
                *(int *)((int)local_48 + iVar10 + 0x14) = iVar12;
                *(undefined4 *)((int)local_48 + iVar10) = 1;
                _param_3 = iVar9;
                goto LAB_00491c1c;
              }
              if (*(int *)((int)local_48 + iVar10) != 1) goto LAB_00491c08;
            }
            else {
LAB_00491c08:
              if (*(int *)((int)local_48 + iVar10) != 0) goto LAB_00491c1c;
            }
            if (iVar9 < _param_3) {
              *(int *)((int)local_48 + iVar10 + 0x14) = iVar12;
              _param_3 = iVar9;
            }
          }
        }
LAB_00491c1c:
        iVar12 = iVar12 + 1;
        piVar4 = piVar4 + 2;
      } while (iVar12 < 4);
    }
    iVar10 = iVar10 + 4;
    if (0x13 < iVar10) {
      iVar10 = (short)param_6 + 1;
      if (iVar10 < 5) {
        iVar12 = (short)param_6 + 2;
        psVar13 = (short *)((int)DAT_007fb238 + (DAT_007fb27e * iVar10 + iVar11 + (int)param_4) * 2)
        ;
        do {
          iVar10 = iVar12;
          if (*psVar13 < 1) {
            for (; iVar10 < 5; iVar10 = iVar10 + 1) {
              iVar5 = 0;
              piVar4 = local_20;
              do {
                if (*piVar4 == iVar10) {
                  local_48[iVar5 + 5] = -1;
                  break;
                }
                iVar5 = iVar5 + 1;
                piVar4 = piVar4 + 1;
              } while (iVar5 < 5);
            }
          }
          psVar13 = psVar13 + DAT_007fb27e;
          iVar12 = iVar12 + 1;
        } while (iVar12 < 6);
      }
      iVar10 = (short)param_6 + -1;
      if (-1 < iVar10) {
        psVar13 = (short *)((int)DAT_007fb238 + (DAT_007fb27e * iVar10 + iVar11 + (int)param_4) * 2)
        ;
        do {
          if ((*psVar13 < 1) && (iVar11 = iVar10 + -1, 0 < iVar10)) {
            do {
              iVar12 = 0;
              piVar4 = local_20;
              do {
                if (*piVar4 == iVar11) {
                  local_48[iVar12 + 5] = -1;
                  break;
                }
                iVar12 = iVar12 + 1;
                piVar4 = piVar4 + 1;
              } while (iVar12 < 5);
              iVar11 = iVar11 + -1;
            } while (-1 < iVar11);
          }
          iVar10 = iVar10 + -1;
          psVar13 = psVar13 + -(int)DAT_007fb27e;
        } while (-1 < iVar10);
      }
      iVar11 = -1;
      iVar10 = 0;
      _param_3 = 1000000000;
      _param_6 = 0;
      do {
        iVar12 = *(int *)((int)local_48 + iVar10 + 0x14);
        if (iVar12 != -1) {
          if ((iVar11 == -1) || ((*(int *)((int)local_48 + iVar10) == 1 && (local_48[iVar11] == 0)))
             ) {
            _param_3 = (int)*(short *)((int)DAT_007fb238 +
                                      (*(int *)((int)local_64 + iVar12 * 8) * (int)DAT_007fb278 +
                                       *(int *)((int)local_20 + iVar10) * (int)DAT_007fb27e +
                                      (&local_68)[iVar12 * 2]) * 2);
            iVar11 = _param_6;
          }
          else if (((*(int *)((int)local_48 + iVar10) != 0) || (local_48[iVar11] != 1)) &&
                  (iVar12 = (int)*(short *)((int)DAT_007fb238 +
                                           (*(int *)((int)local_64 + iVar12 * 8) * (int)DAT_007fb278
                                            + *(int *)((int)local_20 + iVar10) * (int)DAT_007fb27e +
                                           (&local_68)[iVar12 * 2]) * 2), iVar12 < _param_3)) {
            iVar11 = _param_6;
            _param_3 = iVar12;
          }
        }
        iVar10 = iVar10 + 4;
        _param_6 = _param_6 + 1;
      } while (iVar10 < 0x14);
      if (iVar11 != -1) {
        iVar10 = local_20[iVar11];
        uVar1 = *(undefined2 *)((int)local_64 + local_48[iVar11 + 5] * 8);
        *param_7 = (short)(&local_68)[local_48[iVar11 + 5] * 2];
        *param_8 = uVar1;
        *param_9 = (short)iVar10;
        *param_10 = param_4;
        *param_11 = param_5;
        *param_12 = (short)iVar10;
        return 0;
      }
      return 0xffffffff;
    }
  } while( true );
}

