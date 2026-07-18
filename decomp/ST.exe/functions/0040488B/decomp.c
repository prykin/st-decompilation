
int thunk_FUN_0040e0f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iStack_bc;
  int iStack_b8;
  uint uStack_b4;
  int iStack_a8;
  int iStack_74;
  int iStack_70;
  int iStack_60;
  int iStack_5c;
  int aiStack_54 [2];
  int iStack_4c;
  int aiStack_48 [2];
  int iStack_40;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  byte *pbStack_24;
  uint uStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00790030;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff34;
  iStack_38 = 0;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    iStack_34 = DAT_007f4d30 * DAT_007f4d2c;
    uStack_30 = (uint)(0 < DAT_007f4d24);
    pbStack_24 = (byte *)0x0;
    if (0 < param_4) {
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    iStack_2c = 0;
    iStack_28 = DAT_007f4d20;
    param_1 = param_1 * 4 + 2;
    param_2 = param_2 * 4 + 2;
    aiStack_54[0] = param_3;
    uVar7 = *(uint *)(&DAT_007a4b60 + param_5 * 4);
    iStack_40 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 7U)) >> 3;
    if (iStack_40 == 0) {
      iStack_40 = 1;
    }
    uVar6 = DAT_007f4d28 * 4;
    uVar1 = DAT_007f4d38 * 4;
    iVar5 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    iVar4 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
    uStack_20 = uVar7;
    if (iVar4 < iVar5) {
      ExceptionList = &pvStack_14;
      iStack_74 = FUN_006db610(uVar6,iVar5);
      iStack_74 = iStack_74 << 2;
      iStack_60 = (((int)uVar1 < 1) - 1 & 0x80000) - 0x40000;
    }
    else {
      ExceptionList = &pvStack_14;
      puStack_1c = &stack0xffffff34;
      iStack_60 = FUN_006db610(uVar1,iVar4);
      iStack_60 = iStack_60 << 2;
      iStack_74 = (((int)uVar6 < 1) - 1 & 0x80000) - 0x40000;
    }
    iVar5 = -((int)uVar7 / 2) * iStack_74;
    iVar4 = -((int)uVar7 / 2) * iStack_60;
    iStack_70 = 0;
    while( true ) {
      iStack_5c = 0;
      if ((iStack_28 < (int)uVar7) && (uStack_30 != 0)) {
        if (pbStack_24 == (byte *)0x0) {
          uStack_8 = 0;
          FUN_0072da40();
          uStack_8 = 0xffffffff;
          pbStack_24 = &stack0xffffff34;
          puStack_1c = &stack0xffffff34;
        }
        pbVar9 = pbStack_24;
        for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar9 = 0;
          pbVar9 = pbVar9 + 1;
        }
        iVar10 = 0;
        if (0 < (int)uVar7) {
          iStack_a8 = iVar4 + 0x8000;
          iVar8 = iVar5 + 0x8000;
          do {
            aiStack_48[0] = (iVar8 >> 0x10) + param_1 >> 2;
            iStack_4c = (iStack_a8 >> 0x10) + param_2 >> 2;
            if ((((-1 < aiStack_48[0]) && (aiStack_48[0] < DAT_007f4d2c)) && (-1 < iStack_4c)) &&
               ((iStack_4c < DAT_007f4d30 &&
                (uVar6 = aiStack_54[0] * iStack_34 + aiStack_48[0] + DAT_007f4d2c * iStack_4c ^ 7,
                (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0)))) {
              iStack_5c = iStack_5c + 1;
              pbStack_24[iVar10] = 1;
            }
            iVar8 = iVar8 + iStack_74;
            iStack_a8 = iStack_a8 + iStack_60;
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)uVar7);
        }
      }
      pbVar9 = pbStack_24;
      if (iStack_5c < (int)uVar7) {
        if (iStack_5c + iStack_28 < (int)uVar7) {
          if (iStack_5c < 1) {
            iVar8 = iVar5 - iStack_74;
            iVar10 = iVar4 - iStack_60;
            iStack_74 = (int)((uVar7 + 1) * iStack_74) / (iStack_28 + 1);
            iStack_60 = (int)((uStack_20 + 1) * iStack_60) / (iStack_28 + 1);
            uVar7 = uStack_20;
            if (0 < iStack_28) {
              iVar11 = iStack_2c * 0x14;
              iVar10 = iVar10 + 0x8000;
              iVar8 = iVar8 + 0x8000;
              iStack_bc = iStack_28;
              iStack_2c = iStack_2c + iStack_28;
              do {
                iVar8 = iVar8 + iStack_74;
                iVar10 = iVar10 + iStack_60;
                aiStack_48[0] = (iVar8 >> 0x10) + param_1 >> 2;
                iStack_4c = (iVar10 >> 0x10) + param_2 >> 2;
                *(int *)(iVar11 + DAT_007f4d3c) = aiStack_48[0];
                *(int *)(iVar11 + 4 + DAT_007f4d3c) = iStack_4c;
                *(int *)(iVar11 + 8 + DAT_007f4d3c) = aiStack_54[0];
                iVar11 = iVar11 + 0x14;
                if (((-1 < aiStack_48[0]) && (aiStack_48[0] < DAT_007f4d2c)) &&
                   ((-1 < iStack_4c && (iStack_4c < DAT_007f4d30)))) {
                  uVar7 = aiStack_54[0] * iStack_34 + aiStack_48[0] + DAT_007f4d2c * iStack_4c ^ 7;
                  pbVar9 = (byte *)(DAT_007f4cfc + ((int)uVar7 >> 3));
                  *pbVar9 = *pbVar9 | '\x01' << (uVar7 & 7);
                }
                iStack_bc = iStack_bc + -1;
                uVar7 = uStack_20;
              } while (iStack_bc != 0);
            }
          }
          else {
            FUN_0040f4d0((undefined4 *)pbStack_24,uVar7,iStack_40,0);
            if (0 < iStack_28) {
              iVar10 = iStack_2c * 0x14;
              iStack_b8 = iStack_28;
              iStack_2c = iStack_2c + iStack_28;
              do {
                iVar8 = FUN_0040f840(pbVar9,uVar7,iStack_40,0);
                aiStack_48[0] = (iVar8 * iStack_74 + 0x8000 + iVar5 >> 0x10) + param_1 >> 2;
                iStack_4c = (iVar8 * iStack_60 + 0x8000 + iVar4 >> 0x10) + param_2 >> 2;
                *(int *)(iVar10 + DAT_007f4d3c) = aiStack_48[0];
                *(int *)(iVar10 + 4 + DAT_007f4d3c) = iStack_4c;
                *(int *)(iVar10 + 8 + DAT_007f4d3c) = aiStack_54[0];
                iVar10 = iVar10 + 0x14;
                if ((((-1 < aiStack_48[0]) && (aiStack_48[0] < DAT_007f4d2c)) && (-1 < iStack_4c))
                   && (iStack_4c < DAT_007f4d30)) {
                  uVar6 = aiStack_54[0] * iStack_34 + aiStack_48[0] + DAT_007f4d2c * iStack_4c ^ 7;
                  pbVar2 = (byte *)(DAT_007f4cfc + ((int)uVar6 >> 3));
                  *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
                }
                iStack_b8 = iStack_b8 + -1;
              } while (iStack_b8 != 0);
            }
          }
          iStack_28 = 0;
        }
        else if (0 < (int)uVar7) {
          iVar11 = iStack_2c * 0x14;
          iVar10 = iVar4 + 0x8000;
          iVar8 = iVar5 + 0x8000;
          uStack_b4 = uVar7;
          do {
            aiStack_48[0] = (iVar8 >> 0x10) + param_1 >> 2;
            iStack_4c = (iVar10 >> 0x10) + param_2 >> 2;
            if (((aiStack_48[0] < 0) || (DAT_007f4d2c <= aiStack_48[0])) ||
               ((iStack_4c < 0 || (DAT_007f4d30 <= iStack_4c)))) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((!bVar3) ||
               (uVar7 = aiStack_54[0] * iStack_34 + aiStack_48[0] + DAT_007f4d2c * iStack_4c ^ 7,
               (*(byte *)(DAT_007f4cfc + ((int)uVar7 >> 3)) >> (uVar7 & 7) & 1) == 0)) {
              *(int *)(iVar11 + DAT_007f4d3c) = aiStack_48[0];
              *(int *)(iVar11 + 4 + DAT_007f4d3c) = iStack_4c;
              *(int *)(iVar11 + 8 + DAT_007f4d3c) = aiStack_54[0];
              iStack_2c = iStack_2c + 1;
              iVar11 = iVar11 + 0x14;
              iStack_28 = iStack_28 + -1;
              if (bVar3) {
                uVar7 = aiStack_54[0] * iStack_34 + aiStack_48[0] + DAT_007f4d2c * iStack_4c ^ 7;
                pbVar9 = (byte *)(DAT_007f4cfc + ((int)uVar7 >> 3));
                *pbVar9 = *pbVar9 | '\x01' << (uVar7 & 7);
              }
            }
            iVar8 = iVar8 + iStack_74;
            iVar10 = iVar10 + iStack_60;
            uStack_b4 = uStack_b4 - 1;
            uVar7 = uStack_20;
          } while (uStack_b4 != 0);
        }
      }
      if (iStack_28 < 1) break;
      do {
        iStack_70 = iStack_70 + 1;
        if (8 < iStack_70) {
          iStack_70 = 0;
          param_1 = param_1 - ((DAT_007f4d38 << 2) >> 0x10);
          param_2 = param_2 + ((DAT_007f4d28 << 2) >> 0x10);
          uStack_30 = 1;
          aiStack_54[0] = param_3;
        }
        switch(iStack_70) {
        case 1:
          aiStack_54[0] = aiStack_54[0] + 1;
          break;
        case 2:
          aiStack_54[0] = aiStack_54[0] + -2;
          break;
        case 3:
          aiStack_54[0] = aiStack_54[0] + 3;
          break;
        case 4:
          aiStack_54[0] = aiStack_54[0] + -4;
          break;
        case 5:
          aiStack_54[0] = aiStack_54[0] + 5;
          break;
        case 6:
          aiStack_54[0] = aiStack_54[0] + -6;
          break;
        case 7:
          aiStack_54[0] = aiStack_54[0] + 7;
          break;
        case 8:
          aiStack_54[0] = aiStack_54[0] + -8;
        }
      } while ((aiStack_54[0] < 0) || (DAT_007f4d34 <= aiStack_54[0]));
    }
    iStack_2c = 0;
    if (0 < DAT_007f4d20) {
      iVar10 = 0;
      iVar4 = iStack_34;
      iVar5 = DAT_007f4d3c;
      do {
        aiStack_48[0] = *(int *)(iVar10 + iVar5);
        iStack_4c = *(int *)(iVar10 + 4 + iVar5);
        aiStack_54[0] = *(int *)(iVar10 + 8 + iVar5);
        if ((((aiStack_48[0] < 0) || (DAT_007f4d2c <= aiStack_48[0])) || (iStack_4c < 0)) ||
           ((DAT_007f4d30 <= iStack_4c ||
            (iVar4 = iStack_34,
            *(short *)(DAT_007f4cf0 +
                      (aiStack_54[0] * iStack_34 + aiStack_48[0] + DAT_007f4d2c * iStack_4c) * 2) !=
            0)))) {
          iVar5 = FUN_0040f270(aiStack_48,&iStack_4c,aiStack_54,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar5 != 0) {
            iVar4 = -4;
            goto LAB_0040e872;
          }
          uVar7 = aiStack_54[0] * iVar4 + aiStack_48[0] + DAT_007f4d2c * iStack_4c ^ 7;
          pbVar9 = (byte *)(DAT_007f4cfc + ((int)uVar7 >> 3));
          *pbVar9 = *pbVar9 | '\x01' << (uVar7 & 7);
          *(int *)(iVar10 + DAT_007f4d3c) = aiStack_48[0];
          *(int *)(iVar10 + 4 + DAT_007f4d3c) = iStack_4c;
          *(int *)(iVar10 + 8 + DAT_007f4d3c) = aiStack_54[0];
          iVar5 = DAT_007f4d3c;
        }
        iStack_2c = iStack_2c + 1;
        iVar10 = iVar10 + 0x14;
      } while (iStack_2c < DAT_007f4d20);
    }
    FUN_0040eb90();
    iVar4 = iStack_38;
LAB_0040e872:
    if (iVar4 == 0) {
      ExceptionList = pvStack_14;
      return 0;
    }
    if (iVar4 != -4) {
      FUN_006a5e40(iVar4,DAT_007ed77c,0x7a4ca8,0x935);
      ExceptionList = pvStack_14;
      return iVar4;
    }
  }
  ExceptionList = pvStack_14;
  return -4;
}

