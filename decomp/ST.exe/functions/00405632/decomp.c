
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
thunk_FUN_004b0250(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,
                  int param_7)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  int aiStack_88 [10];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  short sStack_2e;
  uint *puStack_2c;
  char *pcStack_28;
  short sStack_22;
  int iStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  int *piStack_c;
  undefined4 *puStack_8;
  
  iStack_3c = -1;
  iStack_54 = -1;
  iStack_50 = -1;
  aiStack_88[8] = 0;
  uStack_48 = 0;
  sVar13 = DAT_007fb242;
  if (DAT_007fb242 <= (short)_DAT_007fb240) {
    sVar13 = (short)_DAT_007fb240;
  }
  aiStack_88[9] = (int)sVar13 / (int)(uint)DAT_008087c4._2_1_;
  iStack_40 = thunk_FUN_004e81b0(param_1,param_2 + -0x32,0);
  puStack_10 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(DAT_007fb246 * 5);
  puStack_2c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
  iStack_18 = 0;
  do {
    puStack_34 = (undefined4 *)(DAT_007fb246 * iStack_18);
    iStack_14 = 0;
    uVar9 = _DAT_007fb240;
    if (0 < DAT_007fb242) {
      do {
        iVar14 = 0;
        if (0 < (short)uVar9) {
          puVar10 = (undefined4 *)((short)uVar9 * iStack_14 + (int)puStack_34);
          puStack_1c = (undefined4 *)((int)puVar10 * 8);
          puStack_8 = puVar10;
          do {
            piStack_c = *(int **)((int)puStack_1c + DAT_007fb248);
            if (piStack_c == (int *)0x0) {
              sVar13 = (short)iVar14;
              if (((((sVar13 < 0) || ((short)uVar9 <= sVar13)) ||
                   (sVar7 = (short)iStack_14, sVar7 < 0)) ||
                  ((DAT_007fb242 <= sVar7 || (sVar4 = (short)iStack_18, sVar4 < 0)))) ||
                 (DAT_007fb244 <= sVar4)) {
LAB_004b03a2:
                *(undefined1 *)((int)puVar10 + iVar14 + (int)puStack_10) = 3;
              }
              else {
                sVar13 = *(short *)(DAT_007fb280 +
                                   ((int)sVar4 * (int)DAT_007fb27e + (int)sVar7 * (int)DAT_007fb278
                                   + (int)sVar13) * 2);
                if (sVar13 == 0) {
                  *(undefined1 *)((int)puVar10 + iVar14 + (int)puStack_10) = 0;
                }
                else {
                  if (sVar13 == -1) goto LAB_004b03a2;
                  *(undefined1 *)((int)puVar10 + iVar14 + (int)puStack_10) = 1;
                }
              }
            }
            else {
              if (((uint)piStack_c[9] < 8) &&
                 ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piStack_c[9] * 0x51] < 8)))) {
                bVar1 = *(byte *)(piStack_c + 9);
                pcStack_28 = (char *)CONCAT31(pcStack_28._1_3_,bVar1);
                if (*(char *)(DAT_00806728 + 0x146f) == '\0') {
                  if (bVar1 == (byte)param_1) {
LAB_004b04c9:
                    iVar8 = 0;
                  }
                  else {
                    uVar3 = (uint)bVar1;
                    uVar12 = param_1 & 0xff;
                    cVar2 = *(char *)(uVar12 + uVar3 * 8 + 0x142f + DAT_00806728);
                    if ((cVar2 == '\0') &&
                       (puVar10 = puStack_8,
                       *(char *)(uVar3 + uVar12 * 8 + 0x142f + DAT_00806728) == '\0')) {
                      iVar8 = -2;
                    }
                    else if ((cVar2 == '\x01') &&
                            (puVar10 = puStack_8,
                            *(char *)(uVar3 + uVar12 * 8 + 0x142f + DAT_00806728) == '\0')) {
                      iVar8 = -1;
                    }
                    else if ((cVar2 == '\0') &&
                            (puVar10 = puStack_8,
                            *(char *)(uVar3 + uVar12 * 8 + 0x142f + DAT_00806728) == '\x01')) {
                      iVar8 = 1;
                    }
                    else {
                      if ((cVar2 != '\x01') ||
                         (*(char *)(uVar3 + uVar12 * 8 + 0x142f + DAT_00806728) != '\x01'))
                      goto LAB_004b04c9;
                      iVar8 = 2;
                    }
                  }
                  bVar16 = iVar8 < 0;
                }
                else {
                  bVar16 = *(char *)((param_1 & 0xff) * 0x51 + 0x11ca + DAT_00806728) !=
                           *(char *)((uint)bVar1 * 0x51 + 0x11ca + DAT_00806728);
                }
                if (bVar16) {
                  *(undefined1 *)((int)puVar10 + iVar14 + (int)puStack_10) = 4;
                  iVar8 = (**(code **)(*piStack_c + 0x2c))();
                  if (((&PTR_LAB_0079072c)[iVar8] == (undefined *)0x2) ||
                     ((iVar8 = (**(code **)(*piStack_c + 0x2c))(), iVar8 == 0x78 &&
                      ((&PTR_LAB_0079072c)[*(int *)((int)piStack_c + 0x259)] == (undefined *)0x2))))
                  {
                    Library::DKW::TBL::FUN_006ae1c0(puStack_2c,&piStack_c);
                  }
                  goto LAB_004b057d;
                }
              }
              iVar8 = (**(code **)(*piStack_c + 0x2c))();
              if (((&PTR_LAB_0079072c)[iVar8] == (undefined *)0x2) ||
                 ((iVar8 = (**(code **)(*piStack_c + 0x2c))(), iVar8 == 0x78 &&
                  ((&PTR_LAB_0079072c)[*(int *)((int)piStack_c + 0x259)] == (undefined *)0x2)))) {
                *(undefined1 *)((int)puVar10 + iVar14 + (int)puStack_10) = 6;
                Library::DKW::TBL::FUN_006ae1c0(puStack_2c,&piStack_c);
              }
              else {
                *(undefined1 *)((int)puVar10 + iVar14 + (int)puStack_10) = 5;
              }
            }
LAB_004b057d:
            iVar14 = iVar14 + 1;
            puStack_1c = puStack_1c + 2;
            uVar9 = _DAT_007fb240;
          } while (iVar14 < (short)_DAT_007fb240);
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < DAT_007fb242);
    }
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 4);
  if (DAT_007fa150 != 0) {
    *(undefined4 *)(DAT_007fa150 + 4) = 0;
    iVar14 = FUN_006b1190(DAT_007fa150,&piStack_c);
    while (-1 < iVar14) {
      if (piStack_c != (int *)0x0) {
        thunk_FUN_004162b0(piStack_c,&sStack_22,(undefined2 *)((int)&param_2 + 2),&sStack_2e);
        *(undefined1 *)
         ((int)puStack_10 +
         (int)sStack_22 +
         (int)sStack_2e * (int)DAT_007fb246 + (int)param_2._2_2_ * (int)DAT_007fb240) = 2;
      }
      iVar14 = FUN_006b1190(DAT_007fa150,&piStack_c);
    }
  }
  iStack_18 = 0;
  uVar9 = _DAT_007fb240;
  sVar13 = DAT_007fb242;
  do {
    iStack_14 = 0;
    if (0 < sVar13) {
      do {
        puStack_8 = (undefined4 *)(int)(short)uVar9;
        iVar14 = 0;
        if (0 < (int)puStack_8) {
          do {
            iVar8 = (int)DAT_007fb246;
            iVar11 = (int)puStack_8 * iStack_14;
            if (((*(char *)(iVar11 + iVar8 * iStack_18 + iVar14 + (int)puStack_10) == '\0') &&
                ((iStack_18 < 1 ||
                 (*(char *)((iStack_18 + -1) * iVar8 + iVar11 + iVar14 + (int)puStack_10) == '\x03')
                 ))) && ((3 < iStack_18 ||
                         (((cVar2 = *(char *)((iStack_18 + 1) * iVar8 + iVar11 + iVar14 +
                                             (int)puStack_10), cVar2 != '\x01' && (cVar2 != '\x03'))
                          && (cVar2 != '\x02')))))) {
              puStack_34 = (undefined4 *)(iVar8 * iStack_18 + (int)puStack_10);
              piVar15 = aiStack_88;
              for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                *piVar15 = 0;
                piVar15 = piVar15 + 1;
              }
              param_1 = 0;
              if (0 < iStack_40) {
                iStack_20 = iStack_14 + -1;
                iStack_58 = (iStack_14 + 1) * (int)puStack_8;
                iStack_60 = (int)puStack_8 * iStack_20;
                iStack_4c = -(int)puStack_8;
                puStack_38 = (undefined4 *)(iStack_58 + (int)puStack_34);
                puStack_1c = (undefined4 *)(iStack_60 + (int)puStack_34);
                iVar8 = 1;
                pcStack_28 = (char *)((int)puStack_34 + iVar14 + iVar11 + -1);
                iStack_44 = iVar14 - iStack_14;
                iStack_5c = iStack_14 - iVar14;
                do {
                  if ((aiStack_88[0] == 0) && (iVar8 + iVar14 < (int)puStack_8)) {
                    cVar2 = *(char *)((int)puStack_34 + iVar8 + iVar14 + iVar11);
                    if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                      aiStack_88[0] = 1;
                    }
                    else {
                      param_1 = param_1 + 1;
                    }
                  }
                  if ((aiStack_88[1] == 0) && (-1 < iStack_44 + iStack_20)) {
                    if ((*pcStack_28 == '\x01') || (*pcStack_28 == '\x03')) {
                      aiStack_88[1] = 1;
                    }
                    else {
                      param_1 = param_1 + 1;
                    }
                  }
                  if ((aiStack_88[2] == 0) && (iStack_5c + iVar8 + iVar14 < (int)DAT_007fb242)) {
                    if ((*(char *)((int)puStack_38 + iVar14) == '\x01') ||
                       (*(char *)((int)puStack_38 + iVar14) == '\x03')) {
                      aiStack_88[2] = 1;
                    }
                    else {
                      param_1 = param_1 + 1;
                    }
                  }
                  if ((aiStack_88[3] == 0) && (-1 < iStack_20)) {
                    if ((*(char *)((int)puStack_1c + iVar14) == '\x01') ||
                       (*(char *)((int)puStack_1c + iVar14) == '\x03')) {
                      aiStack_88[3] = 1;
                    }
                    else {
                      param_1 = param_1 + 1;
                    }
                  }
                  if (iVar8 * iVar8 < (iStack_40 * iStack_40) / 2) {
                    if (((aiStack_88[4] == 0) && (iVar8 + iVar14 + iStack_5c < (int)DAT_007fb242))
                       && (iVar8 + iVar14 < (int)puStack_8)) {
                      cVar2 = *(char *)((int)puStack_38 + iVar14 + iVar8);
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        aiStack_88[4] = 1;
                      }
                      else {
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((aiStack_88[5] == 0) && (-1 < iStack_20)) && (-1 < iStack_44 + iStack_20))
                    {
                      cVar2 = *(char *)((int)puStack_34 + iVar14 + (iStack_60 - iVar8));
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        aiStack_88[5] = 1;
                      }
                      else {
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((aiStack_88[6] == 0) && (iStack_5c + iVar8 + iVar14 < (int)DAT_007fb242))
                       && (-1 < iStack_44 + iStack_20)) {
                      cVar2 = *(char *)((int)puStack_34 + iVar14 + (iStack_58 - iVar8));
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        aiStack_88[6] = 1;
                      }
                      else {
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((aiStack_88[7] == 0) && (-1 < iStack_20)) &&
                       (iVar8 + iVar14 < (int)puStack_8)) {
                      cVar2 = *(char *)((int)puStack_1c + iVar14 + iVar8);
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        aiStack_88[7] = 1;
                      }
                      else {
                        param_1 = param_1 + 1;
                      }
                    }
                  }
                  iStack_58 = iStack_58 + (int)puStack_8;
                  puStack_38 = (undefined4 *)((int)puStack_38 + (int)puStack_8);
                  iStack_60 = iStack_60 + iStack_4c;
                  iVar8 = iVar8 + 1;
                  puStack_1c = (undefined4 *)((int)puStack_1c + iStack_4c);
                  pcStack_28 = pcStack_28 + -1;
                  iStack_20 = iStack_20 + -1;
                } while (iVar8 <= iStack_40);
              }
              iVar8 = iStack_54;
              iVar11 = iStack_54;
              if (puStack_2c[3] != 0) {
                iVar8 = -1;
                iStack_54 = -1;
                puStack_2c[1] = 0;
                iVar5 = FUN_006b1190((int)puStack_2c,&piStack_c);
                iVar11 = iStack_54;
                if (-1 < iVar5) {
                  iVar5 = iStack_40 / 2;
                  do {
                    thunk_FUN_004162b0(piStack_c,&sStack_22,(undefined2 *)((int)&param_2 + 2),
                                       &sStack_2e);
                    iVar11 = FUN_006aced8((int)sStack_22,(int)param_2._2_2_,iVar14,iStack_14);
                    if ((iVar11 <= iVar5) && ((iVar8 < 0 || (iVar11 < iVar8)))) {
                      iVar8 = iVar11;
                    }
                    iVar6 = FUN_006b1190((int)puStack_2c,&piStack_c);
                    iVar11 = iVar8;
                  } while (-1 < iVar6);
                }
              }
              iStack_54 = iVar11;
              iVar11 = FUN_006aced8(iVar14,iStack_14,param_6,param_7);
              if (iStack_3c < 0) goto LAB_004b0a54;
              iStack_4c = iVar11 / aiStack_88[9];
              if (iStack_4c <= iStack_3c / aiStack_88[9]) {
                if (iVar8 < 0) {
                  if (iStack_50 < 0) {
LAB_004b0a3e:
                    if (((int)param_1 <= (int)uStack_48) &&
                       ((param_1 != uStack_48 || (iStack_3c < iVar11)))) goto LAB_004b0a79;
                  }
LAB_004b0a54:
                  uStack_48 = param_1;
                  *param_3 = iVar14;
                  *param_4 = iStack_14;
                  aiStack_88[8] = 1;
                  *param_5 = iStack_18;
                  iStack_50 = iVar8;
                  iStack_3c = iVar11;
                }
                else if (-1 < iStack_50) {
                  if (iVar8 < 0) goto LAB_004b0a3e;
                  if ((iStack_50 < iVar8) ||
                     ((iVar8 == iStack_50 &&
                      (((int)uStack_48 < (int)param_1 ||
                       ((param_1 == uStack_48 && (iVar11 <= iStack_3c)))))))) goto LAB_004b0a54;
                }
              }
            }
LAB_004b0a79:
            iVar14 = iVar14 + 1;
            puStack_8 = (undefined4 *)(int)(short)_DAT_007fb240;
            uVar9 = _DAT_007fb240;
          } while (iVar14 < (int)puStack_8);
        }
        iStack_14 = iStack_14 + 1;
        sVar13 = DAT_007fb242;
      } while (iStack_14 < DAT_007fb242);
    }
    iStack_18 = iStack_18 + 1;
    if (3 < iStack_18) {
      FUN_006ae110((byte *)puStack_2c);
      FUN_006a5e90(puStack_10);
      return aiStack_88[8];
    }
  } while( true );
}

