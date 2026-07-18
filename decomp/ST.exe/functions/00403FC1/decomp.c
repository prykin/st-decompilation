
int thunk_FUN_00411260(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iStack_b8;
  int iStack_b0;
  uint uStack_ac;
  int iStack_a8;
  int iStack_74;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  char *pcStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  byte *pbStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00790070;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff3c;
  iStack_44 = 0;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    iStack_38 = DAT_007f4d30 * DAT_007f4d2c;
    uStack_34 = (uint)(0 < DAT_007f4d24);
    pbStack_24 = (byte *)0x0;
    if (0 < param_4) {
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    iStack_2c = 0;
    iStack_28 = DAT_007f4d20;
    iStack_60 = param_3;
    if ((int)param_6 < 0) {
      param_6 = param_6 + ((0x167 - param_6) / 0x168) * 0x168;
    }
    if (0x167 < (int)param_6) {
      param_6 = param_6 % 0x168;
    }
    iStack_64 = *(int *)(&DAT_007a4bf8 + param_5 * 4);
    ExceptionList = &pvStack_14;
    pcVar1 = (char *)FUN_006aac70(iStack_64 << 5);
    pcStack_54 = pcVar1;
    uVar2 = FUN_00411cf0(pcVar1,iStack_64);
    uStack_3c = (int)(uVar2 * param_6 + 0xb4) / 0x168;
    if (uStack_3c == uVar2) {
      uStack_3c = 0;
    }
    iStack_4c = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
    if (iStack_4c == 0) {
      iStack_4c = 1;
    }
    iStack_5c = 0;
    iStack_20 = 0;
    iVar3 = iStack_60;
    while( true ) {
      iStack_68 = 0;
      uStack_30 = uVar2;
      if ((iStack_28 < (int)uVar2) && (uStack_34 != 0)) {
        if (iStack_5c < (int)uVar2) {
          iStack_5c = uVar2 * 2;
          uStack_8 = 0;
          FUN_0072da40();
          uStack_8 = 0xffffffff;
          pbStack_24 = &stack0xffffff3c;
          puStack_1c = &stack0xffffff3c;
        }
        pbVar8 = pbStack_24;
        for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          pbVar8[0] = 0;
          pbVar8[1] = 0;
          pbVar8[2] = 0;
          pbVar8[3] = 0;
          pbVar8 = pbVar8 + 4;
        }
        for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pbVar8 = 0;
          pbVar8 = pbVar8 + 1;
        }
        iStack_74 = 0;
        iVar7 = DAT_007f4d2c;
        uVar4 = uStack_3c;
        iVar3 = iStack_60;
        if (0 < (int)uVar2) {
          do {
            iStack_50 = pcVar1[uVar4 * 4] + param_1;
            iStack_58 = pcVar1[uVar4 * 4 + 1] + param_2;
            if ((((-1 < iStack_50) && (iStack_50 < iVar7)) && (-1 < iStack_58)) &&
               ((iStack_58 < DAT_007f4d30 &&
                (uVar6 = iStack_60 * iStack_38 + iStack_50 + iVar7 * iStack_58 ^ 7,
                iVar7 = DAT_007f4d2c,
                (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0)))) {
              iStack_68 = iStack_68 + 1;
              pbStack_24[iStack_74] = 1;
              iVar7 = DAT_007f4d2c;
            }
            uVar4 = uVar4 + 1;
            if ((int)uVar2 <= (int)uVar4) {
              uVar4 = 0;
            }
            iStack_74 = iStack_74 + 1;
            pcVar1 = pcStack_54;
          } while (iStack_74 < (int)uVar2);
        }
      }
      if (iStack_68 < (int)uVar2) {
        if (iStack_68 + iStack_28 < (int)uVar2) {
          if (iStack_68 < 1) {
            iVar7 = uStack_3c << 0x10;
            if (0 < iStack_28) {
              iVar9 = iStack_2c * 0x14;
              iStack_b8 = iStack_28;
              iStack_2c = iStack_2c + iStack_28;
              uVar4 = uStack_3c;
              do {
                iStack_50 = pcStack_54[uVar4 * 4] + param_1;
                iStack_58 = pcStack_54[uVar4 * 4 + 1] + param_2;
                *(int *)(iVar9 + DAT_007f4d3c) = iStack_50;
                *(int *)(iVar9 + 4 + DAT_007f4d3c) = iStack_58;
                *(int *)(iVar9 + 8 + DAT_007f4d3c) = iStack_60;
                iVar9 = iVar9 + 0x14;
                if (((-1 < iStack_50) && (iStack_50 < DAT_007f4d2c)) &&
                   ((-1 < iStack_58 && (iStack_58 < DAT_007f4d30)))) {
                  uVar4 = iStack_60 * iStack_38 + iStack_50 + DAT_007f4d2c * iStack_58 ^ 7;
                  pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
                  *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
                }
                iVar7 = iVar7 + (int)(uVar2 * 0x10000) / iStack_28;
                uVar4 = iVar7 >> 0x10;
                if ((int)uVar2 <= (int)uVar4) {
                  iVar7 = iVar7 + uVar2 * -0x10000;
                  uVar4 = iVar7 >> 0x10;
                }
                iStack_b8 = iStack_b8 + -1;
                iVar3 = iStack_60;
              } while (iStack_b8 != 0);
            }
          }
          else {
            FUN_0040f4d0((undefined4 *)pbStack_24,uVar2,iStack_4c,1);
            iVar3 = iStack_60;
            if (0 < iStack_28) {
              iVar7 = iStack_2c * 0x14;
              iStack_b0 = iStack_28;
              iStack_2c = iStack_2c + iStack_28;
              pcVar1 = pcStack_54;
              do {
                iVar3 = FUN_0040f840(pbStack_24,uVar2,iStack_4c,1);
                iVar3 = (int)(iVar3 + uStack_3c) % (int)uVar2;
                iStack_50 = pcVar1[iVar3 * 4] + param_1;
                iStack_58 = pcVar1[iVar3 * 4 + 1] + param_2;
                *(int *)(iVar7 + DAT_007f4d3c) = iStack_50;
                *(int *)(iVar7 + 4 + DAT_007f4d3c) = iStack_58;
                *(int *)(iVar7 + 8 + DAT_007f4d3c) = iStack_60;
                iVar7 = iVar7 + 0x14;
                if ((((-1 < iStack_50) && (iStack_50 < DAT_007f4d2c)) && (-1 < iStack_58)) &&
                   (iStack_58 < DAT_007f4d30)) {
                  uVar4 = iStack_60 * iStack_38 + iStack_50 + DAT_007f4d2c * iStack_58 ^ 7;
                  pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
                  *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
                  pcVar1 = pcStack_54;
                }
                iStack_b0 = iStack_b0 + -1;
                iVar3 = iStack_60;
              } while (iStack_b0 != 0);
            }
          }
          iStack_28 = 0;
        }
        else if (0 < (int)uVar2) {
          iStack_a8 = iStack_2c * 0x14;
          uVar4 = uStack_3c;
          uStack_ac = uVar2;
          do {
            iStack_50 = pcStack_54[uVar4 * 4] + param_1;
            iStack_58 = pcStack_54[uVar4 * 4 + 1] + param_2;
            if (((iStack_50 < 0) || (DAT_007f4d2c <= iStack_50)) ||
               ((iStack_58 < 0 || (DAT_007f4d30 <= iStack_58)))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((!bVar5) ||
               (uVar6 = iVar3 * iStack_38 + iStack_50 + DAT_007f4d2c * iStack_58 ^ 7,
               (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) == 0)) {
              *(int *)(iStack_a8 + DAT_007f4d3c) = iStack_50;
              *(int *)(iStack_a8 + 4 + DAT_007f4d3c) = iStack_58;
              *(int *)(iStack_a8 + 8 + DAT_007f4d3c) = iStack_60;
              iStack_2c = iStack_2c + 1;
              iStack_a8 = iStack_a8 + 0x14;
              iStack_28 = iStack_28 + -1;
              if (bVar5) {
                uVar6 = iStack_60 * iStack_38 + iStack_50 + DAT_007f4d2c * iStack_58 ^ 7;
                pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar6 >> 3));
                *pbVar8 = *pbVar8 | '\x01' << (uVar6 & 7);
              }
            }
            uVar4 = uVar4 + 1;
            if ((int)uVar2 <= (int)uVar4) {
              uVar4 = 0;
            }
            uStack_ac = uStack_ac - 1;
            iVar3 = iStack_60;
          } while (uStack_ac != 0);
        }
      }
      iVar7 = 0;
      if (iStack_28 < 1) break;
      uVar4 = iStack_64 << 5;
      do {
        iStack_20 = iStack_20 + 1;
        if (8 < iStack_20) {
          iStack_20 = 0;
          iStack_60 = param_3;
          iStack_64 = iStack_64 + 1;
          uVar4 = uVar4 + 0x20;
          pcStack_54 = (char *)FUN_006acf50((undefined4 *)pcStack_54,uVar4);
          uVar2 = FUN_00411cf0(pcStack_54,iStack_64);
          uStack_3c = (int)(uVar2 * param_6 + 0xb4) / 0x168;
          if (uStack_3c == uVar2) {
            uStack_3c = 0;
          }
          uStack_34 = 1;
          iVar3 = iStack_60;
        }
        switch(iStack_20) {
        case 1:
          iVar3 = iVar3 + 1;
          iStack_60 = iVar3;
          break;
        case 2:
          iVar3 = iVar3 + -2;
          iStack_60 = iVar3;
          break;
        case 3:
          iVar3 = iVar3 + 3;
          iStack_60 = iVar3;
          break;
        case 4:
          iVar3 = iVar3 + -4;
          iStack_60 = iVar3;
          break;
        case 5:
          iVar3 = iVar3 + 5;
          iStack_60 = iVar3;
          break;
        case 6:
          iVar3 = iVar3 + -6;
          iStack_60 = iVar3;
          break;
        case 7:
          iVar3 = iVar3 + 7;
          iStack_60 = iVar3;
          break;
        case 8:
          iVar3 = iVar3 + -8;
          iStack_60 = iVar3;
        }
      } while ((iVar3 < 0) || (pcVar1 = pcStack_54, DAT_007f4d34 <= iVar3));
    }
    iStack_2c = 0;
    iVar3 = DAT_007f4d3c;
    if (0 < DAT_007f4d20) {
      do {
        iStack_50 = *(int *)(iVar7 + iVar3);
        iStack_58 = *(int *)(iVar7 + 4 + iVar3);
        iStack_60 = *(int *)(iVar7 + 8 + iVar3);
        if ((((iStack_50 < 0) || (DAT_007f4d2c <= iStack_50)) || (iStack_58 < 0)) ||
           ((DAT_007f4d30 <= iStack_58 ||
            (*(short *)(DAT_007f4cf0 +
                       (iStack_60 * iStack_38 + iStack_50 + DAT_007f4d2c * iStack_58) * 2) != 0))))
        {
          iVar3 = FUN_0040f270(&iStack_50,&iStack_58,&iStack_60,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar3 != 0) {
            iVar3 = -4;
            goto LAB_00411975;
          }
          uVar2 = iStack_60 * iStack_38 + iStack_50 + DAT_007f4d2c * iStack_58 ^ 7;
          pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar2 >> 3));
          *pbVar8 = *pbVar8 | '\x01' << (uVar2 & 7);
          *(int *)(iVar7 + DAT_007f4d3c) = iStack_50;
          *(int *)(iVar7 + 4 + DAT_007f4d3c) = iStack_58;
          *(int *)(iVar7 + 8 + DAT_007f4d3c) = iStack_60;
          iVar3 = DAT_007f4d3c;
        }
        iStack_2c = iStack_2c + 1;
        iVar7 = iVar7 + 0x14;
      } while (iStack_2c < DAT_007f4d20);
    }
    FUN_0040eb90();
    iVar3 = iStack_44;
LAB_00411975:
    FUN_006a5e90((undefined4 *)pcStack_54);
    if (iVar3 == 0) {
      ExceptionList = pvStack_14;
      return 0;
    }
    if (iVar3 != -4) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7a4ca8,0xb6e);
      ExceptionList = pvStack_14;
      return iVar3;
    }
  }
  ExceptionList = pvStack_14;
  return -4;
}

