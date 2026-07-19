
int __thiscall STBoatC::LoadRC(STBoatC *this,int *param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  int iVar7;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 extraout_var_20;
  undefined2 extraout_var_21;
  uint uVar13;
  undefined4 in_EDX;
  undefined2 extraout_var_22;
  undefined2 extraout_var_23;
  int *piVar14;
  undefined2 extraout_var_24;
  undefined2 extraout_var_25;
  STBoatC *pSVar15;
  longlong lVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  byte bVar24;
  undefined4 uVar25;
  undefined4 auStack_2c [2];
  undefined4 uStack_24;
  short sStack_20;
  uint uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  STBoatC *pSStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
    pSVar15 = this + 0x2cc;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pSVar15 = 0;
      pSVar15 = pSVar15 + 4;
    }
    *(undefined4 *)(this + 0x2c4) = 0;
    *(undefined2 *)(this + 0x49b) = *(undefined2 *)(this + 0x353);
    *(undefined2 *)(this + 0x49d) = *(undefined2 *)(this + 0x355);
    *(undefined2 *)(this + 0x49f) = *(undefined2 *)(this + 0x357);
    *(undefined4 *)(this + 0x4a1) = *(undefined4 *)(this + 0x359);
    *(undefined2 *)(this + 0x4a5) = *(undefined2 *)(this + 0x35d);
    *(undefined2 *)(this + 0x4a7) = *(undefined2 *)(this + 0x35f);
    *(undefined2 *)(this + 0x4a9) = *(undefined2 *)(this + 0x361);
    *(undefined4 *)(this + 0x4ab) = *(undefined4 *)(this + 0x363);
    *(undefined4 *)(this + 0x4b5) = *(undefined4 *)(this + 0x367);
    *(undefined4 *)(this + 0x4b9) = *(undefined4 *)(this + 0x36b);
    *(undefined4 *)(this + 0x4c1) = 0;
    *(undefined4 *)(this + 0x4bd) = 0;
    *(undefined4 *)(this + 0x4d1) = 0;
    *(undefined4 *)(this + 0x4cd) = 0;
    bVar3 = thunk_FUN_0048d440((int)this);
    iVar6 = CONCAT31(extraout_var_16,bVar3);
    if (iVar6 == 0) {
LAB_00469972:
      *(undefined4 *)(this + 0x4d5) = 0;
      goto LAB_00469979;
    }
    *(int *)(this + 0x4d5) = iVar6;
    *(undefined4 *)(this + 0xb7) = 3;
    if (iVar6 == 1) {
      sVar19 = *(short *)(this + 0x49f);
      sVar18 = *(short *)(this + 0x49d);
      sVar17 = *(short *)(this + 0x49b);
    }
    else {
      sVar19 = *(short *)(this + 0x4a9);
      sVar18 = *(short *)(this + 0x4a7);
      sVar17 = *(short *)(this + 0x4a5);
    }
    iVar8 = sVar19 + 1;
    iVar6 = (int)sVar18;
    iVar7 = (int)sVar17;
LAB_004699da:
    thunk_FUN_00481520(this,iVar7,iVar6,iVar8);
  }
  else {
    iVar6 = *(int *)(this + 0x4d5);
    if (iVar6 == 0) {
      iVar6 = Defence(this,2);
      if (iVar6 == -1) {
        return -1;
      }
      if (*(int *)(this + 0x82e) != 0) {
        return 2;
      }
      if (*(int *)(this + 0x4bd) == 1) {
LAB_00465cda:
        *(undefined4 *)(this + 0x4bd) = 0;
        if (*(int *)(this + 0x4a1) != -1) {
          sVar17 = *(short *)(this + 0x49b);
          sVar18 = *(short *)(this + 0x49f);
          sVar19 = *(short *)(this + 0x49d);
          if (((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
              ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar18 + (int)DAT_007fb240 * (int)sVar19 +
                            (int)sVar17) * 8);
          }
          if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
            *(undefined4 *)(this + 0x4a1) = 0xffffffff;
          }
        }
      }
      else {
        if (*(int *)(this + 0x4c1) != 1) {
          return 2;
        }
        if (*(int *)(this + 0x4bd) == 1) goto LAB_00465cda;
      }
      if (*(int *)(this + 0x4c1) == 1) {
        *(undefined4 *)(this + 0x4c1) = 0;
        if (*(int *)(this + 0x4ab) != -1) {
          sVar17 = *(short *)(this + 0x4a5);
          sVar18 = *(short *)(this + 0x4a9);
          sVar19 = *(short *)(this + 0x4a7);
          if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
             ((sVar19 < 0 ||
              (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(DAT_007fb248 +
                            ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                            (int)sVar17) * 8);
          }
          if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
            *(undefined4 *)(this + 0x4ab) = 0xffffffff;
          }
        }
      }
      bVar3 = thunk_FUN_0048d440((int)this);
      if (CONCAT31(extraout_var,bVar3) == 0) {
        return 2;
      }
      if (CONCAT31(extraout_var,bVar3) == 1) {
        if (*(int *)(this + 0x4a1) == -1) {
          return 2;
        }
LAB_00465e40:
        *(undefined4 *)(this + 0x4cd) = 0;
        *(undefined4 *)(this + 0x4d5) = 1;
        *(undefined4 *)(this + 0xb7) = 3;
        goto LAB_00465e5a;
      }
LAB_00468742:
      *(undefined4 *)(this + 0x4cd) = 0;
      *(undefined4 *)(this + 0x4d5) = 7;
      *(undefined4 *)(this + 0xb7) = 3;
LAB_0046875c:
      sVar17 = *(short *)(this + 0x4a9);
      sVar18 = *(short *)(this + 0x4a7);
      sVar19 = *(short *)(this + 0x4a5);
LAB_00465e72:
      thunk_FUN_00481520(this,(int)sVar19,(int)sVar18,sVar17 + 1);
LAB_00465e7b:
      thunk_FUN_00460260(this,0);
      return 2;
    }
    if (iVar6 == 1) {
      if (*(int *)(this + 0x4cd) < 1) {
        iVar6 = thunk_FUN_00460260(this,2);
        switch(iVar6) {
        case 0:
          iVar6 = thunk_FUN_00490570((int)this);
          if (iVar6 == 1) {
            sVar17 = *(short *)(this + 0x49b);
            sVar18 = *(short *)(this + 0x49f);
            sVar19 = *(short *)(this + 0x49d);
            if ((((((-1 < sVar17) && (sVar17 < DAT_007fb240)) && (-1 < sVar19)) &&
                 ((sVar19 < DAT_007fb242 && (-1 < sVar18)))) &&
                ((sVar18 < DAT_007fb244 &&
                 ((iVar6 = *(int *)(DAT_007fb248 +
                                   ((int)sVar18 * (int)DAT_007fb246 +
                                    (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8), iVar6 != 0
                  && (*(int *)(iVar6 + 0x18) == *(int *)(this + 0x4a1))))))) &&
               (iVar6 = thunk_FUN_004e1490(iVar6), iVar6 != 1)) {
              uVar5 = (undefined2)((uint)(this + 0x4af) >> 0x10);
              thunk_FUN_0048dfd0(CONCAT22(uVar5,*(undefined2 *)(this + 0x47)),
                                 CONCAT22(extraout_var_22,*(undefined2 *)(this + 0x49)),
                                 CONCAT22(extraout_var_17,*(undefined2 *)(this + 0x4b)),
                                 CONCAT22(uVar5,*(undefined2 *)(this + 0x49b)),
                                 CONCAT22(extraout_var_22,*(undefined2 *)(this + 0x49d)),
                                 (int *)CONCAT22(extraout_var_17,*(short *)(this + 0x49f) + 1),1,
                                 (short *)(this + 0x4af),(short *)(this + 0x4b1),
                                 (short *)(this + 0x4b3));
              *(undefined4 *)(this + 0x4d5) = 2;
              *(undefined4 *)(this + 0xb7) = 0;
              thunk_FUN_00481520(this,(int)*(short *)(this + 0x4af),(int)*(short *)(this + 0x4b1),
                                 (int)*(short *)(this + 0x4b3));
              break;
            }
          }
          *(undefined4 *)(this + 0x4d5) = 3;
          goto LAB_00469979;
        case 1:
          if ((*(int *)(this + 0x4bd) != 1) && (*(int *)(this + 0x4c1) != 1))
          goto switchD_004660af_caseD_2;
          pSStack_c = (STBoatC *)0x0;
          if (*(int *)(this + 0x4bd) == 1) {
            *(undefined4 *)(this + 0x4bd) = 0;
            if (*(int *)(this + 0x4a1) != -1) {
              sVar17 = *(short *)(this + 0x49b);
              sVar18 = *(short *)(this + 0x49f);
              sVar19 = *(short *)(this + 0x49d);
              if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                 ((sVar19 < 0 ||
                  (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                                (int)sVar17) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
                *(undefined4 *)(this + 0x4a1) = 0xffffffff;
              }
            }
            if (*(int *)(this + 0x4a1) != -1) {
              pSStack_c = (STBoatC *)0x1;
            }
          }
          if (*(int *)(this + 0x4c1) == 1) {
            *(undefined4 *)(this + 0x4c1) = 0;
            if (*(int *)(this + 0x4ab) != -1) {
              sVar17 = *(short *)(this + 0x4a5);
              sVar18 = *(short *)(this + 0x4a9);
              sVar19 = *(short *)(this + 0x4a7);
              if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                  ((sVar19 < 0 || ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))))) ||
                 (DAT_007fb244 <= sVar18)) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                                (int)sVar17) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
                *(undefined4 *)(this + 0x4ab) = 0xffffffff;
              }
            }
          }
          bVar3 = thunk_FUN_0048d440((int)this);
          if (CONCAT31(extraout_var_01,bVar3) == 0) goto LAB_00467fe4;
          if (CONCAT31(extraout_var_01,bVar3) == 1) {
            if ((*(int *)(this + 0x4a1) != -1) && (pSStack_c == (STBoatC *)0x0))
            goto switchD_004660af_caseD_2;
            thunk_FUN_004602b0((int *)this);
            if (*(int *)(this + 0x4a1) == -1) {
              *(int *)(this + 0x4cd) = *(int *)(this + 0x4cd) + 1;
              iVar6 = (**(code **)(*(int *)this + 0xd8))();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
            if (pSStack_c != (STBoatC *)0x1) goto switchD_004660af_caseD_2;
LAB_00467018:
            thunk_FUN_00481520(this,(int)*(short *)(this + 0x49b),(int)*(short *)(this + 0x49d),
                               *(short *)(this + 0x49f) + 1);
          }
          else {
            thunk_FUN_004602b0((int *)this);
            *(undefined4 *)(this + 0x4d5) = 7;
LAB_00468b42:
            thunk_FUN_00481520(this,(int)*(short *)(this + 0x4a5),(int)*(short *)(this + 0x4a7),
                               *(short *)(this + 0x4a9) + 1);
          }
          break;
        default:
          goto switchD_004660af_caseD_2;
        case 3:
switchD_004660af_caseD_3:
          thunk_FUN_00481520(this,(int)*(short *)(this + 0x49b),(int)*(short *)(this + 0x49d),
                             *(short *)(this + 0x49f) + 1);
          break;
        case -1:
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1d02,0,0,
                                     &DAT_007a4ccc,s_STBoatC__LoadRC__move_to_mine_er_007aa4e4);
          if (iVar6 != 0) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          iVar6 = 0x1d02;
          goto LAB_004660e9;
        }
