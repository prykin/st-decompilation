
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall STBoatC::Teleport(STBoatC *this,int param_1)

{
  STBoatC *pSVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int *extraout_ECX;
  short sVar12;
  int iVar13;
  undefined2 extraout_var_02;
  STBoatC *pSVar14;
  longlong lVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  short sVar22;
  byte bVar23;
  uint uVar24;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  short sStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  STBoatC *pSStack_10;
  int iStack_c;
  int *piStack_8;
  
  piStack_8 = (int *)0x0;
  if ((param_1 == 0) || (param_1 == 1)) {
    pSVar14 = this + 0x2cc;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pSVar14 = 0;
      pSVar14 = pSVar14 + 4;
    }
    *(undefined4 *)(this + 0x2c4) = 0;
    *(undefined4 *)(this + 0x635) = *(undefined4 *)(this + 0x405);
    *(undefined2 *)(this + 0x639) = *(undefined2 *)(this + 0x409);
    *(undefined2 *)(this + 0x63b) = *(undefined2 *)(this + 0x40b);
    *(undefined2 *)(this + 0x63d) = *(undefined2 *)(this + 0x40d);
    *(undefined2 *)(this + 0x643) = *(undefined2 *)(this + 0x40f);
    *(undefined2 *)(this + 0x645) = *(undefined2 *)(this + 0x411);
    *(undefined2 *)(this + 0x647) = *(undefined2 *)(this + 0x413);
    *(undefined4 *)(this + 0x64d) = 0;
    iVar6 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar6 != 0) {
      return -1;
    }
    iVar6 = *(int *)(this + 0x635);
    if (iVar6 == 0) {
      sVar16 = *(short *)(this + 0x639);
      sVar17 = *(short *)(this + 0x63d);
      sVar12 = *(short *)(this + 0x63b);
      if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar12 < 0)) ||
          ((DAT_007fb242 <= sVar12 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
        piStack_8 = (int *)0x0;
      }
      else {
        piStack_8 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar17 + (int)sVar12 * (int)DAT_007fb240 +
                             (int)sVar16) * 8);
      }
      if (piStack_8 == (int *)0x0) {
        return 0;
      }
      iVar6 = (**(code **)(*piStack_8 + 0x2c))();
      if (iVar6 != 0x37) {
        return 0;
      }
      *(int *)(this + 0x63f) = piStack_8[6];
    }
    else {
      if (iVar6 != 1) {
        if (iVar6 != 2) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x351b,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Teleport_invalid_type_o_007ab3ac);
          if (iVar6 == 0) {
            return 0;
          }
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
        pSVar14 = this + 0x65b;
        *(uint *)(this + 0x1c) = uVar8;
        pSVar1 = this + 0x657;
        thunk_FUN_004b2520(*(uint *)(this + 0x24),*(int *)(this + 0x6f7),
                           (int)*(short *)(this + 0x643),(int)*(short *)(this + 0x645),
                           (int)*(short *)(this + 0x647),(undefined4 *)pSVar1,
                           (undefined4 *)(this + 0x659),(undefined4 *)pSVar14,uVar8 >> 0x10,
                           (int *)(this + 0x64d));
        if (*(short *)pSVar1 < 0) {
          return 0;
        }
        if (*(short *)(this + 0x659) < 0) {
          return 0;
        }
        if (*(short *)pSVar14 < 0) {
          return 0;
        }
        *(undefined4 *)(this + 0x742) = 1;
        *(undefined4 *)(this + 0x63f) = 0;
        *(undefined4 *)(this + 0x649) = 0;
        if (DAT_00800bcc == (void *)0x0) {
          thunk_FUN_004d0f00();
        }
        thunk_FUN_004d0970(DAT_00800bcc,(int)*(short *)pSVar1,(int)*(short *)(this + 0x659),
                           (int)*(short *)pSVar14);
        *(undefined4 *)(this + 0x663) = 5;
        *(undefined4 *)(this + 0x667) = 0;
        return 2;
      }
      sVar16 = *(short *)(this + 0x639);
      sVar17 = *(short *)(this + 0x63d);
      sVar12 = *(short *)(this + 0x63b);
      if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
         ((sVar12 < 0 || (((DAT_007fb242 <= sVar12 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17))))))
      {
        piStack_8 = (int *)0x0;
      }
      else {
        piStack_8 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar17 + (int)sVar12 * (int)DAT_007fb240 +
                             (int)sVar16) * 8);
      }
      if (piStack_8 == (int *)0x0) {
        return 0;
      }
      iVar6 = (**(code **)(*piStack_8 + 0x2c))();
      if (iVar6 != 0x6c) {
        return 0;
      }
      *(int *)(this + 0x63f) = piStack_8[6];
      sVar16 = *(short *)(this + 0x643);
      sVar17 = *(short *)(this + 0x647);
      sVar12 = *(short *)(this + 0x645);
      if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
         (((sVar12 < 0 || ((DAT_007fb242 <= sVar12 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17))))
      {
        piStack_8 = (int *)0x0;
      }
      else {
        piStack_8 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar17 + (int)sVar12 * (int)DAT_007fb240 +
                             (int)sVar16) * 8);
      }
      if (piStack_8 == (int *)0x0) {
        return 0;
      }
      iVar6 = (**(code **)(*piStack_8 + 0x2c))();
      if (iVar6 != 0x6c) {
        return 0;
      }
      *(int *)(this + 0x649) = piStack_8[6];
    }
    *(undefined4 *)(this + 0x663) = 0;
    *(undefined4 *)(this + 0x667) = 0;
    *(undefined4 *)(this + 0xb7) = 3;
    thunk_FUN_00481520(this,(int)*(short *)(this + 0x639),(int)*(short *)(this + 0x63b),
                       *(short *)(this + 0x63d) + 1);
  }
  else {
    iVar6 = *(int *)(this + 0x663);
    if (iVar6 == 0) {
      iVar6 = thunk_FUN_00460260(this,2);
      switch(iVar6) {
      case 0:
        *(undefined4 *)(this + 0xb7) = 0;
        if (*(int *)(this + 0x635) == 1) {
          sVar16 = *(short *)(this + 0x643);
          sVar17 = *(short *)(this + 0x647);
          sVar12 = *(short *)(this + 0x645);
          if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
              ((sVar12 < 0 || ((DAT_007fb242 <= sVar12 || (sVar17 < 0)))))) ||
             (DAT_007fb244 <= sVar17)) {
            piStack_8 = (int *)0x0;
          }
          else {
            piStack_8 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar17 + (int)sVar12 * (int)DAT_007fb240
                                 + (int)sVar16) * 8);
          }
          if (piStack_8 == (int *)0x0) {
            return 0;
          }
          if (piStack_8[6] != *(int *)(this + 0x649)) {
            return 0;
          }
          iVar6 = (**(code **)(*piStack_8 + 0xf8))();
          if (iVar6 == 0) {
            return 0;
          }
        }
        sVar16 = *(short *)(this + 0x639);
        sVar17 = *(short *)(this + 0x63d);
        sVar12 = *(short *)(this + 0x63b);
        if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar12 < 0)) ||
            ((DAT_007fb242 <= sVar12 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
          piStack_8 = (int *)0x0;
        }
        else {
          piStack_8 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar17 + (int)sVar12 * (int)DAT_007fb240 +
                               (int)sVar16) * 8);
        }
        if (piStack_8 == (int *)0x0) {
          return 0;
        }
        if (piStack_8[6] != *(int *)(this + 0x63f)) {
          return 0;
        }
        iVar6 = (**(code **)(*piStack_8 + 0xf8))();
        if (iVar6 == 0) {
          return 0;
        }
        bVar4 = thunk_FUN_004939b0(this,(short *)(this + 0x651),(short *)(this + 0x653),
                                   (short *)(this + 0x655));
        if ((CONCAT31(extraout_var,bVar4) != 1) ||
           (iVar6 = thunk_FUN_004e91e0(piStack_8,(int *)this), iVar6 != 1)) {
LAB_00479e39:
          *(undefined4 *)(this + 0x663) = 1;
          *(undefined4 *)(this + 0x65d) = 0;
          iVar6 = Defence(this,0);
          if (iVar6 != -1) {
            return 2;
          }
          return -1;
        }
        *(undefined4 *)(this + 0x663) = 2;
