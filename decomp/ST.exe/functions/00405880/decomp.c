
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall thunk_FUN_00479600(void *this,int param_1)

{
  int *piVar1;
  short *psVar2;
  short *psVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int *extraout_ECX;
  short sVar14;
  int iVar15;
  undefined2 extraout_var_02;
  longlong lVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  int iVar22;
  short sVar23;
  byte bVar24;
  uint uVar25;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  short sStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  int iStack_c;
  int *piStack_8;
  
  piStack_8 = (int *)0x0;
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar11 = (undefined4 *)((int)this + 0x2cc);
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    *(undefined4 *)((int)this + 0x635) = *(undefined4 *)((int)this + 0x405);
    *(undefined2 *)((int)this + 0x639) = *(undefined2 *)((int)this + 0x409);
    *(undefined2 *)((int)this + 0x63b) = *(undefined2 *)((int)this + 0x40b);
    *(undefined2 *)((int)this + 0x63d) = *(undefined2 *)((int)this + 0x40d);
    *(undefined2 *)((int)this + 0x643) = *(undefined2 *)((int)this + 0x40f);
    *(undefined2 *)((int)this + 0x645) = *(undefined2 *)((int)this + 0x411);
    *(undefined2 *)((int)this + 0x647) = *(undefined2 *)((int)this + 0x413);
    *(undefined4 *)((int)this + 0x64d) = 0;
    iVar8 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar8 != 0) {
      return -1;
    }
    iVar8 = *(int *)((int)this + 0x635);
    if (iVar8 == 0) {
      sVar17 = *(short *)((int)this + 0x639);
      sVar18 = *(short *)((int)this + 0x63d);
      sVar14 = *(short *)((int)this + 0x63b);
      if (((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
          ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
        piStack_8 = (int *)0x0;
      }
      else {
        piStack_8 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar18 + (int)sVar14 * (int)DAT_007fb240 +
                             (int)sVar17) * 8);
      }
      if (piStack_8 == (int *)0x0) {
        return 0;
      }
      iVar8 = (**(code **)(*piStack_8 + 0x2c))();
      if (iVar8 != 0x37) {
        return 0;
      }
      *(int *)((int)this + 0x63f) = piStack_8[6];
    }
    else {
      if (iVar8 != 1) {
        if (iVar8 != 2) {
          iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x351b,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Teleport_invalid_type_o_007ab3ac);
          if (iVar8 == 0) {
            return 0;
          }
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        psVar2 = (short *)((int)this + 0x65b);
        *(uint *)((int)this + 0x1c) = uVar10;
        psVar3 = (short *)((int)this + 0x657);
        thunk_FUN_004b2520(*(uint *)((int)this + 0x24),*(int *)((int)this + 0x6f7),
                           (int)*(short *)((int)this + 0x643),(int)*(short *)((int)this + 0x645),
                           (int)*(short *)((int)this + 0x647),(undefined4 *)psVar3,
                           (undefined4 *)((int)this + 0x659),(undefined4 *)psVar2,uVar10 >> 0x10,
                           (int *)((int)this + 0x64d));
        if (*psVar3 < 0) {
          return 0;
        }
        if (*(short *)((int)this + 0x659) < 0) {
          return 0;
        }
        if (*psVar2 < 0) {
          return 0;
        }
        *(undefined4 *)((int)this + 0x742) = 1;
        *(undefined4 *)((int)this + 0x63f) = 0;
        *(undefined4 *)((int)this + 0x649) = 0;
        if (DAT_00800bcc == (void *)0x0) {
          thunk_FUN_004d0f00();
        }
        thunk_FUN_004d0970(DAT_00800bcc,(int)*psVar3,(int)*(short *)((int)this + 0x659),(int)*psVar2
                          );
        *(undefined4 *)((int)this + 0x663) = 5;
        *(undefined4 *)((int)this + 0x667) = 0;
        return 2;
      }
      sVar17 = *(short *)((int)this + 0x639);
      sVar18 = *(short *)((int)this + 0x63d);
      sVar14 = *(short *)((int)this + 0x63b);
      if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
         ((sVar14 < 0 || (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18))))))
      {
        piStack_8 = (int *)0x0;
      }
      else {
        piStack_8 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar18 + (int)sVar14 * (int)DAT_007fb240 +
                             (int)sVar17) * 8);
      }
      if (piStack_8 == (int *)0x0) {
        return 0;
      }
      iVar8 = (**(code **)(*piStack_8 + 0x2c))();
      if (iVar8 != 0x6c) {
        return 0;
      }
      *(int *)((int)this + 0x63f) = piStack_8[6];
      sVar17 = *(short *)((int)this + 0x643);
      sVar18 = *(short *)((int)this + 0x647);
      sVar14 = *(short *)((int)this + 0x645);
      if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
         (((sVar14 < 0 || ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18))))
      {
        piStack_8 = (int *)0x0;
      }
      else {
        piStack_8 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar18 + (int)sVar14 * (int)DAT_007fb240 +
                             (int)sVar17) * 8);
      }
      if (piStack_8 == (int *)0x0) {
        return 0;
      }
      iVar8 = (**(code **)(*piStack_8 + 0x2c))();
      if (iVar8 != 0x6c) {
        return 0;
      }
      *(int *)((int)this + 0x649) = piStack_8[6];
    }
    *(undefined4 *)((int)this + 0x663) = 0;
    *(undefined4 *)((int)this + 0x667) = 0;
    *(undefined4 *)((int)this + 0xb7) = 3;
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x639),(int)*(short *)((int)this + 0x63b),
                       *(short *)((int)this + 0x63d) + 1);
  }
  else {
    iVar8 = *(int *)((int)this + 0x663);
    if (iVar8 == 0) {
      iVar8 = thunk_FUN_00460260(this,2);
      switch(iVar8) {
      case 0:
        *(undefined4 *)((int)this + 0xb7) = 0;
        if (*(int *)((int)this + 0x635) == 1) {
          sVar17 = *(short *)((int)this + 0x643);
          sVar18 = *(short *)((int)this + 0x647);
          sVar14 = *(short *)((int)this + 0x645);
          if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
              ((sVar14 < 0 || ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))))) ||
             (DAT_007fb244 <= sVar18)) {
            piStack_8 = (int *)0x0;
          }
          else {
            piStack_8 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar18 + (int)sVar14 * (int)DAT_007fb240
                                 + (int)sVar17) * 8);
          }
          if (piStack_8 == (int *)0x0) {
            return 0;
          }
          if (piStack_8[6] != *(int *)((int)this + 0x649)) {
            return 0;
          }
          iVar8 = (**(code **)(*piStack_8 + 0xf8))();
          if (iVar8 == 0) {
            return 0;
          }
        }
        sVar17 = *(short *)((int)this + 0x639);
        sVar18 = *(short *)((int)this + 0x63d);
        sVar14 = *(short *)((int)this + 0x63b);
        if (((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
            ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
          piStack_8 = (int *)0x0;
        }
        else {
          piStack_8 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar18 + (int)sVar14 * (int)DAT_007fb240 +
                               (int)sVar17) * 8);
        }
        if (piStack_8 == (int *)0x0) {
          return 0;
        }
        if (piStack_8[6] != *(int *)((int)this + 0x63f)) {
          return 0;
        }
        iVar8 = (**(code **)(*piStack_8 + 0xf8))();
        if (iVar8 == 0) {
          return 0;
        }
        bVar6 = thunk_FUN_004939b0(this,(short *)((int)this + 0x651),(short *)((int)this + 0x653),
                                   (short *)((int)this + 0x655));
        if ((CONCAT31(extraout_var,bVar6) != 1) ||
           (iVar8 = thunk_FUN_004e91e0(piStack_8,this), iVar8 != 1)) {
LAB_00479e39:
          *(undefined4 *)((int)this + 0x663) = 1;
          *(undefined4 *)((int)this + 0x65d) = 0;
          iVar8 = thunk_FUN_004608b0(this,0);
          if (iVar8 != -1) {
            return 2;
          }
          return -1;
        }
        *(undefined4 *)((int)this + 0x663) = 2;