LAB_00468c49:
        thunk_FUN_00460260(this,0);
        goto switchD_004660af_caseD_2;
      }
      iVar6 = *(int *)(this + 0x4cd) + 1;
      *(int *)(this + 0x4cd) = iVar6;
      if (iVar6 == 2) {
        iVar6 = Defence(this,0);
        if (iVar6 != -1) {
          return 2;
        }
        return -1;
      }
      iVar6 = Defence(this,2);
      if (iVar6 == -1) {
        return -1;
      }
      if (*(int *)(this + 0x82e) != 0) {
        return 2;
      }
      if (*(int *)(this + 0x4bd) == 1) {
LAB_00465f11:
        *(undefined4 *)(this + 0x4bd) = 0;
        if (*(int *)(this + 0x4a1) != -1) {
          sVar17 = *(short *)(this + 0x49b);
          sVar18 = *(short *)(this + 0x49f);
          sVar19 = *(short *)(this + 0x49d);
          if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
             (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(DAT_007fb248 +
                            ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                            (int)sVar17) * 8);
          }
          if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
            *(undefined4 *)(this + 0x4a1) = 0xffffffff;
          }
        }
      }
      else {
        if (*(int *)(this + 0x4c1) != 1) {
          return 2;
        }
        if (*(int *)(this + 0x4bd) == 1) goto LAB_00465f11;
      }
      if (*(int *)(this + 0x4c1) == 1) {
        *(undefined4 *)(this + 0x4c1) = 0;
        if (*(int *)(this + 0x4ab) != -1) {
          sVar17 = *(short *)(this + 0x4a5);
          sVar18 = *(short *)(this + 0x4a9);
          sVar19 = *(short *)(this + 0x4a7);
          if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
             ((sVar19 < 0 ||
              (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(DAT_007fb248 +
                            ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                            (int)sVar17) * 8);
          }
          if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
            *(undefined4 *)(this + 0x4ab) = 0xffffffff;
          }
        }
      }
      bVar3 = thunk_FUN_0048d440((int)this);
      if (CONCAT31(extraout_var_00,bVar3) == 0) {
        thunk_FUN_004602b0((int *)this);
        *(undefined4 *)(this + 0x4d5) = 0;
LAB_00469979:
        iVar6 = Defence(this,0);
        return (-(uint)(iVar6 != -1) & 3) - 1;
      }
      if (CONCAT31(extraout_var_00,bVar3) != 1) goto LAB_00466087;
      if (*(int *)(this + 0x4a1) == -1) {
        return 2;
      }
      *(undefined4 *)(this + 0x4cd) = 0;
LAB_00465e5a:
      sVar17 = *(short *)(this + 0x49f);
      sVar18 = *(short *)(this + 0x49d);
      sVar19 = *(short *)(this + 0x49b);
      goto LAB_00465e72;
    }
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        *(int *)(this + 0x4cd) = *(int *)(this + 0x4cd) + 1;
        iVar6 = Defence(this,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (*(int *)(this + 0x82e) != 0) {
          return 2;
        }
        if ((*(int *)(this + 0x4bd) != 1) && (*(int *)(this + 0x4c1) != 1)) {
          if (*(int *)(this + 0x4cd) % 0x32 != 1) {
            return 2;
          }
          sVar17 = *(short *)(this + 0x49b);
          sVar18 = *(short *)(this + 0x49f);
          sVar19 = *(short *)(this + 0x49d);
          if (sVar17 < 0) {
            return 2;
          }
          if (DAT_007fb240 <= sVar17) {
            return 2;
          }
          if (sVar19 < 0) {
            return 2;
          }
          if (DAT_007fb242 <= sVar19) {
            return 2;
          }
          if (sVar18 < 0) {
            return 2;
          }
          if (DAT_007fb244 <= sVar18) {
            return 2;
          }
          pvVar1 = *(void **)(DAT_007fb248 +
                             ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                             (int)sVar17) * 8);
          if (pvVar1 == (void *)0x0) {
            return 2;
          }
          if (*(int *)((int)pvVar1 + 0x18) != *(int *)(this + 0x4a1)) {
            return 2;
          }
          iVar6 = thunk_FUN_004e1490((int)pvVar1);
          if (iVar6 != 1) {
            return 2;
          }
          thunk_FUN_004e15f0(pvVar1,*(undefined4 *)(this + 0x18));
          sVar18 = *(short *)(this + 0x49d);
          sVar17 = *(short *)(this + 0x49b);
          iVar6 = *(short *)(this + 0x49f) + 1;
          *(undefined4 *)(this + 0x4cd) = 0;
          *(undefined4 *)(this + 0x4d5) = 4;
          *(undefined4 *)(this + 0xb7) = 0;
LAB_00468322:
          thunk_FUN_00481520(this,(int)sVar17,(int)sVar18,iVar6);
          thunk_FUN_00460260(this,0);
          return 2;
        }
        pSStack_c = (STBoatC *)0x0;
        if (*(int *)(this + 0x4bd) == 1) {
          *(undefined4 *)(this + 0x4bd) = 0;
          if (*(int *)(this + 0x4a1) != -1) {
            sVar17 = *(short *)(this + 0x49b);
            sVar18 = *(short *)(this + 0x49f);
            sVar19 = *(short *)(this + 0x49d);
            if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
               ((sVar19 < 0 ||
                (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                              (int)sVar17) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
              *(undefined4 *)(this + 0x4a1) = 0xffffffff;
            }
          }
          if (*(int *)(this + 0x4a1) != -1) {
            pSStack_c = (STBoatC *)0x1;
          }
        }
        if (*(int *)(this + 0x4c1) == 1) {
          *(undefined4 *)(this + 0x4c1) = 0;
          if (*(int *)(this + 0x4ab) != -1) {
            sVar17 = *(short *)(this + 0x4a5);
            sVar18 = *(short *)(this + 0x4a9);
            sVar19 = *(short *)(this + 0x4a7);
            if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
               (((sVar19 < 0 || ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) ||
                (DAT_007fb244 <= sVar18)))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                              (int)sVar17) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
              *(undefined4 *)(this + 0x4ab) = 0xffffffff;
            }
          }
        }
        bVar3 = thunk_FUN_0048d440((int)this);
        if (CONCAT31(extraout_var_03,bVar3) == 0) {
          thunk_FUN_004602b0((int *)this);
          *(undefined4 *)(this + 0x4d5) = 0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_03,bVar3) == 1) {
          if (*(int *)(this + 0x4a1) == -1) {
            return 2;
          }
          if (pSStack_c == (STBoatC *)0x0) {
            return 2;
          }
          if (*(int *)(this + 0x4a1) == -1) {
            return 2;
          }
          if (pSStack_c != (STBoatC *)0x1) {
            return 2;
          }
          *(undefined4 *)(this + 0x4cd) = 0;
          *(undefined4 *)(this + 0x4d5) = 1;
          thunk_FUN_00481520(this,(int)*(short *)(this + 0x49b),(int)*(short *)(this + 0x49d),
                             *(short *)(this + 0x49f) + 1);
          goto LAB_00465e7b;
        }