LAB_0047b2dc:
        iVar6 = (int)*(short *)(this + 0x655);
        sVar17 = *(short *)(this + 0x653);
        sVar16 = *(short *)(this + 0x651);
        break;
      case 1:
        sVar16 = *(short *)(this + 0x639);
        sVar17 = *(short *)(this + 0x63d);
        sVar12 = *(short *)(this + 0x63b);
        if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
            ((sVar12 < 0 || ((DAT_007fb242 <= sVar12 || (sVar17 < 0)))))) ||
           (DAT_007fb244 <= sVar17)) {
          piStack_8 = (int *)0x0;
        }
        else {
          piStack_8 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar17 + (int)sVar12 * (int)DAT_007fb240 +
                               (int)sVar16) * 8);
        }
        if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)(this + 0x63f))) &&
           (iVar6 = (**(code **)(*piStack_8 + 0xf8))(), iVar6 != 0)) {
          if (*(int *)(this + 0x635) != 1) {
            return 2;
          }
          sVar16 = *(short *)(this + 0x643);
          sVar17 = *(short *)(this + 0x647);
          sVar12 = *(short *)(this + 0x645);
          if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
             (((sVar12 < 0 || ((DAT_007fb242 <= sVar12 || (sVar17 < 0)))) ||
              (DAT_007fb244 <= sVar17)))) {
            piStack_8 = (int *)0x0;
          }
          else {
            piStack_8 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar17 + (int)sVar12 * (int)DAT_007fb240
                                 + (int)sVar16) * 8);
          }
          if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)(this + 0x649))) &&
             (iVar6 = (**(code **)(*piStack_8 + 0xf8))(), iVar6 != 0)) {
            return 2;
          }
        }
        thunk_FUN_004602b0((int *)this);
        *(undefined4 *)(this + 0xb7) = 0;
        return 0;
      default:
        goto switchD_00479647_caseD_2;
      case 3:
        sVar17 = *(short *)(this + 0x63b);
        sVar16 = *(short *)(this + 0x639);
        iVar6 = *(short *)(this + 0x63d) + 1;
        break;
      case -1:
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3525,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Teleport__TELEPORT_MOVE_007ab4f8);
        if (iVar6 != 0) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = 0x3525;
