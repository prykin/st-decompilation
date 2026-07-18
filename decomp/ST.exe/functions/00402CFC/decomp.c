
/* WARNING: Type propagation algorithm not settling */

undefined4
thunk_FUN_004919c0(short param_1,short param_2,short param_3,short param_4,short param_5,
                  short param_6,undefined2 *param_7,undefined2 *param_8,undefined2 *param_9,
                  short *param_10,short *param_11,undefined2 *param_12)

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
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iStack_68;
  int aiStack_64 [4];
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [10];
  int aiStack_20 [6];
  int iStack_8;
  
  iStack_68 = (int)param_4;
  iVar10 = (int)param_5;
  aiStack_64[1] = iStack_68 + -1;
  aiStack_64[0] = iVar10 + -1;
  aiStack_64[3] = iStack_68 + 1;
  aiStack_48[0] = 0;
  aiStack_48[1] = 0;
  aiStack_48[2] = 0;
  aiStack_48[3] = 0;
  aiStack_48[4] = 0;
  uVar6 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
  iStack_4c = iVar10 + 1;
  puVar13 = DAT_007fb280;
  puVar14 = DAT_007fb238;
  for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  aiStack_48[5] = 0xffffffff;
  aiStack_48[6] = 0xffffffff;
  aiStack_48[7] = 0xffffffff;
  aiStack_48[8] = 0xffffffff;
  aiStack_48[9] = 0xffffffff;
  aiStack_64[2] = iVar10;
  iStack_54 = iVar10;
  iStack_50 = iStack_68;
  FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,(int)param_1,
               (int)param_2,(int)param_3,-1,-1,-1);
  iVar10 = DAT_007fb278 * iVar10;
  iVar9 = 0;
  if (*(short *)((int)DAT_007fb238 + ((int)param_6 * (int)DAT_007fb27e + iVar10 + (int)param_4) * 2)
      < 1) {
    return 0xfffffffe;
  }
  switch((int)param_6) {
  case 0:
    aiStack_20[0] = 0;
    aiStack_20[1] = 1;
    aiStack_20[2] = 2;
    aiStack_20[3] = 3;
    aiStack_20[4] = 4;
    break;
  case 1:
    aiStack_20[0] = 1;
    aiStack_20[1] = 2;
    aiStack_20[2] = 0;
    aiStack_20[3] = 3;
    aiStack_20[4] = 4;
    break;
  case 2:
    aiStack_20[0] = 2;
    aiStack_20[1] = 3;
    aiStack_20[2] = 1;
    aiStack_20[3] = 4;
    aiStack_20[4] = 0;
    break;
  case 3:
    aiStack_20[0] = 3;
    aiStack_20[1] = 4;
    goto LAB_00491b42;
  case 4:
    aiStack_20[0] = 4;
    aiStack_20[1] = 3;
LAB_00491b42:
    aiStack_20[2] = 2;
    aiStack_20[3] = 1;
    aiStack_20[4] = 0;
    break;
  default:
    iVar10 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5071,0,0,&DAT_007a4ccc);
    if (iVar10 == 0) {
      return 0xfffffffe;
    }
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  do {
    iStack_8 = *(int *)((int)aiStack_20 + iVar9) * (int)DAT_007fb27e;
    if (0 < *(short *)((int)DAT_007fb238 + (iStack_8 + iVar10 + (int)param_4) * 2)) {
      piVar3 = &iStack_68;
      _param_3 = 1000000000;
      iVar11 = 0;
      do {
        iVar4 = *piVar3;
        if ((((-1 < iVar4) && (iVar4 <= DAT_007fb278 + -1)) && (iVar8 = piVar3[1], -1 < iVar8)) &&
           (iVar8 <= DAT_007fb27a + -1)) {
          iVar4 = iVar8 * DAT_007fb278 + iStack_8 + iVar4;
          iVar8 = (int)*(short *)((int)DAT_007fb238 + iVar4 * 2);
          if (0 < iVar8) {
            iVar4 = *(int *)(DAT_007fb248 + iVar4 * 8);
            if (iVar4 == aiStack_20[5]) {
              *(int *)((int)aiStack_48 + iVar9 + 0x14) = iVar11;
              *(undefined4 *)((int)aiStack_48 + iVar9) = 2;
              break;
            }
            if (iVar4 == 0) {
              if (*(int *)((int)aiStack_48 + iVar9) == 0) {
                *(int *)((int)aiStack_48 + iVar9 + 0x14) = iVar11;
                *(undefined4 *)((int)aiStack_48 + iVar9) = 1;
                _param_3 = iVar8;
                goto LAB_00491c1c;
              }
              if (*(int *)((int)aiStack_48 + iVar9) != 1) goto LAB_00491c08;
            }
            else {
LAB_00491c08:
              if (*(int *)((int)aiStack_48 + iVar9) != 0) goto LAB_00491c1c;
            }
            if (iVar8 < _param_3) {
              *(int *)((int)aiStack_48 + iVar9 + 0x14) = iVar11;
              _param_3 = iVar8;
            }
          }
        }
LAB_00491c1c:
        iVar11 = iVar11 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar11 < 4);
    }
    iVar9 = iVar9 + 4;
    if (0x13 < iVar9) {
      iVar9 = param_6 + 1;
      if (iVar9 < 5) {
        iVar11 = param_6 + 2;
        psVar12 = (short *)((int)DAT_007fb238 + (DAT_007fb27e * iVar9 + iVar10 + (int)param_4) * 2);
        do {
          iVar9 = iVar11;
          if (*psVar12 < 1) {
            for (; iVar9 < 5; iVar9 = iVar9 + 1) {
              iVar4 = 0;
              piVar3 = aiStack_20;
              do {
                if (*piVar3 == iVar9) {
                  aiStack_48[iVar4 + 5] = -1;
                  break;
                }
                iVar4 = iVar4 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar4 < 5);
            }
          }
          psVar12 = psVar12 + DAT_007fb27e;
          iVar11 = iVar11 + 1;
        } while (iVar11 < 6);
      }
      iVar9 = param_6 + -1;
      if (-1 < iVar9) {
        psVar12 = (short *)((int)DAT_007fb238 + (DAT_007fb27e * iVar9 + iVar10 + (int)param_4) * 2);
        do {
          if ((*psVar12 < 1) && (iVar10 = iVar9 + -1, 0 < iVar9)) {
            do {
              iVar11 = 0;
              piVar3 = aiStack_20;
              do {
                if (*piVar3 == iVar10) {
                  aiStack_48[iVar11 + 5] = -1;
                  break;
                }
                iVar11 = iVar11 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar11 < 5);
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          iVar9 = iVar9 + -1;
          psVar12 = psVar12 + -(int)DAT_007fb27e;
        } while (-1 < iVar9);
      }
      iVar10 = -1;
      iVar9 = 0;
      _param_3 = 1000000000;
      _param_6 = 0;
      do {
        iVar11 = *(int *)((int)aiStack_48 + iVar9 + 0x14);
        if (iVar11 != -1) {
          if ((iVar10 == -1) ||
             ((*(int *)((int)aiStack_48 + iVar9) == 1 && (aiStack_48[iVar10] == 0)))) {
            _param_3 = (int)*(short *)((int)DAT_007fb238 +
                                      (*(int *)((int)aiStack_64 + iVar11 * 8) * (int)DAT_007fb278 +
                                       *(int *)((int)aiStack_20 + iVar9) * (int)DAT_007fb27e +
                                      (&iStack_68)[iVar11 * 2]) * 2);
            iVar10 = _param_6;
          }
          else if (((*(int *)((int)aiStack_48 + iVar9) != 0) || (aiStack_48[iVar10] != 1)) &&
                  (iVar11 = (int)*(short *)((int)DAT_007fb238 +
                                           (*(int *)((int)aiStack_64 + iVar11 * 8) *
                                            (int)DAT_007fb278 +
                                            *(int *)((int)aiStack_20 + iVar9) * (int)DAT_007fb27e +
                                           (&iStack_68)[iVar11 * 2]) * 2), iVar11 < _param_3)) {
            iVar10 = _param_6;
            _param_3 = iVar11;
          }
        }
        iVar9 = iVar9 + 4;
        _param_6 = _param_6 + 1;
      } while (iVar9 < 0x14);
      if (iVar10 != -1) {
        iVar9 = aiStack_20[iVar10];
        uVar1 = *(undefined2 *)((int)aiStack_64 + aiStack_48[iVar10 + 5] * 8);
        *param_7 = (short)(&iStack_68)[aiStack_48[iVar10 + 5] * 2];
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