LAB_00466087:
        *(undefined4 *)(this + 0x4cd) = 0;
        *(undefined4 *)(this + 0x4d5) = 7;
        goto LAB_0046875c;
      }
      if (iVar6 == 4) {
        if (*(int *)(this + 0x4cd) < 1) {
          iVar6 = thunk_FUN_00460260(this,2);
          switch(iVar6) {
          case 0:
            *(undefined4 *)(this + 0x4d5) = 5;
            iVar6 = (**(code **)(*(int *)this + 0xd8))();
            return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
          case 1:
            if ((*(int *)(this + 0x4bd) != 1) && (*(int *)(this + 0x4c1) != 1))
            goto switchD_004660af_caseD_2;
            pSStack_c = (STBoatC *)0x0;
            if (*(int *)(this + 0x4bd) == 1) {
              *(undefined4 *)(this + 0x4bd) = 0;
              if (*(int *)(this + 0x4a1) != -1) {
                sVar17 = *(short *)(this + 0x49b);
                sVar18 = *(short *)(this + 0x49f);
                sVar19 = *(short *)(this + 0x49d);
                if (((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
                    ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                  + (int)sVar17) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
                  *(undefined4 *)(this + 0x4a1) = 0xffffffff;
                }
              }
              if (*(int *)(this + 0x4a1) != -1) {
                pSStack_c = (STBoatC *)0x1;
              }
            }
            if (*(int *)(this + 0x4c1) == 1) {
              *(undefined4 *)(this + 0x4c1) = 0;
              if (*(int *)(this + 0x4ab) != -1) {
                sVar17 = *(short *)(this + 0x4a5);
                sVar18 = *(short *)(this + 0x4a9);
                sVar19 = *(short *)(this + 0x4a7);
                if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                   ((sVar19 < 0 ||
                    (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                  + (int)sVar17) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
                  *(undefined4 *)(this + 0x4ab) = 0xffffffff;
                }
              }
            }
            bVar3 = thunk_FUN_0048d440((int)this);
            if (CONCAT31(extraout_var_05,bVar3) == 0) {
              thunk_FUN_004602b0((int *)this);
              *(undefined4 *)(this + 0x4d5) = 0;
              goto LAB_00469979;
            }
            if (CONCAT31(extraout_var_05,bVar3) == 1) {
              if ((*(int *)(this + 0x4a1) != -1) && (pSStack_c == (STBoatC *)0x0))
              goto switchD_004660af_caseD_2;
              thunk_FUN_004602b0((int *)this);
              if (*(int *)(this + 0x4a1) == -1) {
                *(int *)(this + 0x4cd) = *(int *)(this + 0x4cd) + 1;
                iVar6 = (**(code **)(*(int *)this + 0xd8))();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              if (pSStack_c != (STBoatC *)0x1) goto switchD_004660af_caseD_2;
              *(undefined4 *)(this + 0x4cd) = 0;
              *(undefined4 *)(this + 0x4d5) = 1;
              *(undefined4 *)(this + 0xb7) = 3;
              goto LAB_00467018;
            }
            thunk_FUN_004602b0((int *)this);
            *(undefined4 *)(this + 0x4cd) = 0;
            *(undefined4 *)(this + 0xb7) = 3;
            *(undefined4 *)(this + 0x4d5) = 7;
            iVar6 = *(short *)(this + 0x4a9) + 1;
            break;
          default:
            goto switchD_004660af_caseD_2;
          case 3:
            goto switchD_004660af_caseD_3;
          case -1:
            iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1e6e,0,0,
                                       &DAT_007a4ccc,s_STBoatC__LoadRC__move_to_mine_2_e_007aa480);
            if (iVar6 != 0) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            iVar6 = 0x1e6e;
            goto LAB_004660e9;
          }
LAB_00467068:
          sVar18 = *(short *)(this + 0x4a7);
          sVar17 = *(short *)(this + 0x4a5);
LAB_00468c40:
          thunk_FUN_00481520(this,(int)sVar17,(int)sVar18,iVar6);
          goto LAB_00468c49;
        }
        iVar6 = *(int *)(this + 0x4cd) + 1;
        *(int *)(this + 0x4cd) = iVar6;
        if (iVar6 == 2) {
          iVar6 = Defence(this,0);
          if (iVar6 != -1) {
            return 2;
          }
          return -1;
        }
        iVar6 = Defence(this,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (*(int *)(this + 0x82e) != 0) {
          return 2;
        }
        if (*(int *)(this + 0x4bd) == 1) {
LAB_00466bff:
          *(undefined4 *)(this + 0x4bd) = 0;
          if (*(int *)(this + 0x4a1) != -1) {
            sVar17 = *(short *)(this + 0x49b);
            sVar18 = *(short *)(this + 0x49f);
            sVar19 = *(short *)(this + 0x49d);
            if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
               ((sVar19 < 0 ||
                (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                              (int)sVar17) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
              *(undefined4 *)(this + 0x4a1) = 0xffffffff;
            }
          }
        }
        else {
          if (*(int *)(this + 0x4c1) != 1) {
            return 2;
          }
          if (*(int *)(this + 0x4bd) == 1) goto LAB_00466bff;
        }
        if (*(int *)(this + 0x4c1) == 1) {
          *(undefined4 *)(this + 0x4c1) = 0;
          if (*(int *)(this + 0x4ab) != -1) {
            sVar17 = *(short *)(this + 0x4a5);
            sVar18 = *(short *)(this + 0x4a9);
            sVar19 = *(short *)(this + 0x4a7);
            if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                ((sVar19 < 0 || ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))))) ||
               (DAT_007fb244 <= sVar18)) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                              (int)sVar17) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
              *(undefined4 *)(this + 0x4ab) = 0xffffffff;
            }
          }
        }
        bVar3 = thunk_FUN_0048d440((int)this);
        if (CONCAT31(extraout_var_04,bVar3) == 0) {
          thunk_FUN_004602b0((int *)this);
          *(undefined4 *)(this + 0x4d5) = 0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_04,bVar3) != 1) goto LAB_00468742;
        if (*(int *)(this + 0x4a1) == -1) {
          return 2;
        }
        goto LAB_00465e40;
      }
      if (iVar6 == 5) {
        *(int *)(this + 0x4cd) = *(int *)(this + 0x4cd) + 1;
        if ((*(int *)(this + 0x4bd) == 1) || (*(int *)(this + 0x4c1) == 1)) {
          pSStack_c = (STBoatC *)0x0;
          if (*(int *)(this + 0x4bd) == 1) {
            *(undefined4 *)(this + 0x4bd) = 0;
            if (*(int *)(this + 0x4a1) != -1) {
              sVar17 = *(short *)(this + 0x49b);
              sVar18 = *(short *)(this + 0x49f);
              sVar19 = *(short *)(this + 0x49d);
              if (((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
                  ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                                (int)sVar17) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
                *(undefined4 *)(this + 0x4a1) = 0xffffffff;
              }
            }
            if (*(int *)(this + 0x4a1) != -1) {
              pSStack_c = (STBoatC *)0x1;
            }
          }
          if (*(int *)(this + 0x4c1) == 1) {
            *(undefined4 *)(this + 0x4c1) = 0;
            if (*(int *)(this + 0x4ab) != -1) {
              sVar17 = *(short *)(this + 0x4a5);
              sVar18 = *(short *)(this + 0x4a9);
              sVar19 = *(short *)(this + 0x4a7);
              if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                 ((sVar19 < 0 ||
                  (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                                (int)sVar17) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
                *(undefined4 *)(this + 0x4ab) = 0xffffffff;
              }
            }
          }
          bVar3 = thunk_FUN_0048d440((int)this);
          if (CONCAT31(extraout_var_06,bVar3) == 0) {
            thunk_FUN_004602b0((int *)this);
            *(undefined4 *)(this + 0x4d5) = 0;
            goto LAB_00469979;
          }
          if (CONCAT31(extraout_var_06,bVar3) != 1) {
            iVar6 = (int)*(short *)(this + 0x4a9);
            *(undefined4 *)(this + 0x4cd) = 0;
            *(undefined4 *)(this + 0x4d5) = 6;
            *(undefined4 *)(this + 0xb7) = 3;
            goto LAB_00467068;
          }
          if ((*(int *)(this + 0x4a1) == -1) || (pSStack_c != (STBoatC *)0x0)) {
            *(undefined4 *)(this + 0x4cd) = 0;
            *(undefined4 *)(this + 0xb7) = 3;
            if (*(int *)(this + 0x4a1) == -1) {
              *(undefined4 *)(this + 0x4d5) = 6;
              thunk_FUN_00481520(this,(int)*(short *)(this + 0x4a5),(int)*(short *)(this + 0x4a7),
                                 *(short *)(this + 0x4a9) + 1);
            }
            else if (pSStack_c == (STBoatC *)0x1) {
              *(undefined4 *)(this + 0x4d5) = 1;
              thunk_FUN_00481520(this,(int)*(short *)(this + 0x49b),(int)*(short *)(this + 0x49d),
                                 *(short *)(this + 0x49f) + 1);
            }
            else {
              iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1efd,0,0,
                                         &DAT_007a4ccc,s_STBoatC__LoadRC__LOADRC_MINE_007aa41c);
              if (iVar6 != 0) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
            }
            goto LAB_004699e2;
          }
        }
        if (*(int *)(this + 0x4cd) % 10 != 1) goto switchD_004660af_caseD_2;
        sVar17 = *(short *)(this + 0x49b);
        sVar18 = *(short *)(this + 0x49f);
        sVar19 = *(short *)(this + 0x49d);
        if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
            ((sVar19 < 0 || (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))
             ))) || ((piVar14 = *(int **)(DAT_007fb248 +
                                         ((int)sVar18 * (int)DAT_007fb246 +
                                          (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8),
                     piVar14 == (int *)0x0 || (piVar14[6] != *(int *)(this + 0x4a1))))) {
          thunk_FUN_0048d930((int)this);
          *(undefined4 *)(this + 0x4cd) = 0;
          *(undefined4 *)(this + 0x4d5) = 6;
LAB_00468b38:
          *(undefined4 *)(this + 0xb7) = 3;
          goto LAB_00468b42;
        }
        if ((piVar14[0x12d] == 0) && (*(int *)((int)piVar14 + 0x245) != 6)) {
          thunk_FUN_004e1930(piVar14,&iStack_8,0);
          iVar6 = thunk_FUN_00430910(iStack_8);
          iStack_18 = thunk_FUN_004e1930(piVar14,&iStack_8,iVar6);
          if (iStack_18 == iVar6) {
            thunk_FUN_004e16d0(piVar14,*(int *)(this + 0x18));
            if (*(int *)(this + 0x4cd) % 0x78 == 1) {
              iVar7 = *(int *)(this + 0x6f7);
              if (iVar7 == 8) {
                iVar7 = *(int *)this;
                uVar25 = 0xfc;
LAB_0046739a:
                (**(code **)(iVar7 + 0x90))(3,uVar25);
              }
              else if (iVar7 == 0x14) {
                (**(code **)(*(int *)this + 0x90))(3,0x160);
              }
              else if (iVar7 == 0x1a) {
                iVar7 = *(int *)this;
                uVar25 = 0x19f;
                goto LAB_0046739a;
              }
            }
            if (iStack_8 == 0xdc) {
              iVar7 = *(int *)(this + 0x7d2);
              *(int *)(this + 0x7d2) = iVar7 + 1;
              if (0x28 < iVar7 + 1 + *(int *)(this + 0x7d6) + *(int *)(this + 0x7da)) {
                *(int *)(this + 0x7d2) = (0x28 - *(int *)(this + 0x7d6)) - *(int *)(this + 0x7da);
              }
            }
            else if (iStack_8 == 0xdd) {
              iVar7 = *(int *)(this + 0x7d6);
              *(int *)(this + 0x7d6) = iVar7 + 1;
              if (0x28 < iVar7 + 1 + *(int *)(this + 0x7d2) + *(int *)(this + 0x7da)) {
                *(int *)(this + 0x7d6) = (0x28 - *(int *)(this + 0x7d2)) - *(int *)(this + 0x7da);
              }
            }
            else if (iStack_8 == 0xde) {
              iVar7 = *(int *)(this + 0x7da);
              *(int *)(this + 0x7da) = iVar7 + 1;
              if (0x28 < *(int *)(this + 0x7d2) + *(int *)(this + 0x7d6) + iVar7 + 1) {
                *(int *)(this + 0x7da) = (0x28 - *(int *)(this + 0x7d2)) - *(int *)(this + 0x7d6);
              }
            }
            else {
              iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1f2f,0,0,
                                         &DAT_007a4ccc,s_STBoatC__LoadRC__LOADRC_MINE___u_007aa440);
              if (iVar7 != 0) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
            }
          }
          if (((iStack_18 < iVar6) ||
              (*(int *)(this + 0x7da) + *(int *)(this + 0x7d6) + *(int *)(this + 0x7d2) == 0x28)) ||
             (iVar6 = (**(code **)(*piVar14 + 0x88))(&iStack_8), iVar6 == 0)) goto LAB_0046744c;
        }
        else {
LAB_0046744c:
          thunk_FUN_0048d930((int)this);
          *(undefined4 *)(this + 0x4cd) = 0;
          *(undefined4 *)(this + 0x4d5) = 6;
          *(undefined4 *)(this + 0xb7) = 3;
          thunk_FUN_00481520(this,(int)*(short *)(this + 0x4a5),(int)*(short *)(this + 0x4a7),
                             *(short *)(this + 0x4a9) + 1);
          thunk_FUN_00460260(this,0);
        }
        iVar6 = (**(code **)(*piVar14 + 0x88))(&iStack_8);
        if (iVar6 == 0) {
          STAllPlayersC::_ChangeMD
                    (DAT_007fa174,0,*(int **)(this + 0x24),
                     CONCAT22(extraout_var_19,*(undefined2 *)((int)piVar14 + 0x32)));
          iVar6 = (**(code **)(*(int *)this + 0xd8))();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
switchD_004660af_caseD_2:
        iVar6 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      if (iVar6 != 6) {
        if (iVar6 != 7) {
          if (iVar6 == 8) {
            iVar6 = thunk_FUN_00460260(this,2);
            switch(iVar6) {
            case 0:
              iVar6 = thunk_FUN_00490570((int)this);
              if (iVar6 != 1) {
                *(undefined4 *)(this + 0x4d5) = 9;
                *(undefined4 *)(this + 0xb7) = 3;
                goto LAB_00469979;
              }
              iVar7 = CONCAT22(extraout_var_21,*(undefined2 *)(this + 0x4a5));
              iVar6 = CONCAT22((short)((uint)(this + 0x4af) >> 0x10),*(undefined2 *)(this + 0x4a7));
              piVar14 = (int *)CONCAT22(extraout_var_25,*(short *)(this + 0x4a9) + 1);
              break;
            case 1:
              if ((*(int *)(this + 0x4bd) == 1) || (*(int *)(this + 0x4c1) == 1)) {
                pSStack_c = (STBoatC *)0x0;
                if (*(int *)(this + 0x4bd) == 1) {
                  *(undefined4 *)(this + 0x4bd) = 0;
                  if (*(int *)(this + 0x4a1) != -1) {
                    sVar17 = *(short *)(this + 0x49b);
                    sVar18 = *(short *)(this + 0x49f);
                    sVar19 = *(short *)(this + 0x49d);
                    if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                       ((sVar19 < 0 ||
                        (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18))))))
                    {
                      iVar6 = 0;
                    }
                    else {
                      iVar6 = *(int *)(DAT_007fb248 +
                                      ((int)sVar18 * (int)DAT_007fb246 +
                                       (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8);
                    }
                    if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
                      *(undefined4 *)(this + 0x4a1) = 0xffffffff;
                    }
                  }
                  if (*(int *)(this + 0x4a1) != -1) {
                    pSStack_c = (STBoatC *)0x1;
                  }
                }
                if (*(int *)(this + 0x4c1) == 1) {
                  *(undefined4 *)(this + 0x4c1) = 0;
                  if (*(int *)(this + 0x4ab) != -1) {
                    sVar17 = *(short *)(this + 0x4a5);
                    sVar18 = *(short *)(this + 0x4a9);
                    sVar19 = *(short *)(this + 0x4a7);
                    if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                       (((sVar19 < 0 || ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) ||
                        (DAT_007fb244 <= sVar18)))) {
                      iVar6 = 0;
                    }
                    else {
                      iVar6 = *(int *)(DAT_007fb248 +
                                      ((int)sVar18 * (int)DAT_007fb246 +
                                       (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8);
                    }
                    if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
                      *(undefined4 *)(this + 0x4ab) = 0xffffffff;
                    }
                  }
                }
                bVar3 = thunk_FUN_0048d440((int)this);
                if (CONCAT31(extraout_var_09,bVar3) == 0) goto LAB_00467fe4;
                if (CONCAT31(extraout_var_09,bVar3) != 1) goto LAB_0046817e;
                if ((*(int *)(this + 0x4a1) != -1) && (pSStack_c == (STBoatC *)0x0))
                goto switchD_00466448_caseD_2;
                thunk_FUN_004602b0((int *)this);
                if (*(int *)(this + 0x4a1) == -1) {
                  *(int *)(this + 0x4cd) = *(int *)(this + 0x4cd) + 1;
                  goto switchD_00466448_caseD_2;
                }
                if (pSStack_c == (STBoatC *)0x1) {
                  *(undefined4 *)(this + 0xb7) = 3;
                  *(undefined4 *)(this + 0x4d5) = 1;
                  thunk_FUN_00481520(this,(int)*(short *)(this + 0x49b),
                                     (int)*(short *)(this + 0x49d),*(short *)(this + 0x49f) + 1);
                  goto LAB_004699e2;
                }
              }
              sVar17 = *(short *)(this + 0x4a5);
              sVar18 = *(short *)(this + 0x4a9);
              sVar19 = *(short *)(this + 0x4a7);
              if (((((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
                    ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) ||
                  ((pvVar1 = *(void **)(DAT_007fb248 +
                                       ((int)sVar18 * (int)DAT_007fb246 +
                                        (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8),
                   pvVar1 == (void *)0x0 || (*(int *)((int)pvVar1 + 0x18) != *(int *)(this + 0x4ab))
                   ))) || ((iVar6 = thunk_FUN_004e1490((int)pvVar1), iVar6 != 1 ||
                           (bVar3 = thunk_FUN_0048d650(this,pvVar1),
                           CONCAT31(extraout_var_10,bVar3) != 1)))) goto switchD_00466448_caseD_2;
              thunk_FUN_004602b0((int *)this);
              thunk_FUN_004e15f0(pvVar1,*(undefined4 *)(this + 0x18));
              *(undefined4 *)(this + 0x4cd) = 0;
              *(undefined4 *)(this + 0x4d5) = 10;
              thunk_FUN_00481520(this,(int)*(short *)(this + 0x4c5),(int)*(short *)(this + 0x4c7),
                                 (int)*(short *)(this + 0x4c9));
              goto LAB_004699e2;
            default:
              goto switchD_00466448_caseD_2;
            case 3:
              iVar6 = thunk_FUN_00490570((int)this);
              if (iVar6 == 1) {
                iVar6 = CONCAT22((short)((uint)(this + 0x4b1) >> 0x10),*(undefined2 *)(this + 0x4a7)
                                );
                iVar7 = CONCAT22((short)((uint)(this + 0x4af) >> 0x10),*(undefined2 *)(this + 0x4a5)
                                );
                piVar14 = (int *)CONCAT22((short)((uint)(this + 0x4b3) >> 0x10),
                                          *(short *)(this + 0x4a9) + 1);
                goto LAB_00467e31;
              }
              goto LAB_00467e48;
            case -1:
              iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x201c,0,0,
                                         &DAT_007a4ccc,s_STBoatC__LoadRC__correct_move_to_007aa384);
              if (iVar6 != 0) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
              iVar6 = 0x201c;
LAB_004660e9:
              RaiseInternalException
                        (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar6);
              return 0xffff;
            }
            goto LAB_00467da5;
          }
          if (iVar6 == 9) {
            *(int *)(this + 0x4cd) = *(int *)(this + 0x4cd) + 1;
            iVar6 = Defence(this,2);
            if (iVar6 == -1) {
              return -1;
            }
            if (*(int *)(this + 0x82e) != 0) {
              return 2;
            }
            if ((*(int *)(this + 0x4bd) != 1) && (*(int *)(this + 0x4c1) != 1)) {
              if (*(int *)(this + 0x4cd) % 0x32 != 1) {
                return 2;
              }
              sVar17 = *(short *)(this + 0x4a5);
              sVar18 = *(short *)(this + 0x4a9);
              sVar19 = *(short *)(this + 0x4a7);
              if (sVar17 < 0) {
                return 2;
              }
              if (DAT_007fb240 <= sVar17) {
                return 2;
              }
              if (sVar19 < 0) {
                return 2;
              }
              if (DAT_007fb242 <= sVar19) {
                return 2;
              }
              if (sVar18 < 0) {
                return 2;
              }
              if (DAT_007fb244 <= sVar18) {
                return 2;
              }
              pvVar1 = *(void **)(DAT_007fb248 +
                                 ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                 + (int)sVar17) * 8);
              if (pvVar1 == (void *)0x0) {
                return 2;
              }
              if (*(int *)((int)pvVar1 + 0x18) != *(int *)(this + 0x4ab)) {
                return 2;
              }
              iVar6 = thunk_FUN_004e1490((int)pvVar1);
              if (iVar6 != 1) {
                return 2;
              }
              bVar3 = thunk_FUN_0048d650(this,pvVar1);
              if (CONCAT31(extraout_var_11,bVar3) != 1) {
                return 2;
              }
              thunk_FUN_004e15f0(pvVar1,*(undefined4 *)(this + 0x18));
              iVar6 = (int)*(short *)(this + 0x4c9);
              sVar18 = *(short *)(this + 0x4c7);
              sVar17 = *(short *)(this + 0x4c5);
              *(undefined4 *)(this + 0x4cd) = 0;
              *(undefined4 *)(this + 0x4d5) = 10;
              *(undefined4 *)(this + 0xb7) = 0;
              goto LAB_00468322;
            }
            pSStack_c = (STBoatC *)0x0;
            if (*(int *)(this + 0x4bd) == 1) {
              *(undefined4 *)(this + 0x4bd) = 0;
              if (*(int *)(this + 0x4a1) != -1) {
                sVar17 = *(short *)(this + 0x49b);
                sVar18 = *(short *)(this + 0x49f);
                sVar19 = *(short *)(this + 0x49d);
                if (((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
                    ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                  + (int)sVar17) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
                  *(undefined4 *)(this + 0x4a1) = 0xffffffff;
                }
              }
            }
            if (*(int *)(this + 0x4c1) == 1) {
              *(undefined4 *)(this + 0x4c1) = 0;
              if (*(int *)(this + 0x4ab) != -1) {
                sVar17 = *(short *)(this + 0x4a5);
                sVar18 = *(short *)(this + 0x4a9);
                sVar19 = *(short *)(this + 0x4a7);
                if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                   ((sVar19 < 0 ||
                    (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                  + (int)sVar17) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
                  *(undefined4 *)(this + 0x4ab) = 0xffffffff;
                }
              }
              bVar3 = true;
              if (*(int *)(this + 0x4ab) == -1) goto LAB_00468493;
            }
            else {
LAB_00468493:
              bVar3 = false;
            }
            bVar4 = thunk_FUN_0048d440((int)this);
            if (CONCAT31(extraout_var_12,bVar4) != 0) {
              if (CONCAT31(extraout_var_12,bVar4) == 7) {
                if (*(int *)(this + 0x4ab) == -1) {
                  return 2;
                }
                if (!bVar3) {
                  return 2;
                }
                if (*(int *)(this + 0x4ab) == -1) {
                  return 2;
                }
                if (!bVar3) {
                  return 2;
                }
                *(undefined4 *)(this + 0x4cd) = 0;
                *(undefined4 *)(this + 0x4d5) = 7;
                thunk_FUN_00481520(this,(int)*(short *)(this + 0x4a5),(int)*(short *)(this + 0x4a7),
                                   *(short *)(this + 0x4a9) + 1);
              }
              else {
                *(undefined4 *)(this + 0x4cd) = 0;
                *(undefined4 *)(this + 0x4d5) = 1;
                thunk_FUN_00481520(this,(int)*(short *)(this + 0x49b),(int)*(short *)(this + 0x49d),
                                   *(short *)(this + 0x49f) + 1);
              }
              goto LAB_00465e7b;
            }
            thunk_FUN_004602b0((int *)this);
            goto LAB_00469972;
          }
          if (iVar6 != 10) {
            if (iVar6 == 0xb) {
              if (*(int *)(this + 0x4d9) == 0) {
                iVar8 = (ushort)(*(short *)(this + 0x4a9) * 200) + 300;
                iVar7 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)(this + 0x4a7) + 1) * 0xc9;
                iVar9 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)(this + 0x4a5) + 1);
                iVar6 = iVar9 * 0xc9;
                uVar5 = (undefined2)((uint)(iVar9 * 0x19) >> 0x10);
                uVar5 = (**(code **)(*(int *)this + 0x10))
                                  (CONCAT22(uVar5,*(undefined2 *)(this + 0x41)),
                                   CONCAT22((short)((uint)iVar6 >> 0x10),
                                            *(undefined2 *)(this + 0x43)),
                                   CONCAT22(uVar5,*(undefined2 *)(this + 0x45)),iVar6,iVar7,iVar8);
                *(undefined2 *)(this + 0x4cb) = uVar5;
                *(undefined4 *)(this + 0x4d9) = 1;
              }
              if (*(int *)(this + 0x4d9) == 1) {
                uVar10 = thunk_FUN_004176c0(this,*(short *)(this + 0x4cb));
                uVar10 = thunk_FUN_00417910(this,(short)uVar10);
                if (uVar10 == 0xffffffff) {
                  iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2196,0,0,
                                             &DAT_007a4ccc,s_STBoatC__LoadRC__LOADRC_PDEPOT_007aa32c
                                            );
                  if (iVar6 != 0) {
                    pcVar2 = (code *)swi(3);
                    iVar6 = (*pcVar2)();
                    return iVar6;
                  }
                  iVar6 = 0x2197;
                  goto LAB_004660e9;
                }
                if (uVar10 == 0) {
                  *(undefined4 *)(this + 0x4d9) = 2;
                  iVar6 = (**(code **)(*(int *)this + 0xd8))();
                  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
                }
              }
              if (*(int *)(this + 0x4d9) == 2) {
                thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                                   *(short *)(this + 0x45),(*(short *)(this + 0x4a5) + 1) * 0xc9,
                                   (*(short *)(this + 0x4a7) + 1) * 0xc9,
                                   *(short *)(this + 0x4a9) * 200 + 300,(byte)this[0x61]);
                *(undefined4 *)(this + 0x4d9) = 3;
              }
              if (*(int *)(this + 0x4d9) == 3) {
                iStack_10 = thunk_FUN_00415ed0(this,&iStack_18,&uStack_14);
                param_1 = (int *)0x0;
                if (this[0x2bf] != (STBoatC)0x0) {
                  pSStack_c = this + 0x2b3;
                  do {
                    puVar11 = (undefined4 *)
                              thunk_FUN_0041dc40(auStack_2c,*(undefined4 *)pSStack_c,
                                                 *(undefined2 *)(pSStack_c + 4),
                                                 *(short *)(this + 0x6c));
                    uStack_24 = *puVar11;
                    sStack_20 = *(short *)(puVar11 + 1);
                    if (DAT_0080732c == 1) {
                      bVar24 = 0;
                      sVar23 = 0;
                      uVar10 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
                      iVar8 = -1;
                      *(uint *)(this + 0x1c) = uVar10;
                      sVar22 = 0;
                      sVar21 = 0;
                      uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                      sVar20 = 0;
                      *(uint *)(this + 0x1c) = uVar12;
                      sVar19 = 0;
                      sVar18 = 0;
                      uStack_1c = uVar12 * 0x41c64e6d + 0x3039;
                      sVar17 = 0;
                      *(uint *)(this + 0x1c) = uStack_1c;
                      lVar16 = Library::MSVCRT::__ftol();
                      iVar6 = (int)(short)lVar16 + (uVar10 >> 0x10) % 7 +
                              (int)*(short *)(this + 0x45) + -3 + (int)sStack_20;
                      iVar7 = ((uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) -
                              (int)uStack_24._2_2_;
                      uVar10 = uStack_1c;
                    }
                    else {
                      uVar12 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
                      bVar24 = 0;
                      sVar23 = 0;
                      uVar13 = uVar12 * 0x41c64e6d + 0x3039;
                      iVar8 = -1;
                      sVar22 = 0;
                      sVar21 = 0;
                      sVar20 = 0;
                      sVar19 = 0;
                      sVar18 = 0;
                      *(uint *)(this + 0x1c) = uVar12;
                      uVar10 = uVar13 * 0x41c64e6d + 0x3039;
                      sVar17 = 0;
                      *(uint *)(this + 0x1c) = uVar13;
                      *(uint *)(this + 0x1c) = uVar10;
                      iVar6 = (uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 +
                              (int)sStack_20;
                      uStack_24._2_2_ = (short)((uint)uStack_24 >> 0x10);
                      iVar7 = ((uVar13 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) -
                              (int)uStack_24._2_2_;
                    }
                    TraksClassTy::TraksCreate
                              (DAT_00802a7c,1,2,7,
                               (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 +
                               (int)(short)uStack_24,iVar7 + -3,iVar6,sVar17,sVar18,sVar19,sVar20,
                               sVar21,sVar22,iVar8,sVar23,bVar24);
                    param_1 = (int *)((int)param_1 + 1);
                    pSStack_c = pSStack_c + 6;
                  } while ((int)param_1 < (int)(uint)(byte)this[0x2bf]);
                }
                if (iStack_10 == -1) {
                  iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x21bc,0,0,
                                             &DAT_007a4ccc,
                                             s_STBoatC__LoadRC__LOADRC_PDEPOT_2_007aa304);
                  if (iVar6 != 0) {
                    pcVar2 = (code *)swi(3);
                    iVar6 = (*pcVar2)();
                    return iVar6;
                  }
                  iVar6 = 0x21bd;
                  goto LAB_004660e9;
                }
                if (iStack_10 == 0) {
                  *(undefined4 *)(this + 0x4d5) = 0xc;
                  *(undefined4 *)(this + 0x4d9) = 0;
                  iVar6 = (**(code **)(*(int *)this + 0xd8))();
                  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
                }
              }
              goto LAB_004693c9;
            }
            if (iVar6 != 0xc) {
              if (iVar6 == 0xd) {
                iVar6 = *(int *)(this + 0x4d1) + 1;
                *(int *)(this + 0x4d1) = iVar6;
                if (0x45 < iVar6) {
                  if (*(int *)(this + 0x4d9) == 0) {
                    iVar6 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)(this + 0x4c9) * 200) +
                            100;
                    iVar8 = CONCAT22((short)((uint)in_EDX >> 0x10),*(short *)(this + 0x4c7) * 0xc9)
                            + 100;
                    iVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)(this + 0x4c5) * 0xc9) +
                            100;
                    uVar5 = (undefined2)((uint)iVar8 >> 0x10);
                    uVar5 = (**(code **)(*(int *)this + 0x10))
                                      (CONCAT22(uVar5,*(undefined2 *)(this + 0x41)),
                                       CONCAT22((short)((uint)iVar7 >> 0x10),
                                                *(undefined2 *)(this + 0x43)),
                                       CONCAT22(uVar5,*(undefined2 *)(this + 0x45)),iVar7,iVar8,
                                       iVar6);
                    *(undefined2 *)(this + 0x4cb) = uVar5;
                    *(undefined4 *)(this + 0x4d9) = 1;
                  }
                  if (*(int *)(this + 0x4d9) == 1) {
                    uVar10 = thunk_FUN_004176c0(this,*(short *)(this + 0x4cb));
                    uVar10 = thunk_FUN_00417910(this,(short)uVar10);
                    if (uVar10 == 0xffffffff) {
                      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x223c,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STBoatC__LoadRC__LOADRC_ODEPOT_007aa2dc);
                      if (iVar6 != 0) {
                        pcVar2 = (code *)swi(3);
                        iVar6 = (*pcVar2)();
                        return iVar6;
                      }
                      iVar6 = 0x223d;
                      goto LAB_004660e9;
                    }
                    if (uVar10 == 0) {
                      *(undefined4 *)(this + 0x4d9) = 2;
                      goto switchD_00466448_caseD_2;
                    }
                  }
                  if (*(int *)(this + 0x4d9) == 2) {
                    thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                                       *(short *)(this + 0x45),*(short *)(this + 0x4c5) * 0xc9 + 100
                                       ,*(short *)(this + 0x4c7) * 0xc9 + 100,
                                       *(short *)(this + 0x4c9) * 200 + 100,(byte)this[0x61]);
                    *(undefined4 *)(this + 0x4d9) = 3;
                  }
                  if (*(int *)(this + 0x4d9) == 3) {
                    iStack_10 = thunk_FUN_00415ed0(this,&uStack_14,&iStack_18);
                    param_1 = (int *)0x0;
                    if (this[0x2bf] != (STBoatC)0x0) {
                      pSStack_c = this + 0x2b3;
                      do {
                        puVar11 = (undefined4 *)
                                  thunk_FUN_0041dc40(auStack_2c,*(undefined4 *)pSStack_c,
                                                     *(undefined2 *)(pSStack_c + 4),
                                                     *(short *)(this + 0x6c));
                        uStack_24 = *puVar11;
                        sStack_20 = *(short *)(puVar11 + 1);
                        if (DAT_0080732c == 1) {
                          bVar24 = 0;
                          sVar23 = 0;
                          iVar8 = -1;
                          uVar10 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
                          sVar22 = 0;
                          *(uint *)(this + 0x1c) = uVar10;
                          sVar21 = 0;
                          sVar20 = 0;
                          uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                          sVar19 = 0;
                          *(uint *)(this + 0x1c) = uVar12;
                          uStack_1c = uVar12 * 0x41c64e6d + 0x3039;
                          sVar18 = 0;
                          *(uint *)(this + 0x1c) = uStack_1c;
                          sVar17 = 0;
                          lVar16 = Library::MSVCRT::__ftol();
                          iVar6 = (int)(short)lVar16 + (uVar10 >> 0x10) % 7 +
                                  (int)*(short *)(this + 0x45) + -3 + (int)sStack_20;
                          iVar7 = ((uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) -
                                  (int)uStack_24._2_2_;
                          uVar10 = uStack_1c;
                        }
                        else {
                          bVar24 = 0;
                          uVar12 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
                          sVar23 = 0;
                          iVar8 = -1;
                          uVar13 = uVar12 * 0x41c64e6d + 0x3039;
                          sVar22 = 0;
                          sVar21 = 0;
                          sVar20 = 0;
                          sVar19 = 0;
                          sVar18 = 0;
                          *(uint *)(this + 0x1c) = uVar12;
                          uVar10 = uVar13 * 0x41c64e6d + 0x3039;
                          sVar17 = 0;
                          *(uint *)(this + 0x1c) = uVar13;
                          *(uint *)(this + 0x1c) = uVar10;
                          iVar6 = (uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 +
                                  (int)sStack_20;
                          uStack_24._2_2_ = (short)((uint)uStack_24 >> 0x10);
                          iVar7 = ((uVar13 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) -
                                  (int)uStack_24._2_2_;
                        }
                        TraksClassTy::TraksCreate
                                  (DAT_00802a7c,1,2,7,
                                   (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 +
                                   (int)(short)uStack_24,iVar7 + -3,iVar6,sVar17,sVar18,sVar19,
                                   sVar20,sVar21,sVar22,iVar8,sVar23,bVar24);
                        param_1 = (int *)((int)param_1 + 1);
                        pSStack_c = pSStack_c + 6;
                      } while ((int)param_1 < (int)(uint)(byte)this[0x2bf]);
                    }
                    if (iStack_10 == -1) {
                      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2262,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STBoatC__LoadRC__LOADRC_ODEPOT_2_007aa2b4);
                      if (iVar6 != 0) {
                        pcVar2 = (code *)swi(3);
                        iVar6 = (*pcVar2)();
                        return iVar6;
                      }
                      iVar6 = 0x2263;
                      goto LAB_004660e9;
                    }
                    if (iStack_10 == 0) {
                      *(undefined4 *)(this + 0x4cd) = 0;
                      *(undefined4 *)(this + 0x4d1) = 0;
                      *(undefined4 *)(this + 0xb7) = 3;
                      bVar3 = thunk_FUN_0048d440((int)this);
                      if (CONCAT31(extraout_var_15,bVar3) == 0) {
                        thunk_FUN_004602b0((int *)this);
                        *(undefined4 *)(this + 0x4d5) = 0;
                        *(undefined4 *)(this + 0xb7) = 0;
                        iVar6 = Defence(this,0);
                        return (-(uint)(iVar6 != -1) & 3) - 1;
                      }
                      if (CONCAT31(extraout_var_15,bVar3) == 1) {
                        sVar17 = *(short *)(this + 0x49f);
                        sVar18 = *(short *)(this + 0x49d);
                        sVar19 = *(short *)(this + 0x49b);
                        *(undefined4 *)(this + 0x4d5) = 0xe;
                      }
                      else {
                        sVar17 = *(short *)(this + 0x4a9);
                        sVar18 = *(short *)(this + 0x4a7);
                        sVar19 = *(short *)(this + 0x4a5);
                        *(undefined4 *)(this + 0x4d5) = 7;
                      }
                      thunk_FUN_00481520(this,(int)sVar19,(int)sVar18,sVar17 + 1);
                      thunk_FUN_00460260(this,0);
                    }
                  }
                  goto LAB_004693c9;
                }
                goto switchD_00466448_caseD_2;
              }
              if (iVar6 != 0xe) {
                iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x22ad,0,0,
                                           &DAT_007a4ccc,s_STBoatC__LoadRC___incorrect_entr_007aa254
                                          );
                if (iVar6 == 0) {
                  return -1;
                }
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
              iVar6 = thunk_FUN_00460260(this,2);
              switch(iVar6) {
              case 1:
                thunk_FUN_004602b0((int *)this);
              case 0:
                *(undefined4 *)(this + 0x4cd) = 0;
                *(undefined4 *)(this + 0x4d5) = 1;
                *(undefined4 *)(this + 0xb7) = 3;
              case 3:
                iVar6 = (int)*(short *)(this + 0x49d);
                iVar7 = (int)*(short *)(this + 0x49b);
                iVar8 = *(short *)(this + 0x49f) + 1;
                break;
              default:
                goto switchD_00466448_caseD_2;
              case -1:
                iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x228f,0,0,
                                           &DAT_007a4ccc,s_STBoatC__LoadRC__LOADRC_MOVEWAIT_007aa27c
                                          );
                if (iVar6 != 0) {
                  pcVar2 = (code *)swi(3);
                  iVar6 = (*pcVar2)();
                  return iVar6;
                }
                iVar6 = 0x228f;
                goto LAB_004660e9;
              }
              goto LAB_004699da;
            }
            iVar6 = *(int *)(this + 0x4cd) + 1;
            *(int *)(this + 0x4cd) = iVar6;
            if ((*(int *)(this + 0x4bd) == 1) || (*(int *)(this + 0x4c1) == 1)) {
              pSStack_c = (STBoatC *)0x0;
              if (*(int *)(this + 0x4bd) == 1) {
                *(undefined4 *)(this + 0x4bd) = 0;
                if (*(int *)(this + 0x4a1) != -1) {
                  sVar17 = *(short *)(this + 0x49b);
                  sVar18 = *(short *)(this + 0x49f);
                  sVar19 = *(short *)(this + 0x49d);
                  if (((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
                      ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = *(int *)(DAT_007fb248 +
                                    ((int)sVar18 * (int)DAT_007fb246 +
                                     (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8);
                  }
                  if (*(int *)(iVar7 + 0x18) != *(int *)(this + 0x4a1)) {
                    *(undefined4 *)(this + 0x4a1) = 0xffffffff;
                  }
                }
              }
              if (*(int *)(this + 0x4c1) == 1) {
                *(undefined4 *)(this + 0x4c1) = 0;
                if (*(int *)(this + 0x4ab) != -1) {
                  sVar17 = *(short *)(this + 0x4a5);
                  sVar18 = *(short *)(this + 0x4a9);
                  sVar19 = *(short *)(this + 0x4a7);
                  if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                     ((sVar19 < 0 ||
                      (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = *(int *)(DAT_007fb248 +
                                    ((int)sVar18 * (int)DAT_007fb246 +
                                     (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8);
                  }
                  if (*(int *)(iVar7 + 0x18) != *(int *)(this + 0x4ab)) {
                    *(undefined4 *)(this + 0x4ab) = 0xffffffff;
                  }
                }
                if (*(int *)(this + 0x4ab) != -1) {
                  pSStack_c = (STBoatC *)0x1;
                  goto LAB_00469198;
                }
              }
              else {
LAB_00469198:
                if ((*(int *)(this + 0x4ab) != -1) && (pSStack_c == (STBoatC *)0x0))
                goto LAB_004691ae;
              }
              *(undefined4 *)(this + 0x4cd) = 0;
              *(undefined4 *)(this + 0x4d5) = 0xd;
              *(undefined4 *)(this + 0xb7) = 3;
LAB_004693c9:
              iVar6 = (**(code **)(*(int *)this + 0xd8))();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
LAB_004691ae:
            if (iVar6 % 10 != 1) goto switchD_00466448_caseD_2;
            sVar17 = *(short *)(this + 0x4a5);
            sVar18 = *(short *)(this + 0x4a9);
            sVar19 = *(short *)(this + 0x4a7);
            if ((((((-1 < sVar17) && (sVar17 < DAT_007fb240)) &&
                  ((-1 < sVar19 &&
                   (((sVar19 < DAT_007fb242 && (-1 < sVar18)) && (sVar18 < DAT_007fb244)))))) &&
                 ((pvVar1 = *(void **)(DAT_007fb248 +
                                      ((int)sVar18 * (int)DAT_007fb246 +
                                       (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8),
                  pvVar1 != (void *)0x0 && (*(int *)((int)pvVar1 + 0x18) == *(int *)(this + 0x4ab)))
                 )) && (*(int *)((int)pvVar1 + 0x4b4) == 0)) && (*(int *)((int)pvVar1 + 0x245) != 6)
               ) {
              if (iVar6 % 0x78 == 1) {
                iVar6 = *(int *)(this + 0x6f7);
                if (iVar6 == 8) {
                  iVar6 = *(int *)this;
                  uVar25 = 0xfb;
LAB_004692be:
                  (**(code **)(iVar6 + 0x90))(3,uVar25);
                }
                else if (iVar6 == 0x14) {
                  (**(code **)(*(int *)this + 0x90))(3,0x15f);
                }
                else if (iVar6 == 0x1a) {
                  iVar6 = *(int *)this;
                  uVar25 = 0x19e;
                  goto LAB_004692be;
                }
              }
              iVar6 = *(int *)(this + 0x7d2);
              iVar7 = 1;
              if (iVar6 < 1) {
                iVar6 = *(int *)(this + 0x7d6);
                if (iVar6 < 1) {
                  iVar6 = *(int *)(this + 0x7da);
                  if (0 < iVar6) {
                    if (iVar6 < 1) {
                      iVar7 = iVar6;
                    }
                    thunk_FUN_004e1d70(pvVar1,0xde,iVar7 * 0x14);
                    thunk_FUN_004e16d0(pvVar1,*(int *)(this + 0x18));
                    *(int *)(this + 0x7da) = *(int *)(this + 0x7da) - iVar7;
                  }
                }
                else {
                  if (iVar6 < 1) {
                    iVar7 = iVar6;
                  }
                  thunk_FUN_004e1d70(pvVar1,0xdd,iVar7 * 3);
                  thunk_FUN_004e16d0(pvVar1,*(int *)(this + 0x18));
                  *(int *)(this + 0x7d6) = *(int *)(this + 0x7d6) - iVar7;
                }
              }
              else {
                if (iVar6 < 1) {
                  iVar7 = iVar6;
                }
                thunk_FUN_004e1d70(pvVar1,0xdc,iVar7 * 5);
                thunk_FUN_004e16d0(pvVar1,*(int *)(this + 0x18));
                *(int *)(this + 0x7d2) = *(int *)(this + 0x7d2) - iVar7;
              }
              if (*(int *)(this + 0x7da) + *(int *)(this + 0x7d6) + *(int *)(this + 0x7d2) != 0)
              goto switchD_00466448_caseD_2;
            }
            thunk_FUN_0048d930((int)this);
            *(undefined4 *)(this + 0x4cd) = 0;
            *(undefined4 *)(this + 0x4d5) = 0xd;
            *(undefined4 *)(this + 0xb7) = 3;
            goto switchD_00466448_caseD_2;
          }
          if (*(int *)(this + 0x4cd) < 1) {
            iVar6 = thunk_FUN_00460260(this,2);
            switch(iVar6) {
            case 0:
              if (((*(short *)(this + 0x47) == *(short *)(this + 0x4c5)) &&
                  (*(short *)(this + 0x49) == *(short *)(this + 0x4c7))) &&
                 (*(short *)(this + 0x4b) == *(short *)(this + 0x4c9))) {
                *(undefined4 *)(this + 0x4d5) = 0xb;
                *(undefined4 *)(this + 0x4d9) = 0;
                iVar6 = (**(code **)(*(int *)this + 0xd8))();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              sVar17 = *(short *)(this + 0x4a5);
              sVar18 = *(short *)(this + 0x4a9);
              sVar19 = *(short *)(this + 0x4a7);
              if ((((-1 < sVar17) && (sVar17 < DAT_007fb240)) &&
                  ((-1 < sVar19 &&
                   (((sVar19 < DAT_007fb242 && (-1 < sVar18)) && (sVar18 < DAT_007fb244)))))) &&
                 ((pvVar1 = *(void **)(DAT_007fb248 +
                                      ((int)sVar18 * (int)DAT_007fb246 +
                                       (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8),
                  pvVar1 != (void *)0x0 && (*(int *)((int)pvVar1 + 0x18) == *(int *)(this + 0x4ab)))
                 )) {
                thunk_FUN_004e1690(pvVar1,*(int *)(this + 0x18));
              }
              return 0;
            case 1:
              goto switchD_0046878c_caseD_1;
            default:
              goto switchD_004660af_caseD_2;
            case 3:
              sVar17 = *(short *)(this + 0x4a5);
              sVar18 = *(short *)(this + 0x4a9);
              sVar19 = *(short *)(this + 0x4a7);
              if ((((-1 < sVar17) && (sVar17 < DAT_007fb240)) && (-1 < sVar19)) &&
                 (((sVar19 < DAT_007fb242 && (-1 < sVar18)) &&
                  ((sVar18 < DAT_007fb244 &&
                   (pvVar1 = *(void **)(DAT_007fb248 +
                                       ((int)sVar18 * (int)DAT_007fb246 +
                                        (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8),
                   pvVar1 != (void *)0x0)))))) {
                thunk_FUN_0048d650(this,pvVar1);
              }
              thunk_FUN_00481520(this,(int)*(short *)(this + 0x4c5),(int)*(short *)(this + 0x4c7),
                                 (int)*(short *)(this + 0x4c9));
              goto LAB_00468c49;
            case -1:
              iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2126,0,0,
                                         &DAT_007a4ccc,s_STBoatC__LoadRC__move_to_depot_2_007aa354);
              if (iVar6 != 0) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
              iVar6 = 0x2126;
              goto LAB_004660e9;
            }
          }
          iVar6 = *(int *)(this + 0x4cd) + 1;
          *(int *)(this + 0x4cd) = iVar6;
          if (iVar6 == 2) {
            iVar6 = Defence(this,0);
            if (iVar6 != -1) {
              return 2;
            }
            return -1;
          }
          iVar6 = Defence(this,2);
          if (iVar6 == -1) {
            return -1;
          }
          if (*(int *)(this + 0x82e) != 0) {
            return 2;
          }
          if (*(int *)(this + 0x4bd) == 1) {
LAB_004685d3:
            *(undefined4 *)(this + 0x4bd) = 0;
            if (*(int *)(this + 0x4a1) != -1) {
              sVar17 = *(short *)(this + 0x49b);
              sVar18 = *(short *)(this + 0x49f);
              sVar19 = *(short *)(this + 0x49d);
              if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                 ((sVar19 < 0 ||
                  (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                                (int)sVar17) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
                *(undefined4 *)(this + 0x4a1) = 0xffffffff;
              }
            }
          }
          else {
            if (*(int *)(this + 0x4c1) != 1) {
              return 2;
            }
            if (*(int *)(this + 0x4bd) == 1) goto LAB_004685d3;
          }
          if (*(int *)(this + 0x4c1) == 1) {
            *(undefined4 *)(this + 0x4c1) = 0;
            if (*(int *)(this + 0x4ab) != -1) {
              sVar17 = *(short *)(this + 0x4a5);
              sVar18 = *(short *)(this + 0x4a9);
              sVar19 = *(short *)(this + 0x4a7);
              if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                 (((sVar19 < 0 || ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) ||
                  (DAT_007fb244 <= sVar18)))) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                                (int)sVar17) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
                *(undefined4 *)(this + 0x4ab) = 0xffffffff;
              }
            }
          }
          bVar3 = thunk_FUN_0048d440((int)this);
          if (CONCAT31(extraout_var_13,bVar3) == 0) {
            thunk_FUN_004602b0((int *)this);
            *(undefined4 *)(this + 0x4d5) = 0;
            goto LAB_00469979;
          }
          if (CONCAT31(extraout_var_13,bVar3) == 7) {
            if (*(int *)(this + 0x4ab) == -1) {
              return 2;
            }
            goto LAB_00468742;
          }
          goto LAB_00465e40;
        }
        if (*(int *)(this + 0x4cd) < 1) {
          iVar6 = thunk_FUN_00460260(this,2);
          switch(iVar6) {
          case 0:
            iVar6 = thunk_FUN_00490570((int)this);
            if (iVar6 == 1) {
              sVar17 = *(short *)(this + 0x4a5);
              sVar18 = *(short *)(this + 0x4a9);
              sVar19 = *(short *)(this + 0x4a7);
              if ((((((-1 < sVar17) && (sVar17 < DAT_007fb240)) && (-1 < sVar19)) &&
                   ((sVar19 < DAT_007fb242 && (-1 < sVar18)))) &&
                  ((sVar18 < DAT_007fb244 &&
                   ((iVar6 = *(int *)(DAT_007fb248 +
                                     ((int)sVar18 * (int)DAT_007fb246 +
                                      (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8),
                    iVar6 != 0 && (*(int *)(iVar6 + 0x18) == *(int *)(this + 0x4ab))))))) &&
                 (iVar6 = thunk_FUN_004e1490(iVar6), iVar6 != 1)) {
                uVar5 = (undefined2)((uint)(this + 0x4af) >> 0x10);
                thunk_FUN_0048dfd0(CONCAT22(uVar5,*(undefined2 *)(this + 0x47)),
                                   CONCAT22(extraout_var_24,*(undefined2 *)(this + 0x49)),
                                   CONCAT22(extraout_var_20,*(undefined2 *)(this + 0x4b)),
                                   CONCAT22(uVar5,*(undefined2 *)(this + 0x4a5)),
                                   CONCAT22(extraout_var_24,*(undefined2 *)(this + 0x4a7)),
                                   (int *)CONCAT22(extraout_var_20,*(short *)(this + 0x4a9) + 1),1,
                                   (short *)(this + 0x4af),(short *)(this + 0x4b1),
                                   (short *)(this + 0x4b3));
                *(undefined4 *)(this + 0x4d5) = 8;
                *(undefined4 *)(this + 0xb7) = 0;
                thunk_FUN_00481520(this,(int)*(short *)(this + 0x4af),(int)*(short *)(this + 0x4b1),
                                   (int)*(short *)(this + 0x4b3));
                break;
              }
            }
            *(undefined4 *)(this + 0x4d5) = 9;
            goto LAB_00469979;
          case 1:
            if ((*(int *)(this + 0x4bd) != 1) && (*(int *)(this + 0x4c1) != 1))
            goto switchD_004660af_caseD_2;
            pSStack_c = (STBoatC *)0x0;
            if (*(int *)(this + 0x4bd) == 1) {
              *(undefined4 *)(this + 0x4bd) = 0;
              if (*(int *)(this + 0x4a1) != -1) {
                sVar17 = *(short *)(this + 0x49b);
                sVar18 = *(short *)(this + 0x49f);
                sVar19 = *(short *)(this + 0x49d);
                if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                   ((sVar19 < 0 ||
                    (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                  + (int)sVar17) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
                  *(undefined4 *)(this + 0x4a1) = 0xffffffff;
                }
              }
            }
            if (*(int *)(this + 0x4c1) == 1) {
              *(undefined4 *)(this + 0x4c1) = 0;
              if (*(int *)(this + 0x4ab) != -1) {
                sVar17 = *(short *)(this + 0x4a5);
                sVar18 = *(short *)(this + 0x4a9);
                sVar19 = *(short *)(this + 0x4a7);
                if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
                    ((sVar19 < 0 || ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))))) ||
                   (DAT_007fb244 <= sVar18)) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                  + (int)sVar17) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
                  *(undefined4 *)(this + 0x4ab) = 0xffffffff;
                }
              }
              if (*(int *)(this + 0x4ab) != -1) {
                pSStack_c = (STBoatC *)0x1;
              }
            }
            bVar3 = thunk_FUN_0048d440((int)this);
            if (CONCAT31(extraout_var_08,bVar3) == 0) goto LAB_00467fe4;
            if (CONCAT31(extraout_var_08,bVar3) == 7) {
              if ((*(int *)(this + 0x4ab) != -1) && (pSStack_c == (STBoatC *)0x0))
              goto switchD_004660af_caseD_2;
              thunk_FUN_004602b0((int *)this);
              if (*(int *)(this + 0x4ab) == -1) {
                *(int *)(this + 0x4cd) = *(int *)(this + 0x4cd) + 1;
                iVar6 = (**(code **)(*(int *)this + 0xd8))();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              if (pSStack_c != (STBoatC *)0x1) goto switchD_004660af_caseD_2;
              thunk_FUN_00481520(this,(int)*(short *)(this + 0x4a5),(int)*(short *)(this + 0x4a7),
                                 *(short *)(this + 0x4a9) + 1);
            }
            else {
              thunk_FUN_004602b0((int *)this);
              *(undefined4 *)(this + 0x4d5) = 1;
              thunk_FUN_00481520(this,(int)*(short *)(this + 0x49b),(int)*(short *)(this + 0x49d),
                                 *(short *)(this + 0x49f) + 1);
            }
            break;
          default:
            goto switchD_004660af_caseD_2;
          case 3:
            thunk_FUN_00481520(this,(int)*(short *)(this + 0x4a5),(int)*(short *)(this + 0x4a7),
                               *(short *)(this + 0x4a9) + 1);
            break;
          case -1:
            iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1fb8,0,0,
                                       &DAT_007a4ccc,s_STBoatC__LoadRC__move_to_depot_e_007aa3bc);
            if (iVar6 != 0) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            iVar6 = 0x1fb8;
            goto LAB_004660e9;
          }
          goto LAB_00468c49;
        }
        iVar6 = *(int *)(this + 0x4cd) + 1;
        *(int *)(this + 0x4cd) = iVar6;
        if (iVar6 == 2) {
          iVar6 = Defence(this,0);
          if (iVar6 != -1) {
            return 2;
          }
          return -1;
        }
        iVar6 = Defence(this,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (*(int *)(this + 0x82e) != 0) {
          return 2;
        }
        if (*(int *)(this + 0x4bd) == 1) {
LAB_0046779f:
          *(undefined4 *)(this + 0x4bd) = 0;
          if (*(int *)(this + 0x4a1) != -1) {
            sVar17 = *(short *)(this + 0x49b);
            sVar18 = *(short *)(this + 0x49f);
            sVar19 = *(short *)(this + 0x49d);
            if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
               (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                              (int)sVar17) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
              *(undefined4 *)(this + 0x4a1) = 0xffffffff;
            }
          }
        }
        else {
          if (*(int *)(this + 0x4c1) != 1) {
            return 2;
          }
          if (*(int *)(this + 0x4bd) == 1) goto LAB_0046779f;
        }
        if (*(int *)(this + 0x4c1) == 1) {
          *(undefined4 *)(this + 0x4c1) = 0;
          if (*(int *)(this + 0x4ab) != -1) {
            sVar17 = *(short *)(this + 0x4a5);
            sVar18 = *(short *)(this + 0x4a9);
            sVar19 = *(short *)(this + 0x4a7);
            if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
               ((sVar19 < 0 ||
                (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                              (int)sVar17) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
              *(undefined4 *)(this + 0x4ab) = 0xffffffff;
            }
          }
        }
        bVar3 = thunk_FUN_0048d440((int)this);
        if (CONCAT31(extraout_var_07,bVar3) == 0) {
          thunk_FUN_004602b0((int *)this);
          *(undefined4 *)(this + 0x4d5) = 0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_07,bVar3) != 7) {
          *(undefined4 *)(this + 0x4cd) = 0;
          *(undefined4 *)(this + 0x4d5) = 1;
          goto LAB_00465e5a;
        }
        if (*(int *)(this + 0x4ab) == -1) {
          return 2;
        }
        *(undefined4 *)(this + 0x4cd) = 0;
        goto LAB_0046875c;
      }
      iVar6 = *(int *)(this + 0x4d1);
      *(int *)(this + 0x4d1) = iVar6 + 1;
      if (iVar6 + 1 < 0x47) goto switchD_00466448_caseD_2;
      iVar6 = thunk_FUN_00460260(this,2);
      switch(iVar6) {
      case 1:
        iVar6 = *(int *)(this + 0x4cd);
        *(int *)(this + 0x4cd) = iVar6 + 1;
        if (iVar6 + 1 < 3) goto switchD_00466448_caseD_2;
        thunk_FUN_004602b0((int *)this);
      case 0:
        *(undefined4 *)(this + 0x4cd) = 0;
        *(undefined4 *)(this + 0x4d1) = 0;
        *(undefined4 *)(this + 0x4d5) = 7;
        *(undefined4 *)(this + 0xb7) = 3;
      case 3:
        iVar6 = (int)*(short *)(this + 0x4a7);
        iVar7 = (int)*(short *)(this + 0x4a5);
        iVar8 = *(short *)(this + 0x4a9) + 1;
        break;
      default:
        goto switchD_00466448_caseD_2;
      case -1:
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1f53,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadRC__LOADRC_MOVEWAIT_007aa3e8);
        if (iVar6 != 0) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        iVar6 = 0x1f53;
        goto LAB_004660e9;
      }
      goto LAB_004699da;
    }
    iVar6 = thunk_FUN_00460260(this,2);
    switch(iVar6) {
    case 0:
      iVar6 = thunk_FUN_00490570((int)this);
      if (iVar6 != 1) {
        *(undefined4 *)(this + 0x4d5) = 3;
        *(undefined4 *)(this + 0xb7) = 3;
        iVar6 = Defence(this,0);
        return (-(uint)(iVar6 != -1) & 3) - 1;
      }
      iVar7 = CONCAT22(extraout_var_18,*(undefined2 *)(this + 0x49b));
      iVar6 = CONCAT22((short)((uint)(this + 0x4af) >> 0x10),*(undefined2 *)(this + 0x49d));
      piVar14 = (int *)CONCAT22(extraout_var_23,*(short *)(this + 0x49f) + 1);
LAB_00467da5:
      thunk_FUN_0048dfd0(CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)(this + 0x47)),
                         CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(this + 0x49)),
                         CONCAT22((short)((uint)piVar14 >> 0x10),*(undefined2 *)(this + 0x4b)),iVar7
                         ,iVar6,piVar14,1,(short *)(this + 0x4af),(short *)(this + 0x4b1),
                         (short *)(this + 0x4b3));
      thunk_FUN_00481520(this,(int)*(short *)(this + 0x4af),(int)*(short *)(this + 0x4b1),
                         (int)*(short *)(this + 0x4b3));
      break;
    case 1:
      if ((*(int *)(this + 0x4bd) == 1) || (*(int *)(this + 0x4c1) == 1)) {
        pSStack_c = (STBoatC *)0x0;
        if (*(int *)(this + 0x4bd) == 1) {
          *(undefined4 *)(this + 0x4bd) = 0;
          if (*(int *)(this + 0x4a1) != -1) {
            sVar17 = *(short *)(this + 0x49b);
            sVar18 = *(short *)(this + 0x49f);
            sVar19 = *(short *)(this + 0x49d);
            if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
               ((sVar19 < 0 ||
                (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                              (int)sVar17) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
              *(undefined4 *)(this + 0x4a1) = 0xffffffff;
            }
          }
          if (*(int *)(this + 0x4a1) != -1) {
            pSStack_c = (STBoatC *)0x1;
          }
        }
        if (*(int *)(this + 0x4c1) == 1) {
          *(undefined4 *)(this + 0x4c1) = 0;
          if (*(int *)(this + 0x4ab) != -1) {
            sVar17 = *(short *)(this + 0x4a5);
            sVar18 = *(short *)(this + 0x4a9);
            sVar19 = *(short *)(this + 0x4a7);
            if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
               (((sVar19 < 0 || ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) ||
                (DAT_007fb244 <= sVar18)))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                              (int)sVar17) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
              *(undefined4 *)(this + 0x4ab) = 0xffffffff;
            }
          }
        }
        bVar3 = thunk_FUN_0048d440((int)this);
        if (CONCAT31(extraout_var_02,bVar3) == 0) {
LAB_00467fe4:
          thunk_FUN_004602b0((int *)this);
          *(undefined4 *)(this + 0x4d5) = 0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_02,bVar3) == 1) {
          if ((*(int *)(this + 0x4a1) != -1) && (pSStack_c == (STBoatC *)0x0))
          goto switchD_00466448_caseD_2;
          thunk_FUN_004602b0((int *)this);
          if (*(int *)(this + 0x4a1) == -1) {
            *(int *)(this + 0x4cd) = *(int *)(this + 0x4cd) + 1;
            goto switchD_00466448_caseD_2;
          }
          if (pSStack_c != (STBoatC *)0x1) goto LAB_00466744;
          *(undefined4 *)(this + 0xb7) = 3;
          *(undefined4 *)(this + 0x4d5) = 1;
          thunk_FUN_00481520(this,(int)*(short *)(this + 0x49b),(int)*(short *)(this + 0x49d),
                             *(short *)(this + 0x49f) + 1);
        }
        else {
LAB_0046817e:
          thunk_FUN_004602b0((int *)this);
          *(undefined4 *)(this + 0xb7) = 3;
          *(undefined4 *)(this + 0x4d5) = 7;
          thunk_FUN_00481520(this,(int)*(short *)(this + 0x4a5),(int)*(short *)(this + 0x4a7),
                             *(short *)(this + 0x4a9) + 1);
        }
      }
      else {
LAB_00466744:
        sVar17 = *(short *)(this + 0x49b);
        sVar18 = *(short *)(this + 0x49f);
        sVar19 = *(short *)(this + 0x49d);
        if ((((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
             ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) ||
            ((DAT_007fb244 <= sVar18 ||
             ((pvVar1 = *(void **)(DAT_007fb248 +
                                  ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                  + (int)sVar17) * 8), pvVar1 == (void *)0x0 ||
              (*(int *)((int)pvVar1 + 0x18) != *(int *)(this + 0x4a1))))))) ||
           (iVar6 = thunk_FUN_004e1490((int)pvVar1), iVar6 != 1)) goto switchD_00466448_caseD_2;
        thunk_FUN_004602b0((int *)this);
        thunk_FUN_004e15f0(pvVar1,*(undefined4 *)(this + 0x18));
        *(undefined4 *)(this + 0x4cd) = 0;
        *(undefined4 *)(this + 0x4d5) = 4;
        thunk_FUN_00481520(this,(int)*(short *)(this + 0x49b),(int)*(short *)(this + 0x49d),
                           *(short *)(this + 0x49f) + 1);
      }
      break;
    default:
      goto switchD_00466448_caseD_2;
    case 3:
      iVar6 = thunk_FUN_00490570((int)this);
      if (iVar6 == 1) {
        iVar6 = CONCAT22((short)((uint)(this + 0x4b1) >> 0x10),*(undefined2 *)(this + 0x49d));
        iVar7 = CONCAT22((short)((uint)(this + 0x4af) >> 0x10),*(undefined2 *)(this + 0x49b));
        piVar14 = (int *)CONCAT22((short)((uint)(this + 0x4b3) >> 0x10),*(short *)(this + 0x49f) + 1
                                 );
LAB_00467e31:
        thunk_FUN_0048dfd0(CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)(this + 0x47)),
                           CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(this + 0x49)),
                           CONCAT22((short)((uint)piVar14 >> 0x10),*(undefined2 *)(this + 0x4b)),
                           iVar7,iVar6,piVar14,1,(short *)(this + 0x4af),(short *)(this + 0x4b1),
                           (short *)(this + 0x4b3));
      }
