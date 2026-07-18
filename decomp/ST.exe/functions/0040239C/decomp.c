
int thunk_FUN_004c3c00(int param_1,int param_2)

{
  STSprGameObjC SVar1;
  STSprGameObjC SVar2;
  char cVar3;
  code *pcVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STSprGameObjC *pSVar14;
  int iVar15;
  bool bVar16;
  undefined4 uStack_b8;
  undefined4 auStack_b4 [16];
  undefined4 auStack_74 [2];
  int iStack_6c;
  short sStack_68;
  short sStack_66;
  short sStack_64;
  STSprGameObjC *pSStack_60;
  int iStack_5c;
  int iStack_58;
  STSprGameObjC SStack_54;
  undefined3 uStack_53;
  STSprGameObjC SStack_50;
  undefined3 uStack_4f;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  short asStack_40 [2];
  int iStack_3c;
  short asStack_38 [2];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  STSprGameObjC *pSStack_20;
  short asStack_1c [2];
  int iStack_18;
  short sStack_14;
  short sStack_12;
  STSprGameObjC *pSStack_10;
  short sStack_a;
  STSprGameObjC *pSStack_8;
  
  pSStack_8 = (STSprGameObjC *)0x0;
  pSStack_20 = (STSprGameObjC *)0x0;
  uStack_b8 = DAT_00858df8;
  DAT_00858df8 = &uStack_b8;
  iVar7 = __setjmp3(auStack_b4,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_b8;
    iVar15 = FUN_006ad4d0(s_E____titans_Artem_TLO_bfire_cpp_007ac910,0x126,0,iVar7,&DAT_007a4ccc);
    if (iVar15 == 0) {
      FUN_006a5e40(iVar7,0,0x7ac910,0x127);
      return iVar7;
    }
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  pSVar14 = pSStack_60 + param_1 * 0x80;
  *(undefined4 *)(pSVar14 + 0x28d) = 0;
  *(undefined4 *)(pSVar14 + 0x291) = 0;
  if (&stack0x00000000 != (undefined1 *)0x2c) {
    uStack_2c = CONCAT22(uStack_2c._2_2_,*(undefined2 *)(pSStack_60 + 0x41));
  }
  if (&stack0x00000000 != (undefined1 *)0x34) {
    uStack_34 = CONCAT22(uStack_34._2_2_,*(undefined2 *)(pSStack_60 + 0x43));
  }
  if (&stack0x00000000 != (undefined1 *)0x30) {
    uStack_30 = CONCAT22(uStack_30._2_2_,*(undefined2 *)(pSStack_60 + 0x45));
  }
  pSStack_10 = pSVar14;
  if (*(int *)(&DAT_00792a90 + (param_1 + *(int *)(pSStack_60 + 0x235) * 2) * 4) == 1) {
    iStack_58 = thunk_FUN_004e81b0(*(int *)(pSStack_60 + 0x24),*(int *)(pSStack_60 + 0x235),param_1)
    ;
    iVar7 = *(int *)(pSStack_60 + 0x5b4) + -8;
    iStack_18 = iVar7;
    if (iVar7 <= *(int *)(pSStack_60 + 0x5b4) + 8) {
      do {
        if ((-1 < iVar7) && (iVar7 < DAT_007fb242)) {
          iVar8 = *(int *)(pSStack_60 + 0x5b0);
          iVar15 = iVar8 + -8;
          iStack_28 = iVar15;
          iStack_18 = iVar7;
          if (iVar15 <= iVar8 + 8) {
            do {
              if (((-1 < iVar15) && (iVar15 < DAT_007fb240)) &&
                 (iStack_28 = iVar15,
                 iVar8 = FUN_006aced8(iVar15,iVar7,iVar8,*(int *)(pSStack_60 + 0x5b4)),
                 iVar8 <= iStack_58)) {
                iStack_24 = iVar8 / 3;
                if (3 < *(int *)(pSStack_10 + 0x281)) {
                  iStack_24 = 5;
                }
                iStack_3c = (*(int *)(pSStack_60 + 0x5b8) - iStack_24) + -1;
                if (iStack_3c <= *(int *)(pSStack_60 + 0x5b8) + 1 + iStack_24) {
                  do {
                    if ((-1 < iStack_3c) && (iStack_3c < 5)) {
                      sVar6 = (short)iVar15;
                      if (((sVar6 < 0) ||
                          ((DAT_007fb240 <= sVar6 || (sVar13 = (short)iVar7, sVar13 < 0)))) ||
                         ((DAT_007fb242 <= sVar13 ||
                          ((sVar5 = (short)iStack_3c, sVar5 < 0 || (DAT_007fb244 <= sVar5)))))) {
                        pSStack_8 = (STSprGameObjC *)0x0;
                      }
                      else {
                        pSStack_8 = *(STSprGameObjC **)
                                     (DAT_007fb248 +
                                     ((int)sVar13 * (int)DAT_007fb240 +
                                      (int)sVar5 * (int)DAT_007fb246 + (int)sVar6) * 8);
                        iVar7 = iStack_18;
                      }
                      if ((((pSStack_8 != (STSprGameObjC *)0x0) && (pSStack_8 != pSStack_60)) &&
                          (iVar8 = (**(code **)(*(int *)pSStack_8 + 0xf8))(), iVar7 = iStack_18,
                          iVar15 = iStack_28, iVar8 != 0)) &&
                         ((*(int *)(pSStack_8 + 0x24) != 0xff &&
                          (iVar8 = (**(code **)(*(int *)pSStack_8 + 0xf4))
                                             (*(undefined4 *)(pSStack_60 + 0x24)), iVar7 = iStack_18
                          , iVar15 = iStack_28, iVar8 != 0)))) {
                        thunk_FUN_004162b0(pSStack_8,&sStack_12,&sStack_14,&sStack_a);
                        thunk_FUN_00416270(pSStack_8,asStack_40,asStack_38,asStack_1c);
                        iVar7 = (int)(short)uStack_30;
                        iVar8 = FUN_006acf0d((int)asStack_40[0],(int)asStack_38[0],
                                             (int)asStack_1c[0],(int)(short)uStack_2c,
                                             (int)(short)uStack_34,iVar7);
                        uVar9 = asStack_1c[0] - iVar7;
                        uVar12 = (int)uVar9 >> 0x1f;
                        iVar7 = iStack_18;
                        iVar15 = iStack_28;
                        if ((int)(((uVar9 ^ uVar12) - uVar12) * 10) / iVar8 <=
                            *(int *)(pSStack_10 + 0x281)) {
                          *(undefined4 *)(pSStack_10 + 0x295) =
                               *(undefined4 *)((int)DAT_00802a38 + 0xe4);
                          if ((param_2 == 0) || (*(int *)(pSStack_60 + 0x255) == 0))
                          goto LAB_004c4080;
                          sVar6 = (**(code **)(*(int *)pSStack_60 + 0x10))
                                            (*(undefined2 *)(pSStack_8 + 0x41),
                                             *(undefined2 *)(pSStack_8 + 0x43),
                                             *(undefined2 *)(pSStack_8 + 0x45),uStack_2c,uStack_34,
                                             uStack_30);
                          iVar8 = ((sVar6 + 0xb4) % 0x168) / 0xf;
                          uVar9 = (int)*(uint *)(&DAT_007be8c8 +
                                                (*(int *)(pSStack_60 + 0x259) / 0xf + iVar8 * 0x18)
                                                * 4) >> 0x1f;
                          iVar7 = iStack_18;
                          iVar15 = iStack_28;
                          if ((int)((*(uint *)(&DAT_007be8c8 +
                                              (*(int *)(pSStack_60 + 0x259) / 0xf + iVar8 * 0x18) *
                                              4) ^ uVar9) - uVar9) <= *(int *)(pSStack_10 + 0x279))
                          {
                            iVar11 = param_1 + *(int *)(pSStack_60 + 0x235) * 2;
                            if ((&DAT_00792ca0)[iVar11 * 3] == 0xb0) {
                              if (iVar8 % 3 == 0) {
LAB_004c4080:
                                if (((*(uint *)(pSStack_10 + 0x265) & 2) != 0) &&
                                   (*(int *)(pSStack_8 + 0x18) == *(int *)(pSStack_10 + 0x26d))) {
                                  *(int *)(pSStack_10 + 0x2d5) = (int)sStack_12;
                                  *(int *)(pSStack_10 + 0x2d9) = (int)sStack_14;
                                  pSStack_20 = pSStack_8;
                                  *(int *)(pSStack_10 + 0x2dd) = (int)sStack_a;
                                  pSVar14 = pSStack_10;
                                  goto LAB_004c42b5;
                                }
                                iVar7 = iStack_18;
                                iVar15 = iStack_28;
                                if ((*(uint *)(pSStack_10 + 0x265) & 1) != 0) {
                                  if (*(int *)(pSStack_60 + 0x420) == 0) {
                                    if ((*(uint *)(pSStack_8 + 0x24) < 8) &&
                                       ((DAT_00802a38 == (void *)0x0 ||
                                        ((byte)(&DAT_008087e9)[*(uint *)(pSStack_8 + 0x24) * 0x51] <
                                         8)))) {
                                      SVar1 = pSStack_8[0x24];
                                      SVar2 = pSStack_60[0x24];
                                      _SStack_50 = CONCAT31(uStack_4f,SVar1);
                                      _SStack_54 = CONCAT31(uStack_53,SVar2);
                                      if (DAT_00808a8f == '\0') {
                                        if (SVar1 == SVar2) {
LAB_004c4192:
                                          iVar8 = 0;
                                        }
                                        else {
                                          uVar9 = (uint)(byte)SVar1;
                                          uVar12 = (uint)(byte)SVar2;
                                          cVar3 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar12)
                                          ;
                                          if ((cVar3 == '\0') &&
                                             (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar9) ==
                                              '\0')) {
                                            iVar8 = -2;
                                          }
                                          else if ((cVar3 == '\x01') &&
                                                  (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar9
                                                            ) == '\0')) {
                                            iVar8 = -1;
                                          }
                                          else if ((cVar3 == '\0') &&
                                                  (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar9
                                                            ) == '\x01')) {
                                            iVar8 = 1;
                                          }
                                          else {
                                            if ((cVar3 != '\x01') ||
                                               (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar9)
                                                != '\x01')) goto LAB_004c4192;
                                            iVar8 = 2;
                                          }
                                        }
                                        bVar16 = iVar8 < 0;
                                      }
                                      else {
                                        bVar16 = (&DAT_008087ea)[(uint)(byte)SVar2 * 0x51] !=
                                                 (&DAT_008087ea)[(uint)(byte)SVar1 * 0x51];
                                      }
                                      if (bVar16) goto LAB_004c41a5;
                                    }
                                  }
                                  else {
LAB_004c41a5:
                                    iVar8 = (**(code **)(*(int *)pSStack_8 + 0xf0))();
                                    iVar7 = iStack_18;
                                    iVar15 = iStack_28;
                                    if (iVar8 != 0) {
                                      iVar8 = FUN_006aadd0(*(int *)(pSStack_60 + 0x5b0),
                                                           *(int *)(pSStack_60 + 0x5b4),
                                                           *(int *)(pSStack_60 + 0x5b8),iStack_28,
                                                           iStack_18,iStack_3c);
                                      pSVar14 = pSStack_10;
                                      if (*(int *)(pSStack_10 + 0x269) == 0) {
                                        iVar11 = *(int *)(pSStack_8 + 0x215);
                                      }
                                      else {
                                        iVar11 = (**(code **)(*(int *)pSStack_8 + 0x7c))();
                                      }
                                      iVar7 = iStack_18;
                                      iVar15 = iStack_28;
                                      if (((pSStack_20 == (STSprGameObjC *)0x0) ||
                                          (iStack_6c < iVar11)) ||
                                         ((iVar11 == iStack_6c &&
                                          (pSVar14 = pSStack_10, iVar8 < iStack_5c)))) {
                                        pSStack_20 = pSStack_8;
                                        *(int *)(pSVar14 + 0x2d5) = (int)sStack_12;
                                        *(int *)(pSVar14 + 0x2d9) = (int)sStack_14;
                                        *(int *)(pSVar14 + 0x2dd) = (int)sStack_a;
                                        iStack_6c = iVar11;
                                        iStack_5c = iVar8;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              iStack_48 = 0;
                              iStack_4c = 0;
                              iVar11 = iVar11 * 0x16;
                              if (0 < *(int *)(&DAT_007932d0 + iVar11)) {
                                iVar7 = 0;
                                do {
                                  puVar10 = (undefined4 *)
                                            thunk_FUN_0041dc40(auStack_74,
                                                               *(undefined4 *)
                                                                (&DAT_007932d4 + iVar7 + iVar11),
                                                               *(undefined2 *)
                                                                ((int)(&DAT_007932d4 +
                                                                      iVar7 + iVar11) + 4),
                                                               -*(short *)(pSStack_60 + 0x259));
                                  sStack_68 = (short)*puVar10;
                                  sStack_66 = (short)((uint)*puVar10 >> 0x10);
                                  sStack_64 = *(short *)(puVar10 + 1);
                                  iVar15 = STSprGameObjC::CheckRay
                                                     (pSStack_60,sStack_68 + (short)uStack_2c,
                                                      sStack_66 + (short)uStack_34,
                                                      sStack_64 + (short)uStack_30,asStack_40[0],
                                                      asStack_38[0],asStack_1c[0],
                                                      (&DAT_00792ca0)
                                                      [(param_1 + *(int *)(pSStack_60 + 0x235) * 2)
                                                       * 3],&iStack_44,*(int *)(pSStack_60 + 0x420))
                                  ;
                                  if ((iVar15 != 0) ||
                                     (((((byte)pSStack_10[0x265] & 2) != 0 && (iStack_44 != 0)) &&
                                      (*(int *)(iStack_44 + 0x18) == *(int *)(pSStack_10 + 0x26d))))
                                     ) {
                                    iStack_48 = 1;
                                  }
                                  iStack_4c = iStack_4c + 1;
                                  iVar7 = iVar7 + 6;
                                  iVar11 = (param_1 + *(int *)(pSStack_60 + 0x235) * 2) * 0x16;
                                } while (iStack_4c < *(int *)(&DAT_007932d0 + iVar11));
                              }
                              iVar7 = iStack_18;
                              iVar15 = iStack_28;
                              if (iStack_48 != 0) goto LAB_004c4080;
                            }
                          }
                        }
                      }
                    }
                    iStack_3c = iStack_3c + 1;
                  } while (iStack_3c <= *(int *)(pSStack_60 + 0x5b8) + 1 + iStack_24);
                }
              }
              iVar8 = *(int *)(pSStack_60 + 0x5b0);
              iVar15 = iVar15 + 1;
              iStack_28 = iVar15;
            } while (iVar15 <= iVar8 + 8);
          }
        }
        iVar7 = iVar7 + 1;
        pSVar14 = pSStack_10;
        iStack_18 = iVar7;
      } while (iVar7 <= *(int *)(pSStack_60 + 0x5b4) + 8);
    }
  }
LAB_004c42b5:
  if (pSStack_20 != (STSprGameObjC *)0x0) {
    *(int *)(pSVar14 + 0x28d) = *(int *)(pSStack_20 + 0x18);
    *(STSprGameObjC **)(pSVar14 + 0x291) = pSStack_20;
    if (((((byte)pSVar14[0x265] & 2) != 0) &&
        (*(int *)(pSVar14 + 0x28d) != *(int *)(pSVar14 + 0x26d))) &&
       (iVar7 = FUN_006e62d0(DAT_00802a38,*(int *)(pSVar14 + 0x26d),(int *)&pSStack_8), iVar7 != 0))
    {
      *(uint *)(pSVar14 + 0x265) = *(uint *)(pSVar14 + 0x265) & 0xfffffffd;
      *(undefined4 *)(pSVar14 + 0x26d) = 0;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_b8;
  return 0;
}