LAB_0047b2dc:
        iVar8 = (int)*(short *)((int)this + 0x655);
        sVar18 = *(short *)((int)this + 0x653);
        sVar17 = *(short *)((int)this + 0x651);
        break;
      case 1:
        sVar17 = *(short *)((int)this + 0x639);
        sVar18 = *(short *)((int)this + 0x63d);
        sVar14 = *(short *)((int)this + 0x63b);
        if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
            ((sVar14 < 0 || ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))))) ||
           (DAT_007fb244 <= sVar18)) {
          piStack_8 = (int *)0x0;
        }
        else {
          piStack_8 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar18 + (int)sVar14 * (int)DAT_007fb240 +
                               (int)sVar17) * 8);
        }
        if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)((int)this + 0x63f))) &&
           (iVar8 = (**(code **)(*piStack_8 + 0xf8))(), iVar8 != 0)) {
          if (*(int *)((int)this + 0x635) != 1) {
            return 2;
          }
          sVar17 = *(short *)((int)this + 0x643);
          sVar18 = *(short *)((int)this + 0x647);
          sVar14 = *(short *)((int)this + 0x645);
          if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
             (((sVar14 < 0 || ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))) ||
              (DAT_007fb244 <= sVar18)))) {
            piStack_8 = (int *)0x0;
          }
          else {
            piStack_8 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar18 + (int)sVar14 * (int)DAT_007fb240
                                 + (int)sVar17) * 8);
          }
          if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)((int)this + 0x649))) &&
             (iVar8 = (**(code **)(*piStack_8 + 0xf8))(), iVar8 != 0)) {
            return 2;
          }
        }
        thunk_FUN_004602b0(this);
        *(undefined4 *)((int)this + 0xb7) = 0;
        return 0;
      default:
        goto switchD_00479647_caseD_2;
      case 3:
        sVar18 = *(short *)((int)this + 0x63b);
        sVar17 = *(short *)((int)this + 0x639);
        iVar8 = *(short *)((int)this + 0x63d) + 1;
        break;
      case -1:
        iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3525,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Teleport__TELEPORT_MOVE_007ab4f8);
        if (iVar8 != 0) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        iVar8 = 0x3525;
