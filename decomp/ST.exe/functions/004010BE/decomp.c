
undefined4 __thiscall STGroupBoatC::GrpAttack(STGroupBoatC *this,int param_1)

{
  STGroupBoatC SVar1;
  char cVar2;
  code *pcVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 unaff_ESI;
  STGroupBoatC *pSVar12;
  void *unaff_EDI;
  STGroupBoatC *pSVar13;
  uint uVar14;
  STGroupBoatC *pSVar15;
  bool bVar16;
  InternalExceptionFrame IStack_70;
  STGroupBoatC SStack_2c;
  char cStack_2b;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined4 uStack_24;
  STGroupBoatC SStack_20;
  undefined3 uStack_1f;
  STGroupBoatC SStack_1c;
  undefined3 uStack_1b;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  STGroupBoatC *pSStack_8;
  
  uStack_24 = 2;
  IStack_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_70;
  pSStack_8 = this;
  iVar6 = Library::MSVCRT::__setjmp3(IStack_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar12 = pSStack_8;
  if (iVar6 != 0) {
    g_currentExceptionFrame = IStack_70.previous;
    if (iVar6 == -0x5001fff7) {
      return 0;
    }
    iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x701,0,iVar6,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpAttack_007abf58);
    if (iVar9 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x702);
      return 0xffffffff;
    }
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return uVar11;
  }
  if (param_1 == 1) {
    FUN_006ae110(*(byte **)(pSStack_8 + 0x20e));
    *(undefined4 *)(pSVar12 + 0x20e) = 0;
    *(undefined4 *)(pSVar12 + 0x212) = 0;
    FUN_006ab060((undefined4 *)(pSVar12 + 0x21e));
    param_1 = 0;
  }
  pSVar15 = pSStack_8;
  if (param_1 == 0) {
    pSVar13 = pSVar12 + 0x89;
    for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pSVar13 = 0;
      pSVar13 = pSVar13 + 4;
    }
    *(undefined4 *)(pSVar12 + 0x65) = 0;
    if (*(int *)(pSVar12 + 0xe7) == 0) {
      iStack_18 = *(int *)(*(int *)(pSStack_8 + 0xef) + 0xc);
      if (iStack_18 == 0) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x68f);
      }
      if (*(byte **)(pSVar15 + 0x20e) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(pSVar15 + 0x20e));
        *(undefined4 *)(pSVar15 + 0x20e) = 0;
        *(undefined4 *)(pSVar15 + 0x212) = 0;
      }
      puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      sVar5 = 0;
      *(uint **)(pSStack_8 + 0x20e) = puVar7;
      pSVar12 = pSStack_8;
      if (0 < iStack_18) {
        uVar14 = 0;
        do {
          FUN_006acc70(*(int *)(pSVar12 + 0xef),uVar14,(undefined4 *)&SStack_2c);
          if (((byte)SStack_2c < 8) &&
             ((((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(char)SStack_2c * 0x51] < 8)) &&
               (piVar8 = (int *)STAllPlayersC::GetObjPtr
                                          (DAT_007fa174,
                                           CONCAT22(uStack_2a,CONCAT11(cStack_2b,SStack_2c)),
                                           CONCAT22(uStack_28,uStack_2a),(int)cStack_2b),
               pSVar12 = pSStack_8, piVar8 != (int *)0x0)) &&
              ((iVar6 = (**(code **)(*piVar8 + 0xf8))(), pSVar12 = pSStack_8, iVar6 == 1 &&
               (iVar6 = (**(code **)(*piVar8 + 0xf4))((int)(char)pSStack_8[0x24]),
               pSVar12 = pSStack_8, iVar6 == 1)))))) {
            Library::DKW::TBL::FUN_006ae140
                      (*(uint **)(pSStack_8 + 0x20e),uVar14,(undefined4 *)&SStack_2c);
            pSVar12 = pSStack_8;
          }
          sVar5 = sVar5 + 1;
          uVar14 = (uint)sVar5;
        } while ((int)uVar14 < iStack_18);
      }
      FUN_006ae110(*(byte **)(pSVar12 + 0xef));
      *(undefined4 *)(pSVar12 + 0xef) = 0;
      if (*(int *)(*(int *)(pSVar12 + 0x20e) + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x69d);
      }
    }
    pSVar12 = pSStack_8;
    if (*(int *)(pSStack_8 + 0xe7) == 1) {
      if (*(byte **)(pSStack_8 + 0x20e) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(pSStack_8 + 0x20e));
        *(undefined4 *)(pSVar12 + 0x20e) = 0;
        *(undefined4 *)(pSVar12 + 0x212) = 0;
      }
      puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
      *(uint **)(pSVar12 + 0x20e) = puVar7;
      iStack_c = CONCAT22((short)((uint)puVar7 >> 0x10),*(short *)(pSVar12 + 0xf3));
      iVar6 = (int)*(short *)(pSVar12 + 0xf3);
      iStack_18 = 0;
      if (iVar6 < *(short *)(pSVar12 + 0xf9) + iVar6) {
        do {
          sVar5 = *(short *)(pSVar12 + 0xf5);
          iStack_14 = CONCAT22((short)((uint)iVar6 >> 0x10),sVar5);
          iVar6 = iStack_c;
          if ((int)sVar5 < (int)*(short *)(pSVar12 + 0xfb) + (int)sVar5) {
            do {
              iStack_10 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)(pSVar12 + 0xf7));
              iVar6 = (int)*(short *)(pSVar12 + 0xf7);
              if (iVar6 < *(short *)(pSVar12 + 0xfd) + iVar6) {
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
                     (((iVar9 = piVar8[8], iVar9 != 0x14 && (iVar9 != 1000)) && (iVar9 != 0x3e9))))
                  {
LAB_0049af27:
                    pSVar12 = pSStack_8;
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
                       ((SStack_2c = *(STGroupBoatC *)(piVar8 + 9), (byte)SStack_2c < 8 &&
                        ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(char)SStack_2c * 0x51] < 8)))
                        ))) {
                      SVar1 = pSStack_8[0x24];
                      _SStack_20 = CONCAT31(uStack_1f,SVar1);
                      if (DAT_00808a8f == '\0') {
                        if (SStack_2c == SVar1) {
LAB_0049b073:
                          iVar6 = 0;
                        }
                        else {
                          uVar10 = CONCAT11(cStack_2b,SStack_2c) & 0xff;
                          uVar14 = (uint)(byte)SVar1;
                          cVar2 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar14);
                          if ((cVar2 == '\0') &&
                             (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\0')) {
                            iVar6 = -2;
                          }
                          else if ((cVar2 == '\x01') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\0')) {
                            iVar6 = -1;
                          }
                          else if ((cVar2 == '\0') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\x01')) {
                            iVar6 = 1;
                          }
                          else {
                            if ((cVar2 != '\x01') ||
                               (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) != '\x01'))
                            goto LAB_0049b073;
                            iVar6 = 2;
                          }
                        }
                        bVar16 = iVar6 < 0;
                      }
                      else {
                        bVar16 = (&DAT_008087ea)[(uint)(byte)SVar1 * 0x51] !=
                                 (&DAT_008087ea)[(CONCAT11(cStack_2b,SStack_2c) & 0xff) * 0x51];
                      }
                      if (bVar16) {
                        uStack_2a = *(undefined2 *)((int)piVar8 + 0x32);
                        cStack_2b = '\x03';
                        iVar6 = (**(code **)(*piVar8 + 0xf8))();
                        if ((iVar6 == 1) &&
                           (iVar6 = (**(code **)(*piVar8 + 0xf4))((int)(char)pSVar12[0x24]),
                           iVar6 == 1)) {
                          iStack_18 = iVar6;
                          Library::DKW::TBL::FUN_006ae1c0
                                    (*(uint **)(pSVar12 + 0x20e),(undefined4 *)&SStack_2c);
                        }
                      }
                    }
                  }
                  else {
                    SStack_2c = *(STGroupBoatC *)(piVar8 + 9);
                    if (((byte)SStack_2c < 8) &&
                       ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(char)SStack_2c * 0x51] < 8))))
                    {
                      SVar1 = pSStack_8[0x24];
                      _SStack_1c = CONCAT31(uStack_1b,SVar1);
                      if (DAT_00808a8f == '\0') {
                        if (SStack_2c == SVar1) {
LAB_0049aec9:
                          iVar9 = 0;
                        }
                        else {
                          uVar10 = CONCAT11(cStack_2b,SStack_2c) & 0xff;
                          uVar14 = (uint)(byte)SVar1;
                          cVar2 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar14);
                          if ((cVar2 == '\0') &&
                             (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\0')) {
                            iVar9 = -2;
                          }
                          else if ((cVar2 == '\x01') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\0')) {
                            iVar9 = -1;
                          }
                          else if ((cVar2 == '\0') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\x01')) {
                            iVar9 = 1;
                          }
                          else {
                            if ((cVar2 != '\x01') ||
                               (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) != '\x01'))
                            goto LAB_0049aec9;
                            iVar9 = 2;
                          }
                        }
                        bVar16 = iVar9 < 0;
                      }
                      else {
                        bVar16 = (&DAT_008087ea)[(uint)(byte)SVar1 * 0x51] !=
                                 (&DAT_008087ea)[(CONCAT11(cStack_2b,SStack_2c) & 0xff) * 0x51];
                      }
                      if (bVar16) {
                        uStack_2a = *(undefined2 *)((int)piVar8 + 0x32);
                        cStack_2b = '\x01';
                        iVar9 = (**(code **)(*piVar8 + 0xf8))();
                        pSVar12 = pSStack_8;
                        if ((iVar9 == 1) &&
                           (iVar9 = (**(code **)(*piVar8 + 0xf4))((int)(char)pSStack_8[0x24]),
                           iVar9 == 1)) {
                          iStack_18 = iVar9;
                          Library::DKW::TBL::FUN_006ae1c0
                                    (*(uint **)(pSVar12 + 0x20e),(undefined4 *)&SStack_2c);
                        }
                        sVar5 = (short)iStack_c;
                        goto LAB_0049af27;
                      }
                    }
                  }
                  iStack_10 = iStack_10 + 1;
                  iVar6 = (int)(short)iStack_10;
                  pSVar12 = pSStack_8;
                } while (iVar6 < (int)*(short *)(pSStack_8 + 0xf7) +
                                 (int)*(short *)(pSStack_8 + 0xfd));
              }
              iStack_14 = iStack_14 + 1;
              iVar6 = (int)(short)iStack_14;
            } while (iVar6 < (int)*(short *)(pSVar12 + 0xfb) + (int)*(short *)(pSVar12 + 0xf5));
          }
          iStack_c = iStack_c + 1;
          iVar6 = (int)(short)iStack_c;
        } while (iVar6 < (int)*(short *)(pSVar12 + 0xf3) + (int)*(short *)(pSVar12 + 0xf9));
      }
      if (iStack_18 == 0) {
        FUN_006ae110(*(byte **)(pSVar12 + 0x20e));
        *(undefined4 *)(pSVar12 + 0x20e) = 0;
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x6ce);
      }
    }
    *(int *)(pSVar12 + 0x20a) = *(int *)(pSVar12 + 0xeb);
    pSVar15 = pSStack_8;
    if (*(int *)(pSVar12 + 0xeb) == 1) {
      sVar5 = 0;
      iVar6 = *(int *)(*(int *)(pSStack_8 + 0x20e) + 0xc);
      if (0 < iVar6) {
        do {
          FUN_006acc70(*(int *)(pSStack_8 + 0x20e),(int)sVar5,(undefined4 *)&SStack_2c);
          if ((cStack_2b != '\x01') ||
             (uVar14 = STAllPlayersC::GetObjPtr
                                 (DAT_007fa174,CONCAT22(uStack_2a,CONCAT11(1,SStack_2c)),
                                  CONCAT22(uStack_28,uStack_2a),1), *(int *)(uVar14 + 0x20) != 0x14)
             ) {
            FUN_006b0c70(*(int *)(pSStack_8 + 0x20e),(int)sVar5);
            iVar6 = iVar6 + -1;
            sVar5 = sVar5 + -1;
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 < iVar6);
      }
      pSVar15 = pSStack_8;
      if (*(int *)(*(int *)(pSStack_8 + 0x20e) + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x6e3);
      }
    }
    MakePVec(pSVar15);
    DistributeTargets(pSVar15,*(uint **)(pSVar15 + 0x29));
    pSVar12 = pSStack_8;
  }
  if ((param_1 == 2) && (*(int *)(pSVar12 + 0x212) == 0)) {
    g_currentExceptionFrame = IStack_70.previous;
    return 0;
  }
  g_currentExceptionFrame = IStack_70.previous;
  return uStack_24;
}

