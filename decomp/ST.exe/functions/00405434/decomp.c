
int __fastcall thunk_FUN_00465c60(int *param_1,undefined4 param_2,int param_3)

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
  undefined2 extraout_var_22;
  undefined2 extraout_var_23;
  int *piVar14;
  undefined2 extraout_var_24;
  undefined2 extraout_var_25;
  longlong lVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  byte bVar23;
  undefined4 uVar24;
  undefined4 auStack_2c [2];
  undefined4 uStack_24;
  short sStack_20;
  uint uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  if ((param_3 == 0) || (param_3 == 1)) {
    piVar14 = param_1 + 0xb3;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar14 = 0;
      piVar14 = piVar14 + 1;
    }
    param_1[0xb1] = 0;
    *(undefined2 *)((int)param_1 + 0x49b) = *(undefined2 *)((int)param_1 + 0x353);
    *(undefined2 *)((int)param_1 + 0x49d) = *(undefined2 *)((int)param_1 + 0x355);
    *(undefined2 *)((int)param_1 + 0x49f) = *(undefined2 *)((int)param_1 + 0x357);
    *(undefined4 *)((int)param_1 + 0x4a1) = *(undefined4 *)((int)param_1 + 0x359);
    *(undefined2 *)((int)param_1 + 0x4a5) = *(undefined2 *)((int)param_1 + 0x35d);
    *(undefined2 *)((int)param_1 + 0x4a7) = *(undefined2 *)((int)param_1 + 0x35f);
    *(undefined2 *)((int)param_1 + 0x4a9) = *(undefined2 *)((int)param_1 + 0x361);
    *(undefined4 *)((int)param_1 + 0x4ab) = *(undefined4 *)((int)param_1 + 0x363);
    *(undefined4 *)((int)param_1 + 0x4b5) = *(undefined4 *)((int)param_1 + 0x367);
    *(undefined4 *)((int)param_1 + 0x4b9) = *(undefined4 *)((int)param_1 + 0x36b);
    *(undefined4 *)((int)param_1 + 0x4c1) = 0;
    *(undefined4 *)((int)param_1 + 0x4bd) = 0;
    *(undefined4 *)((int)param_1 + 0x4d1) = 0;
    *(undefined4 *)((int)param_1 + 0x4cd) = 0;
    bVar3 = thunk_FUN_0048d440((int)param_1);
    iVar6 = CONCAT31(extraout_var_16,bVar3);
    if (iVar6 == 0) {
LAB_00469972:
      *(undefined4 *)((int)param_1 + 0x4d5) = 0;
      goto LAB_00469979;
    }
    *(int *)((int)param_1 + 0x4d5) = iVar6;
    *(undefined4 *)((int)param_1 + 0xb7) = 3;
    if (iVar6 == 1) {
      sVar18 = *(short *)((int)param_1 + 0x49f);
      sVar17 = *(short *)((int)param_1 + 0x49d);
      sVar16 = *(short *)((int)param_1 + 0x49b);
    }
    else {
      sVar18 = *(short *)((int)param_1 + 0x4a9);
      sVar17 = *(short *)((int)param_1 + 0x4a7);
      sVar16 = *(short *)((int)param_1 + 0x4a5);
    }
    iVar8 = sVar18 + 1;
    iVar6 = (int)sVar17;
    iVar7 = (int)sVar16;
LAB_004699da:
    thunk_FUN_00481520(param_1,iVar7,iVar6,iVar8);
  }
  else {
    iVar6 = *(int *)((int)param_1 + 0x4d5);
    if (iVar6 == 0) {
      iVar6 = thunk_FUN_004608b0(param_1,2);
      if (iVar6 == -1) {
        return -1;
      }
      if (*(int *)((int)param_1 + 0x82e) != 0) {
        return 2;
      }
      if (*(int *)((int)param_1 + 0x4bd) == 1) {
LAB_00465cda:
        *(undefined4 *)((int)param_1 + 0x4bd) = 0;
        if (*(int *)((int)param_1 + 0x4a1) != -1) {
          sVar16 = *(short *)((int)param_1 + 0x49b);
          sVar17 = *(short *)((int)param_1 + 0x49f);
          sVar18 = *(short *)((int)param_1 + 0x49d);
          if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
              ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar17 + (int)DAT_007fb240 * (int)sVar18 +
                            (int)sVar16) * 8);
          }
          if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
            *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
          }
        }
      }
      else {
        if (*(int *)((int)param_1 + 0x4c1) != 1) {
          return 2;
        }
        if (*(int *)((int)param_1 + 0x4bd) == 1) goto LAB_00465cda;
      }
      if (*(int *)((int)param_1 + 0x4c1) == 1) {
        *(undefined4 *)((int)param_1 + 0x4c1) = 0;
        if (*(int *)((int)param_1 + 0x4ab) != -1) {
          sVar16 = *(short *)((int)param_1 + 0x4a5);
          sVar17 = *(short *)((int)param_1 + 0x4a9);
          sVar18 = *(short *)((int)param_1 + 0x4a7);
          if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
             ((sVar18 < 0 ||
              (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(DAT_007fb248 +
                            ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                            (int)sVar16) * 8);
          }
          if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
            *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
          }
        }
      }
      bVar3 = thunk_FUN_0048d440((int)param_1);
      if (CONCAT31(extraout_var,bVar3) == 0) {
        return 2;
      }
      if (CONCAT31(extraout_var,bVar3) == 1) {
        if (*(int *)((int)param_1 + 0x4a1) == -1) {
          return 2;
        }
LAB_00465e40:
        *(undefined4 *)((int)param_1 + 0x4cd) = 0;
        *(undefined4 *)((int)param_1 + 0x4d5) = 1;
        *(undefined4 *)((int)param_1 + 0xb7) = 3;
        goto LAB_00465e5a;
      }
LAB_00468742:
      *(undefined4 *)((int)param_1 + 0x4cd) = 0;
      *(undefined4 *)((int)param_1 + 0x4d5) = 7;
      *(undefined4 *)((int)param_1 + 0xb7) = 3;
LAB_0046875c:
      sVar16 = *(short *)((int)param_1 + 0x4a9);
      sVar17 = *(short *)((int)param_1 + 0x4a7);
      sVar18 = *(short *)((int)param_1 + 0x4a5);
LAB_00465e72:
      thunk_FUN_00481520(param_1,(int)sVar18,(int)sVar17,sVar16 + 1);
LAB_00465e7b:
      thunk_FUN_00460260(param_1,0);
      return 2;
    }
    if (iVar6 == 1) {
      if (*(int *)((int)param_1 + 0x4cd) < 1) {
        iVar6 = thunk_FUN_00460260(param_1,2);
        switch(iVar6) {
        case 0:
          iVar6 = thunk_FUN_00490570((int)param_1);
          if (iVar6 == 1) {
            sVar16 = *(short *)((int)param_1 + 0x49b);
            sVar17 = *(short *)((int)param_1 + 0x49f);
            sVar18 = *(short *)((int)param_1 + 0x49d);
            if ((((((-1 < sVar16) && (sVar16 < DAT_007fb240)) && (-1 < sVar18)) &&
                 ((sVar18 < DAT_007fb242 && (-1 < sVar17)))) &&
                ((sVar17 < DAT_007fb244 &&
                 ((iVar6 = *(int *)(DAT_007fb248 +
                                   ((int)sVar17 * (int)DAT_007fb246 +
                                    (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8), iVar6 != 0
                  && (*(int *)(iVar6 + 0x18) == *(int *)((int)param_1 + 0x4a1))))))) &&
               (iVar6 = thunk_FUN_004e1490(iVar6), iVar6 != 1)) {
              uVar5 = (undefined2)((uint)((int)param_1 + 0x4af) >> 0x10);
              thunk_FUN_0048dfd0(CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x47)),
                                 CONCAT22(extraout_var_22,*(undefined2 *)((int)param_1 + 0x49)),
                                 CONCAT22(extraout_var_17,*(undefined2 *)((int)param_1 + 0x4b)),
                                 CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x49b)),
                                 CONCAT22(extraout_var_22,*(undefined2 *)((int)param_1 + 0x49d)),
                                 (int *)CONCAT22(extraout_var_17,
                                                 *(short *)((int)param_1 + 0x49f) + 1),1,
                                 (short *)((int)param_1 + 0x4af),(short *)((int)param_1 + 0x4b1),
                                 (short *)((int)param_1 + 0x4b3));
              *(undefined4 *)((int)param_1 + 0x4d5) = 2;
              *(undefined4 *)((int)param_1 + 0xb7) = 0;
              thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4af),
                                 (int)*(short *)((int)param_1 + 0x4b1),
                                 (int)*(short *)((int)param_1 + 0x4b3));
              break;
            }
          }
          *(undefined4 *)((int)param_1 + 0x4d5) = 3;
          goto LAB_00469979;
        case 1:
          if ((*(int *)((int)param_1 + 0x4bd) != 1) && (*(int *)((int)param_1 + 0x4c1) != 1))
          goto switchD_004660af_caseD_2;
          puStack_c = (undefined4 *)0x0;
          if (*(int *)((int)param_1 + 0x4bd) == 1) {
            *(undefined4 *)((int)param_1 + 0x4bd) = 0;
            if (*(int *)((int)param_1 + 0x4a1) != -1) {
              sVar16 = *(short *)((int)param_1 + 0x49b);
              sVar17 = *(short *)((int)param_1 + 0x49f);
              sVar18 = *(short *)((int)param_1 + 0x49d);
              if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                 ((sVar18 < 0 ||
                  (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                                (int)sVar16) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
                *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
              }
            }
            if (*(int *)((int)param_1 + 0x4a1) != -1) {
              puStack_c = (undefined4 *)0x1;
            }
          }
          if (*(int *)((int)param_1 + 0x4c1) == 1) {
            *(undefined4 *)((int)param_1 + 0x4c1) = 0;
            if (*(int *)((int)param_1 + 0x4ab) != -1) {
              sVar16 = *(short *)((int)param_1 + 0x4a5);
              sVar17 = *(short *)((int)param_1 + 0x4a9);
              sVar18 = *(short *)((int)param_1 + 0x4a7);
              if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                  ((sVar18 < 0 || ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))))) ||
                 (DAT_007fb244 <= sVar17)) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                                (int)sVar16) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
                *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
              }
            }
          }
          bVar3 = thunk_FUN_0048d440((int)param_1);
          if (CONCAT31(extraout_var_01,bVar3) == 0) goto LAB_00467fe4;
          if (CONCAT31(extraout_var_01,bVar3) == 1) {
            if ((*(int *)((int)param_1 + 0x4a1) != -1) && (puStack_c == (undefined4 *)0x0))
            goto switchD_004660af_caseD_2;
            thunk_FUN_004602b0(param_1);
            if (*(int *)((int)param_1 + 0x4a1) == -1) {
              *(int *)((int)param_1 + 0x4cd) = *(int *)((int)param_1 + 0x4cd) + 1;
              iVar6 = (**(code **)(*param_1 + 0xd8))();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
            if (puStack_c != (undefined4 *)0x1) goto switchD_004660af_caseD_2;
LAB_00467018:
            thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x49b),
                               (int)*(short *)((int)param_1 + 0x49d),
                               *(short *)((int)param_1 + 0x49f) + 1);
          }
          else {
            thunk_FUN_004602b0(param_1);
            *(undefined4 *)((int)param_1 + 0x4d5) = 7;
LAB_00468b42:
            thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4a5),
                               (int)*(short *)((int)param_1 + 0x4a7),
                               *(short *)((int)param_1 + 0x4a9) + 1);
          }
          break;
        default:
          goto switchD_004660af_caseD_2;
        case 3:
switchD_004660af_caseD_3:
          thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x49b),
                             (int)*(short *)((int)param_1 + 0x49d),
                             *(short *)((int)param_1 + 0x49f) + 1);
          break;
        case -1:
          iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1d02,0,0,&DAT_007a4ccc);
          if (iVar6 != 0) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          uVar24 = 0x1d02;
          goto LAB_004660e9;
        }
LAB_00468c49:
        thunk_FUN_00460260(param_1,0);
        goto switchD_004660af_caseD_2;
      }
      iVar6 = *(int *)((int)param_1 + 0x4cd) + 1;
      *(int *)((int)param_1 + 0x4cd) = iVar6;
      if (iVar6 == 2) {
        iVar6 = thunk_FUN_004608b0(param_1,0);
        if (iVar6 != -1) {
          return 2;
        }
        return -1;
      }
      iVar6 = thunk_FUN_004608b0(param_1,2);
      if (iVar6 == -1) {
        return -1;
      }
      if (*(int *)((int)param_1 + 0x82e) != 0) {
        return 2;
      }
      if (*(int *)((int)param_1 + 0x4bd) == 1) {
LAB_00465f11:
        *(undefined4 *)((int)param_1 + 0x4bd) = 0;
        if (*(int *)((int)param_1 + 0x4a1) != -1) {
          sVar16 = *(short *)((int)param_1 + 0x49b);
          sVar17 = *(short *)((int)param_1 + 0x49f);
          sVar18 = *(short *)((int)param_1 + 0x49d);
          if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
             (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(DAT_007fb248 +
                            ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                            (int)sVar16) * 8);
          }
          if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
            *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
          }
        }
      }
      else {
        if (*(int *)((int)param_1 + 0x4c1) != 1) {
          return 2;
        }
        if (*(int *)((int)param_1 + 0x4bd) == 1) goto LAB_00465f11;
      }
      if (*(int *)((int)param_1 + 0x4c1) == 1) {
        *(undefined4 *)((int)param_1 + 0x4c1) = 0;
        if (*(int *)((int)param_1 + 0x4ab) != -1) {
          sVar16 = *(short *)((int)param_1 + 0x4a5);
          sVar17 = *(short *)((int)param_1 + 0x4a9);
          sVar18 = *(short *)((int)param_1 + 0x4a7);
          if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
             ((sVar18 < 0 ||
              (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(DAT_007fb248 +
                            ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                            (int)sVar16) * 8);
          }
          if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
            *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
          }
        }
      }
      bVar3 = thunk_FUN_0048d440((int)param_1);
      if (CONCAT31(extraout_var_00,bVar3) == 0) {
        thunk_FUN_004602b0(param_1);
        *(undefined4 *)((int)param_1 + 0x4d5) = 0;
LAB_00469979:
        iVar6 = thunk_FUN_004608b0(param_1,0);
        return (-(uint)(iVar6 != -1) & 3) - 1;
      }
      if (CONCAT31(extraout_var_00,bVar3) != 1) goto LAB_00466087;
      if (*(int *)((int)param_1 + 0x4a1) == -1) {
        return 2;
      }
      *(undefined4 *)((int)param_1 + 0x4cd) = 0;
LAB_00465e5a:
      sVar16 = *(short *)((int)param_1 + 0x49f);
      sVar17 = *(short *)((int)param_1 + 0x49d);
      sVar18 = *(short *)((int)param_1 + 0x49b);
      goto LAB_00465e72;
    }
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        *(int *)((int)param_1 + 0x4cd) = *(int *)((int)param_1 + 0x4cd) + 1;
        iVar6 = thunk_FUN_004608b0(param_1,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (*(int *)((int)param_1 + 0x82e) != 0) {
          return 2;
        }
        if ((*(int *)((int)param_1 + 0x4bd) != 1) && (*(int *)((int)param_1 + 0x4c1) != 1)) {
          if (*(int *)((int)param_1 + 0x4cd) % 0x32 != 1) {
            return 2;
          }
          sVar16 = *(short *)((int)param_1 + 0x49b);
          sVar17 = *(short *)((int)param_1 + 0x49f);
          sVar18 = *(short *)((int)param_1 + 0x49d);
          if (sVar16 < 0) {
            return 2;
          }
          if (DAT_007fb240 <= sVar16) {
            return 2;
          }
          if (sVar18 < 0) {
            return 2;
          }
          if (DAT_007fb242 <= sVar18) {
            return 2;
          }
          if (sVar17 < 0) {
            return 2;
          }
          if (DAT_007fb244 <= sVar17) {
            return 2;
          }
          pvVar1 = *(void **)(DAT_007fb248 +
                             ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                             (int)sVar16) * 8);
          if (pvVar1 == (void *)0x0) {
            return 2;
          }
          if (*(int *)((int)pvVar1 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
            return 2;
          }
          iVar6 = thunk_FUN_004e1490((int)pvVar1);
          if (iVar6 != 1) {
            return 2;
          }
          thunk_FUN_004e15f0(pvVar1,param_1[6]);
          sVar17 = *(short *)((int)param_1 + 0x49d);
          sVar16 = *(short *)((int)param_1 + 0x49b);
          iVar6 = *(short *)((int)param_1 + 0x49f) + 1;
          *(undefined4 *)((int)param_1 + 0x4cd) = 0;
          *(undefined4 *)((int)param_1 + 0x4d5) = 4;
          *(undefined4 *)((int)param_1 + 0xb7) = 0;
LAB_00468322:
          thunk_FUN_00481520(param_1,(int)sVar16,(int)sVar17,iVar6);
          thunk_FUN_00460260(param_1,0);
          return 2;
        }
        puStack_c = (undefined4 *)0x0;
        if (*(int *)((int)param_1 + 0x4bd) == 1) {
          *(undefined4 *)((int)param_1 + 0x4bd) = 0;
          if (*(int *)((int)param_1 + 0x4a1) != -1) {
            sVar16 = *(short *)((int)param_1 + 0x49b);
            sVar17 = *(short *)((int)param_1 + 0x49f);
            sVar18 = *(short *)((int)param_1 + 0x49d);
            if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
               ((sVar18 < 0 ||
                (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                              (int)sVar16) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
              *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
            }
          }
          if (*(int *)((int)param_1 + 0x4a1) != -1) {
            puStack_c = (undefined4 *)0x1;
          }
        }
        if (*(int *)((int)param_1 + 0x4c1) == 1) {
          *(undefined4 *)((int)param_1 + 0x4c1) = 0;
          if (*(int *)((int)param_1 + 0x4ab) != -1) {
            sVar16 = *(short *)((int)param_1 + 0x4a5);
            sVar17 = *(short *)((int)param_1 + 0x4a9);
            sVar18 = *(short *)((int)param_1 + 0x4a7);
            if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
               (((sVar18 < 0 || ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) ||
                (DAT_007fb244 <= sVar17)))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                              (int)sVar16) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
              *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
            }
          }
        }
        bVar3 = thunk_FUN_0048d440((int)param_1);
        if (CONCAT31(extraout_var_03,bVar3) == 0) {
          thunk_FUN_004602b0(param_1);
          *(undefined4 *)((int)param_1 + 0x4d5) = 0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_03,bVar3) == 1) {
          if (*(int *)((int)param_1 + 0x4a1) == -1) {
            return 2;
          }
          if (puStack_c == (undefined4 *)0x0) {
            return 2;
          }
          if (*(int *)((int)param_1 + 0x4a1) == -1) {
            return 2;
          }
          if (puStack_c != (undefined4 *)0x1) {
            return 2;
          }
          *(undefined4 *)((int)param_1 + 0x4cd) = 0;
          *(undefined4 *)((int)param_1 + 0x4d5) = 1;
          thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x49b),
                             (int)*(short *)((int)param_1 + 0x49d),
                             *(short *)((int)param_1 + 0x49f) + 1);
          goto LAB_00465e7b;
        }