LAB_00467e48:
      thunk_FUN_00481520(this,(int)*(short *)(this + 0x4af),(int)*(short *)(this + 0x4b1),
                         (int)*(short *)(this + 0x4b3));
      break;
    case -1:
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1d66,0,0,&DAT_007a4ccc,
                                 s_STBoatC__LoadRC__correct_move_to_007aa4b0);
      if (iVar6 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1d66);
        return 0xffff;
      }
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
LAB_004699e2:
  thunk_FUN_00460260(this,0);
switchD_00466448_caseD_2:
  iVar6 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
switchD_0046878c_caseD_1:
  if ((*(int *)(this + 0x4bd) == 1) || (*(int *)(this + 0x4c1) == 1)) {
    pSStack_c = (STBoatC *)0x0;
    if (*(int *)(this + 0x4bd) == 1) {
      *(undefined4 *)(this + 0x4bd) = 0;
      if (*(int *)(this + 0x4a1) != -1) {
        sVar17 = *(short *)(this + 0x49b);
        sVar18 = *(short *)(this + 0x49f);
        sVar19 = *(short *)(this + 0x49d);
        if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
           (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(DAT_007fb248 +
                          ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                          (int)sVar17) * 8);
        }
        if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4a1)) {
          *(undefined4 *)(this + 0x4a1) = 0xffffffff;
        }
      }
    }
    if (*(int *)(this + 0x4c1) == 1) {
      *(undefined4 *)(this + 0x4c1) = 0;
      if (*(int *)(this + 0x4ab) != -1) {
        sVar17 = *(short *)(this + 0x4a5);
        sVar18 = *(short *)(this + 0x4a9);
        sVar19 = *(short *)(this + 0x4a7);
        if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
           ((sVar19 < 0 || (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18))))
           )) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(DAT_007fb248 +
                          ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                          (int)sVar17) * 8);
        }
        if (*(int *)(iVar6 + 0x18) != *(int *)(this + 0x4ab)) {
          *(undefined4 *)(this + 0x4ab) = 0xffffffff;
        }
      }
      if (*(int *)(this + 0x4ab) != -1) {
        pSStack_c = (STBoatC *)0x1;
      }
    }
    bVar3 = thunk_FUN_0048d440((int)this);
    if (CONCAT31(extraout_var_14,bVar3) == 0) {
      thunk_FUN_004602b0((int *)this);
      *(undefined4 *)(this + 0x4d5) = 0;
      goto LAB_00469979;
    }
    if (CONCAT31(extraout_var_14,bVar3) != 7) {
      thunk_FUN_004602b0((int *)this);
      sVar18 = *(short *)(this + 0x49d);
      sVar17 = *(short *)(this + 0x49b);
      iVar6 = *(short *)(this + 0x49f) + 1;
      *(undefined4 *)(this + 0x4cd) = 0;
      *(undefined4 *)(this + 0xb7) = 3;
      *(undefined4 *)(this + 0x4d5) = 1;
      goto LAB_00468c40;
    }
    if ((*(int *)(this + 0x4ab) != -1) && (pSStack_c == (STBoatC *)0x0))
    goto switchD_004660af_caseD_2;
    thunk_FUN_004602b0((int *)this);
    if (*(int *)(this + 0x4ab) == -1) {
      *(int *)(this + 0x4cd) = *(int *)(this + 0x4cd) + 1;
      iVar6 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (pSStack_c == (STBoatC *)0x1) {
      *(undefined4 *)(this + 0x4cd) = 0;
      *(undefined4 *)(this + 0x4d5) = 7;
      goto LAB_00468b38;
    }
  }
  thunk_FUN_004602b0((int *)this);
  sVar17 = *(short *)(this + 0x4a5);
  sVar18 = *(short *)(this + 0x4a9);
  sVar19 = *(short *)(this + 0x4a7);
  if (((-1 < sVar17) && (sVar17 < DAT_007fb240)) &&
     ((-1 < sVar19 &&
      ((((sVar19 < DAT_007fb242 && (-1 < sVar18)) && (sVar18 < DAT_007fb244)) &&
       (pvVar1 = *(void **)(DAT_007fb248 +
                           ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                           (int)sVar17) * 8), pvVar1 != (void *)0x0)))))) {
    thunk_FUN_0048d650(this,pvVar1);
  }
  thunk_FUN_00481520(this,(int)*(short *)(this + 0x4c5),(int)*(short *)(this + 0x4c7),
                     (int)*(short *)(this + 0x4c9));
  goto LAB_00468c49;
}