LAB_00479ba6:
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar6);
        return 0xffff;
      }
    }
    else {
      if (iVar6 == 1) {
        *(int *)(this + 0x65d) = *(int *)(this + 0x65d) + 1;
        iVar6 = Defence(this,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (*(int *)(this + 0x82e) != 0) {
          return 2;
        }
        if (*(int *)(this + 0x48b) != 0xffff) {
          return 2;
        }
        if (*(int *)(this + 0x65d) % 10 != 0) {
          return 2;
        }
        if (*(int *)(this + 0x635) == 1) {
          sVar16 = *(short *)(this + 0x643);
          sVar17 = *(short *)(this + 0x647);
          sVar12 = *(short *)(this + 0x645);
          if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar12 < 0)) ||
              ((DAT_007fb242 <= sVar12 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
            piStack_8 = (int *)0x0;
          }
          else {
            piStack_8 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar17 + (int)sVar12 * (int)DAT_007fb240
                                 + (int)sVar16) * 8);
          }
          if (piStack_8 == (int *)0x0) {
            return 0;
          }
          if (piStack_8[6] != *(int *)(this + 0x649)) {
            return 0;
          }
          iVar6 = (**(code **)(*piStack_8 + 0xf8))();
          if (iVar6 == 0) {
            return 0;
          }
        }
        sVar16 = *(short *)(this + 0x639);
        sVar17 = *(short *)(this + 0x63d);
        sVar12 = *(short *)(this + 0x63b);
        if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
           ((sVar12 < 0 || (((DAT_007fb242 <= sVar12 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17))))
           )) {
          piStack_8 = (int *)0x0;
        }
        else {
          piStack_8 = *(int **)(DAT_007fb248 +
                               ((int)sVar17 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240 +
                               (int)sVar16) * 8);
        }
        if (piStack_8 == (int *)0x0) {
          return 0;
        }
        if (piStack_8[6] != *(int *)(this + 0x63f)) {
          return 0;
        }
        iVar6 = (**(code **)(*piStack_8 + 0xf8))();
        if (iVar6 == 0) {
          return 0;
        }
        bVar4 = thunk_FUN_004939b0(this,(short *)(this + 0x651),(short *)(this + 0x653),
                                   (short *)(this + 0x655));
        if (CONCAT31(extraout_var_00,bVar4) != 1) {
          return 2;
        }
        iVar6 = thunk_FUN_004e91e0(piStack_8,(int *)this);
        if (iVar6 != 1) {
          return 2;
        }
        *(undefined4 *)(this + 0x663) = 2;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 != 3) {
            if (iVar6 == 4) {
              if (*(int *)(this + 0x667) == 0) {
                iVar6 = *(int *)(this + 0x6f7);
                if ((((iVar6 == 7) || (iVar6 == 0x13)) || (iVar6 == 0x1b)) &&
                   ((*(int *)(this + 0x7ca) != 0 &&
                    (iVar6 = FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x7ca),(int *)&piStack_8),
                    iVar6 != -4)))) {
                  iVar21 = (int)*(short *)(this + 0x45);
                  iVar6 = (int)*(short *)(this + 0x43);
                  iVar7 = (int)*(short *)(this + 0x41);
                  uVar24 = 0;
                  iVar10 = 0;
                  uVar8 = thunk_FUN_004ad650((int)piStack_8 + 0x1d5);
                }
                else {
                  iVar21 = (int)*(short *)(this + 0x45);
                  iVar6 = (int)*(short *)(this + 0x43);
                  iVar7 = (int)*(short *)(this + 0x41);
                  uVar24 = 0;
                  uVar8 = *(uint *)(this + 0x1ed);
                  iVar10 = 0;
                }
                thunk_FUN_006377b0(uVar8,iVar10,iVar7,iVar6,iVar21,uVar24);
                *(undefined4 *)(this + 0x667) = 1;
                *(undefined4 *)(this + 0x65d) = 0;
              }
              if ((*(int *)(this + 0x667) == 1) &&
                 (iVar6 = *(int *)(this + 0x65d), *(int *)(this + 0x65d) = iVar6 + 1,
                 iVar6 + 1 == 0x16)) {
                *(undefined4 *)(this + 0x667) = 2;
                *(undefined4 *)(this + 0x65d) = 0;
                thunk_FUN_0041c5a0((int *)this);
                if (((*(int *)(this + 0x6f7) == 0xb) || (*(int *)(this + 0x6f7) == 0x23)) &&
                   ((*(int *)(this + 0x21d) == 1 && (*(uint *)(this + 0x24) == (uint)DAT_0080874d)))
                   ) {
                  FUN_006e6780(*(void **)(this + 0x211),
                               CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)(this + 0x18) >> 0x10
                                                         )),*(undefined2 *)(this + 0x18)));
                }
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)(this + 0x657),
                                   (int)*(short *)(this + 0x659),(int)*(short *)(this + 0x65b));
                thunk_FUN_00417a20(this,*(short *)(this + 0x657),*(short *)(this + 0x659),
                                   *(short *)(this + 0x65b),1);
                sVar16 = (*(short *)(this + 0x643) + 1) * 0xc9;
                *(short *)(this + 0x41) = sVar16;
                sVar17 = (*(short *)(this + 0x645) + 1) * 0xc9;
                sVar12 = *(short *)(this + 0x647) * 200 + 300;
                *(short *)(this + 0x43) = sVar17;
                *(short *)(this + 0x45) = sVar12;
                iStack_20 = (int)sVar16;
                thunk_FUN_004ad3c0(this + 0x1d5,(float)iStack_20 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)sVar17 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)sVar12 * _DAT_007904f8 * _DAT_007904f0);
                thunk_FUN_0041c3f0(this,*(undefined **)(this + 0x70a));
                iVar6 = *(int *)(this + 0x6f7);
                if ((((iVar6 == 7) || (iVar6 == 0x13)) || (iVar6 == 0x1b)) &&
                   ((*(int *)(this + 0x7ca) != 0 &&
                    (iVar6 = FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x7ca),(int *)&piStack_8),
                    iVar6 != -4)))) {
                  iVar7 = (int)*(short *)(this + 0x45);
                  iVar6 = (int)*(short *)(this + 0x43);
                  iVar21 = (int)*(short *)(this + 0x41);
                  uVar24 = 0;
                  iVar10 = 0;
                  uVar8 = thunk_FUN_004ad650((int)piStack_8 + 0x1d5);
                  thunk_FUN_006377b0(uVar8,iVar10,iVar21,iVar6,iVar7,uVar24);
                  thunk_FUN_004ad430((int)piStack_8 + 0x1d5);
                }
                else {
                  thunk_FUN_006377b0(*(uint *)(this + 0x1ed),0,(int)*(short *)(this + 0x41),
                                     (int)*(short *)(this + 0x43),(int)*(short *)(this + 0x45),0);
                }
                thunk_FUN_004ad430((int)(this + 0x1d5));
              }
              if ((*(int *)(this + 0x667) == 2) &&
                 (iVar6 = *(int *)(this + 0x65d), *(int *)(this + 0x65d) = iVar6 + 1,
                 iVar6 + 1 == 0x16)) {
                *(undefined4 *)(this + 0x667) = 3;
                iVar6 = *(int *)(this + 0x6f7);
                *(undefined4 *)(this + 0x65d) = 0;
                if (((iVar6 == 7) || ((iVar6 == 0x13 || (iVar6 == 0x1b)))) &&
                   ((*(int *)(this + 0x7ca) != 0 &&
                    (iVar6 = FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x7ca),(int *)&piStack_8),
                    iVar6 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)piStack_8 + 0x1d5),0);
                }
                thunk_FUN_004ad460(this + 0x1d5,0);
                if ((((*(int *)(this + 0x6f7) == 0xb) || (*(int *)(this + 0x6f7) == 0x23)) &&
                    (*(int *)(this + 0x21d) == 1)) && (*(uint *)(this + 0x24) == (uint)DAT_0080874d)
                   ) {
                  iStack_20 = (int)*(short *)(this + 0x41);
                  FUN_006e6710(*(void **)(this + 0x211),
                               (float)iStack_20 * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)*(short *)(this + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                               (float)*(int *)(this + 0x10d) * _DAT_007904f8 + _DAT_007904f4,0x28,
                               CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)(this + 0x18) >> 0x10
                                                         )),*(undefined2 *)(this + 0x18)));
                }
              }
              if ((*(int *)(this + 0x667) == 3) &&
                 (iVar6 = *(int *)(this + 0x65d), *(int *)(this + 0x65d) = iVar6 + 1,
                 iVar6 + 1 == 10)) {
                *(undefined4 *)(this + 0x663) = 6;
                *(undefined4 *)(this + 0x667) = 0;
                *(undefined4 *)(this + 0x742) = 0;
              }
              goto LAB_0047adb5;
            }
            if (iVar6 == 5) {
              if (*(int *)(this + 0x667) == 0) {
                iVar6 = *(int *)(this + 0x6f7);
                if ((((iVar6 == 7) || (iVar6 == 0x13)) || (iVar6 == 0x1b)) &&
                   ((*(int *)(this + 0x7ca) != 0 &&
                    (iVar6 = FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x7ca),(int *)&piStack_8),
                    iVar6 != -4)))) {
                  iVar21 = (int)*(short *)(this + 0x45);
                  iVar6 = (int)*(short *)(this + 0x43);
                  iVar7 = (int)*(short *)(this + 0x41);
                  uVar24 = 0;
                  iVar10 = 0;
                  uVar8 = thunk_FUN_004ad650((int)piStack_8 + 0x1d5);
                }
                else {
                  iVar21 = (int)*(short *)(this + 0x45);
                  iVar6 = (int)*(short *)(this + 0x43);
                  iVar7 = (int)*(short *)(this + 0x41);
                  uVar24 = 0;
                  uVar8 = *(uint *)(this + 0x1ed);
                  iVar10 = 0;
                }
                thunk_FUN_006377b0(uVar8,iVar10,iVar7,iVar6,iVar21,uVar24);
                *(undefined4 *)(this + 0x667) = 1;
                *(undefined4 *)(this + 0x65d) = 0;
              }
              if ((*(int *)(this + 0x667) == 1) &&
                 (iVar6 = *(int *)(this + 0x65d), *(int *)(this + 0x65d) = iVar6 + 1,
                 iVar6 + 1 == 0x16)) {
                *(undefined4 *)(this + 0x65d) = 0;
                *(undefined4 *)(this + 0x667) = 2;
                if (*(int *)(this + 0x635) == 2) {
                  iVar6 = *(int *)(this + 0x71e);
                  *(int *)(this + 0x71e) = iVar6 + -10;
                  if (iVar6 + -10 < 0) {
                    *(undefined4 *)(this + 0x71e) = 0;
                  }
                  if ((*(int *)(this + 0x64d) != 0) && (DAT_00811798 != (void *)0x0)) {
                    thunk_FUN_00620670(DAT_00811798,(int)*(short *)(this + 0x47),
                                       (int)*(short *)(this + 0x49),*(uint *)(this + 0x24));
                  }
                  thunk_FUN_004ea6e0(*(uint *)(this + 0x24),(int)*(short *)(this + 0x657),
                                     (int)*(short *)(this + 0x659),(int)*(short *)(this + 0x65b));
                }
                thunk_FUN_0041c5a0((int *)this);
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)(this + 0x657),
                                   (int)*(short *)(this + 0x659),(int)*(short *)(this + 0x65b));
                thunk_FUN_00417a20(this,*(short *)(this + 0x657),*(short *)(this + 0x659),
                                   *(short *)(this + 0x65b),1);
                iStack_20 = (int)*(short *)(this + 0x41);
                thunk_FUN_004ad3c0(this + 0x1d5,(float)iStack_20 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)*(short *)(this + 0x43) * _DAT_007904f8 *
                                   _DAT_007904f0,
                                   (float)(int)*(short *)(this + 0x45) * _DAT_007904f8 *
                                   _DAT_007904f0);
                thunk_FUN_0041c3f0(this,*(undefined **)(this + 0x70a));
                iVar6 = *(int *)(this + 0x6f7);
                if ((((iVar6 == 7) || (iVar6 == 0x13)) || (iVar6 == 0x1b)) &&
                   ((*(int *)(this + 0x7ca) != 0 &&
                    (iVar6 = FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x7ca),(int *)&piStack_8),
                    iVar6 != -4)))) {
                  iVar7 = (int)*(short *)(this + 0x45);
                  iVar6 = (int)*(short *)(this + 0x43);
                  iVar21 = (int)*(short *)(this + 0x41);
                  uVar24 = 0;
                  iVar10 = 0;
                  uVar8 = thunk_FUN_004ad650((int)piStack_8 + 0x1d5);
                  thunk_FUN_006377b0(uVar8,iVar10,iVar21,iVar6,iVar7,uVar24);
                  thunk_FUN_004ad430((int)piStack_8 + 0x1d5);
                }
                else {
                  thunk_FUN_006377b0(*(uint *)(this + 0x1ed),0,(int)*(short *)(this + 0x41),
                                     (int)*(short *)(this + 0x43),(int)*(short *)(this + 0x45),0);
                }
                thunk_FUN_004ad430((int)(this + 0x1d5));
              }
              if ((*(int *)(this + 0x667) == 2) &&
                 (iVar6 = *(int *)(this + 0x65d), *(int *)(this + 0x65d) = iVar6 + 1,
                 iVar6 + 1 == 0x16)) {
                *(undefined4 *)(this + 0x667) = 3;
                iVar6 = *(int *)(this + 0x6f7);
                *(undefined4 *)(this + 0x65d) = 0;
                if (((iVar6 == 7) || ((iVar6 == 0x13 || (iVar6 == 0x1b)))) &&
                   ((*(int *)(this + 0x7ca) != 0 &&
                    (iVar6 = FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x7ca),(int *)&piStack_8),
                    iVar6 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)piStack_8 + 0x1d5),0);
                }
                thunk_FUN_004ad460(this + 0x1d5,0);
              }
              if ((*(int *)(this + 0x667) == 3) &&
                 (iVar6 = *(int *)(this + 0x65d), *(int *)(this + 0x65d) = iVar6 + 1,
                 iVar6 + 1 == 10)) {
                sVar16 = *(short *)(this + 0x639);
                sVar17 = *(short *)(this + 0x63d);
                sVar12 = *(short *)(this + 0x63b);
                *(undefined4 *)(this + 0x742) = 0;
                if ((sVar16 < 0) ||
                   ((((DAT_007fb240 <= sVar16 || (sVar12 < 0)) || (DAT_007fb242 <= sVar12)) ||
                    ((sVar17 < 0 || (DAT_007fb244 <= sVar17)))))) {
                  piStack_8 = (int *)0x0;
                }
                else {
                  piStack_8 = *(int **)(DAT_007fb248 +
                                       ((int)sVar17 * (int)DAT_007fb246 +
                                        (int)sVar12 * (int)DAT_007fb240 + (int)sVar16) * 8);
                }
                if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)(this + 0x63f))) &&
                   (iVar6 = (**(code **)(*piStack_8 + 0xf8))(), iVar6 != 0)) {
                  thunk_FUN_004e95c0(piStack_8,(int)this);
                }
                iVar6 = (**(code **)(*(int *)this + 0xd8))();
                if (iVar6 != 0) {
                  return -1;
                }