LAB_00479ba6:
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar8);
        return 0xffff;
      }
    }
    else {
      if (iVar8 == 1) {
        *(int *)((int)this + 0x65d) = *(int *)((int)this + 0x65d) + 1;
        iVar8 = thunk_FUN_004608b0(this,2);
        if (iVar8 == -1) {
          return -1;
        }
        if (*(int *)((int)this + 0x82e) != 0) {
          return 2;
        }
        if (*(int *)((int)this + 0x48b) != 0xffff) {
          return 2;
        }
        if (*(int *)((int)this + 0x65d) % 10 != 0) {
          return 2;
        }
        if (*(int *)((int)this + 0x635) == 1) {
          sVar17 = *(short *)((int)this + 0x643);
          sVar18 = *(short *)((int)this + 0x647);
          sVar14 = *(short *)((int)this + 0x645);
          if (((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
              ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
            piStack_8 = (int *)0x0;
          }
          else {
            piStack_8 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar18 + (int)sVar14 * (int)DAT_007fb240
                                 + (int)sVar17) * 8);
          }
          if (piStack_8 == (int *)0x0) {
            return 0;
          }
          if (piStack_8[6] != *(int *)((int)this + 0x649)) {
            return 0;
          }
          iVar8 = (**(code **)(*piStack_8 + 0xf8))();
          if (iVar8 == 0) {
            return 0;
          }
        }
        sVar17 = *(short *)((int)this + 0x639);
        sVar18 = *(short *)((int)this + 0x63d);
        sVar14 = *(short *)((int)this + 0x63b);
        if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
           ((sVar14 < 0 || (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18))))
           )) {
          piStack_8 = (int *)0x0;
        }
        else {
          piStack_8 = *(int **)(DAT_007fb248 +
                               ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                               (int)sVar17) * 8);
        }
        if (piStack_8 == (int *)0x0) {
          return 0;
        }
        if (piStack_8[6] != *(int *)((int)this + 0x63f)) {
          return 0;
        }
        iVar8 = (**(code **)(*piStack_8 + 0xf8))();
        if (iVar8 == 0) {
          return 0;
        }
        bVar6 = thunk_FUN_004939b0(this,(short *)((int)this + 0x651),(short *)((int)this + 0x653),
                                   (short *)((int)this + 0x655));
        if (CONCAT31(extraout_var_00,bVar6) != 1) {
          return 2;
        }
        iVar8 = thunk_FUN_004e91e0(piStack_8,this);
        if (iVar8 != 1) {
          return 2;
        }
        *(undefined4 *)((int)this + 0x663) = 2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 != 3) {
            if (iVar8 == 4) {
              if (*(int *)((int)this + 0x667) == 0) {
                iVar8 = *(int *)((int)this + 0x6f7);
                if ((((iVar8 == 7) || (iVar8 == 0x13)) || (iVar8 == 0x1b)) &&
                   ((*(int *)((int)this + 0x7ca) != 0 &&
                    (iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7ca),(int *)&piStack_8
                                         ), iVar8 != -4)))) {
                  iVar22 = (int)*(short *)((int)this + 0x45);
                  iVar8 = (int)*(short *)((int)this + 0x43);
                  iVar9 = (int)*(short *)((int)this + 0x41);
                  uVar25 = 0;
                  iVar12 = 0;
                  uVar10 = thunk_FUN_004ad650((int)piStack_8 + 0x1d5);
                }
                else {
                  iVar22 = (int)*(short *)((int)this + 0x45);
                  iVar8 = (int)*(short *)((int)this + 0x43);
                  iVar9 = (int)*(short *)((int)this + 0x41);
                  uVar25 = 0;
                  uVar10 = *(uint *)((int)this + 0x1ed);
                  iVar12 = 0;
                }
                thunk_FUN_006377b0(uVar10,iVar12,iVar9,iVar8,iVar22,uVar25);
                *(undefined4 *)((int)this + 0x667) = 1;
                *(undefined4 *)((int)this + 0x65d) = 0;
              }
              if ((*(int *)((int)this + 0x667) == 1) &&
                 (iVar8 = *(int *)((int)this + 0x65d) + 1, *(int *)((int)this + 0x65d) = iVar8,
                 iVar8 == 0x16)) {
                *(undefined4 *)((int)this + 0x667) = 2;
                *(undefined4 *)((int)this + 0x65d) = 0;
                thunk_FUN_0041c5a0(this);
                if (((*(int *)((int)this + 0x6f7) == 0xb) || (*(int *)((int)this + 0x6f7) == 0x23))
                   && ((*(int *)((int)this + 0x21d) == 1 &&
                       (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)))) {
                  FUN_006e6780(*(void **)((int)this + 0x211),
                               CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)((int)this + 0x18) >>
                                                         0x10)),*(undefined2 *)((int)this + 0x18)));
                }
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)((int)this + 0x657),
                                   (int)*(short *)((int)this + 0x659),
                                   (int)*(short *)((int)this + 0x65b));
                thunk_FUN_00417a20(this,*(short *)((int)this + 0x657),*(short *)((int)this + 0x659),
                                   *(short *)((int)this + 0x65b),1);
                sVar17 = (*(short *)((int)this + 0x643) + 1) * 0xc9;
                *(short *)((int)this + 0x41) = sVar17;
                sVar18 = (*(short *)((int)this + 0x645) + 1) * 0xc9;
                sVar14 = *(short *)((int)this + 0x647) * 200 + 300;
                *(short *)((int)this + 0x43) = sVar18;
                *(short *)((int)this + 0x45) = sVar14;
                iStack_20 = (int)sVar17;
                thunk_FUN_004ad3c0((void *)((int)this + 0x1d5),
                                   (float)iStack_20 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)sVar18 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)sVar14 * _DAT_007904f8 * _DAT_007904f0);
                thunk_FUN_0041c3f0(this,*(undefined **)((int)this + 0x70a));
                iVar8 = *(int *)((int)this + 0x6f7);
                if ((((iVar8 == 7) || (iVar8 == 0x13)) || (iVar8 == 0x1b)) &&
                   ((*(int *)((int)this + 0x7ca) != 0 &&
                    (iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7ca),(int *)&piStack_8
                                         ), iVar8 != -4)))) {
                  iVar9 = (int)*(short *)((int)this + 0x45);
                  iVar8 = (int)*(short *)((int)this + 0x43);
                  iVar22 = (int)*(short *)((int)this + 0x41);
                  uVar25 = 0;
                  iVar12 = 0;
                  uVar10 = thunk_FUN_004ad650((int)piStack_8 + 0x1d5);
                  thunk_FUN_006377b0(uVar10,iVar12,iVar22,iVar8,iVar9,uVar25);
                  thunk_FUN_004ad430((int)piStack_8 + 0x1d5);
                }
                else {
                  thunk_FUN_006377b0(*(uint *)((int)this + 0x1ed),0,
                                     (int)*(short *)((int)this + 0x41),
                                     (int)*(short *)((int)this + 0x43),
                                     (int)*(short *)((int)this + 0x45),0);
                }
                thunk_FUN_004ad430((int)this + 0x1d5);
              }
              if ((*(int *)((int)this + 0x667) == 2) &&
                 (iVar8 = *(int *)((int)this + 0x65d) + 1, *(int *)((int)this + 0x65d) = iVar8,
                 iVar8 == 0x16)) {
                *(undefined4 *)((int)this + 0x667) = 3;
                iVar8 = *(int *)((int)this + 0x6f7);
                *(undefined4 *)((int)this + 0x65d) = 0;
                if (((iVar8 == 7) || ((iVar8 == 0x13 || (iVar8 == 0x1b)))) &&
                   ((*(int *)((int)this + 0x7ca) != 0 &&
                    (iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7ca),(int *)&piStack_8
                                         ), iVar8 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)piStack_8 + 0x1d5),0);
                }
                thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
                if ((((*(int *)((int)this + 0x6f7) == 0xb) || (*(int *)((int)this + 0x6f7) == 0x23))
                    && (*(int *)((int)this + 0x21d) == 1)) &&
                   (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)) {
                  iStack_20 = (int)*(short *)((int)this + 0x41);
                  FUN_006e6710(*(void **)((int)this + 0x211),
                               (float)iStack_20 * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 *
                               _DAT_007904f0,
                               (float)*(int *)((int)this + 0x10d) * _DAT_007904f8 + _DAT_007904f4,
                               0x28,CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)
                                                                      ((int)this + 0x18) >> 0x10)),
                                             *(undefined2 *)((int)this + 0x18)));
                }
              }
              if ((*(int *)((int)this + 0x667) == 3) &&
                 (iVar8 = *(int *)((int)this + 0x65d) + 1, *(int *)((int)this + 0x65d) = iVar8,
                 iVar8 == 10)) {
                *(undefined4 *)((int)this + 0x663) = 6;
                *(undefined4 *)((int)this + 0x667) = 0;
                *(undefined4 *)((int)this + 0x742) = 0;
              }
              goto LAB_0047adb5;
            }
            if (iVar8 == 5) {
              if (*(int *)((int)this + 0x667) == 0) {
                iVar8 = *(int *)((int)this + 0x6f7);
                if ((((iVar8 == 7) || (iVar8 == 0x13)) || (iVar8 == 0x1b)) &&
                   ((*(int *)((int)this + 0x7ca) != 0 &&
                    (iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7ca),(int *)&piStack_8
                                         ), iVar8 != -4)))) {
                  iVar22 = (int)*(short *)((int)this + 0x45);
                  iVar8 = (int)*(short *)((int)this + 0x43);
                  iVar9 = (int)*(short *)((int)this + 0x41);
                  uVar25 = 0;
                  iVar12 = 0;
                  uVar10 = thunk_FUN_004ad650((int)piStack_8 + 0x1d5);
                }
                else {
                  iVar22 = (int)*(short *)((int)this + 0x45);
                  iVar8 = (int)*(short *)((int)this + 0x43);
                  iVar9 = (int)*(short *)((int)this + 0x41);
                  uVar25 = 0;
                  uVar10 = *(uint *)((int)this + 0x1ed);
                  iVar12 = 0;
                }
                thunk_FUN_006377b0(uVar10,iVar12,iVar9,iVar8,iVar22,uVar25);
                *(undefined4 *)((int)this + 0x667) = 1;
                *(undefined4 *)((int)this + 0x65d) = 0;
              }
              if ((*(int *)((int)this + 0x667) == 1) &&
                 (iVar8 = *(int *)((int)this + 0x65d) + 1, *(int *)((int)this + 0x65d) = iVar8,
                 iVar8 == 0x16)) {
                *(undefined4 *)((int)this + 0x65d) = 0;
                *(undefined4 *)((int)this + 0x667) = 2;
                if (*(int *)((int)this + 0x635) == 2) {
                  iVar8 = *(int *)((int)this + 0x71e) + -10;
                  *(int *)((int)this + 0x71e) = iVar8;
                  if (iVar8 < 0) {
                    *(undefined4 *)((int)this + 0x71e) = 0;
                  }
                  if ((*(int *)((int)this + 0x64d) != 0) && (DAT_00811798 != (void *)0x0)) {
                    thunk_FUN_00620670(DAT_00811798,(int)*(short *)((int)this + 0x47),
                                       (int)*(short *)((int)this + 0x49),*(uint *)((int)this + 0x24)
                                      );
                  }
                  thunk_FUN_004ea6e0(*(uint *)((int)this + 0x24),(int)*(short *)((int)this + 0x657),
                                     (int)*(short *)((int)this + 0x659),
                                     (int)*(short *)((int)this + 0x65b));
                }
                thunk_FUN_0041c5a0(this);
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)((int)this + 0x657),
                                   (int)*(short *)((int)this + 0x659),
                                   (int)*(short *)((int)this + 0x65b));
                thunk_FUN_00417a20(this,*(short *)((int)this + 0x657),*(short *)((int)this + 0x659),
                                   *(short *)((int)this + 0x65b),1);
                iStack_20 = (int)*(short *)((int)this + 0x41);
                thunk_FUN_004ad3c0((void *)((int)this + 0x1d5),
                                   (float)iStack_20 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 *
                                   _DAT_007904f0,
                                   (float)(int)*(short *)((int)this + 0x45) * _DAT_007904f8 *
                                   _DAT_007904f0);
                thunk_FUN_0041c3f0(this,*(undefined **)((int)this + 0x70a));
                iVar8 = *(int *)((int)this + 0x6f7);
                if ((((iVar8 == 7) || (iVar8 == 0x13)) || (iVar8 == 0x1b)) &&
                   ((*(int *)((int)this + 0x7ca) != 0 &&
                    (iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7ca),(int *)&piStack_8
                                         ), iVar8 != -4)))) {
                  iVar9 = (int)*(short *)((int)this + 0x45);
                  iVar8 = (int)*(short *)((int)this + 0x43);
                  iVar22 = (int)*(short *)((int)this + 0x41);
                  uVar25 = 0;
                  iVar12 = 0;
                  uVar10 = thunk_FUN_004ad650((int)piStack_8 + 0x1d5);
                  thunk_FUN_006377b0(uVar10,iVar12,iVar22,iVar8,iVar9,uVar25);
                  thunk_FUN_004ad430((int)piStack_8 + 0x1d5);
                }
                else {
                  thunk_FUN_006377b0(*(uint *)((int)this + 0x1ed),0,
                                     (int)*(short *)((int)this + 0x41),
                                     (int)*(short *)((int)this + 0x43),
                                     (int)*(short *)((int)this + 0x45),0);
                }
                thunk_FUN_004ad430((int)this + 0x1d5);
              }
              if ((*(int *)((int)this + 0x667) == 2) &&
                 (iVar8 = *(int *)((int)this + 0x65d) + 1, *(int *)((int)this + 0x65d) = iVar8,
                 iVar8 == 0x16)) {
                *(undefined4 *)((int)this + 0x667) = 3;
                iVar8 = *(int *)((int)this + 0x6f7);
                *(undefined4 *)((int)this + 0x65d) = 0;
                if (((iVar8 == 7) || ((iVar8 == 0x13 || (iVar8 == 0x1b)))) &&
                   ((*(int *)((int)this + 0x7ca) != 0 &&
                    (iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7ca),(int *)&piStack_8
                                         ), iVar8 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)piStack_8 + 0x1d5),0);
                }
                thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
              }
              if ((*(int *)((int)this + 0x667) == 3) &&
                 (iVar8 = *(int *)((int)this + 0x65d) + 1, *(int *)((int)this + 0x65d) = iVar8,
                 iVar8 == 10)) {
                sVar17 = *(short *)((int)this + 0x639);
                sVar18 = *(short *)((int)this + 0x63d);
                sVar14 = *(short *)((int)this + 0x63b);
                *(undefined4 *)((int)this + 0x742) = 0;
                if ((sVar17 < 0) ||
                   ((((DAT_007fb240 <= sVar17 || (sVar14 < 0)) || (DAT_007fb242 <= sVar14)) ||
                    ((sVar18 < 0 || (DAT_007fb244 <= sVar18)))))) {
                  piStack_8 = (int *)0x0;
                }
                else {
                  piStack_8 = *(int **)(DAT_007fb248 +
                                       ((int)sVar18 * (int)DAT_007fb246 +
                                        (int)sVar14 * (int)DAT_007fb240 + (int)sVar17) * 8);
                }
                if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)((int)this + 0x63f))) &&
                   (iVar8 = (**(code **)(*piStack_8 + 0xf8))(), iVar8 != 0)) {
                  thunk_FUN_004e95c0(piStack_8,(int)this);
                }
                iVar8 = (**(code **)(*(int *)this + 0xd8))();
                if (iVar8 != 0) {
                  return -1;
                }
