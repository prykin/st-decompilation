
int thunk_FUN_00411e50(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                      int param_7)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iStack_b4;
  int iStack_b0;
  uint uStack_ac;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  char *pcStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  byte *pbStack_28;
  uint uStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00790080;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff3c;
  iStack_48 = 0;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    iStack_3c = DAT_007f4d30 * DAT_007f4d2c;
    uStack_38 = (uint)(0 < DAT_007f4d24);
    pbStack_28 = (byte *)0x0;
    if (0 < param_4) {
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    iStack_30 = 0;
    iStack_2c = DAT_007f4d20;
    iStack_64 = param_3;
    param_6 = param_6 - ((-(uint)(param_7 != 0) & 0xb4) - 0x5a);
    if ((int)param_6 < 0) {
      param_6 = param_6 + ((0x167 - param_6) / 0x168) * 0x168;
    }
    if (0x167 < (int)param_6) {
      param_6 = param_6 % 0x168;
    }
    iStack_68 = *(int *)(&DAT_007a4bf8 + param_5 * 4);
    ExceptionList = &pvStack_14;
    pcStack_58 = (char *)Library::DKW::LIB::FUN_006aac70(iStack_68 << 5);
    iStack_34 = FUN_00411cf0(pcStack_58,iStack_68);
    iStack_40 = (int)(iStack_34 * param_6 + 0xb4) / 0x168;
    if (iStack_40 == iStack_34) {
      iStack_40 = 0;
    }
    uStack_24 = iStack_34 / 2 + 1;
    iStack_50 = (int)(uStack_24 + ((int)uStack_24 >> 0x1f & 7U)) >> 3;
    if (iStack_50 == 0) {
      iStack_50 = 1;
    }
    iStack_60 = 0;
    iStack_20 = 0;
    iVar2 = DAT_007f4d2c;
    iVar6 = iStack_64;
    while( true ) {
      iStack_6c = 0;
      if ((iStack_2c < (int)uStack_24) && (uStack_38 != 0)) {
        if (iStack_60 < (int)uStack_24) {
          iStack_60 = uStack_24 * 2;
          uStack_8 = 0;
          Library::MSVCRT::FUN_0072da40();
          uStack_8 = 0xffffffff;
          pbStack_28 = &stack0xffffff3c;
          puStack_1c = &stack0xffffff3c;
        }
        pbVar7 = pbStack_28;
        for (uVar3 = uStack_24 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          pbVar7[0] = 0;
          pbVar7[1] = 0;
          pbVar7[2] = 0;
          pbVar7[3] = 0;
          pbVar7 = pbVar7 + 4;
        }
        for (uVar3 = uStack_24 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar7 = 0;
          pbVar7 = pbVar7 + 1;
        }
        iVar8 = 0;
        iVar2 = DAT_007f4d2c;
        iVar6 = iStack_64;
        iVar5 = iStack_40;
        if (0 < (int)uStack_24) {
          do {
            iStack_54 = pcStack_58[iVar5 * 4] + param_1;
            iStack_5c = pcStack_58[iVar5 * 4 + 1] + param_2;
            if ((((-1 < iStack_54) && (iStack_54 < iVar2)) && (-1 < iStack_5c)) &&
               ((iStack_5c < DAT_007f4d30 &&
                (uVar3 = iStack_64 * iStack_3c + iStack_54 + iVar2 * iStack_5c ^ 7,
                iVar2 = DAT_007f4d2c,
                (*(byte *)(DAT_007f4cfc + ((int)uVar3 >> 3)) >> (uVar3 & 7) & 1) != 0)))) {
              iStack_6c = iStack_6c + 1;
              pbStack_28[iVar8] = 1;
              iVar2 = DAT_007f4d2c;
            }
            iVar5 = iVar5 + 1;
            if (iStack_34 <= iVar5) {
              iVar5 = 0;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)uStack_24);
        }
      }
      iStack_b0 = iStack_2c;
      if (iStack_6c < (int)uStack_24) {
        iStack_44 = iStack_40;
        if (iStack_6c + iStack_2c < (int)uStack_24) {
          if (iStack_6c < 1) {
            iVar5 = iStack_40 * 0x10000 + -0x10000;
            if (0 < iStack_2c) {
              iVar8 = iStack_30 * 0x14;
              iStack_b4 = iStack_2c;
              iStack_30 = iStack_30 + iStack_2c;
              do {
                iVar5 = iVar5 + (int)((uStack_24 + 1) * 0x10000) / (iStack_2c + 1);
                iVar2 = iVar5 >> 0x10;
                if (iStack_34 <= iVar2) {
                  iVar5 = iVar5 + iStack_34 * -0x10000;
                  iVar2 = iVar5 >> 0x10;
                }
                iStack_54 = pcStack_58[iVar2 * 4] + param_1;
                iStack_5c = pcStack_58[iVar2 * 4 + 1] + param_2;
                *(int *)(iVar8 + DAT_007f4d3c) = iStack_54;
                *(int *)(iVar8 + 4 + DAT_007f4d3c) = iStack_5c;
                *(int *)(iVar8 + 8 + DAT_007f4d3c) = iStack_64;
                iVar8 = iVar8 + 0x14;
                if (((-1 < iStack_54) && (iStack_54 < DAT_007f4d2c)) &&
                   ((-1 < iStack_5c && (iStack_5c < DAT_007f4d30)))) {
                  uVar3 = iStack_64 * iStack_3c + iStack_54 + DAT_007f4d2c * iStack_5c ^ 7;
                  pbVar7 = (byte *)(DAT_007f4cfc + ((int)uVar3 >> 3));
                  *pbVar7 = *pbVar7 | '\x01' << (uVar3 & 7);
                }
                iStack_b4 = iStack_b4 + -1;
                iVar2 = DAT_007f4d2c;
                iVar6 = iStack_64;
              } while (iStack_b4 != 0);
            }
          }
          else {
            FUN_0040f4d0((undefined4 *)pbStack_28,uStack_24,iStack_50,0);
            pcVar1 = pcStack_58;
            iVar2 = DAT_007f4d2c;
            iVar6 = iStack_64;
            if (0 < iStack_b0) {
              iVar5 = iStack_30 * 0x14;
              iStack_30 = iStack_30 + iStack_b0;
              do {
                iVar2 = FUN_0040f840(pbStack_28,uStack_24,iStack_50,0);
                iVar2 = (iVar2 + iStack_40) % iStack_34;
                iStack_54 = pcVar1[iVar2 * 4] + param_1;
                iStack_5c = pcVar1[iVar2 * 4 + 1] + param_2;
                *(int *)(iVar5 + DAT_007f4d3c) = iStack_54;
                *(int *)(iVar5 + 4 + DAT_007f4d3c) = iStack_5c;
                *(int *)(iVar5 + 8 + DAT_007f4d3c) = iStack_64;
                iVar5 = iVar5 + 0x14;
                if ((((-1 < iStack_54) && (iStack_54 < DAT_007f4d2c)) && (-1 < iStack_5c)) &&
                   (iStack_5c < DAT_007f4d30)) {
                  uVar3 = iStack_64 * iStack_3c + iStack_54 + DAT_007f4d2c * iStack_5c ^ 7;
                  pbVar7 = (byte *)(DAT_007f4cfc + ((int)uVar3 >> 3));
                  *pbVar7 = *pbVar7 | '\x01' << (uVar3 & 7);
                }
                iStack_b0 = iStack_b0 + -1;
                iVar2 = DAT_007f4d2c;
                iVar6 = iStack_64;
              } while (iStack_b0 != 0);
            }
          }
          iStack_2c = 0;
        }
        else if (0 < (int)uStack_24) {
          iVar5 = iStack_30 * 0x14;
          uStack_ac = uStack_24;
          do {
            iStack_54 = pcStack_58[iStack_44 * 4] + param_1;
            iStack_5c = pcStack_58[iStack_44 * 4 + 1] + param_2;
            if (((iStack_54 < 0) || (iVar2 <= iStack_54)) ||
               ((iStack_5c < 0 || (DAT_007f4d30 <= iStack_5c)))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((!bVar4) ||
               (uVar3 = iVar6 * iStack_3c + iStack_54 + iVar2 * iStack_5c ^ 7,
               (*(byte *)(DAT_007f4cfc + ((int)uVar3 >> 3)) >> (uVar3 & 7) & 1) == 0)) {
              *(int *)(iVar5 + DAT_007f4d3c) = iStack_54;
              *(int *)(iVar5 + 4 + DAT_007f4d3c) = iStack_5c;
              *(int *)(iVar5 + 8 + DAT_007f4d3c) = iStack_64;
              iStack_30 = iStack_30 + 1;
              iVar5 = iVar5 + 0x14;
              iStack_2c = iStack_2c + -1;
              if (bVar4) {
                uVar3 = iStack_64 * iStack_3c + iStack_54 + DAT_007f4d2c * iStack_5c ^ 7;
                pbVar7 = (byte *)(DAT_007f4cfc + ((int)uVar3 >> 3));
                *pbVar7 = *pbVar7 | '\x01' << (uVar3 & 7);
              }
            }
            iStack_44 = iStack_44 + 1;
            if (iStack_34 <= iStack_44) {
              iStack_44 = 0;
            }
            uStack_ac = uStack_ac - 1;
            iVar2 = DAT_007f4d2c;
            iVar6 = iStack_64;
          } while (uStack_ac != 0);
        }
      }
      if (iStack_2c < 1) break;
      uVar3 = iStack_68 << 5;
      do {
        iStack_20 = iStack_20 + 1;
        if (8 < iStack_20) {
          iStack_20 = 0;
          iStack_64 = param_3;
          iStack_68 = iStack_68 + 1;
          uVar3 = uVar3 + 0x20;
          pcStack_58 = (char *)Library::DKW::LIB::FUN_006acf50((undefined4 *)pcStack_58,uVar3);
          iStack_34 = FUN_00411cf0(pcStack_58,iStack_68);
          iStack_40 = (int)(iStack_34 * param_6 + 0xb4) / 0x168;
          if (iStack_40 == iStack_34) {
            iStack_40 = 0;
          }
          uStack_24 = iStack_34 / 2 + 1;
          uStack_38 = 1;
          iVar2 = DAT_007f4d2c;
          iVar6 = iStack_64;
        }
        switch(iStack_20) {
        case 1:
          iVar6 = iVar6 + 1;
          iStack_64 = iVar6;
          break;
        case 2:
          iVar6 = iVar6 + -2;
          iStack_64 = iVar6;
          break;
        case 3:
          iVar6 = iVar6 + 3;
          iStack_64 = iVar6;
          break;
        case 4:
          iVar6 = iVar6 + -4;
          iStack_64 = iVar6;
          break;
        case 5:
          iVar6 = iVar6 + 5;
          iStack_64 = iVar6;
          break;
        case 6:
          iVar6 = iVar6 + -6;
          iStack_64 = iVar6;
          break;
        case 7:
          iVar6 = iVar6 + 7;
          iStack_64 = iVar6;
          break;
        case 8:
          iVar6 = iVar6 + -8;
          iStack_64 = iVar6;
        }
      } while ((iVar6 < 0) || (DAT_007f4d34 <= iVar6));
    }
    iStack_30 = 0;
    if (0 < DAT_007f4d20) {
      iVar5 = 0;
      iVar6 = iStack_3c;
      do {
        iStack_54 = *(int *)(iVar5 + DAT_007f4d3c);
        iStack_5c = *(int *)(iVar5 + 4 + DAT_007f4d3c);
        iStack_64 = *(int *)(iVar5 + 8 + DAT_007f4d3c);
        if ((((iStack_54 < 0) || (iVar2 <= iStack_54)) || (iStack_5c < 0)) ||
           ((DAT_007f4d30 <= iStack_5c ||
            (iVar6 = iStack_3c,
            *(short *)(DAT_007f4cf0 + (iStack_64 * iStack_3c + iStack_54 + iVar2 * iStack_5c) * 2)
            != 0)))) {
          iVar2 = FUN_0040f270(&iStack_54,&iStack_5c,&iStack_64,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar2 != 0) {
            iVar2 = -4;
            goto LAB_004125c1;
          }
          uVar3 = iStack_64 * iVar6 + iStack_54 + DAT_007f4d2c * iStack_5c ^ 7;
          pbVar7 = (byte *)(DAT_007f4cfc + ((int)uVar3 >> 3));
          *pbVar7 = *pbVar7 | '\x01' << (uVar3 & 7);
          *(int *)(iVar5 + DAT_007f4d3c) = iStack_54;
          *(int *)(iVar5 + 4 + DAT_007f4d3c) = iStack_5c;
          *(int *)(iVar5 + 8 + DAT_007f4d3c) = iStack_64;
          iVar2 = DAT_007f4d2c;
        }
        iStack_30 = iStack_30 + 1;
        iVar5 = iVar5 + 0x14;
      } while (iStack_30 < DAT_007f4d20);
    }
    FUN_0040eb90();
    iVar2 = iStack_48;
LAB_004125c1:
    FUN_006a5e90((undefined4 *)pcStack_58);
    if (iVar2 == 0) {
      ExceptionList = pvStack_14;
      return 0;
    }
    if (iVar2 != -4) {
      RaiseInternalException(iVar2,DAT_007ed77c,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0xc3a);
      ExceptionList = pvStack_14;
      return iVar2;
    }
  }
  ExceptionList = pvStack_14;
  return -4;
}