LAB_00466087:
        *(undefined4 *)((int)param_1 + 0x4cd) = 0;
        *(undefined4 *)((int)param_1 + 0x4d5) = 7;
        goto LAB_0046875c;
      }
      if (iVar6 == 4) {
        if (*(int *)((int)param_1 + 0x4cd) < 1) {
          iVar6 = thunk_FUN_00460260(param_1,2);
          switch(iVar6) {
          case 0:
            *(undefined4 *)((int)param_1 + 0x4d5) = 5;
            iVar6 = (**(code **)(*param_1 + 0xd8))();
            return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
          case 1:
            if ((*(int *)((int)param_1 + 0x4bd) != 1) && (*(int *)((int)param_1 + 0x4c1) != 1))
            goto switchD_004660af_caseD_2;
            puStack_c = (undefined4 *)0x0;
            if (*(int *)((int)param_1 + 0x4bd) == 1) {
              *(undefined4 *)((int)param_1 + 0x4bd) = 0;
              if (*(int *)((int)param_1 + 0x4a1) != -1) {
                sVar16 = *(short *)((int)param_1 + 0x49b);
                sVar17 = *(short *)((int)param_1 + 0x49f);
                sVar18 = *(short *)((int)param_1 + 0x49d);
                if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
                    ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240
                                  + (int)sVar16) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
                  *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
                }
              }
              if (*(int *)((int)param_1 + 0x4a1) != -1) {
                puStack_c = (undefined4 *)0x1;
              }
            }
            if (*(int *)((int)param_1 + 0x4c1) == 1) {
              *(undefined4 *)((int)param_1 + 0x4c1) = 0;
              if (*(int *)((int)param_1 + 0x4ab) != -1) {
                sVar16 = *(short *)((int)param_1 + 0x4a5);
                sVar17 = *(short *)((int)param_1 + 0x4a9);
                sVar18 = *(short *)((int)param_1 + 0x4a7);
                if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                   ((sVar18 < 0 ||
                    (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240
                                  + (int)sVar16) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
                  *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
                }
              }
            }
            bVar3 = thunk_FUN_0048d440((int)param_1);
            if (CONCAT31(extraout_var_05,bVar3) == 0) {
              thunk_FUN_004602b0(param_1);
              *(undefined4 *)((int)param_1 + 0x4d5) = 0;
              goto LAB_00469979;
            }
            if (CONCAT31(extraout_var_05,bVar3) == 1) {
              if ((*(int *)((int)param_1 + 0x4a1) != -1) && (puStack_c == (undefined4 *)0x0))
              goto switchD_004660af_caseD_2;
              thunk_FUN_004602b0(param_1);
              if (*(int *)((int)param_1 + 0x4a1) == -1) {
                *(int *)((int)param_1 + 0x4cd) = *(int *)((int)param_1 + 0x4cd) + 1;
                iVar6 = (**(code **)(*param_1 + 0xd8))();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              if (puStack_c != (undefined4 *)0x1) goto switchD_004660af_caseD_2;
              *(undefined4 *)((int)param_1 + 0x4cd) = 0;
              *(undefined4 *)((int)param_1 + 0x4d5) = 1;
              *(undefined4 *)((int)param_1 + 0xb7) = 3;
              goto LAB_00467018;
            }
            thunk_FUN_004602b0(param_1);
            *(undefined4 *)((int)param_1 + 0x4cd) = 0;
            *(undefined4 *)((int)param_1 + 0xb7) = 3;
            *(undefined4 *)((int)param_1 + 0x4d5) = 7;
            iVar6 = *(short *)((int)param_1 + 0x4a9) + 1;
            break;
          default:
            goto switchD_004660af_caseD_2;
          case 3:
            goto switchD_004660af_caseD_3;
          case -1:
            iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1e6e,0,0,&DAT_007a4ccc);
            if (iVar6 != 0) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            uVar24 = 0x1e6e;
            goto LAB_004660e9;
          }
LAB_00467068:
          sVar17 = *(short *)((int)param_1 + 0x4a7);
          sVar16 = *(short *)((int)param_1 + 0x4a5);
LAB_00468c40:
          thunk_FUN_00481520(param_1,(int)sVar16,(int)sVar17,iVar6);
          goto LAB_00468c49;
        }
        iVar6 = *(int *)((int)param_1 + 0x4cd) + 1;
        *(int *)((int)param_1 + 0x4cd) = iVar6;
        if (iVar6 == 2) {
          iVar6 = thunk_FUN_004608b0(param_1,0);
          if (iVar6 != -1) {
            return 2;
          }
          return -1;
        }
        iVar6 = thunk_FUN_004608b0(param_1,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (*(int *)((int)param_1 + 0x82e) != 0) {
          return 2;
        }
        if (*(int *)((int)param_1 + 0x4bd) == 1) {
LAB_00466bff:
          *(undefined4 *)((int)param_1 + 0x4bd) = 0;
          if (*(int *)((int)param_1 + 0x4a1) != -1) {
            sVar16 = *(short *)((int)param_1 + 0x49b);
            sVar17 = *(short *)((int)param_1 + 0x49f);
            sVar18 = *(short *)((int)param_1 + 0x49d);
            if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
               ((sVar18 < 0 ||
                (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                              (int)sVar16) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
              *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
            }
          }
        }
        else {
          if (*(int *)((int)param_1 + 0x4c1) != 1) {
            return 2;
          }
          if (*(int *)((int)param_1 + 0x4bd) == 1) goto LAB_00466bff;
        }
        if (*(int *)((int)param_1 + 0x4c1) == 1) {
          *(undefined4 *)((int)param_1 + 0x4c1) = 0;
          if (*(int *)((int)param_1 + 0x4ab) != -1) {
            sVar16 = *(short *)((int)param_1 + 0x4a5);
            sVar17 = *(short *)((int)param_1 + 0x4a9);
            sVar18 = *(short *)((int)param_1 + 0x4a7);
            if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                ((sVar18 < 0 || ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))))) ||
               (DAT_007fb244 <= sVar17)) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                              (int)sVar16) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
              *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
            }
          }
        }
        bVar3 = thunk_FUN_0048d440((int)param_1);
        if (CONCAT31(extraout_var_04,bVar3) == 0) {
          thunk_FUN_004602b0(param_1);
          *(undefined4 *)((int)param_1 + 0x4d5) = 0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_04,bVar3) != 1) goto LAB_00468742;
        if (*(int *)((int)param_1 + 0x4a1) == -1) {
          return 2;
        }
        goto LAB_00465e40;
      }
      if (iVar6 == 5) {
        *(int *)((int)param_1 + 0x4cd) = *(int *)((int)param_1 + 0x4cd) + 1;
        if ((*(int *)((int)param_1 + 0x4bd) == 1) || (*(int *)((int)param_1 + 0x4c1) == 1)) {
          puStack_c = (undefined4 *)0x0;
          if (*(int *)((int)param_1 + 0x4bd) == 1) {
            *(undefined4 *)((int)param_1 + 0x4bd) = 0;
            if (*(int *)((int)param_1 + 0x4a1) != -1) {
              sVar16 = *(short *)((int)param_1 + 0x49b);
              sVar17 = *(short *)((int)param_1 + 0x49f);
              sVar18 = *(short *)((int)param_1 + 0x49d);
              if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
                  ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                                (int)sVar16) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
                *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
              }
            }
            if (*(int *)((int)param_1 + 0x4a1) != -1) {
              puStack_c = (undefined4 *)0x1;
            }
          }
          if (*(int *)((int)param_1 + 0x4c1) == 1) {
            *(undefined4 *)((int)param_1 + 0x4c1) = 0;
            if (*(int *)((int)param_1 + 0x4ab) != -1) {
              sVar16 = *(short *)((int)param_1 + 0x4a5);
              sVar17 = *(short *)((int)param_1 + 0x4a9);
              sVar18 = *(short *)((int)param_1 + 0x4a7);
              if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                 ((sVar18 < 0 ||
                  (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                                (int)sVar16) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
                *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
              }
            }
          }
          bVar3 = thunk_FUN_0048d440((int)param_1);
          if (CONCAT31(extraout_var_06,bVar3) == 0) {
            thunk_FUN_004602b0(param_1);
            *(undefined4 *)((int)param_1 + 0x4d5) = 0;
            goto LAB_00469979;
          }
          if (CONCAT31(extraout_var_06,bVar3) != 1) {
            iVar6 = (int)*(short *)((int)param_1 + 0x4a9);
            *(undefined4 *)((int)param_1 + 0x4cd) = 0;
            *(undefined4 *)((int)param_1 + 0x4d5) = 6;
            *(undefined4 *)((int)param_1 + 0xb7) = 3;
            goto LAB_00467068;
          }
          if ((*(int *)((int)param_1 + 0x4a1) == -1) || (puStack_c != (undefined4 *)0x0)) {
            *(undefined4 *)((int)param_1 + 0x4cd) = 0;
            *(undefined4 *)((int)param_1 + 0xb7) = 3;
            if (*(int *)((int)param_1 + 0x4a1) == -1) {
              *(undefined4 *)((int)param_1 + 0x4d5) = 6;
              thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4a5),
                                 (int)*(short *)((int)param_1 + 0x4a7),
                                 *(short *)((int)param_1 + 0x4a9) + 1);
            }
            else if (puStack_c == (undefined4 *)0x1) {
              *(undefined4 *)((int)param_1 + 0x4d5) = 1;
              thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x49b),
                                 (int)*(short *)((int)param_1 + 0x49d),
                                 *(short *)((int)param_1 + 0x49f) + 1);
            }
            else {
              iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1efd,0,0,&DAT_007a4ccc)
              ;
              if (iVar6 != 0) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
            }
            goto LAB_004699e2;
          }
        }
        if (*(int *)((int)param_1 + 0x4cd) % 10 != 1) goto switchD_004660af_caseD_2;
        sVar16 = *(short *)((int)param_1 + 0x49b);
        sVar17 = *(short *)((int)param_1 + 0x49f);
        sVar18 = *(short *)((int)param_1 + 0x49d);
        if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
            ((sVar18 < 0 || (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))
             ))) || ((piVar14 = *(int **)(DAT_007fb248 +
                                         ((int)sVar17 * (int)DAT_007fb246 +
                                          (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8),
                     piVar14 == (int *)0x0 || (piVar14[6] != *(int *)((int)param_1 + 0x4a1))))) {
          thunk_FUN_0048d930((int)param_1);
          *(undefined4 *)((int)param_1 + 0x4cd) = 0;
          *(undefined4 *)((int)param_1 + 0x4d5) = 6;
LAB_00468b38:
          *(undefined4 *)((int)param_1 + 0xb7) = 3;
          goto LAB_00468b42;
        }
        if ((piVar14[0x12d] == 0) && (*(int *)((int)piVar14 + 0x245) != 6)) {
          thunk_FUN_004e1930(piVar14,&iStack_8,0);
          iVar6 = thunk_FUN_00430910(iStack_8);
          iStack_18 = thunk_FUN_004e1930(piVar14,&iStack_8,iVar6);
          if (iStack_18 == iVar6) {
            thunk_FUN_004e16d0(piVar14,param_1[6]);
            if (*(int *)((int)param_1 + 0x4cd) % 0x78 == 1) {
              iVar7 = *(int *)((int)param_1 + 0x6f7);
              if (iVar7 == 8) {
                iVar7 = *param_1;
                uVar24 = 0xfc;
LAB_0046739a:
                (**(code **)(iVar7 + 0x90))(3,uVar24);
              }
              else if (iVar7 == 0x14) {
                (**(code **)(*param_1 + 0x90))(3,0x160);
              }
              else if (iVar7 == 0x1a) {
                iVar7 = *param_1;
                uVar24 = 0x19f;
                goto LAB_0046739a;
              }
            }
            if (iStack_8 == 0xdc) {
              iVar7 = *(int *)((int)param_1 + 0x7d2) + 1;
              *(int *)((int)param_1 + 0x7d2) = iVar7;
              if (0x28 < iVar7 + *(int *)((int)param_1 + 0x7d6) + *(int *)((int)param_1 + 0x7da)) {
                *(int *)((int)param_1 + 0x7d2) =
                     (0x28 - *(int *)((int)param_1 + 0x7d6)) - *(int *)((int)param_1 + 0x7da);
              }
            }
            else if (iStack_8 == 0xdd) {
              iVar7 = *(int *)((int)param_1 + 0x7d6) + 1;
              *(int *)((int)param_1 + 0x7d6) = iVar7;
              if (0x28 < iVar7 + *(int *)((int)param_1 + 0x7d2) + *(int *)((int)param_1 + 0x7da)) {
                *(int *)((int)param_1 + 0x7d6) =
                     (0x28 - *(int *)((int)param_1 + 0x7d2)) - *(int *)((int)param_1 + 0x7da);
              }
            }
            else if (iStack_8 == 0xde) {
              iVar7 = *(int *)((int)param_1 + 0x7da) + 1;
              *(int *)((int)param_1 + 0x7da) = iVar7;
              if (0x28 < *(int *)((int)param_1 + 0x7d2) + *(int *)((int)param_1 + 0x7d6) + iVar7) {
                *(int *)((int)param_1 + 0x7da) =
                     (0x28 - *(int *)((int)param_1 + 0x7d2)) - *(int *)((int)param_1 + 0x7d6);
              }
            }
            else {
              iVar7 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1f2f,0,0,&DAT_007a4ccc)
              ;
              if (iVar7 != 0) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
            }
          }
          if (((iStack_18 < iVar6) ||
              (*(int *)((int)param_1 + 0x7da) + *(int *)((int)param_1 + 0x7d6) +
               *(int *)((int)param_1 + 0x7d2) == 0x28)) ||
             (iVar6 = (**(code **)(*piVar14 + 0x88))(&iStack_8), iVar6 == 0)) goto LAB_0046744c;
        }
        else {
LAB_0046744c:
          thunk_FUN_0048d930((int)param_1);
          *(undefined4 *)((int)param_1 + 0x4cd) = 0;
          *(undefined4 *)((int)param_1 + 0x4d5) = 6;
          *(undefined4 *)((int)param_1 + 0xb7) = 3;
          thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4a5),
                             (int)*(short *)((int)param_1 + 0x4a7),
                             *(short *)((int)param_1 + 0x4a9) + 1);
          thunk_FUN_00460260(param_1,0);
        }
        iVar6 = (**(code **)(*piVar14 + 0x88))(&iStack_8);
        if (iVar6 == 0) {
          thunk_FUN_00440860(0,(int *)param_1[9],
                             CONCAT22(extraout_var_19,*(undefined2 *)((int)piVar14 + 0x32)));
          iVar6 = (**(code **)(*param_1 + 0xd8))();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
switchD_004660af_caseD_2:
        iVar6 = (**(code **)(*param_1 + 0xd8))();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      if (iVar6 != 6) {
        if (iVar6 != 7) {
          if (iVar6 == 8) {
            iVar6 = thunk_FUN_00460260(param_1,2);
            switch(iVar6) {
            case 0:
              iVar6 = thunk_FUN_00490570((int)param_1);
              if (iVar6 != 1) {
                *(undefined4 *)((int)param_1 + 0x4d5) = 9;
                *(undefined4 *)((int)param_1 + 0xb7) = 3;
                goto LAB_00469979;
              }
              iVar7 = CONCAT22(extraout_var_21,*(undefined2 *)((int)param_1 + 0x4a5));
              iVar6 = CONCAT22((short)((uint)((int)param_1 + 0x4af) >> 0x10),
                               *(undefined2 *)((int)param_1 + 0x4a7));
              piVar14 = (int *)CONCAT22(extraout_var_25,*(short *)((int)param_1 + 0x4a9) + 1);
              break;
            case 1:
              if ((*(int *)((int)param_1 + 0x4bd) == 1) || (*(int *)((int)param_1 + 0x4c1) == 1)) {
                puStack_c = (undefined4 *)0x0;
                if (*(int *)((int)param_1 + 0x4bd) == 1) {
                  *(undefined4 *)((int)param_1 + 0x4bd) = 0;
                  if (*(int *)((int)param_1 + 0x4a1) != -1) {
                    sVar16 = *(short *)((int)param_1 + 0x49b);
                    sVar17 = *(short *)((int)param_1 + 0x49f);
                    sVar18 = *(short *)((int)param_1 + 0x49d);
                    if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                       ((sVar18 < 0 ||
                        (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17))))))
                    {
                      iVar6 = 0;
                    }
                    else {
                      iVar6 = *(int *)(DAT_007fb248 +
                                      ((int)sVar17 * (int)DAT_007fb246 +
                                       (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8);
                    }
                    if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
                      *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
                    }
                  }
                  if (*(int *)((int)param_1 + 0x4a1) != -1) {
                    puStack_c = (undefined4 *)0x1;
                  }
                }
                if (*(int *)((int)param_1 + 0x4c1) == 1) {
                  *(undefined4 *)((int)param_1 + 0x4c1) = 0;
                  if (*(int *)((int)param_1 + 0x4ab) != -1) {
                    sVar16 = *(short *)((int)param_1 + 0x4a5);
                    sVar17 = *(short *)((int)param_1 + 0x4a9);
                    sVar18 = *(short *)((int)param_1 + 0x4a7);
                    if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                       (((sVar18 < 0 || ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) ||
                        (DAT_007fb244 <= sVar17)))) {
                      iVar6 = 0;
                    }
                    else {
                      iVar6 = *(int *)(DAT_007fb248 +
                                      ((int)sVar17 * (int)DAT_007fb246 +
                                       (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8);
                    }
                    if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
                      *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
                    }
                  }
                }
                bVar3 = thunk_FUN_0048d440((int)param_1);
                if (CONCAT31(extraout_var_09,bVar3) == 0) goto LAB_00467fe4;
                if (CONCAT31(extraout_var_09,bVar3) != 1) goto LAB_0046817e;
                if ((*(int *)((int)param_1 + 0x4a1) != -1) && (puStack_c == (undefined4 *)0x0))
                goto switchD_00466448_caseD_2;
                thunk_FUN_004602b0(param_1);
                if (*(int *)((int)param_1 + 0x4a1) == -1) {
                  *(int *)((int)param_1 + 0x4cd) = *(int *)((int)param_1 + 0x4cd) + 1;
                  goto switchD_00466448_caseD_2;
                }
                if (puStack_c == (undefined4 *)0x1) {
                  *(undefined4 *)((int)param_1 + 0xb7) = 3;
                  *(undefined4 *)((int)param_1 + 0x4d5) = 1;
                  thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x49b),
                                     (int)*(short *)((int)param_1 + 0x49d),
                                     *(short *)((int)param_1 + 0x49f) + 1);
                  goto LAB_004699e2;
                }
              }
              sVar16 = *(short *)((int)param_1 + 0x4a5);
              sVar17 = *(short *)((int)param_1 + 0x4a9);
              sVar18 = *(short *)((int)param_1 + 0x4a7);
              if (((((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
                    ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) ||
                  ((pvVar1 = *(void **)(DAT_007fb248 +
                                       ((int)sVar17 * (int)DAT_007fb246 +
                                        (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8),
                   pvVar1 == (void *)0x0 ||
                   (*(int *)((int)pvVar1 + 0x18) != *(int *)((int)param_1 + 0x4ab))))) ||
                 ((iVar6 = thunk_FUN_004e1490((int)pvVar1), iVar6 != 1 ||
                  (bVar3 = thunk_FUN_0048d650(param_1,pvVar1), CONCAT31(extraout_var_10,bVar3) != 1)
                  ))) goto switchD_00466448_caseD_2;
              thunk_FUN_004602b0(param_1);
              thunk_FUN_004e15f0(pvVar1,param_1[6]);
              *(undefined4 *)((int)param_1 + 0x4cd) = 0;
              *(undefined4 *)((int)param_1 + 0x4d5) = 10;
              thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4c5),
                                 (int)*(short *)((int)param_1 + 0x4c7),
                                 (int)*(short *)((int)param_1 + 0x4c9));
              goto LAB_004699e2;
            default:
              goto switchD_00466448_caseD_2;
            case 3:
              iVar6 = thunk_FUN_00490570((int)param_1);
              if (iVar6 == 1) {
                iVar6 = CONCAT22((short)((uint)((int)param_1 + 0x4b1) >> 0x10),
                                 *(undefined2 *)((int)param_1 + 0x4a7));
                iVar7 = CONCAT22((short)((uint)((int)param_1 + 0x4af) >> 0x10),
                                 *(undefined2 *)((int)param_1 + 0x4a5));
                piVar14 = (int *)CONCAT22((short)((uint)((int)param_1 + 0x4b3) >> 0x10),
                                          *(short *)((int)param_1 + 0x4a9) + 1);
                goto LAB_00467e31;
              }
              goto LAB_00467e48;
            case -1:
              iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x201c,0,0,&DAT_007a4ccc)
              ;
              if (iVar6 != 0) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
              uVar24 = 0x201c;
LAB_004660e9:
              FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar24);
              return 0xffff;
            }
            goto LAB_00467da5;
          }
          if (iVar6 == 9) {
            *(int *)((int)param_1 + 0x4cd) = *(int *)((int)param_1 + 0x4cd) + 1;
            iVar6 = thunk_FUN_004608b0(param_1,2);
            if (iVar6 == -1) {
              return -1;
            }
            if (*(int *)((int)param_1 + 0x82e) != 0) {
              return 2;
            }
            if ((*(int *)((int)param_1 + 0x4bd) != 1) && (*(int *)((int)param_1 + 0x4c1) != 1)) {
              if (*(int *)((int)param_1 + 0x4cd) % 0x32 != 1) {
                return 2;
              }
              sVar16 = *(short *)((int)param_1 + 0x4a5);
              sVar17 = *(short *)((int)param_1 + 0x4a9);
              sVar18 = *(short *)((int)param_1 + 0x4a7);
              if (sVar16 < 0) {
                return 2;
              }
              if (DAT_007fb240 <= sVar16) {
                return 2;
              }
              if (sVar18 < 0) {
                return 2;
              }
              if (DAT_007fb242 <= sVar18) {
                return 2;
              }
              if (sVar17 < 0) {
                return 2;
              }
              if (DAT_007fb244 <= sVar17) {
                return 2;
              }
              pvVar1 = *(void **)(DAT_007fb248 +
                                 ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240
                                 + (int)sVar16) * 8);
              if (pvVar1 == (void *)0x0) {
                return 2;
              }
              if (*(int *)((int)pvVar1 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
                return 2;
              }
              iVar6 = thunk_FUN_004e1490((int)pvVar1);
              if (iVar6 != 1) {
                return 2;
              }
              bVar3 = thunk_FUN_0048d650(param_1,pvVar1);
              if (CONCAT31(extraout_var_11,bVar3) != 1) {
                return 2;
              }
              thunk_FUN_004e15f0(pvVar1,param_1[6]);
              iVar6 = (int)*(short *)((int)param_1 + 0x4c9);
              sVar17 = *(short *)((int)param_1 + 0x4c7);
              sVar16 = *(short *)((int)param_1 + 0x4c5);
              *(undefined4 *)((int)param_1 + 0x4cd) = 0;
              *(undefined4 *)((int)param_1 + 0x4d5) = 10;
              *(undefined4 *)((int)param_1 + 0xb7) = 0;
              goto LAB_00468322;
            }
            puStack_c = (undefined4 *)0x0;
            if (*(int *)((int)param_1 + 0x4bd) == 1) {
              *(undefined4 *)((int)param_1 + 0x4bd) = 0;
              if (*(int *)((int)param_1 + 0x4a1) != -1) {
                sVar16 = *(short *)((int)param_1 + 0x49b);
                sVar17 = *(short *)((int)param_1 + 0x49f);
                sVar18 = *(short *)((int)param_1 + 0x49d);
                if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
                    ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240
                                  + (int)sVar16) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
                  *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
                }
              }
            }
            if (*(int *)((int)param_1 + 0x4c1) == 1) {
              *(undefined4 *)((int)param_1 + 0x4c1) = 0;
              if (*(int *)((int)param_1 + 0x4ab) != -1) {
                sVar16 = *(short *)((int)param_1 + 0x4a5);
                sVar17 = *(short *)((int)param_1 + 0x4a9);
                sVar18 = *(short *)((int)param_1 + 0x4a7);
                if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                   ((sVar18 < 0 ||
                    (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240
                                  + (int)sVar16) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
                  *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
                }
              }
              bVar3 = true;
              if (*(int *)((int)param_1 + 0x4ab) == -1) goto LAB_00468493;
            }
            else {
LAB_00468493:
              bVar3 = false;
            }
            bVar4 = thunk_FUN_0048d440((int)param_1);
            if (CONCAT31(extraout_var_12,bVar4) != 0) {
              if (CONCAT31(extraout_var_12,bVar4) == 7) {
                if (*(int *)((int)param_1 + 0x4ab) == -1) {
                  return 2;
                }
                if (!bVar3) {
                  return 2;
                }
                if (*(int *)((int)param_1 + 0x4ab) == -1) {
                  return 2;
                }
                if (!bVar3) {
                  return 2;
                }
                *(undefined4 *)((int)param_1 + 0x4cd) = 0;
                *(undefined4 *)((int)param_1 + 0x4d5) = 7;
                thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4a5),
                                   (int)*(short *)((int)param_1 + 0x4a7),
                                   *(short *)((int)param_1 + 0x4a9) + 1);
              }
              else {
                *(undefined4 *)((int)param_1 + 0x4cd) = 0;
                *(undefined4 *)((int)param_1 + 0x4d5) = 1;
                thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x49b),
                                   (int)*(short *)((int)param_1 + 0x49d),
                                   *(short *)((int)param_1 + 0x49f) + 1);
              }
              goto LAB_00465e7b;
            }
            thunk_FUN_004602b0(param_1);
            goto LAB_00469972;
          }
          if (iVar6 != 10) {
            if (iVar6 == 0xb) {
              if (*(int *)((int)param_1 + 0x4d9) == 0) {
                iVar8 = (ushort)(*(short *)((int)param_1 + 0x4a9) * 200) + 300;
                iVar7 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)((int)param_1 + 0x4a7) + 1)
                        * 0xc9;
                iVar9 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)((int)param_1 + 0x4a5) + 1);
                iVar6 = iVar9 * 0xc9;
                uVar5 = (undefined2)((uint)(iVar9 * 0x19) >> 0x10);
                uVar5 = (**(code **)(*param_1 + 0x10))
                                  (CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x41)),
                                   CONCAT22((short)((uint)iVar6 >> 0x10),
                                            *(undefined2 *)((int)param_1 + 0x43)),
                                   CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x45)),iVar6,iVar7,
                                   iVar8);
                *(undefined2 *)((int)param_1 + 0x4cb) = uVar5;
                *(undefined4 *)((int)param_1 + 0x4d9) = 1;
              }
              if (*(int *)((int)param_1 + 0x4d9) == 1) {
                uVar10 = thunk_FUN_004176c0(param_1,*(short *)((int)param_1 + 0x4cb));
                uVar10 = thunk_FUN_00417910(param_1,(short)uVar10);
                if (uVar10 == 0xffffffff) {
                  iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2196,0,0,
                                       &DAT_007a4ccc);
                  if (iVar6 != 0) {
                    pcVar2 = (code *)swi(3);
                    iVar6 = (*pcVar2)();
                    return iVar6;
                  }
                  uVar24 = 0x2197;
                  goto LAB_004660e9;
                }
                if (uVar10 == 0) {
                  *(undefined4 *)((int)param_1 + 0x4d9) = 2;
                  iVar6 = (**(code **)(*param_1 + 0xd8))();
                  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
                }
              }
              if (*(int *)((int)param_1 + 0x4d9) == 2) {
                thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),
                                   *(short *)((int)param_1 + 0x43),*(short *)((int)param_1 + 0x45),
                                   (*(short *)((int)param_1 + 0x4a5) + 1) * 0xc9,
                                   (*(short *)((int)param_1 + 0x4a7) + 1) * 0xc9,
                                   *(short *)((int)param_1 + 0x4a9) * 200 + 300,
                                   *(byte *)((int)param_1 + 0x61));
                *(undefined4 *)((int)param_1 + 0x4d9) = 3;
              }
              if (*(int *)((int)param_1 + 0x4d9) == 3) {
                iStack_10 = thunk_FUN_00415ed0(param_1,&iStack_18,&uStack_14);
                param_3 = 0;
                if (*(char *)((int)param_1 + 0x2bf) != '\0') {
                  puStack_c = (undefined4 *)((int)param_1 + 0x2b3);
                  do {
                    puVar11 = (undefined4 *)
                              thunk_FUN_0041dc40(auStack_2c,*puStack_c,
                                                 *(undefined2 *)(puStack_c + 1),(short)param_1[0x1b]
                                                );
                    uStack_24 = *puVar11;
                    sStack_20 = *(short *)(puVar11 + 1);
                    if (DAT_0080732c == 1) {
                      bVar23 = 0;
                      sVar22 = 0;
                      uVar10 = param_1[7] * 0x41c64e6d + 0x3039;
                      iVar8 = -1;
                      param_1[7] = uVar10;
                      sVar21 = 0;
                      sVar20 = 0;
                      uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                      sVar19 = 0;
                      param_1[7] = uVar12;
                      sVar18 = 0;
                      sVar17 = 0;
                      uStack_1c = uVar12 * 0x41c64e6d + 0x3039;
                      sVar16 = 0;
                      param_1[7] = uStack_1c;
                      lVar15 = __ftol();
                      iVar6 = (int)(short)lVar15 + (uVar10 >> 0x10) % 7 +
                              (int)*(short *)((int)param_1 + 0x45) + -3 + (int)sStack_20;
                      iVar7 = ((uVar12 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x43)) -
                              (int)uStack_24._2_2_;
                      uVar10 = uStack_1c;
                    }
                    else {
                      uVar12 = param_1[7] * 0x41c64e6d + 0x3039;
                      bVar23 = 0;
                      sVar22 = 0;
                      uVar13 = uVar12 * 0x41c64e6d + 0x3039;
                      iVar8 = -1;
                      sVar21 = 0;
                      sVar20 = 0;
                      sVar19 = 0;
                      sVar18 = 0;
                      sVar17 = 0;
                      param_1[7] = uVar12;
                      uVar10 = uVar13 * 0x41c64e6d + 0x3039;
                      sVar16 = 0;
                      param_1[7] = uVar13;
                      param_1[7] = uVar10;
                      iVar6 = (uVar12 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x45) + -3 +
                              (int)sStack_20;
                      uStack_24._2_2_ = (short)((uint)uStack_24 >> 0x10);
                      iVar7 = ((uVar13 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x43)) -
                              (int)uStack_24._2_2_;
                    }
                    thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                                       (uVar10 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x41) +
                                       -3 + (int)(short)uStack_24,iVar7 + -3,iVar6,sVar16,sVar17,
                                       sVar18,sVar19,sVar20,sVar21,iVar8,sVar22,bVar23);
                    param_3 = param_3 + 1;
                    puStack_c = (undefined4 *)((int)puStack_c + 6);
                  } while (param_3 < (int)(uint)*(byte *)((int)param_1 + 0x2bf));
                }
                if (iStack_10 == -1) {
                  iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x21bc,0,0,
                                       &DAT_007a4ccc);
                  if (iVar6 != 0) {
                    pcVar2 = (code *)swi(3);
                    iVar6 = (*pcVar2)();
                    return iVar6;
                  }
                  uVar24 = 0x21bd;
                  goto LAB_004660e9;
                }
                if (iStack_10 == 0) {
                  *(undefined4 *)((int)param_1 + 0x4d5) = 0xc;
                  *(undefined4 *)((int)param_1 + 0x4d9) = 0;
                  iVar6 = (**(code **)(*param_1 + 0xd8))();
                  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
                }
              }
              goto LAB_004693c9;
            }
            if (iVar6 != 0xc) {
              if (iVar6 == 0xd) {
                iVar6 = *(int *)((int)param_1 + 0x4d1) + 1;
                *(int *)((int)param_1 + 0x4d1) = iVar6;
                if (0x45 < iVar6) {
                  if (*(int *)((int)param_1 + 0x4d9) == 0) {
                    iVar6 = CONCAT22((short)((uint)iVar6 >> 0x10),
                                     *(short *)((int)param_1 + 0x4c9) * 200) + 100;
                    iVar8 = CONCAT22((short)((uint)param_2 >> 0x10),
                                     *(short *)((int)param_1 + 0x4c7) * 0xc9) + 100;
                    iVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),
                                     *(short *)((int)param_1 + 0x4c5) * 0xc9) + 100;
                    uVar5 = (undefined2)((uint)iVar8 >> 0x10);
                    uVar5 = (**(code **)(*param_1 + 0x10))
                                      (CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x41)),
                                       CONCAT22((short)((uint)iVar7 >> 0x10),
                                                *(undefined2 *)((int)param_1 + 0x43)),
                                       CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x45)),iVar7,
                                       iVar8,iVar6);
                    *(undefined2 *)((int)param_1 + 0x4cb) = uVar5;
                    *(undefined4 *)((int)param_1 + 0x4d9) = 1;
                  }
                  if (*(int *)((int)param_1 + 0x4d9) == 1) {
                    uVar10 = thunk_FUN_004176c0(param_1,*(short *)((int)param_1 + 0x4cb));
                    uVar10 = thunk_FUN_00417910(param_1,(short)uVar10);
                    if (uVar10 == 0xffffffff) {
                      iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x223c,0,0,
                                           &DAT_007a4ccc);
                      if (iVar6 != 0) {
                        pcVar2 = (code *)swi(3);
                        iVar6 = (*pcVar2)();
                        return iVar6;
                      }
                      uVar24 = 0x223d;
                      goto LAB_004660e9;
                    }
                    if (uVar10 == 0) {
                      *(undefined4 *)((int)param_1 + 0x4d9) = 2;
                      goto switchD_00466448_caseD_2;
                    }
                  }
                  if (*(int *)((int)param_1 + 0x4d9) == 2) {
                    thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),
                                       *(short *)((int)param_1 + 0x43),
                                       *(short *)((int)param_1 + 0x45),
                                       *(short *)((int)param_1 + 0x4c5) * 0xc9 + 100,
                                       *(short *)((int)param_1 + 0x4c7) * 0xc9 + 100,
                                       *(short *)((int)param_1 + 0x4c9) * 200 + 100,
                                       *(byte *)((int)param_1 + 0x61));
                    *(undefined4 *)((int)param_1 + 0x4d9) = 3;
                  }
                  if (*(int *)((int)param_1 + 0x4d9) == 3) {
                    iStack_10 = thunk_FUN_00415ed0(param_1,&uStack_14,&iStack_18);
                    param_3 = 0;
                    if (*(char *)((int)param_1 + 0x2bf) != '\0') {
                      puStack_c = (undefined4 *)((int)param_1 + 0x2b3);
                      do {
                        puVar11 = (undefined4 *)
                                  thunk_FUN_0041dc40(auStack_2c,*puStack_c,
                                                     *(undefined2 *)(puStack_c + 1),
                                                     (short)param_1[0x1b]);
                        uStack_24 = *puVar11;
                        sStack_20 = *(short *)(puVar11 + 1);
                        if (DAT_0080732c == 1) {
                          bVar23 = 0;
                          sVar22 = 0;
                          iVar8 = -1;
                          uVar10 = param_1[7] * 0x41c64e6d + 0x3039;
                          sVar21 = 0;
                          param_1[7] = uVar10;
                          sVar20 = 0;
                          sVar19 = 0;
                          uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                          sVar18 = 0;
                          param_1[7] = uVar12;
                          uStack_1c = uVar12 * 0x41c64e6d + 0x3039;
                          sVar17 = 0;
                          param_1[7] = uStack_1c;
                          sVar16 = 0;
                          lVar15 = __ftol();
                          iVar6 = (int)(short)lVar15 + (uVar10 >> 0x10) % 7 +
                                  (int)*(short *)((int)param_1 + 0x45) + -3 + (int)sStack_20;
                          iVar7 = ((uVar12 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x43)) -
                                  (int)uStack_24._2_2_;
                          uVar10 = uStack_1c;
                        }
                        else {
                          bVar23 = 0;
                          uVar12 = param_1[7] * 0x41c64e6d + 0x3039;
                          sVar22 = 0;
                          iVar8 = -1;
                          uVar13 = uVar12 * 0x41c64e6d + 0x3039;
                          sVar21 = 0;
                          sVar20 = 0;
                          sVar19 = 0;
                          sVar18 = 0;
                          sVar17 = 0;
                          param_1[7] = uVar12;
                          uVar10 = uVar13 * 0x41c64e6d + 0x3039;
                          sVar16 = 0;
                          param_1[7] = uVar13;
                          param_1[7] = uVar10;
                          iVar6 = (uVar12 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x45) + -3 +
                                  (int)sStack_20;
                          uStack_24._2_2_ = (short)((uint)uStack_24 >> 0x10);
                          iVar7 = ((uVar13 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x43)) -
                                  (int)uStack_24._2_2_;
                        }
                        thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                                           (uVar10 >> 0x10) % 7 +
                                           (int)*(short *)((int)param_1 + 0x41) + -3 +
                                           (int)(short)uStack_24,iVar7 + -3,iVar6,sVar16,sVar17,
                                           sVar18,sVar19,sVar20,sVar21,iVar8,sVar22,bVar23);
                        param_3 = param_3 + 1;
                        puStack_c = (undefined4 *)((int)puStack_c + 6);
                      } while (param_3 < (int)(uint)*(byte *)((int)param_1 + 0x2bf));
                    }
                    if (iStack_10 == -1) {
                      iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2262,0,0,
                                           &DAT_007a4ccc);
                      if (iVar6 != 0) {
                        pcVar2 = (code *)swi(3);
                        iVar6 = (*pcVar2)();
                        return iVar6;
                      }
                      uVar24 = 0x2263;
                      goto LAB_004660e9;
                    }
                    if (iStack_10 == 0) {
                      *(undefined4 *)((int)param_1 + 0x4cd) = 0;
                      *(undefined4 *)((int)param_1 + 0x4d1) = 0;
                      *(undefined4 *)((int)param_1 + 0xb7) = 3;
                      bVar3 = thunk_FUN_0048d440((int)param_1);
                      if (CONCAT31(extraout_var_15,bVar3) == 0) {
                        thunk_FUN_004602b0(param_1);
                        *(undefined4 *)((int)param_1 + 0x4d5) = 0;
                        *(undefined4 *)((int)param_1 + 0xb7) = 0;
                        iVar6 = thunk_FUN_004608b0(param_1,0);
                        return (-(uint)(iVar6 != -1) & 3) - 1;
                      }
                      if (CONCAT31(extraout_var_15,bVar3) == 1) {
                        sVar16 = *(short *)((int)param_1 + 0x49f);
                        sVar17 = *(short *)((int)param_1 + 0x49d);
                        sVar18 = *(short *)((int)param_1 + 0x49b);
                        *(undefined4 *)((int)param_1 + 0x4d5) = 0xe;
                      }
                      else {
                        sVar16 = *(short *)((int)param_1 + 0x4a9);
                        sVar17 = *(short *)((int)param_1 + 0x4a7);
                        sVar18 = *(short *)((int)param_1 + 0x4a5);
                        *(undefined4 *)((int)param_1 + 0x4d5) = 7;
                      }
                      thunk_FUN_00481520(param_1,(int)sVar18,(int)sVar17,sVar16 + 1);
                      thunk_FUN_00460260(param_1,0);
                    }
                  }
                  goto LAB_004693c9;
                }
                goto switchD_00466448_caseD_2;
              }
              if (iVar6 != 0xe) {
                iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x22ad,0,0,
                                     &DAT_007a4ccc);
                if (iVar6 == 0) {
                  return -1;
                }
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
              iVar6 = thunk_FUN_00460260(param_1,2);
              switch(iVar6) {
              case 1:
                thunk_FUN_004602b0(param_1);
              case 0:
                *(undefined4 *)((int)param_1 + 0x4cd) = 0;
                *(undefined4 *)((int)param_1 + 0x4d5) = 1;
                *(undefined4 *)((int)param_1 + 0xb7) = 3;
              case 3:
                iVar6 = (int)*(short *)((int)param_1 + 0x49d);
                iVar7 = (int)*(short *)((int)param_1 + 0x49b);
                iVar8 = *(short *)((int)param_1 + 0x49f) + 1;
                break;
              default:
                goto switchD_00466448_caseD_2;
              case -1:
                iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x228f,0,0,
                                     &DAT_007a4ccc);
                if (iVar6 != 0) {
                  pcVar2 = (code *)swi(3);
                  iVar6 = (*pcVar2)();
                  return iVar6;
                }
                uVar24 = 0x228f;
                goto LAB_004660e9;
              }
              goto LAB_004699da;
            }
            iVar6 = *(int *)((int)param_1 + 0x4cd) + 1;
            *(int *)((int)param_1 + 0x4cd) = iVar6;
            if ((*(int *)((int)param_1 + 0x4bd) == 1) || (*(int *)((int)param_1 + 0x4c1) == 1)) {
              puStack_c = (undefined4 *)0x0;
              if (*(int *)((int)param_1 + 0x4bd) == 1) {
                *(undefined4 *)((int)param_1 + 0x4bd) = 0;
                if (*(int *)((int)param_1 + 0x4a1) != -1) {
                  sVar16 = *(short *)((int)param_1 + 0x49b);
                  sVar17 = *(short *)((int)param_1 + 0x49f);
                  sVar18 = *(short *)((int)param_1 + 0x49d);
                  if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
                      ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = *(int *)(DAT_007fb248 +
                                    ((int)sVar17 * (int)DAT_007fb246 +
                                     (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8);
                  }
                  if (*(int *)(iVar7 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
                    *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
                  }
                }
              }
              if (*(int *)((int)param_1 + 0x4c1) == 1) {
                *(undefined4 *)((int)param_1 + 0x4c1) = 0;
                if (*(int *)((int)param_1 + 0x4ab) != -1) {
                  sVar16 = *(short *)((int)param_1 + 0x4a5);
                  sVar17 = *(short *)((int)param_1 + 0x4a9);
                  sVar18 = *(short *)((int)param_1 + 0x4a7);
                  if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                     ((sVar18 < 0 ||
                      (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = *(int *)(DAT_007fb248 +
                                    ((int)sVar17 * (int)DAT_007fb246 +
                                     (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8);
                  }
                  if (*(int *)(iVar7 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
                    *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
                  }
                }
                if (*(int *)((int)param_1 + 0x4ab) != -1) {
                  puStack_c = (undefined4 *)0x1;
                  goto LAB_00469198;
                }
              }
              else {
LAB_00469198:
                if ((*(int *)((int)param_1 + 0x4ab) != -1) && (puStack_c == (undefined4 *)0x0))
                goto LAB_004691ae;
              }
              *(undefined4 *)((int)param_1 + 0x4cd) = 0;
              *(undefined4 *)((int)param_1 + 0x4d5) = 0xd;
              *(undefined4 *)((int)param_1 + 0xb7) = 3;
LAB_004693c9:
              iVar6 = (**(code **)(*param_1 + 0xd8))();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
LAB_004691ae:
            if (iVar6 % 10 != 1) goto switchD_00466448_caseD_2;
            sVar16 = *(short *)((int)param_1 + 0x4a5);
            sVar17 = *(short *)((int)param_1 + 0x4a9);
            sVar18 = *(short *)((int)param_1 + 0x4a7);
            if ((((((-1 < sVar16) && (sVar16 < DAT_007fb240)) &&
                  ((-1 < sVar18 &&
                   (((sVar18 < DAT_007fb242 && (-1 < sVar17)) && (sVar17 < DAT_007fb244)))))) &&
                 ((pvVar1 = *(void **)(DAT_007fb248 +
                                      ((int)sVar17 * (int)DAT_007fb246 +
                                       (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8),
                  pvVar1 != (void *)0x0 &&
                  (*(int *)((int)pvVar1 + 0x18) == *(int *)((int)param_1 + 0x4ab))))) &&
                (*(int *)((int)pvVar1 + 0x4b4) == 0)) && (*(int *)((int)pvVar1 + 0x245) != 6)) {
              if (iVar6 % 0x78 == 1) {
                iVar6 = *(int *)((int)param_1 + 0x6f7);
                if (iVar6 == 8) {
                  iVar6 = *param_1;
                  uVar24 = 0xfb;
LAB_004692be:
                  (**(code **)(iVar6 + 0x90))(3,uVar24);
                }
                else if (iVar6 == 0x14) {
                  (**(code **)(*param_1 + 0x90))(3,0x15f);
                }
                else if (iVar6 == 0x1a) {
                  iVar6 = *param_1;
                  uVar24 = 0x19e;
                  goto LAB_004692be;
                }
              }
              iVar6 = *(int *)((int)param_1 + 0x7d2);
              iVar7 = 1;
              if (iVar6 < 1) {
                iVar6 = *(int *)((int)param_1 + 0x7d6);
                if (iVar6 < 1) {
                  iVar6 = *(int *)((int)param_1 + 0x7da);
                  if (0 < iVar6) {
                    if (iVar6 < 1) {
                      iVar7 = iVar6;
                    }
                    thunk_FUN_004e1d70(pvVar1,0xde,iVar7 * 0x14);
                    thunk_FUN_004e16d0(pvVar1,param_1[6]);
                    *(int *)((int)param_1 + 0x7da) = *(int *)((int)param_1 + 0x7da) - iVar7;
                  }
                }
                else {
                  if (iVar6 < 1) {
                    iVar7 = iVar6;
                  }
                  thunk_FUN_004e1d70(pvVar1,0xdd,iVar7 * 3);
                  thunk_FUN_004e16d0(pvVar1,param_1[6]);
                  *(int *)((int)param_1 + 0x7d6) = *(int *)((int)param_1 + 0x7d6) - iVar7;
                }
              }
              else {
                if (iVar6 < 1) {
                  iVar7 = iVar6;
                }
                thunk_FUN_004e1d70(pvVar1,0xdc,iVar7 * 5);
                thunk_FUN_004e16d0(pvVar1,param_1[6]);
                *(int *)((int)param_1 + 0x7d2) = *(int *)((int)param_1 + 0x7d2) - iVar7;
              }
              if (*(int *)((int)param_1 + 0x7da) + *(int *)((int)param_1 + 0x7d6) +
                  *(int *)((int)param_1 + 0x7d2) != 0) goto switchD_00466448_caseD_2;
            }
            thunk_FUN_0048d930((int)param_1);
            *(undefined4 *)((int)param_1 + 0x4cd) = 0;
            *(undefined4 *)((int)param_1 + 0x4d5) = 0xd;
            *(undefined4 *)((int)param_1 + 0xb7) = 3;
            goto switchD_00466448_caseD_2;
          }
          if (*(int *)((int)param_1 + 0x4cd) < 1) {
            iVar6 = thunk_FUN_00460260(param_1,2);
            switch(iVar6) {
            case 0:
              if (((*(short *)((int)param_1 + 0x47) == *(short *)((int)param_1 + 0x4c5)) &&
                  (*(short *)((int)param_1 + 0x49) == *(short *)((int)param_1 + 0x4c7))) &&
                 (*(short *)((int)param_1 + 0x4b) == *(short *)((int)param_1 + 0x4c9))) {
                *(undefined4 *)((int)param_1 + 0x4d5) = 0xb;
                *(undefined4 *)((int)param_1 + 0x4d9) = 0;
                iVar6 = (**(code **)(*param_1 + 0xd8))();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              sVar16 = *(short *)((int)param_1 + 0x4a5);
              sVar17 = *(short *)((int)param_1 + 0x4a9);
              sVar18 = *(short *)((int)param_1 + 0x4a7);
              if ((((-1 < sVar16) && (sVar16 < DAT_007fb240)) &&
                  ((-1 < sVar18 &&
                   (((sVar18 < DAT_007fb242 && (-1 < sVar17)) && (sVar17 < DAT_007fb244)))))) &&
                 ((pvVar1 = *(void **)(DAT_007fb248 +
                                      ((int)sVar17 * (int)DAT_007fb246 +
                                       (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8),
                  pvVar1 != (void *)0x0 &&
                  (*(int *)((int)pvVar1 + 0x18) == *(int *)((int)param_1 + 0x4ab))))) {
                thunk_FUN_004e1690(pvVar1,param_1[6]);
              }
              return 0;
            case 1:
              goto switchD_0046878c_caseD_1;
            default:
              goto switchD_004660af_caseD_2;
            case 3:
              sVar16 = *(short *)((int)param_1 + 0x4a5);
              sVar17 = *(short *)((int)param_1 + 0x4a9);
              sVar18 = *(short *)((int)param_1 + 0x4a7);
              if ((((-1 < sVar16) && (sVar16 < DAT_007fb240)) && (-1 < sVar18)) &&
                 (((sVar18 < DAT_007fb242 && (-1 < sVar17)) &&
                  ((sVar17 < DAT_007fb244 &&
                   (pvVar1 = *(void **)(DAT_007fb248 +
                                       ((int)sVar17 * (int)DAT_007fb246 +
                                        (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8),
                   pvVar1 != (void *)0x0)))))) {
                thunk_FUN_0048d650(param_1,pvVar1);
              }
              thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4c5),
                                 (int)*(short *)((int)param_1 + 0x4c7),
                                 (int)*(short *)((int)param_1 + 0x4c9));
              goto LAB_00468c49;
            case -1:
              iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2126,0,0,&DAT_007a4ccc)
              ;
              if (iVar6 != 0) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
              uVar24 = 0x2126;
              goto LAB_004660e9;
            }
          }
          iVar6 = *(int *)((int)param_1 + 0x4cd) + 1;
          *(int *)((int)param_1 + 0x4cd) = iVar6;
          if (iVar6 == 2) {
            iVar6 = thunk_FUN_004608b0(param_1,0);
            if (iVar6 != -1) {
              return 2;
            }
            return -1;
          }
          iVar6 = thunk_FUN_004608b0(param_1,2);
          if (iVar6 == -1) {
            return -1;
          }
          if (*(int *)((int)param_1 + 0x82e) != 0) {
            return 2;
          }
          if (*(int *)((int)param_1 + 0x4bd) == 1) {
LAB_004685d3:
            *(undefined4 *)((int)param_1 + 0x4bd) = 0;
            if (*(int *)((int)param_1 + 0x4a1) != -1) {
              sVar16 = *(short *)((int)param_1 + 0x49b);
              sVar17 = *(short *)((int)param_1 + 0x49f);
              sVar18 = *(short *)((int)param_1 + 0x49d);
              if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                 ((sVar18 < 0 ||
                  (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                                (int)sVar16) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
                *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
              }
            }
          }
          else {
            if (*(int *)((int)param_1 + 0x4c1) != 1) {
              return 2;
            }
            if (*(int *)((int)param_1 + 0x4bd) == 1) goto LAB_004685d3;
          }
          if (*(int *)((int)param_1 + 0x4c1) == 1) {
            *(undefined4 *)((int)param_1 + 0x4c1) = 0;
            if (*(int *)((int)param_1 + 0x4ab) != -1) {
              sVar16 = *(short *)((int)param_1 + 0x4a5);
              sVar17 = *(short *)((int)param_1 + 0x4a9);
              sVar18 = *(short *)((int)param_1 + 0x4a7);
              if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                 (((sVar18 < 0 || ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) ||
                  (DAT_007fb244 <= sVar17)))) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(DAT_007fb248 +
                                ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                                (int)sVar16) * 8);
              }
              if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
                *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
              }
            }
          }
          bVar3 = thunk_FUN_0048d440((int)param_1);
          if (CONCAT31(extraout_var_13,bVar3) == 0) {
            thunk_FUN_004602b0(param_1);
            *(undefined4 *)((int)param_1 + 0x4d5) = 0;
            goto LAB_00469979;
          }
          if (CONCAT31(extraout_var_13,bVar3) == 7) {
            if (*(int *)((int)param_1 + 0x4ab) == -1) {
              return 2;
            }
            goto LAB_00468742;
          }
          goto LAB_00465e40;
        }
        if (*(int *)((int)param_1 + 0x4cd) < 1) {
          iVar6 = thunk_FUN_00460260(param_1,2);
          switch(iVar6) {
          case 0:
            iVar6 = thunk_FUN_00490570((int)param_1);
            if (iVar6 == 1) {
              sVar16 = *(short *)((int)param_1 + 0x4a5);
              sVar17 = *(short *)((int)param_1 + 0x4a9);
              sVar18 = *(short *)((int)param_1 + 0x4a7);
              if ((((((-1 < sVar16) && (sVar16 < DAT_007fb240)) && (-1 < sVar18)) &&
                   ((sVar18 < DAT_007fb242 && (-1 < sVar17)))) &&
                  ((sVar17 < DAT_007fb244 &&
                   ((iVar6 = *(int *)(DAT_007fb248 +
                                     ((int)sVar17 * (int)DAT_007fb246 +
                                      (int)sVar18 * (int)DAT_007fb240 + (int)sVar16) * 8),
                    iVar6 != 0 && (*(int *)(iVar6 + 0x18) == *(int *)((int)param_1 + 0x4ab))))))) &&
                 (iVar6 = thunk_FUN_004e1490(iVar6), iVar6 != 1)) {
                uVar5 = (undefined2)((uint)((int)param_1 + 0x4af) >> 0x10);
                thunk_FUN_0048dfd0(CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x47)),
                                   CONCAT22(extraout_var_24,*(undefined2 *)((int)param_1 + 0x49)),
                                   CONCAT22(extraout_var_20,*(undefined2 *)((int)param_1 + 0x4b)),
                                   CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x4a5)),
                                   CONCAT22(extraout_var_24,*(undefined2 *)((int)param_1 + 0x4a7)),
                                   (int *)CONCAT22(extraout_var_20,
                                                   *(short *)((int)param_1 + 0x4a9) + 1),1,
                                   (short *)((int)param_1 + 0x4af),(short *)((int)param_1 + 0x4b1),
                                   (short *)((int)param_1 + 0x4b3));
                *(undefined4 *)((int)param_1 + 0x4d5) = 8;
                *(undefined4 *)((int)param_1 + 0xb7) = 0;
                thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4af),
                                   (int)*(short *)((int)param_1 + 0x4b1),
                                   (int)*(short *)((int)param_1 + 0x4b3));
                break;
              }
            }
            *(undefined4 *)((int)param_1 + 0x4d5) = 9;
            goto LAB_00469979;
          case 1:
            if ((*(int *)((int)param_1 + 0x4bd) != 1) && (*(int *)((int)param_1 + 0x4c1) != 1))
            goto switchD_004660af_caseD_2;
            puStack_c = (undefined4 *)0x0;
            if (*(int *)((int)param_1 + 0x4bd) == 1) {
              *(undefined4 *)((int)param_1 + 0x4bd) = 0;
              if (*(int *)((int)param_1 + 0x4a1) != -1) {
                sVar16 = *(short *)((int)param_1 + 0x49b);
                sVar17 = *(short *)((int)param_1 + 0x49f);
                sVar18 = *(short *)((int)param_1 + 0x49d);
                if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                   ((sVar18 < 0 ||
                    (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240
                                  + (int)sVar16) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
                  *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
                }
              }
            }
            if (*(int *)((int)param_1 + 0x4c1) == 1) {
              *(undefined4 *)((int)param_1 + 0x4c1) = 0;
              if (*(int *)((int)param_1 + 0x4ab) != -1) {
                sVar16 = *(short *)((int)param_1 + 0x4a5);
                sVar17 = *(short *)((int)param_1 + 0x4a9);
                sVar18 = *(short *)((int)param_1 + 0x4a7);
                if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
                    ((sVar18 < 0 || ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))))) ||
                   (DAT_007fb244 <= sVar17)) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240
                                  + (int)sVar16) * 8);
                }
                if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
                  *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
                }
              }
              if (*(int *)((int)param_1 + 0x4ab) != -1) {
                puStack_c = (undefined4 *)0x1;
              }
            }
            bVar3 = thunk_FUN_0048d440((int)param_1);
            if (CONCAT31(extraout_var_08,bVar3) == 0) goto LAB_00467fe4;
            if (CONCAT31(extraout_var_08,bVar3) == 7) {
              if ((*(int *)((int)param_1 + 0x4ab) != -1) && (puStack_c == (undefined4 *)0x0))
              goto switchD_004660af_caseD_2;
              thunk_FUN_004602b0(param_1);
              if (*(int *)((int)param_1 + 0x4ab) == -1) {
                *(int *)((int)param_1 + 0x4cd) = *(int *)((int)param_1 + 0x4cd) + 1;
                iVar6 = (**(code **)(*param_1 + 0xd8))();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              if (puStack_c != (undefined4 *)0x1) goto switchD_004660af_caseD_2;
              thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4a5),
                                 (int)*(short *)((int)param_1 + 0x4a7),
                                 *(short *)((int)param_1 + 0x4a9) + 1);
            }
            else {
              thunk_FUN_004602b0(param_1);
              *(undefined4 *)((int)param_1 + 0x4d5) = 1;
              thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x49b),
                                 (int)*(short *)((int)param_1 + 0x49d),
                                 *(short *)((int)param_1 + 0x49f) + 1);
            }
            break;
          default:
            goto switchD_004660af_caseD_2;
          case 3:
            thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4a5),
                               (int)*(short *)((int)param_1 + 0x4a7),
                               *(short *)((int)param_1 + 0x4a9) + 1);
            break;
          case -1:
            iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1fb8,0,0,&DAT_007a4ccc);
            if (iVar6 != 0) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            uVar24 = 0x1fb8;
            goto LAB_004660e9;
          }
          goto LAB_00468c49;
        }
        iVar6 = *(int *)((int)param_1 + 0x4cd) + 1;
        *(int *)((int)param_1 + 0x4cd) = iVar6;
        if (iVar6 == 2) {
          iVar6 = thunk_FUN_004608b0(param_1,0);
          if (iVar6 != -1) {
            return 2;
          }
          return -1;
        }
        iVar6 = thunk_FUN_004608b0(param_1,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (*(int *)((int)param_1 + 0x82e) != 0) {
          return 2;
        }
        if (*(int *)((int)param_1 + 0x4bd) == 1) {
LAB_0046779f:
          *(undefined4 *)((int)param_1 + 0x4bd) = 0;
          if (*(int *)((int)param_1 + 0x4a1) != -1) {
            sVar16 = *(short *)((int)param_1 + 0x49b);
            sVar17 = *(short *)((int)param_1 + 0x49f);
            sVar18 = *(short *)((int)param_1 + 0x49d);
            if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
               (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                              (int)sVar16) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
              *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
            }
          }
        }
        else {
          if (*(int *)((int)param_1 + 0x4c1) != 1) {
            return 2;
          }
          if (*(int *)((int)param_1 + 0x4bd) == 1) goto LAB_0046779f;
        }
        if (*(int *)((int)param_1 + 0x4c1) == 1) {
          *(undefined4 *)((int)param_1 + 0x4c1) = 0;
          if (*(int *)((int)param_1 + 0x4ab) != -1) {
            sVar16 = *(short *)((int)param_1 + 0x4a5);
            sVar17 = *(short *)((int)param_1 + 0x4a9);
            sVar18 = *(short *)((int)param_1 + 0x4a7);
            if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
               ((sVar18 < 0 ||
                (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                              (int)sVar16) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
              *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
            }
          }
        }
        bVar3 = thunk_FUN_0048d440((int)param_1);
        if (CONCAT31(extraout_var_07,bVar3) == 0) {
          thunk_FUN_004602b0(param_1);
          *(undefined4 *)((int)param_1 + 0x4d5) = 0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_07,bVar3) != 7) {
          *(undefined4 *)((int)param_1 + 0x4cd) = 0;
          *(undefined4 *)((int)param_1 + 0x4d5) = 1;
          goto LAB_00465e5a;
        }
        if (*(int *)((int)param_1 + 0x4ab) == -1) {
          return 2;
        }
        *(undefined4 *)((int)param_1 + 0x4cd) = 0;
        goto LAB_0046875c;
      }
      iVar6 = *(int *)((int)param_1 + 0x4d1) + 1;
      *(int *)((int)param_1 + 0x4d1) = iVar6;
      if (iVar6 < 0x47) goto switchD_00466448_caseD_2;
      iVar6 = thunk_FUN_00460260(param_1,2);
      switch(iVar6) {
      case 1:
        iVar6 = *(int *)((int)param_1 + 0x4cd) + 1;
        *(int *)((int)param_1 + 0x4cd) = iVar6;
        if (iVar6 < 3) goto switchD_00466448_caseD_2;
        thunk_FUN_004602b0(param_1);
      case 0:
        *(undefined4 *)((int)param_1 + 0x4cd) = 0;
        *(undefined4 *)((int)param_1 + 0x4d1) = 0;
        *(undefined4 *)((int)param_1 + 0x4d5) = 7;
        *(undefined4 *)((int)param_1 + 0xb7) = 3;
      case 3:
        iVar6 = (int)*(short *)((int)param_1 + 0x4a7);
        iVar7 = (int)*(short *)((int)param_1 + 0x4a5);
        iVar8 = *(short *)((int)param_1 + 0x4a9) + 1;
        break;
      default:
        goto switchD_00466448_caseD_2;
      case -1:
        iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1f53,0,0,&DAT_007a4ccc);
        if (iVar6 != 0) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        uVar24 = 0x1f53;
        goto LAB_004660e9;
      }
      goto LAB_004699da;
    }
    iVar6 = thunk_FUN_00460260(param_1,2);
    switch(iVar6) {
    case 0:
      iVar6 = thunk_FUN_00490570((int)param_1);
      if (iVar6 != 1) {
        *(undefined4 *)((int)param_1 + 0x4d5) = 3;
        *(undefined4 *)((int)param_1 + 0xb7) = 3;
        iVar6 = thunk_FUN_004608b0(param_1,0);
        return (-(uint)(iVar6 != -1) & 3) - 1;
      }
      iVar7 = CONCAT22(extraout_var_18,*(undefined2 *)((int)param_1 + 0x49b));
      iVar6 = CONCAT22((short)((uint)((int)param_1 + 0x4af) >> 0x10),
                       *(undefined2 *)((int)param_1 + 0x49d));
      piVar14 = (int *)CONCAT22(extraout_var_23,*(short *)((int)param_1 + 0x49f) + 1);
LAB_00467da5:
      thunk_FUN_0048dfd0(CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)((int)param_1 + 0x47))
                         ,CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)((int)param_1 + 0x49)
                                  ),
                         CONCAT22((short)((uint)piVar14 >> 0x10),
                                  *(undefined2 *)((int)param_1 + 0x4b)),iVar7,iVar6,piVar14,1,
                         (short *)((int)param_1 + 0x4af),(short *)((int)param_1 + 0x4b1),
                         (short *)((int)param_1 + 0x4b3));
      thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4af),
                         (int)*(short *)((int)param_1 + 0x4b1),(int)*(short *)((int)param_1 + 0x4b3)
                        );
      break;
    case 1:
      if ((*(int *)((int)param_1 + 0x4bd) == 1) || (*(int *)((int)param_1 + 0x4c1) == 1)) {
        puStack_c = (undefined4 *)0x0;
        if (*(int *)((int)param_1 + 0x4bd) == 1) {
          *(undefined4 *)((int)param_1 + 0x4bd) = 0;
          if (*(int *)((int)param_1 + 0x4a1) != -1) {
            sVar16 = *(short *)((int)param_1 + 0x49b);
            sVar17 = *(short *)((int)param_1 + 0x49f);
            sVar18 = *(short *)((int)param_1 + 0x49d);
            if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
               ((sVar18 < 0 ||
                (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                              (int)sVar16) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
              *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
            }
          }
          if (*(int *)((int)param_1 + 0x4a1) != -1) {
            puStack_c = (undefined4 *)0x1;
          }
        }
        if (*(int *)((int)param_1 + 0x4c1) == 1) {
          *(undefined4 *)((int)param_1 + 0x4c1) = 0;
          if (*(int *)((int)param_1 + 0x4ab) != -1) {
            sVar16 = *(short *)((int)param_1 + 0x4a5);
            sVar17 = *(short *)((int)param_1 + 0x4a9);
            sVar18 = *(short *)((int)param_1 + 0x4a7);
            if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
               (((sVar18 < 0 || ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) ||
                (DAT_007fb244 <= sVar17)))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(DAT_007fb248 +
                              ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                              (int)sVar16) * 8);
            }
            if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
              *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
            }
          }
        }
        bVar3 = thunk_FUN_0048d440((int)param_1);
        if (CONCAT31(extraout_var_02,bVar3) == 0) {
LAB_00467fe4:
          thunk_FUN_004602b0(param_1);
          *(undefined4 *)((int)param_1 + 0x4d5) = 0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_02,bVar3) == 1) {
          if ((*(int *)((int)param_1 + 0x4a1) != -1) && (puStack_c == (undefined4 *)0x0))
          goto switchD_00466448_caseD_2;
          thunk_FUN_004602b0(param_1);
          if (*(int *)((int)param_1 + 0x4a1) == -1) {
            *(int *)((int)param_1 + 0x4cd) = *(int *)((int)param_1 + 0x4cd) + 1;
            goto switchD_00466448_caseD_2;
          }
          if (puStack_c != (undefined4 *)0x1) goto LAB_00466744;
          *(undefined4 *)((int)param_1 + 0xb7) = 3;
          *(undefined4 *)((int)param_1 + 0x4d5) = 1;
          thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x49b),
                             (int)*(short *)((int)param_1 + 0x49d),
                             *(short *)((int)param_1 + 0x49f) + 1);
        }
        else {
LAB_0046817e:
          thunk_FUN_004602b0(param_1);
          *(undefined4 *)((int)param_1 + 0xb7) = 3;
          *(undefined4 *)((int)param_1 + 0x4d5) = 7;
          thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4a5),
                             (int)*(short *)((int)param_1 + 0x4a7),
                             *(short *)((int)param_1 + 0x4a9) + 1);
        }
      }
      else {
LAB_00466744:
        sVar16 = *(short *)((int)param_1 + 0x49b);
        sVar17 = *(short *)((int)param_1 + 0x49f);
        sVar18 = *(short *)((int)param_1 + 0x49d);
        if ((((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
             ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) ||
            ((DAT_007fb244 <= sVar17 ||
             ((pvVar1 = *(void **)(DAT_007fb248 +
                                  ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240
                                  + (int)sVar16) * 8), pvVar1 == (void *)0x0 ||
              (*(int *)((int)pvVar1 + 0x18) != *(int *)((int)param_1 + 0x4a1))))))) ||
           (iVar6 = thunk_FUN_004e1490((int)pvVar1), iVar6 != 1)) goto switchD_00466448_caseD_2;
        thunk_FUN_004602b0(param_1);
        thunk_FUN_004e15f0(pvVar1,param_1[6]);
        *(undefined4 *)((int)param_1 + 0x4cd) = 0;
        *(undefined4 *)((int)param_1 + 0x4d5) = 4;
        thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x49b),
                           (int)*(short *)((int)param_1 + 0x49d),
                           *(short *)((int)param_1 + 0x49f) + 1);
      }
      break;
    default:
      goto switchD_00466448_caseD_2;
    case 3:
      iVar6 = thunk_FUN_00490570((int)param_1);
      if (iVar6 == 1) {
        iVar6 = CONCAT22((short)((uint)((int)param_1 + 0x4b1) >> 0x10),
                         *(undefined2 *)((int)param_1 + 0x49d));
        iVar7 = CONCAT22((short)((uint)((int)param_1 + 0x4af) >> 0x10),
                         *(undefined2 *)((int)param_1 + 0x49b));
        piVar14 = (int *)CONCAT22((short)((uint)((int)param_1 + 0x4b3) >> 0x10),
                                  *(short *)((int)param_1 + 0x49f) + 1);
LAB_00467e31:
        thunk_FUN_0048dfd0(CONCAT22((short)((uint)iVar7 >> 0x10),
                                    *(undefined2 *)((int)param_1 + 0x47)),
                           CONCAT22((short)((uint)iVar6 >> 0x10),
                                    *(undefined2 *)((int)param_1 + 0x49)),
                           CONCAT22((short)((uint)piVar14 >> 0x10),
                                    *(undefined2 *)((int)param_1 + 0x4b)),iVar7,iVar6,piVar14,1,
                           (short *)((int)param_1 + 0x4af),(short *)((int)param_1 + 0x4b1),
                           (short *)((int)param_1 + 0x4b3));
      }