LAB_0047acdc:
                iVar8 = thunk_FUN_004b2d10((byte)*(undefined4 *)((int)this + 0x24),
                                           *(int *)((int)this + 0x6f7),
                                           (int)*(short *)((int)this + 0x5b),
                                           (int)*(short *)((int)this + 0x5d));
                if (iVar8 == 0) {
                  return 0;
                }
                thunk_FUN_00495010(this,0xaf);
                return 0;
              }
              goto LAB_0047adb5;
            }
            if (iVar8 != 6) {
              if (iVar8 != 7) {
                iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3744,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Teleport___incorrect_en_007ab3e8
                                          );
                if (iVar8 == 0) {
                  return -1;
                }
                pcVar5 = (code *)swi(3);
                iVar8 = (*pcVar5)();
                return iVar8;
              }
              iVar8 = thunk_FUN_00460260(this,2);
              if (iVar8 == -1) {
                return -1;
              }
              if (iVar8 == 0) goto LAB_0047acdc;
              if (iVar8 != 3) {
                return 2;
              }
              iVar22 = CONCAT22(extraout_var_02,*(undefined2 *)((int)this + 0x651));
              uVar10 = (uint)(ushort)(*(short *)((int)this + 0x655) + 1);
              iVar8 = CONCAT22((short)((uint)((int)this + 0x651) >> 0x10),
                               *(short *)((int)this + 0x653));
              thunk_FUN_0048dfd0(iVar22,iVar8,uVar10,iVar22,iVar8,(int *)uVar10,1,
                                 (short *)((int)this + 0x651),(short *)((int)this + 0x653),
                                 (short *)((int)this + 0x655));
              goto LAB_0047b2dc;
            }
            if (*(int *)((int)this + 0x667) == 0) {
              iVar8 = (ushort)(*(short *)((int)this + 0x65b) * 200) + 100;
              iVar9 = CONCAT22((short)((uint)this >> 0x10),*(short *)((int)this + 0x659) * 0xc9) +
                      100;
              iVar22 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)((int)this + 0x657) * 0xc9) +
                       100;
              uVar7 = (undefined2)((uint)iVar9 >> 0x10);
              uVar7 = (**(code **)(*(int *)this + 0x10))
                                (CONCAT22(uVar7,*(undefined2 *)((int)this + 0x41)),
                                 CONCAT22((short)((uint)iVar22 >> 0x10),
                                          *(undefined2 *)((int)this + 0x43)),
                                 CONCAT22(uVar7,*(undefined2 *)((int)this + 0x45)),iVar22,iVar9,
                                 iVar8);
              *(undefined2 *)((int)this + 0x661) = uVar7;
              *(undefined4 *)((int)this + 0x667) = 1;
            }
            if (*(int *)((int)this + 0x667) == 1) {
              uVar10 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x661));
              uVar10 = thunk_FUN_00417910(this,(short)uVar10);
              if (uVar10 == 0xffffffff) {
                iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x36e3,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_OMOVE_007ab440
                                          );
                if (iVar8 == 0) {
                  return -1;
                }
                pcVar5 = (code *)swi(3);
                iVar8 = (*pcVar5)();
                return iVar8;
              }
              goto joined_r0x0047ada9;
            }
            if (*(int *)((int)this + 0x667) == 2) {
              thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                                 *(short *)((int)this + 0x45),
                                 *(short *)((int)this + 0x657) * 0xc9 + 100,
                                 *(short *)((int)this + 0x659) * 0xc9 + 100,
                                 *(short *)((int)this + 0x65b) * 200 + 100,
                                 *(byte *)((int)this + 0x61));
              *(undefined4 *)((int)this + 0x667) = 3;
            }
            if (*(int *)((int)this + 0x667) != 3) goto LAB_0047adb5;
            iStack_14 = thunk_FUN_00415ed0(this,&iStack_18,&uStack_1c);
            uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar10;
            iVar8 = (uVar10 >> 0x10) % 7 - 3;
            uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar10;
            uVar25 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar25;
            iStack_20 = (uVar25 >> 0x10) % 7 - 3;
            if ((*(int *)((int)this + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
               (iStack_c = 0, *(char *)((int)this + 0x2bf) != '\0')) {
              puStack_10 = (undefined4 *)((int)this + 0x2b3);
              do {
                puVar11 = (undefined4 *)
                          thunk_FUN_0041dc40(auStack_30,*puStack_10,*(undefined2 *)(puStack_10 + 1),
                                             *(short *)((int)this + 0x6c));
                uVar4 = *puVar11;
                bVar24 = 0;
                sVar23 = 0;
                iVar22 = -1;
                sStack_24 = *(short *)(puVar11 + 1);
                sVar21 = 0;
                sVar20 = 0;
                sVar19 = 0;
                sVar14 = 0;
                sVar18 = 0;
                sVar17 = 0;
                uStack_28 = uVar4;
                if (DAT_0080732c == 1) {
                  sVar17 = 0;
                  sVar18 = 0;
                  sVar14 = 0;
                  sVar19 = 0;
                  sVar20 = 0;
                  sVar21 = 0;
                  sVar23 = 0;
                  bVar24 = 0;
                  lVar16 = __ftol();
                  iVar15 = (int)sStack_24 +
                           *(short *)((int)this + 0x45) + iStack_20 + (int)(short)lVar16;
                  iVar9 = (int)*(short *)((int)this + 0x43) - (int)uStack_28._2_2_;
                  iVar12 = (int)(short)uStack_28 + iVar8 + *(short *)((int)this + 0x41);
                }
                else {
                  iVar15 = (int)sStack_24 + iStack_20 + *(short *)((int)this + 0x45);
                  uStack_28._2_2_ = (short)((uint)uVar4 >> 0x10);
                  iVar9 = (int)*(short *)((int)this + 0x43) - (int)uStack_28._2_2_;
                  uStack_28._0_2_ = (short)uVar4;
                  iVar12 = (int)(short)uStack_28 + iVar8 + *(short *)((int)this + 0x41);
                }
                thunk_FUN_00556760(DAT_00802a7c,1,2,7,iVar12,iVar9 + ((uVar10 >> 0x10) % 7 - 3),
                                   iVar15,sVar17,sVar18,sVar14,sVar19,sVar20,sVar21,iVar22,sVar23,
                                   bVar24);
                puStack_10 = (undefined4 *)((int)puStack_10 + 6);
                iStack_c = iStack_c + 1;
              } while (iStack_c < (int)(uint)*(byte *)((int)this + 0x2bf));
            }
            if (iStack_14 == -1) {
              iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x370a,0,0,
                                         &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_OMOVE_007ab414);
              if (iVar8 == 0) {
                return -1;
              }
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
            if (iStack_14 != 0) goto LAB_0047adb5;
            sVar17 = *(short *)((int)this + 0x639);
            iVar8 = 0;
            sVar18 = *(short *)((int)this + 0x63d);
            sVar14 = *(short *)((int)this + 0x63b);
            if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
               (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
              piStack_8 = (int *)0x0;
            }
            else {
              iVar8 = (int)sVar17;
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar18 * (int)DAT_007fb246 +
                                    (int)sVar14 * (int)DAT_007fb240 + iVar8) * 8);
            }
            if ((piStack_8 != (int *)0x0) &&
               (iVar8 = piStack_8[6], iVar8 == *(int *)((int)this + 0x63f))) {
              iVar22 = (**(code **)(*piStack_8 + 0xf8))();
              iVar8 = 0;
              if (iVar22 != 0) {
                iVar8 = thunk_FUN_004e95c0(piStack_8,(int)this);
              }
            }
            sVar17 = *(short *)((int)this + 0x643);
            iVar8 = CONCAT22((short)((uint)iVar8 >> 0x10),sVar17);
            sVar18 = *(short *)((int)this + 0x647);
            sVar14 = *(short *)((int)this + 0x645);
            if (((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
                ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
              piVar13 = (int *)0x0;
            }
            else {
              iVar8 = (int)sVar17;
              piVar13 = *(int **)(DAT_007fb248 +
                                 ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240
                                 + iVar8) * 8);
            }
            piStack_8 = piVar13;
            if ((piVar13 == (int *)0x0) ||
               (iVar8 = piVar13[6], iVar8 != *(int *)((int)this + 0x649))) {
LAB_0047b1c5:
              iVar22 = CONCAT22((short)((uint)piVar13 >> 0x10),*(undefined2 *)((int)this + 0x645));
              uVar10 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)((int)this + 0x647) + 1);
              iVar8 = CONCAT22((short)((uint)((int)this + 0x651) >> 0x10),
                               *(undefined2 *)((int)this + 0x643));
              iVar8 = thunk_FUN_0048dfd0(iVar8,iVar22,uVar10,iVar8,iVar22,(int *)uVar10,2,
                                         (short *)((int)this + 0x651),(short *)((int)this + 0x653),
                                         (short *)((int)this + 0x655));