LAB_0047acdc:
                iVar6 = thunk_FUN_004b2d10((byte)*(undefined4 *)(this + 0x24),*(int *)(this + 0x6f7)
                                           ,(int)*(short *)(this + 0x5b),
                                           (int)*(short *)(this + 0x5d));
                if (iVar6 == 0) {
                  return 0;
                }
                thunk_FUN_00495010(this,0xaf);
                return 0;
              }
              goto LAB_0047adb5;
            }
            if (iVar6 != 6) {
              if (iVar6 != 7) {
                iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3744,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Teleport___incorrect_en_007ab3e8
                                          );
                if (iVar6 == 0) {
                  return -1;
                }
                pcVar3 = (code *)swi(3);
                iVar6 = (*pcVar3)();
                return iVar6;
              }
              iVar6 = thunk_FUN_00460260(this,2);
              if (iVar6 == -1) {
                return -1;
              }
              if (iVar6 == 0) goto LAB_0047acdc;
              if (iVar6 != 3) {
                return 2;
              }
              iVar6 = CONCAT22((short)((uint)(this + 0x651) >> 0x10),*(short *)(this + 0x653));
              thunk_FUN_0048dfd0(CONCAT22(extraout_var_02,*(undefined2 *)(this + 0x651)),iVar6,
                                 (uint)(ushort)(*(short *)(this + 0x655) + 1),
                                 CONCAT22(extraout_var_02,*(undefined2 *)(this + 0x651)),iVar6,
                                 (int *)(uint)(ushort)(*(short *)(this + 0x655) + 1),1,
                                 (short *)(this + 0x651),(short *)(this + 0x653),
                                 (short *)(this + 0x655));
              goto LAB_0047b2dc;
            }
            if (*(int *)(this + 0x667) == 0) {
              iVar6 = (ushort)(*(short *)(this + 0x65b) * 200) + 100;
              iVar7 = CONCAT22((short)((uint)this >> 0x10),*(short *)(this + 0x659) * 0xc9) + 100;
              iVar21 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)(this + 0x657) * 0xc9) + 100;
              uVar5 = (undefined2)((uint)iVar7 >> 0x10);
              uVar5 = (**(code **)(*(int *)this + 0x10))
                                (CONCAT22(uVar5,*(undefined2 *)(this + 0x41)),
                                 CONCAT22((short)((uint)iVar21 >> 0x10),*(undefined2 *)(this + 0x43)
                                         ),CONCAT22(uVar5,*(undefined2 *)(this + 0x45)),iVar21,iVar7
                                 ,iVar6);
              *(undefined2 *)(this + 0x661) = uVar5;
              *(undefined4 *)(this + 0x667) = 1;
            }
            if (*(int *)(this + 0x667) == 1) {
              uVar8 = thunk_FUN_004176c0(this,*(short *)(this + 0x661));
              uVar8 = thunk_FUN_00417910(this,(short)uVar8);
              if (uVar8 == 0xffffffff) {
                iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x36e3,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_OMOVE_007ab440
                                          );
                if (iVar6 == 0) {
                  return -1;
                }
                pcVar3 = (code *)swi(3);
                iVar6 = (*pcVar3)();
                return iVar6;
              }
              goto joined_r0x0047ada9;
            }
            if (*(int *)(this + 0x667) == 2) {
              thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                                 *(short *)(this + 0x45),*(short *)(this + 0x657) * 0xc9 + 100,
                                 *(short *)(this + 0x659) * 0xc9 + 100,
                                 *(short *)(this + 0x65b) * 200 + 100,(byte)this[0x61]);
              *(undefined4 *)(this + 0x667) = 3;
            }
            if (*(int *)(this + 0x667) != 3) goto LAB_0047adb5;
            iStack_14 = thunk_FUN_00415ed0(this,&iStack_18,&uStack_1c);
            uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)(this + 0x1c) = uVar8;
            iVar6 = (uVar8 >> 0x10) % 7 - 3;
            uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)(this + 0x1c) = uVar8;
            uVar24 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)(this + 0x1c) = uVar24;
            iStack_20 = (uVar24 >> 0x10) % 7 - 3;
            if ((*(int *)(this + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
               (iStack_c = 0, this[0x2bf] != (STBoatC)0x0)) {
              pSStack_10 = this + 0x2b3;
              do {
                puVar9 = (undefined4 *)
                         thunk_FUN_0041dc40(auStack_30,*(undefined4 *)pSStack_10,
                                            *(undefined2 *)(pSStack_10 + 4),*(short *)(this + 0x6c))
                ;
                uVar2 = *puVar9;
                bVar23 = 0;
                sVar22 = 0;
                iVar21 = -1;
                sStack_24 = *(short *)(puVar9 + 1);
                sVar20 = 0;
                sVar19 = 0;
                sVar18 = 0;
                sVar12 = 0;
                sVar17 = 0;
                sVar16 = 0;
                uStack_28 = uVar2;
                if (DAT_0080732c == 1) {
                  sVar16 = 0;
                  sVar17 = 0;
                  sVar12 = 0;
                  sVar18 = 0;
                  sVar19 = 0;
                  sVar20 = 0;
                  sVar22 = 0;
                  bVar23 = 0;
                  lVar15 = Library::MSVCRT::__ftol();
                  iVar13 = (int)sStack_24 + *(short *)(this + 0x45) + iStack_20 + (int)(short)lVar15
                  ;
                  iVar7 = (int)*(short *)(this + 0x43) - (int)uStack_28._2_2_;
                  iVar10 = (int)(short)uStack_28 + iVar6 + *(short *)(this + 0x41);
                }
                else {
                  iVar13 = (int)sStack_24 + iStack_20 + *(short *)(this + 0x45);
                  uStack_28._2_2_ = (short)((uint)uVar2 >> 0x10);
                  iVar7 = (int)*(short *)(this + 0x43) - (int)uStack_28._2_2_;
                  uStack_28._0_2_ = (short)uVar2;
                  iVar10 = (int)(short)uStack_28 + iVar6 + *(short *)(this + 0x41);
                }
                TraksClassTy::TraksCreate
                          (DAT_00802a7c,1,2,7,iVar10,iVar7 + ((uVar8 >> 0x10) % 7 - 3),iVar13,sVar16
                           ,sVar17,sVar12,sVar18,sVar19,sVar20,iVar21,sVar22,bVar23);
                pSStack_10 = pSStack_10 + 6;
                iStack_c = iStack_c + 1;
              } while (iStack_c < (int)(uint)(byte)this[0x2bf]);
            }
            if (iStack_14 == -1) {
              iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x370a,0,0,
                                         &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_OMOVE_007ab414);
              if (iVar6 == 0) {
                return -1;
              }
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
            if (iStack_14 != 0) goto LAB_0047adb5;
            sVar16 = *(short *)(this + 0x639);
            iVar6 = 0;
            sVar17 = *(short *)(this + 0x63d);
            sVar12 = *(short *)(this + 0x63b);
            if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar12 < 0)) ||
               (((DAT_007fb242 <= sVar12 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))) {
              piStack_8 = (int *)0x0;
            }
            else {
              iVar6 = (int)sVar16;
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar17 * (int)DAT_007fb246 +
                                    (int)sVar12 * (int)DAT_007fb240 + iVar6) * 8);
            }
            if ((piStack_8 != (int *)0x0) && (iVar6 = piStack_8[6], iVar6 == *(int *)(this + 0x63f))
               ) {
              iVar21 = (**(code **)(*piStack_8 + 0xf8))();
              iVar6 = 0;
              if (iVar21 != 0) {
                iVar6 = thunk_FUN_004e95c0(piStack_8,(int)this);
              }
            }
            sVar16 = *(short *)(this + 0x643);
            iVar6 = CONCAT22((short)((uint)iVar6 >> 0x10),sVar16);
            sVar17 = *(short *)(this + 0x647);
            sVar12 = *(short *)(this + 0x645);
            if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar12 < 0)) ||
                ((DAT_007fb242 <= sVar12 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
              piVar11 = (int *)0x0;
            }
            else {
              iVar6 = (int)sVar16;
              piVar11 = *(int **)(DAT_007fb248 +
                                 ((int)sVar17 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240
                                 + iVar6) * 8);
            }
            piStack_8 = piVar11;
            if ((piVar11 == (int *)0x0) || (iVar6 = piVar11[6], iVar6 != *(int *)(this + 0x649))) {
LAB_0047b1c5:
              iVar21 = CONCAT22((short)((uint)piVar11 >> 0x10),*(undefined2 *)(this + 0x645));
              uVar8 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)(this + 0x647) + 1);
              iVar6 = CONCAT22((short)((uint)(this + 0x651) >> 0x10),*(undefined2 *)(this + 0x643));
              iVar6 = thunk_FUN_0048dfd0(iVar6,iVar21,uVar8,iVar6,iVar21,(int *)uVar8,2,
                                         (short *)(this + 0x651),(short *)(this + 0x653),
                                         (short *)(this + 0x655));