LAB_00467e48:
      thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4af),
                         (int)*(short *)((int)param_1 + 0x4b1),(int)*(short *)((int)param_1 + 0x4b3)
                        );
      break;
    case -1:
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1d66,0,0,&DAT_007a4ccc);
      if (iVar6 == 0) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1d66);
        return 0xffff;
      }
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
LAB_004699e2:
  thunk_FUN_00460260(param_1,0);
switchD_00466448_caseD_2:
  iVar6 = (**(code **)(*param_1 + 0xd8))();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
switchD_0046878c_caseD_1:
  if ((*(int *)((int)param_1 + 0x4bd) == 1) || (*(int *)((int)param_1 + 0x4c1) == 1)) {
    puStack_c = (undefined4 *)0x0;
    if (*(int *)((int)param_1 + 0x4bd) == 1) {
      *(undefined4 *)((int)param_1 + 0x4bd) = 0;
      if (*(int *)((int)param_1 + 0x4a1) != -1) {
        sVar16 = *(short *)((int)param_1 + 0x49b);
        sVar17 = *(short *)((int)param_1 + 0x49f);
        sVar18 = *(short *)((int)param_1 + 0x49d);
        if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
           (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(DAT_007fb248 +
                          ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                          (int)sVar16) * 8);
        }
        if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4a1)) {
          *(undefined4 *)((int)param_1 + 0x4a1) = 0xffffffff;
        }
      }
    }
    if (*(int *)((int)param_1 + 0x4c1) == 1) {
      *(undefined4 *)((int)param_1 + 0x4c1) = 0;
      if (*(int *)((int)param_1 + 0x4ab) != -1) {
        sVar16 = *(short *)((int)param_1 + 0x4a5);
        sVar17 = *(short *)((int)param_1 + 0x4a9);
        sVar18 = *(short *)((int)param_1 + 0x4a7);
        if (((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
           ((sVar18 < 0 || (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17))))
           )) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(DAT_007fb248 +
                          ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                          (int)sVar16) * 8);
        }
        if (*(int *)(iVar6 + 0x18) != *(int *)((int)param_1 + 0x4ab)) {
          *(undefined4 *)((int)param_1 + 0x4ab) = 0xffffffff;
        }
      }
      if (*(int *)((int)param_1 + 0x4ab) != -1) {
        puStack_c = (undefined4 *)0x1;
      }
    }
    bVar3 = thunk_FUN_0048d440((int)param_1);
    if (CONCAT31(extraout_var_14,bVar3) == 0) {
      thunk_FUN_004602b0(param_1);
      *(undefined4 *)((int)param_1 + 0x4d5) = 0;
      goto LAB_00469979;
    }
    if (CONCAT31(extraout_var_14,bVar3) != 7) {
      thunk_FUN_004602b0(param_1);
      sVar17 = *(short *)((int)param_1 + 0x49d);
      sVar16 = *(short *)((int)param_1 + 0x49b);
      iVar6 = *(short *)((int)param_1 + 0x49f) + 1;
      *(undefined4 *)((int)param_1 + 0x4cd) = 0;
      *(undefined4 *)((int)param_1 + 0xb7) = 3;
      *(undefined4 *)((int)param_1 + 0x4d5) = 1;
      goto LAB_00468c40;
    }
    if ((*(int *)((int)param_1 + 0x4ab) != -1) && (puStack_c == (undefined4 *)0x0))
    goto switchD_004660af_caseD_2;
    thunk_FUN_004602b0(param_1);
    if (*(int *)((int)param_1 + 0x4ab) == -1) {
      *(int *)((int)param_1 + 0x4cd) = *(int *)((int)param_1 + 0x4cd) + 1;
      iVar6 = (**(code **)(*param_1 + 0xd8))();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (puStack_c == (undefined4 *)0x1) {
      *(undefined4 *)((int)param_1 + 0x4cd) = 0;
      *(undefined4 *)((int)param_1 + 0x4d5) = 7;
      goto LAB_00468b38;
    }
  }
  thunk_FUN_004602b0(param_1);
  sVar16 = *(short *)((int)param_1 + 0x4a5);
  sVar17 = *(short *)((int)param_1 + 0x4a9);
  sVar18 = *(short *)((int)param_1 + 0x4a7);
  if (((-1 < sVar16) && (sVar16 < DAT_007fb240)) &&
     ((-1 < sVar18 &&
      ((((sVar18 < DAT_007fb242 && (-1 < sVar17)) && (sVar17 < DAT_007fb244)) &&
       (pvVar1 = *(void **)(DAT_007fb248 +
                           ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                           (int)sVar16) * 8), pvVar1 != (void *)0x0)))))) {
    thunk_FUN_0048d650(param_1,pvVar1);
  }
  thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x4c5),
                     (int)*(short *)((int)param_1 + 0x4c7),(int)*(short *)((int)param_1 + 0x4c9));
  goto LAB_00468c49;
}