joined_r0x0047b202:
              if (iVar8 == 0) {
                *(undefined2 *)((int)this + 0x651) = *(undefined2 *)((int)this + 0x47);
                *(undefined2 *)((int)this + 0x653) = *(undefined2 *)((int)this + 0x49);
                *(undefined2 *)((int)this + 0x655) = *(undefined2 *)((int)this + 0x4b);
              }
            }
            else {
              iVar22 = (**(code **)(*piVar13 + 0xf8))();
              iVar8 = 0;
              piVar13 = extraout_ECX;
              if (iVar22 == 0) goto LAB_0047b1c5;
              piVar13 = (int *)((int)this + 0x655);
              piVar1 = (int *)((int)this + 0x653);
              if (piStack_8[0x10b] != 0) {
                if ((int *)((int)this + 0x651) != (int *)0x0) {
                  *(int *)((int)this + 0x651) = piStack_8[0x10c];
                }
                if (piVar1 != (int *)0x0) {
                  *piVar1 = piStack_8[0x10d];
                }
                if (piVar13 != (int *)0x0) {
                  *piVar13 = piStack_8[0x10e];
                }
              }
              if (piStack_8[0x10b] == 0) {
                uVar10 = CONCAT22((short)((uint)piStack_8 >> 0x10),*(short *)((int)this + 0x647) + 1
                                 );
                iVar8 = CONCAT22((short)((uint)((int)this + 0x651) >> 0x10),
                                 *(undefined2 *)((int)this + 0x643));
                iVar8 = thunk_FUN_0048dfd0(iVar8,(uint)*(ushort *)((int)this + 0x645),uVar10,iVar8,
                                           (uint)*(ushort *)((int)this + 0x645),(int *)uVar10,2,
                                           (short *)((int)this + 0x651),(short *)piVar1,
                                           (short *)piVar13);
                goto joined_r0x0047b202;
              }
            }
            thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x651),
                               (int)*(short *)((int)this + 0x653),(int)*(short *)((int)this + 0x655)
                              );
            thunk_FUN_00460260(this,0);
            *(undefined4 *)((int)this + 0x663) = 7;