joined_r0x0047b202:
              if (iVar6 == 0) {
                *(undefined2 *)(this + 0x651) = *(undefined2 *)(this + 0x47);
                *(undefined2 *)(this + 0x653) = *(undefined2 *)(this + 0x49);
                *(undefined2 *)(this + 0x655) = *(undefined2 *)(this + 0x4b);
              }
            }
            else {
              iVar21 = (**(code **)(*piVar11 + 0xf8))();
              iVar6 = 0;
              piVar11 = extraout_ECX;
              if (iVar21 == 0) goto LAB_0047b1c5;
              pSVar14 = this + 0x655;
              pSVar1 = this + 0x653;
              if (piStack_8[0x10b] != 0) {
                if (this + 0x651 != (STBoatC *)0x0) {
                  *(int *)(this + 0x651) = piStack_8[0x10c];
                }
                if (pSVar1 != (STBoatC *)0x0) {
                  *(int *)pSVar1 = piStack_8[0x10d];
                }
                if (pSVar14 != (STBoatC *)0x0) {
                  *(int *)pSVar14 = piStack_8[0x10e];
                }
              }
              if (piStack_8[0x10b] == 0) {
                uVar8 = CONCAT22((short)((uint)piStack_8 >> 0x10),*(short *)(this + 0x647) + 1);
                iVar6 = CONCAT22((short)((uint)(this + 0x651) >> 0x10),*(undefined2 *)(this + 0x643)
                                );
                iVar6 = thunk_FUN_0048dfd0(iVar6,(uint)*(ushort *)(this + 0x645),uVar8,iVar6,
                                           (uint)*(ushort *)(this + 0x645),(int *)uVar8,2,
                                           (short *)(this + 0x651),(short *)pSVar1,(short *)pSVar14)
                ;
                goto joined_r0x0047b202;
              }
            }
            thunk_FUN_00481520(this,(int)*(short *)(this + 0x651),(int)*(short *)(this + 0x653),
                               (int)*(short *)(this + 0x655));
            thunk_FUN_00460260(this,0);
            *(undefined4 *)(this + 0x663) = 7;
