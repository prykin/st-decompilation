
undefined4 thunk_FUN_0049aaf0(int param_1)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar13;
  uint uVar14;
  bool bVar15;
  undefined4 uStack_70;
  undefined4 auStack_6c [16];
  byte bStack_2c;
  char cStack_2b;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined4 uStack_24;
  byte bStack_20;
  undefined3 uStack_1f;
  byte bStack_1c;
  undefined3 uStack_1b;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_24 = 2;
  uStack_70 = DAT_00858df8;
  DAT_00858df8 = &uStack_70;
  iVar6 = __setjmp3(auStack_6c,0,unaff_EDI,unaff_ESI);
  iVar12 = iStack_8;
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_70;
    if (iVar6 == -0x5001fff7) {
      return 0;
    }
    iVar12 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x701,0,iVar6,&DAT_007a4ccc);
    if (iVar12 == 0) {
      FUN_006a5e40(iVar6,0,0x7abe3c,0x702);
      return 0xffffffff;
    }
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return uVar10;
  }
  if (param_1 == 1) {
    FUN_006ae110(*(byte **)(iStack_8 + 0x20e));
    *(undefined4 *)(iVar12 + 0x20e) = 0;
    *(undefined4 *)(iVar12 + 0x212) = 0;
    FUN_006ab060((undefined4 *)(iVar12 + 0x21e));
    param_1 = 0;
  }
  iVar6 = iStack_8;
  if (param_1 == 0) {
    puVar13 = (undefined4 *)(iVar12 + 0x89);
    for (iVar11 = 0x15; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined4 *)(iVar12 + 0x65) = 0;
    if (*(int *)(iVar12 + 0xe7) == 0) {
      iStack_18 = *(int *)(*(int *)(iStack_8 + 0xef) + 0xc);
      if (iStack_18 == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x68f);
      }
      if (*(byte **)(iVar6 + 0x20e) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(iVar6 + 0x20e));
        *(undefined4 *)(iVar6 + 0x20e) = 0;
        *(undefined4 *)(iVar6 + 0x212) = 0;
      }
      puVar7 = FUN_006ae290((uint *)0x0,0,4,1);
      sVar5 = 0;
      *(uint **)(iStack_8 + 0x20e) = puVar7;
      iVar12 = iStack_8;
      if (0 < iStack_18) {
        uVar14 = 0;
        do {
          FUN_006acc70(*(int *)(iVar12 + 0xef),uVar14,(undefined4 *)&bStack_2c);
          if ((bStack_2c < 8) &&
             ((((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(char)bStack_2c * 0x51] < 8)) &&
               (piVar8 = (int *)thunk_FUN_0042b620(CONCAT22(uStack_2a,CONCAT11(cStack_2b,bStack_2c))
                                                   ,CONCAT22(uStack_28,uStack_2a),(int)cStack_2b),
               iVar12 = iStack_8, piVar8 != (int *)0x0)) &&
              ((iVar6 = (**(code **)(*piVar8 + 0xf8))(), iVar12 = iStack_8, iVar6 == 1 &&
               (iVar6 = (**(code **)(*piVar8 + 0xf4))((int)*(char *)(iStack_8 + 0x24)),
               iVar12 = iStack_8, iVar6 == 1)))))) {
            FUN_006ae140(*(uint **)(iStack_8 + 0x20e),uVar14,(undefined4 *)&bStack_2c);
            iVar12 = iStack_8;
          }
          sVar5 = sVar5 + 1;
          uVar14 = (uint)sVar5;
        } while ((int)uVar14 < iStack_18);
      }
      FUN_006ae110(*(byte **)(iVar12 + 0xef));
      *(undefined4 *)(iVar12 + 0xef) = 0;
      if (*(int *)(*(int *)(iVar12 + 0x20e) + 0xc) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x69d);
      }
    }
    iVar12 = iStack_8;
    if (*(int *)(iStack_8 + 0xe7) == 1) {
      if (*(byte **)(iStack_8 + 0x20e) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(iStack_8 + 0x20e));
        *(undefined4 *)(iVar12 + 0x20e) = 0;
        *(undefined4 *)(iVar12 + 0x212) = 0;
      }
      puVar7 = FUN_006ae290((uint *)0x0,1,4,1);
      *(uint **)(iVar12 + 0x20e) = puVar7;
      iStack_c = CONCAT22((short)((uint)puVar7 >> 0x10),*(short *)(iVar12 + 0xf3));
      iVar6 = (int)*(short *)(iVar12 + 0xf3);
      iStack_18 = 0;
      if (iVar6 < *(short *)(iVar12 + 0xf9) + iVar6) {
        do {
          sVar5 = *(short *)(iVar12 + 0xf5);
          iStack_14 = CONCAT22((short)((uint)iVar6 >> 0x10),sVar5);
          iVar6 = iStack_c;
          if ((int)sVar5 < (int)*(short *)(iVar12 + 0xfb) + (int)sVar5) {
            do {
              iStack_10 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)(iVar12 + 0xf7));
              iVar6 = (int)*(short *)(iVar12 + 0xf7);
              if (iVar6 < *(short *)(iVar12 + 0xfd) + iVar6) {
                do {
                  sVar5 = (short)iStack_c;
                  if (((sVar5 < 0) || (DAT_007fb240 <= sVar5)) ||
                     ((sVar4 = (short)iStack_14, sVar4 < 0 ||
                      (((DAT_007fb242 <= sVar4 || ((short)iStack_10 < 0)) ||
                       (DAT_007fb244 <= (short)iStack_10)))))) {
                    piVar8 = (int *)0x0;
                  }
                  else {
                    piVar8 = *(int **)(DAT_007fb248 +
                                      ((int)DAT_007fb240 * (int)sVar4 +
                                      (int)sVar5 + DAT_007fb246 * iVar6) * 8);
                  }
                  if ((piVar8 == (int *)0x0) ||
                     (((iVar12 = piVar8[8], iVar12 != 0x14 && (iVar12 != 1000)) && (iVar12 != 0x3e9)
                      ))) {
LAB_0049af27:
                    iVar12 = iStack_8;
                    if ((((sVar5 < 0) || (DAT_007fb240 <= sVar5)) ||
                        (sVar5 = (short)iStack_14, sVar5 < 0)) ||
                       (((DAT_007fb242 <= sVar5 || ((short)iStack_10 < 0)) ||
                        (DAT_007fb244 <= (short)iStack_10)))) {
                      piVar8 = (int *)0x0;
                    }
                    else {
                      piVar8 = *(int **)(DAT_007fb248 + 4 +
                                        ((int)DAT_007fb240 * (int)sVar5 +
                                        (int)(short)iStack_c + DAT_007fb246 * iVar6) * 8);
                    }
                    if (((piVar8 != (int *)0x0) && (piVar8[8] == 0x1ae)) &&
                       ((bStack_2c = *(byte *)(piVar8 + 9), bStack_2c < 8 &&
                        ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(char)bStack_2c * 0x51] < 8)))
                        ))) {
                      bVar1 = *(byte *)(iStack_8 + 0x24);
                      _bStack_20 = CONCAT31(uStack_1f,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (bStack_2c == bVar1) {
LAB_0049b073:
                          iVar6 = 0;
                        }
                        else {
                          uVar9 = CONCAT11(cStack_2b,bStack_2c) & 0xff;
                          uVar14 = (uint)bVar1;
                          cVar2 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar14);
                          if ((cVar2 == '\0') &&
                             (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar9) == '\0')) {
                            iVar6 = -2;
                          }
                          else if ((cVar2 == '\x01') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar9) == '\0')) {
                            iVar6 = -1;
                          }
                          else if ((cVar2 == '\0') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar9) == '\x01')) {
                            iVar6 = 1;
                          }
                          else {
                            if ((cVar2 != '\x01') ||
                               (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar9) != '\x01'))
                            goto LAB_0049b073;
                            iVar6 = 2;
                          }
                        }
                        bVar15 = iVar6 < 0;
                      }
                      else {
                        bVar15 = (&DAT_008087ea)[(uint)bVar1 * 0x51] !=
                                 (&DAT_008087ea)[(CONCAT11(cStack_2b,bStack_2c) & 0xff) * 0x51];
                      }
                      if (bVar15) {
                        uStack_2a = *(undefined2 *)((int)piVar8 + 0x32);
                        cStack_2b = '\x03';
                        iVar6 = (**(code **)(*piVar8 + 0xf8))();
                        if ((iVar6 == 1) &&
                           (iVar6 = (**(code **)(*piVar8 + 0xf4))((int)*(char *)(iVar12 + 0x24)),
                           iVar6 == 1)) {
                          iStack_18 = iVar6;
                          FUN_006ae1c0(*(uint **)(iVar12 + 0x20e),(undefined4 *)&bStack_2c);
                        }
                      }
                    }
                  }
                  else {
                    bStack_2c = *(byte *)(piVar8 + 9);
                    if ((bStack_2c < 8) &&
                       ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(char)bStack_2c * 0x51] < 8))))
                    {
                      bVar1 = *(byte *)(iStack_8 + 0x24);
                      _bStack_1c = CONCAT31(uStack_1b,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (bStack_2c == bVar1) {
LAB_0049aec9:
                          iVar12 = 0;
                        }
                        else {
                          uVar9 = CONCAT11(cStack_2b,bStack_2c) & 0xff;
                          uVar14 = (uint)bVar1;
                          cVar2 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar14);
                          if ((cVar2 == '\0') &&
                             (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar9) == '\0')) {
                            iVar12 = -2;
                          }
                          else if ((cVar2 == '\x01') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar9) == '\0')) {
                            iVar12 = -1;
                          }
                          else if ((cVar2 == '\0') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar9) == '\x01')) {
                            iVar12 = 1;
                          }
                          else {
                            if ((cVar2 != '\x01') ||
                               (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar9) != '\x01'))
                            goto LAB_0049aec9;
                            iVar12 = 2;
                          }
                        }
                        bVar15 = iVar12 < 0;
                      }
                      else {
                        bVar15 = (&DAT_008087ea)[(uint)bVar1 * 0x51] !=
                                 (&DAT_008087ea)[(CONCAT11(cStack_2b,bStack_2c) & 0xff) * 0x51];
                      }
                      if (bVar15) {
                        uStack_2a = *(undefined2 *)((int)piVar8 + 0x32);
                        cStack_2b = '\x01';
                        iVar11 = (**(code **)(*piVar8 + 0xf8))();
                        iVar12 = iStack_8;
                        if ((iVar11 == 1) &&
                           (iVar11 = (**(code **)(*piVar8 + 0xf4))((int)*(char *)(iStack_8 + 0x24)),
                           iVar11 == 1)) {
                          iStack_18 = iVar11;
                          FUN_006ae1c0(*(uint **)(iVar12 + 0x20e),(undefined4 *)&bStack_2c);
                        }
                        sVar5 = (short)iStack_c;
                        goto LAB_0049af27;
                      }
                    }
                  }
                  iStack_10 = iStack_10 + 1;
                  iVar6 = (int)(short)iStack_10;
                  iVar12 = iStack_8;
                } while (iVar6 < (int)*(short *)(iStack_8 + 0xf7) + (int)*(short *)(iStack_8 + 0xfd)
                        );
              }
              iStack_14 = iStack_14 + 1;
              iVar6 = (int)(short)iStack_14;
            } while (iVar6 < (int)*(short *)(iVar12 + 0xfb) + (int)*(short *)(iVar12 + 0xf5));
          }
          iStack_c = iStack_c + 1;
          iVar6 = (int)(short)iStack_c;
        } while (iVar6 < (int)*(short *)(iVar12 + 0xf3) + (int)*(short *)(iVar12 + 0xf9));
      }
      if (iStack_18 == 0) {
        FUN_006ae110(*(byte **)(iVar12 + 0x20e));
        *(undefined4 *)(iVar12 + 0x20e) = 0;
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x6ce);
      }
    }
    *(int *)(iVar12 + 0x20a) = *(int *)(iVar12 + 0xeb);
    iVar6 = iStack_8;
    if (*(int *)(iVar12 + 0xeb) == 1) {
      sVar5 = 0;
      iVar12 = *(int *)(*(int *)(iStack_8 + 0x20e) + 0xc);
      if (0 < iVar12) {
        do {
          FUN_006acc70(*(int *)(iStack_8 + 0x20e),(int)sVar5,(undefined4 *)&bStack_2c);
          if ((cStack_2b != '\x01') ||
             (uVar14 = thunk_FUN_0042b620(CONCAT22(uStack_2a,CONCAT11(1,bStack_2c)),
                                          CONCAT22(uStack_28,uStack_2a),1),
             *(int *)(uVar14 + 0x20) != 0x14)) {
            FUN_006b0c70(*(int *)(iStack_8 + 0x20e),(int)sVar5);
            iVar12 = iVar12 + -1;
            sVar5 = sVar5 + -1;
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 < iVar12);
      }
      iVar6 = iStack_8;
      if (*(int *)(*(int *)(iStack_8 + 0x20e) + 0xc) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x6e3);
      }
    }
    thunk_FUN_00499b80();
    thunk_FUN_00499de0(*(uint **)(iVar6 + 0x29));
    iVar12 = iStack_8;
  }
  if ((param_1 == 2) && (*(int *)(iVar12 + 0x212) == 0)) {
    DAT_00858df8 = (undefined4 *)uStack_70;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_70;
  return uStack_24;
}