LAB_0047adb5:
            iVar8 = (**(code **)(*(int *)this + 0xd8))();
            return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
          }
          if (*(int *)((int)this + 0x667) == 0) {
            iVar9 = (ushort)(*(short *)((int)this + 0x63d) * 200) + 300;
            iVar22 = CONCAT22((short)((uint)iVar9 >> 0x10),*(short *)((int)this + 0x63b) + 1) * 0xc9
            ;
            iVar12 = CONCAT22((short)((uint)iVar22 >> 0x10),*(short *)((int)this + 0x639) + 1);
            iVar8 = iVar12 * 0xc9;
            uVar7 = (undefined2)((uint)(iVar12 * 0x19) >> 0x10);
            uVar7 = (**(code **)(*(int *)this + 0x10))
                              (CONCAT22(uVar7,*(undefined2 *)((int)this + 0x41)),
                               CONCAT22((short)((uint)iVar8 >> 0x10),
                                        *(undefined2 *)((int)this + 0x43)),
                               CONCAT22(uVar7,*(undefined2 *)((int)this + 0x45)),iVar8,iVar22,iVar9)
            ;
            *(undefined2 *)((int)this + 0x661) = uVar7;
            *(undefined4 *)((int)this + 0x667) = 1;
          }
          if (*(int *)((int)this + 0x667) == 1) {
            uVar10 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x661));
            uVar10 = thunk_FUN_00417910(this,(short)uVar10);
            if (uVar10 == 0xffffffff) {
              iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x35f4,0,0,
                                         &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_PMOVE_007ab498);
              if (iVar8 == 0) {
                return -1;
              }
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
joined_r0x0047ada9:
            if (uVar10 == 0) {
              *(undefined4 *)((int)this + 0x667) = 2;
            }
            goto LAB_0047adb5;
          }
          if (*(int *)((int)this + 0x667) == 2) {
            thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                               *(short *)((int)this + 0x45),
                               (*(short *)((int)this + 0x639) + 1) * 0xc9,
                               (*(short *)((int)this + 0x63b) + 1) * 0xc9,
                               *(short *)((int)this + 0x63d) * 200 + 300,*(byte *)((int)this + 0x61)
                              );
            *(undefined4 *)((int)this + 0x667) = 3;
          }
          if (*(int *)((int)this + 0x667) != 3) goto LAB_0047a369;
          iStack_14 = thunk_FUN_00415ed0(this,&iStack_20,&uStack_1c);
          uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar10;
          iVar8 = (uVar10 >> 0x10) % 7 - 3;
          uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar10;
          uVar25 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar25;
          iStack_18 = (uVar25 >> 0x10) % 7 - 3;
          if ((*(int *)((int)this + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
             (iStack_c = 0, *(char *)((int)this + 0x2bf) != '\0')) {
            puStack_10 = (undefined4 *)((int)this + 0x2b3);
            do {
              puVar11 = (undefined4 *)
                        thunk_FUN_0041dc40(auStack_30,*puStack_10,*(undefined2 *)(puStack_10 + 1),
                                           *(short *)((int)this + 0x6c));
              uVar4 = *puVar11;
              bVar24 = 0;
              sVar23 = 0;
              iVar22 = -1;
              sStack_24 = *(short *)(puVar11 + 1);
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              sVar14 = 0;
              sVar18 = 0;
              sVar17 = 0;
              uStack_28 = uVar4;
              if (DAT_0080732c == 1) {
                sVar17 = 0;
                sVar18 = 0;
                sVar14 = 0;
                sVar19 = 0;
                sVar20 = 0;
                sVar21 = 0;
                sVar23 = 0;
                bVar24 = 0;
                lVar16 = __ftol();
                iVar15 = (int)sStack_24 +
                         *(short *)((int)this + 0x45) + iStack_18 + (int)(short)lVar16;
                iVar9 = (int)*(short *)((int)this + 0x43) - (int)uStack_28._2_2_;
                iVar12 = (int)(short)uStack_28 + iVar8 + *(short *)((int)this + 0x41);
              }
              else {
                iVar15 = (int)sStack_24 + iStack_18 + *(short *)((int)this + 0x45);
                uStack_28._2_2_ = (short)((uint)uVar4 >> 0x10);
                iVar9 = (int)*(short *)((int)this + 0x43) - (int)uStack_28._2_2_;
                uStack_28._0_2_ = (short)uVar4;
                iVar12 = (int)(short)uStack_28 + iVar8 + *(short *)((int)this + 0x41);
              }
              thunk_FUN_00556760(DAT_00802a7c,1,2,7,iVar12,iVar9 + ((uVar10 >> 0x10) % 7 - 3),iVar15
                                 ,sVar17,sVar18,sVar14,sVar19,sVar20,sVar21,iVar22,sVar23,bVar24);
              puStack_10 = (undefined4 *)((int)puStack_10 + 6);
              iStack_c = iStack_c + 1;
            } while (iStack_c < (int)(uint)*(byte *)((int)this + 0x2bf));
          }
          if (iStack_14 == -1) {
            iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x361b,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_PMOVE_007ab46c);
            if (iVar8 == 0) {
              return -1;
            }
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          if (iStack_14 != 0) goto LAB_0047a369;
          if (*(int *)((int)this + 0x635) == 1) {
            sVar17 = *(short *)((int)this + 0x643);
            sVar18 = *(short *)((int)this + 0x647);
            sVar14 = *(short *)((int)this + 0x645);
            if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
               (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
              piStack_8 = (int *)0x0;
            }
            else {
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar18 * (int)DAT_007fb246 +
                                    (int)sVar14 * (int)DAT_007fb240 + (int)sVar17) * 8);
            }
            if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)((int)this + 0x649))) &&
               ((iVar8 = (**(code **)(*piStack_8 + 0xf8))(), iVar8 != 0 &&
                ((piStack_8[0x12d] == 0 && (*(int *)((int)piStack_8 + 0x245) != 6))))))
            goto LAB_0047a385;
            param_1 = *(int *)((int)DAT_00802a38 + 0xe4);
          }
          else {
LAB_0047a385:
            sVar17 = *(short *)((int)this + 0x639);
            sVar18 = *(short *)((int)this + 0x63d);
            sVar14 = *(short *)((int)this + 0x63b);
            if (((sVar17 < 0) ||
                (((DAT_007fb240 <= sVar17 || (sVar14 < 0)) || (DAT_007fb242 <= sVar14)))) ||
               ((sVar18 < 0 || (DAT_007fb244 <= sVar18)))) {
              piStack_8 = (int *)0x0;
            }
            else {
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar18 * (int)DAT_007fb246 +
                                    (int)sVar14 * (int)DAT_007fb240 + (int)sVar17) * 8);
            }
            if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)((int)this + 0x63f))) &&
               ((iVar8 = (**(code **)(*piStack_8 + 0xf8))(), iVar8 != 0 &&
                ((piStack_8[0x12d] == 0 && (*(int *)((int)piStack_8 + 0x245) != 6)))))) {
              *(undefined4 *)((int)this + 0x742) = 1;
              thunk_FUN_004e9650(piStack_8,(undefined4 *)((int)this + 0x657),
                                 (undefined4 *)((int)this + 0x659),(undefined4 *)((int)this + 0x65b)
                                );
              thunk_FUN_004e96c0(piStack_8,*(int **)((int)this + 0x18));
              thunk_FUN_004d0970(DAT_00800bcc,(int)*(short *)((int)this + 0x657),
                                 (int)*(short *)((int)this + 0x659),
                                 (int)*(short *)((int)this + 0x65b));
              *(undefined4 *)((int)this + 0x667) = 0;
              *(uint *)((int)this + 0x663) = (*(int *)((int)this + 0x635) != 1) + 4;
              goto LAB_0047a369;
            }
            param_1 = *(int *)((int)DAT_00802a38 + 0xe4);
          }
          thunk_FUN_0045ef00(this,3,&param_1);