LAB_0047adb5:
            iVar6 = (**(code **)(*(int *)this + 0xd8))();
            return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
          }
          if (*(int *)(this + 0x667) == 0) {
            iVar7 = (ushort)(*(short *)(this + 0x63d) * 200) + 300;
            iVar21 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)(this + 0x63b) + 1) * 0xc9;
            iVar10 = CONCAT22((short)((uint)iVar21 >> 0x10),*(short *)(this + 0x639) + 1);
            iVar6 = iVar10 * 0xc9;
            uVar5 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
            uVar5 = (**(code **)(*(int *)this + 0x10))
                              (CONCAT22(uVar5,*(undefined2 *)(this + 0x41)),
                               CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(this + 0x43)),
                               CONCAT22(uVar5,*(undefined2 *)(this + 0x45)),iVar6,iVar21,iVar7);
            *(undefined2 *)(this + 0x661) = uVar5;
            *(undefined4 *)(this + 0x667) = 1;
          }
          if (*(int *)(this + 0x667) == 1) {
            uVar8 = thunk_FUN_004176c0(this,*(short *)(this + 0x661));
            uVar8 = thunk_FUN_00417910(this,(short)uVar8);
            if (uVar8 == 0xffffffff) {
              iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x35f4,0,0,
                                         &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_PMOVE_007ab498);
              if (iVar6 == 0) {
                return -1;
              }
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
joined_r0x0047ada9:
            if (uVar8 == 0) {
              *(undefined4 *)(this + 0x667) = 2;
            }
            goto LAB_0047adb5;
          }
          if (*(int *)(this + 0x667) == 2) {
            thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                               *(short *)(this + 0x45),(*(short *)(this + 0x639) + 1) * 0xc9,
                               (*(short *)(this + 0x63b) + 1) * 0xc9,
                               *(short *)(this + 0x63d) * 200 + 300,(byte)this[0x61]);
            *(undefined4 *)(this + 0x667) = 3;
          }
          if (*(int *)(this + 0x667) != 3) goto LAB_0047a369;
          iStack_14 = thunk_FUN_00415ed0(this,&iStack_20,&uStack_1c);
          uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)(this + 0x1c) = uVar8;
          iVar6 = (uVar8 >> 0x10) % 7 - 3;
          uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)(this + 0x1c) = uVar8;
          uVar24 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)(this + 0x1c) = uVar24;
          iStack_18 = (uVar24 >> 0x10) % 7 - 3;
          if ((*(int *)(this + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
             (iStack_c = 0, this[0x2bf] != (STBoatC)0x0)) {
            pSStack_10 = this + 0x2b3;
            do {
              puVar9 = (undefined4 *)
                       thunk_FUN_0041dc40(auStack_30,*(undefined4 *)pSStack_10,
                                          *(undefined2 *)(pSStack_10 + 4),*(short *)(this + 0x6c));
              uVar2 = *puVar9;
              bVar23 = 0;
              sVar22 = 0;
              iVar21 = -1;
              sStack_24 = *(short *)(puVar9 + 1);
              sVar20 = 0;
              sVar19 = 0;
              sVar18 = 0;
              sVar12 = 0;
              sVar17 = 0;
              sVar16 = 0;
              uStack_28 = uVar2;
              if (DAT_0080732c == 1) {
                sVar16 = 0;
                sVar17 = 0;
                sVar12 = 0;
                sVar18 = 0;
                sVar19 = 0;
                sVar20 = 0;
                sVar22 = 0;
                bVar23 = 0;
                lVar15 = Library::MSVCRT::__ftol();
                iVar13 = (int)sStack_24 + *(short *)(this + 0x45) + iStack_18 + (int)(short)lVar15;
                iVar7 = (int)*(short *)(this + 0x43) - (int)uStack_28._2_2_;
                iVar10 = (int)(short)uStack_28 + iVar6 + *(short *)(this + 0x41);
              }
              else {
                iVar13 = (int)sStack_24 + iStack_18 + *(short *)(this + 0x45);
                uStack_28._2_2_ = (short)((uint)uVar2 >> 0x10);
                iVar7 = (int)*(short *)(this + 0x43) - (int)uStack_28._2_2_;
                uStack_28._0_2_ = (short)uVar2;
                iVar10 = (int)(short)uStack_28 + iVar6 + *(short *)(this + 0x41);
              }
              TraksClassTy::TraksCreate
                        (DAT_00802a7c,1,2,7,iVar10,iVar7 + ((uVar8 >> 0x10) % 7 - 3),iVar13,sVar16,
                         sVar17,sVar12,sVar18,sVar19,sVar20,iVar21,sVar22,bVar23);
              pSStack_10 = pSStack_10 + 6;
              iStack_c = iStack_c + 1;
            } while (iStack_c < (int)(uint)(byte)this[0x2bf]);
          }
          if (iStack_14 == -1) {
            iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x361b,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_PMOVE_007ab46c);
            if (iVar6 == 0) {
              return -1;
            }
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          if (iStack_14 != 0) goto LAB_0047a369;
          if (*(int *)(this + 0x635) == 1) {
            sVar16 = *(short *)(this + 0x643);
            sVar17 = *(short *)(this + 0x647);
            sVar12 = *(short *)(this + 0x645);
            if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar12 < 0)) ||
               (((DAT_007fb242 <= sVar12 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))) {
              piStack_8 = (int *)0x0;
            }
            else {
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar17 * (int)DAT_007fb246 +
                                    (int)sVar12 * (int)DAT_007fb240 + (int)sVar16) * 8);
            }
            if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)(this + 0x649))) &&
               ((iVar6 = (**(code **)(*piStack_8 + 0xf8))(), iVar6 != 0 &&
                ((piStack_8[0x12d] == 0 && (*(int *)((int)piStack_8 + 0x245) != 6))))))
            goto LAB_0047a385;
            param_1 = *(int *)((int)DAT_00802a38 + 0xe4);
          }
          else {
LAB_0047a385:
            sVar16 = *(short *)(this + 0x639);
            sVar17 = *(short *)(this + 0x63d);
            sVar12 = *(short *)(this + 0x63b);
            if (((sVar16 < 0) ||
                (((DAT_007fb240 <= sVar16 || (sVar12 < 0)) || (DAT_007fb242 <= sVar12)))) ||
               ((sVar17 < 0 || (DAT_007fb244 <= sVar17)))) {
              piStack_8 = (int *)0x0;
            }
            else {
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar17 * (int)DAT_007fb246 +
                                    (int)sVar12 * (int)DAT_007fb240 + (int)sVar16) * 8);
            }
            if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)(this + 0x63f))) &&
               ((iVar6 = (**(code **)(*piStack_8 + 0xf8))(), iVar6 != 0 &&
                ((piStack_8[0x12d] == 0 && (*(int *)((int)piStack_8 + 0x245) != 6)))))) {
              *(undefined4 *)(this + 0x742) = 1;
              thunk_FUN_004e9650(piStack_8,(undefined4 *)(this + 0x657),(undefined4 *)(this + 0x659)
                                 ,(undefined4 *)(this + 0x65b));
              thunk_FUN_004e96c0(piStack_8,*(int **)(this + 0x18));
              thunk_FUN_004d0970(DAT_00800bcc,(int)*(short *)(this + 0x657),
                                 (int)*(short *)(this + 0x659),(int)*(short *)(this + 0x65b));
              *(undefined4 *)(this + 0x667) = 0;
              *(uint *)(this + 0x663) = (*(int *)(this + 0x635) != 1) + 4;
              goto LAB_0047a369;
            }
            param_1 = *(int *)((int)DAT_00802a38 + 0xe4);
          }
          CmdToObj(this,3,&param_1);