LAB_0047a369:
          iVar8 = (**(code **)(*(int *)this + 0xd8))();
          return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
        }
        iVar8 = thunk_FUN_00460260(this,2);
        switch(iVar8) {
        case 0:
          if (*(int *)((int)this + 0x635) == 1) {
            sVar17 = *(short *)((int)this + 0x643);
            sVar18 = *(short *)((int)this + 0x647);
            sVar14 = *(short *)((int)this + 0x645);
            if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
               ((sVar14 < 0 ||
                (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
              piStack_8 = (int *)0x0;
            }
            else {
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar18 * (int)DAT_007fb246 +
                                    (int)sVar14 * (int)DAT_007fb240 + (int)sVar17) * 8);
            }
            if (piStack_8 == (int *)0x0) {
              return 0;
            }
            if (piStack_8[6] != *(int *)((int)this + 0x649)) {
              return 0;
            }
            iVar8 = (**(code **)(*piStack_8 + 0xf8))();
            if (iVar8 == 0) {
              return 0;
            }
          }
          sVar17 = *(short *)((int)this + 0x639);
          sVar18 = *(short *)((int)this + 0x63d);
          sVar14 = *(short *)((int)this + 0x63b);
          if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
             (((sVar14 < 0 || ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))) ||
              (DAT_007fb244 <= sVar18)))) {
            piStack_8 = (int *)0x0;
          }
          else {
            piStack_8 = *(int **)(DAT_007fb248 +
                                 ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240
                                 + (int)sVar17) * 8);
          }
          if (piStack_8 == (int *)0x0) {
            return 0;
          }
          if (piStack_8[6] != *(int *)((int)this + 0x63f)) {
            return 0;
          }
          iVar8 = (**(code **)(*piStack_8 + 0xf8))();
          if (iVar8 == 0) {
            return 0;
          }
          if (((*(short *)((int)this + 0x47) == *(short *)((int)this + 0x651)) &&
              (*(short *)((int)this + 0x49) == *(short *)((int)this + 0x653))) &&
             (*(short *)((int)this + 0x4b) == *(short *)((int)this + 0x655))) {
            *(undefined4 *)((int)this + 0x663) = 3;
            *(undefined4 *)((int)this + 0x667) = 0;
            return 2;
          }
          thunk_FUN_004e95c0(piStack_8,(int)this);
          return 0;
        case 1:
          sVar17 = *(short *)((int)this + 0x639);
          sVar18 = *(short *)((int)this + 0x63d);
          sVar14 = *(short *)((int)this + 0x63b);
          if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
             ((sVar14 < 0 ||
              (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
            piStack_8 = (int *)0x0;
          }
          else {
            piStack_8 = *(int **)(DAT_007fb248 +
                                 ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240
                                 + (int)sVar17) * 8);
          }
          if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)((int)this + 0x63f))) &&
             (iVar8 = (**(code **)(*piStack_8 + 0xf8))(), iVar8 != 0)) {
            if (*(int *)((int)this + 0x635) != 1) {
              return 2;
            }
            sVar17 = *(short *)((int)this + 0x643);
            sVar18 = *(short *)((int)this + 0x647);
            sVar14 = *(short *)((int)this + 0x645);
            if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
               ((sVar14 < 0 ||
                (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
              piStack_8 = (int *)0x0;
            }
            else {
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar18 * (int)DAT_007fb246 +
                                    (int)sVar14 * (int)DAT_007fb240 + (int)sVar17) * 8);
            }
            if (((piStack_8 != (int *)0x0) && (piStack_8[6] == *(int *)((int)this + 0x649))) &&
               (iVar8 = (**(code **)(*piStack_8 + 0xf8))(), iVar8 != 0)) {
              return 2;
            }
          }
          thunk_FUN_004602b0(this);
          return 0;
        default:
          return 2;
        case 3:
          bVar6 = thunk_FUN_004939b0(this,(short *)((int)this + 0x651),(short *)((int)this + 0x653),
                                     (short *)((int)this + 0x655));
          if (CONCAT31(extraout_var_01,bVar6) != 1) {
            sVar17 = *(short *)((int)this + 0x639);
            sVar18 = *(short *)((int)this + 0x63d);
            sVar14 = *(short *)((int)this + 0x63b);
            if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
               (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
              piStack_8 = (int *)0x0;
            }
            else {
              piStack_8 = *(int **)(DAT_007fb248 +
                                   ((int)sVar18 * (int)DAT_007fb246 +
                                    (int)sVar14 * (int)DAT_007fb240 + (int)sVar17) * 8);
            }
            if (piStack_8 == (int *)0x0) {
              return 0;
            }
            if (piStack_8[6] != *(int *)((int)this + 0x63f)) {
              return 0;
            }
            iVar8 = (**(code **)(*piStack_8 + 0xf8))();
            if (iVar8 == 0) {
              return 0;
            }
            thunk_FUN_004e95c0(piStack_8,(int)this);
            goto LAB_00479e39;
          }
          break;
        case -1:
          iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3596,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Teleport__TELEPORT_MOVE_007ab4c4);
          if (iVar8 != 0) {
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          iVar8 = 0x3596;
          goto LAB_00479ba6;
        }
      }
      iVar8 = (int)*(short *)((int)this + 0x655);
      sVar18 = *(short *)((int)this + 0x653);
      sVar17 = *(short *)((int)this + 0x651);
    }
    thunk_FUN_00481520(this,(int)sVar17,(int)sVar18,iVar8);
  }
  thunk_FUN_00460260(this,0);
switchD_00479647_caseD_2:
  return 2;
}