LAB_0047a369:
          iVar6 = (**(code **)(*(int *)this + 0xd8))();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
        iVar6 = thunk_FUN_00460260(this,2);
        switch(iVar6) {
        case 0:
          if (*(int *)(this + 0x635) == 1) {
            sVar16 = *(short *)(this + 0x643);
            sVar17 = *(short *)(this + 0x647);
            sVar12 = *(short *)(this + 0x645);
            if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
               ((sVar12 < 0 ||
                (((DAT_007fb242 <= sVar12 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
              piStack_8 = (int *)0x0;
            }
            else {
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar17 * (int)DAT_007fb246 +
                                    (int)sVar12 * (int)DAT_007fb240 + (int)sVar16) * 8);
            }
            if (piStack_8 == (int *)0x0) {
              return 0;
            }
            if (piStack_8[6] != *(int *)(this + 0x649)) {
              return 0;
            }
            iVar6 = (**(code **)(*piStack_8 + 0xf8))();
            if (iVar6 == 0) {
              return 0;
            }
          }
          sVar16 = *(short *)(this + 0x639);
          sVar17 = *(short *)(this + 0x63d);
          sVar12 = *(short *)(this + 0x63b);
          if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
             (((sVar12 < 0 || ((DAT_007fb242 <= sVar12 || (sVar17 < 0)))) ||
              (DAT_007fb244 <= sVar17)))) {
            piStack_8 = (int *)0x0;
          }
          else {
            piStack_8 = *(int **)(DAT_007fb248 +
                                 ((int)sVar17 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240
                                 + (int)sVar16) * 8);
          }
          if (piStack_8 == (int *)0x0) {
            return 0;
          }
          if (piStack_8[6] != *(int *)(this + 0x63f)) {
            return 0;
          }
          iVar6 = (**(code **)(*piStack_8 + 0xf8))();
          if (iVar6 == 0) {
            return 0;
          }
          if (((*(short *)(this + 0x47) == *(short *)(this + 0x651)) &&
              (*(short *)(this + 0x49) == *(short *)(this + 0x653))) &&
             (*(short *)(this + 0x4b) == *(short *)(this + 0x655))) {
            *(undefined4 *)(this + 0x663) = 3;
            *(undefined4 *)(this + 0x667) = 0;
            return 2;
          }
          thunk_FUN_004e95c0(piStack_8,(int)this);
          return 0;
        case 1:
          sVar16 = *(short *)(this + 0x639);
          sVar17 = *(short *)(this + 0x63d);
          sVar12 = *(short *)(this + 0x63b);
          if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
             ((sVar12 < 0 ||
              (((DAT_007fb242 <= sVar12 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
            piStack_8 = (int *)0x0;
          }
          else {
            piStack_8 = *(int **)(DAT_007fb248 +
                                 ((int)sVar17 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240
                                 + (int)sVar16) * 8);
          }
          if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)(this + 0x63f))) &&
             (iVar6 = (**(code **)(*piStack_8 + 0xf8))(), iVar6 != 0)) {
            if (*(int *)(this + 0x635) != 1) {
              return 2;
            }
            sVar16 = *(short *)(this + 0x643);
            sVar17 = *(short *)(this + 0x647);
            sVar12 = *(short *)(this + 0x645);
            if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
               ((sVar12 < 0 ||
                (((DAT_007fb242 <= sVar12 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
              piStack_8 = (int *)0x0;
            }
            else {
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar17 * (int)DAT_007fb246 +
                                    (int)sVar12 * (int)DAT_007fb240 + (int)sVar16) * 8);
            }
            if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)(this + 0x649))) &&
               (iVar6 = (**(code **)(*piStack_8 + 0xf8))(), iVar6 != 0)) {
              return 2;
            }
          }
          thunk_FUN_004602b0((int *)this);
          return 0;
        default:
          return 2;
        case 3:
          bVar4 = thunk_FUN_004939b0(this,(short *)(this + 0x651),(short *)(this + 0x653),
                                     (short *)(this + 0x655));
          if (CONCAT31(extraout_var_01,bVar4) != 1) {
            sVar16 = *(short *)(this + 0x639);
            sVar17 = *(short *)(this + 0x63d);
            sVar12 = *(short *)(this + 0x63b);
            if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar12 < 0)) ||
               (((DAT_007fb242 <= sVar12 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))) {
              piStack_8 = (int *)0x0;
            }
            else {
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar17 * (int)DAT_007fb246 +
                                    (int)sVar12 * (int)DAT_007fb240 + (int)sVar16) * 8);
            }
            if (piStack_8 == (int *)0x0) {
              return 0;
            }
            if (piStack_8[6] != *(int *)(this + 0x63f)) {
              return 0;
            }
            iVar6 = (**(code **)(*piStack_8 + 0xf8))();
            if (iVar6 == 0) {
              return 0;
            }
            thunk_FUN_004e95c0(piStack_8,(int)this);
            goto LAB_00479e39;
          }
          break;
        case -1:
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3596,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Teleport__TELEPORT_MOVE_007ab4c4);
          if (iVar6 != 0) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          iVar6 = 0x3596;
          goto LAB_00479ba6;
        }
      }
      iVar6 = (int)*(short *)(this + 0x655);
      sVar17 = *(short *)(this + 0x653);
      sVar16 = *(short *)(this + 0x651);
    }
    thunk_FUN_00481520(this,(int)sVar16,(int)sVar17,iVar6);
  }
  thunk_FUN_00460260(this,0);
switchD_00479647_caseD_2:
  return 2;
}

