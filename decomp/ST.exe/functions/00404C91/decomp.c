
int __thiscall STBoatC::UnLoadRC(STBoatC *this,int param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar13;
  uint uVar12;
  undefined4 extraout_ECX;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 uVar15;
  int iVar14;
  int *piVar16;
  STBoatC *pSVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  short sVar26;
  byte bVar27;
  undefined4 uVar28;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  short sStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  STBoatC *pSStack_8;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    pSVar17 = this + 0x2cc;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pSVar17 = 0;
      pSVar17 = pSVar17 + 4;
    }
    *(undefined4 *)(this + 0x2c4) = 0;
    if (*(int *)(this + 0x7da) + *(int *)(this + 0x7d6) + *(int *)(this + 0x7d2) == 0) {
      return 0;
    }
    sVar19 = *(short *)(this + 0x396);
    sVar20 = *(short *)(this + 0x39a);
    sVar21 = *(short *)(this + 0x398);
    if (sVar19 < 0) {
      return 0;
    }
    if (DAT_007fb240 <= sVar19) {
      return 0;
    }
    if (sVar21 < 0) {
      return 0;
    }
    if (DAT_007fb242 <= sVar21) {
      return 0;
    }
    if (sVar20 < 0) {
      return 0;
    }
    if (DAT_007fb244 <= sVar20) {
      return 0;
    }
    piVar16 = *(int **)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar20 + (int)DAT_007fb240 * (int)sVar21 +
                       (int)sVar19) * 8);
    if (piVar16 == (int *)0x0) {
      return 0;
    }
    if (piVar16[9] != *(int *)(this + 0x24)) {
      return 0;
    }
    iVar5 = (**(code **)(*piVar16 + 0x2c))();
    if ((iVar5 != 0x3b) && (iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 != 0x60)) {
      return 0;
    }
    *(short *)(this + 0x530) = *(short *)(this + 0x39a);
    *(short *)(this + 0x52e) = *(short *)(this + 0x398);
    *(short *)(this + 0x52c) = *(short *)(this + 0x396);
    *(undefined4 *)(this + 0x548) = 0;
    *(undefined4 *)(this + 0x544) = 0;
    *(undefined4 *)(this + 0x54c) = 0;
    *(undefined4 *)(this + 0xb7) = 3;
    thunk_FUN_00481520(this,(int)*(short *)(this + 0x396),(int)*(short *)(this + 0x398),
                       *(short *)(this + 0x39a) + 1);
  }
  else {
    iVar5 = *(int *)(this + 0x54c);
    if (iVar5 == 0) {
      iVar5 = thunk_FUN_00460260(this,2);
      switch(iVar5) {
      case 0:
        goto switchD_0046d492_caseD_0;
      case 1:
        sVar19 = *(short *)(this + 0x52c);
        sVar20 = *(short *)(this + 0x530);
        sVar21 = *(short *)(this + 0x52e);
        if (((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < sVar21)) &&
            (((sVar21 < DAT_007fb242 && (-1 < sVar20)) &&
             ((sVar20 < DAT_007fb244 &&
              ((piVar16 = *(int **)(DAT_007fb248 +
                                   ((int)sVar21 * (int)DAT_007fb240 +
                                    (int)DAT_007fb246 * (int)sVar20 + (int)sVar19) * 8),
               piVar16 != (int *)0x0 && (piVar16[9] == *(int *)(this + 0x24))))))))) &&
           ((iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 == 0x3b ||
            (iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 == 0x60))))
        goto switchD_0046d492_caseD_2;
LAB_0046d71d:
        thunk_FUN_004602b0((int *)this);
        *(undefined4 *)(this + 0xb7) = 0;
LAB_0046d72e:
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar5 != 0);
      default:
        goto switchD_0046d492_caseD_2;
      case 3:
        iVar6 = (int)*(short *)(this + 0x52e);
        iVar14 = (int)*(short *)(this + 0x52c);
        iVar5 = *(short *)(this + 0x530) + 1;
        goto LAB_0046e801;
      case -1:
        iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2638,0,0,&DAT_007a4ccc,
                                   s_STBoatC__UnLoadRC__move_to_depot_007aa9dc);
        if (iVar5 != 0) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2638);
        return 0xffff;
      }
    }
    if (iVar5 == 1) {
      iVar5 = thunk_FUN_00460260(this,2);
      switch(iVar5) {
      case 0:
        iVar5 = thunk_FUN_00490570((int)this);
        if (iVar5 != 1) {
          *(undefined4 *)(this + 0x54c) = 2;
          *(undefined4 *)(this + 0xb7) = 3;
          goto LAB_0046d818;
        }
        iVar14 = CONCAT22(extraout_var_05,*(undefined2 *)(this + 0x52e));
        uVar4 = (undefined2)((uint)(this + 0x536) >> 0x10);
        iVar5 = CONCAT22(uVar4,*(undefined2 *)(this + 0x52c));
        piVar16 = (int *)CONCAT22(extraout_var_02,*(short *)(this + 0x530) + 1);
        iVar25 = 1;
        piVar11 = (int *)CONCAT22(extraout_var_02,*(undefined2 *)(this + 0x4b));
        iVar7 = CONCAT22(extraout_var_05,*(undefined2 *)(this + 0x49));
        iVar6 = CONCAT22(uVar4,*(undefined2 *)(this + 0x47));
LAB_0046e7ea:
        thunk_FUN_0048dfd0(iVar6,iVar7,(uint)piVar11,iVar5,iVar14,piVar16,iVar25,
                           (short *)(this + 0x536),(short *)(this + 0x538),(short *)(this + 0x53a));
        sVar19 = *(short *)(this + 0x53a);
        sVar20 = *(short *)(this + 0x538);
        break;
      case 1:
        sVar19 = *(short *)(this + 0x52c);
        sVar20 = *(short *)(this + 0x530);
        sVar21 = *(short *)(this + 0x52e);
        if ((((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
             ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) || (DAT_007fb244 <= sVar20)) ||
           (((piVar16 = *(int **)(DAT_007fb248 +
                                 ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                 + (int)sVar19) * 8), piVar16 == (int *)0x0 ||
             (piVar16[9] != *(int *)(this + 0x24))) ||
            ((iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 != 0x3b &&
             (iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 != 0x60)))))) {
          thunk_FUN_004602b0((int *)this);
          iVar5 = (**(code **)(*(int *)this + 0xd8))();
          return -(uint)(iVar5 != 0);
        }
        iVar5 = thunk_FUN_004e1490((int)piVar16);
        if ((iVar5 != 1) ||
           (bVar3 = thunk_FUN_0048d7c0(this,piVar16), CONCAT31(extraout_var,bVar3) != 1))
        goto switchD_0046d492_caseD_2;
        thunk_FUN_004602b0((int *)this);
        *(int *)(this + 0x532) = piVar16[6];
        thunk_FUN_004e15f0(piVar16,*(undefined4 *)(this + 0x18));
        iVar5 = (int)*(short *)(this + 0x540);
        iVar6 = (int)*(short *)(this + 0x53e);
        iVar14 = (int)*(short *)(this + 0x53c);
        *(undefined4 *)(this + 0x544) = 0;
        *(undefined4 *)(this + 0x54c) = 3;
        goto LAB_0046e801;
      default:
        goto switchD_0046d492_caseD_2;
      case 3:
        iVar5 = thunk_FUN_00490570((int)this);
        if (iVar5 == 1) {
          uVar13 = (undefined2)((uint)(this + 0x53a) >> 0x10);
          uVar15 = (undefined2)((uint)(this + 0x538) >> 0x10);
          uVar4 = (undefined2)((uint)(this + 0x536) >> 0x10);
          thunk_FUN_0048dfd0(CONCAT22(uVar4,*(undefined2 *)(this + 0x47)),
                             CONCAT22(uVar15,*(undefined2 *)(this + 0x49)),
                             CONCAT22(uVar13,*(undefined2 *)(this + 0x4b)),
                             CONCAT22(uVar4,*(undefined2 *)(this + 0x52c)),
                             CONCAT22(uVar15,*(undefined2 *)(this + 0x52e)),
                             (int *)CONCAT22(uVar13,*(short *)(this + 0x530) + 1),1,
                             (short *)(this + 0x536),(short *)(this + 0x538),(short *)(this + 0x53a)
                            );
        }
        sVar19 = *(short *)(this + 0x53a);
        sVar20 = *(short *)(this + 0x538);
        break;
      case -1:
        iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2678,0,0,&DAT_007a4ccc,
                                   s_STBoatC__UnLoadRC__correct_move_t_007aa9a4);
        if (iVar5 != 0) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2678);
        return 0xffff;
      }
      iVar5 = (int)sVar19;
      iVar6 = (int)sVar20;
      iVar14 = (int)*(short *)(this + 0x536);
LAB_0046e801:
      thunk_FUN_00481520(this,iVar14,iVar6,iVar5);
      thunk_FUN_00460260(this,0);
switchD_0046d492_caseD_2:
      iVar5 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    if (iVar5 == 2) {
      *(int *)(this + 0x544) = *(int *)(this + 0x544) + 1;
      iVar5 = Defence(this,2);
      if (iVar5 == -1) {
        return -1;
      }
      if ((*(int *)(this + 0x82e) != 0) || (*(int *)(this + 0x544) % 0x32 != 1)) {
        return 2;
      }
      sVar19 = *(short *)(this + 0x52c);
      sVar20 = *(short *)(this + 0x530);
      sVar21 = *(short *)(this + 0x52e);
      if ((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < sVar21)) &&
         ((((sVar21 < DAT_007fb242 && (-1 < sVar20)) &&
           ((sVar20 < DAT_007fb244 &&
            ((piVar16 = *(int **)(DAT_007fb248 +
                                 ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                 + (int)sVar19) * 8), piVar16 != (int *)0x0 &&
             (piVar16[9] == *(int *)(this + 0x24))))))) &&
          ((iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 == 0x3b ||
           (iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 == 0x60)))))) {
        iVar5 = thunk_FUN_004e1490((int)piVar16);
        if (iVar5 != 1) {
          return 2;
        }
        bVar3 = thunk_FUN_0048d7c0(this,piVar16);
        if (CONCAT31(extraout_var_00,bVar3) != 1) {
          return 2;
        }
        *(int *)(this + 0x532) = piVar16[6];
        thunk_FUN_004e15f0(piVar16,*(undefined4 *)(this + 0x18));
        *(undefined4 *)(this + 0x544) = 0;
        *(undefined4 *)(this + 0x54c) = 3;
        *(undefined4 *)(this + 0xb7) = 0;
        thunk_FUN_00481520(this,(int)*(short *)(this + 0x53c),(int)*(short *)(this + 0x53e),
                           (int)*(short *)(this + 0x540));
        thunk_FUN_00460260(this,0);
        return 2;
      }
      goto LAB_0046d71d;
    }
    if (iVar5 != 3) {
      if (iVar5 == 4) {
        if (*(int *)(this + 0x550) == 0) {
          iVar6 = (ushort)(*(short *)(this + 0x530) * 200) + 300;
          iVar14 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)(this + 0x52e) + 1) * 0xc9;
          iVar7 = CONCAT22((short)((uint)iVar14 >> 0x10),*(short *)(this + 0x52c) + 1);
          iVar5 = iVar7 * 0xc9;
          uVar4 = (undefined2)((uint)(iVar7 * 0x19) >> 0x10);
          uVar4 = (**(code **)(*(int *)this + 0x10))
                            (CONCAT22(uVar4,*(undefined2 *)(this + 0x41)),
                             CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(this + 0x43)),
                             CONCAT22(uVar4,*(undefined2 *)(this + 0x45)),iVar5,iVar14,iVar6);
          *(undefined2 *)(this + 0x542) = uVar4;
          *(undefined4 *)(this + 0x550) = 1;
        }
        if (*(int *)(this + 0x550) == 1) {
          uVar8 = thunk_FUN_004176c0(this,*(short *)(this + 0x542));
          uVar8 = thunk_FUN_00417910(this,(short)uVar8);
          if (uVar8 == 0xffffffff) {
            iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2712,0,0,
                                       &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_PDEP_007aa944);
            if (iVar5 != 0) {
              pcVar2 = (code *)swi(3);
              iVar5 = (*pcVar2)();
              return iVar5;
            }
            iVar5 = 0x2713;
            goto LAB_0046e857;
          }
          if (uVar8 == 0) {
            *(undefined4 *)(this + 0x550) = 2;
            iVar5 = (**(code **)(*(int *)this + 0xd8))();
            return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
          }
        }
        if (*(int *)(this + 0x550) == 2) {
          thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                             *(short *)(this + 0x45),(*(short *)(this + 0x52c) + 1) * 0xc9,
                             (*(short *)(this + 0x52e) + 1) * 0xc9,
                             *(short *)(this + 0x530) * 200 + 300,(byte)this[0x61]);
          *(undefined4 *)(this + 0x550) = 3;
        }
        if (*(int *)(this + 0x550) == 3) {
          iStack_c = thunk_FUN_00415ed0(this,&uStack_14,&uStack_10);
          param_1 = 0;
          if (this[0x2bf] != (STBoatC)0x0) {
            pSStack_8 = this + 0x2b3;
            do {
              puVar9 = (undefined4 *)
                       thunk_FUN_0041dc40(auStack_28,*(undefined4 *)pSStack_8,
                                          *(undefined2 *)(pSStack_8 + 4),*(short *)(this + 0x6c));
              uStack_20 = *puVar9;
              sStack_1c = *(short *)(puVar9 + 1);
              if (DAT_0080732c == 1) {
                bVar27 = 0;
                sVar26 = 0;
                uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
                iVar6 = -1;
                *(uint *)(this + 0x1c) = uVar8;
                sVar24 = 0;
                sVar23 = 0;
                uVar10 = uVar8 * 0x41c64e6d + 0x3039;
                sVar22 = 0;
                *(uint *)(this + 0x1c) = uVar10;
                sVar21 = 0;
                sVar20 = 0;
                uStack_18 = uVar10 * 0x41c64e6d + 0x3039;
                sVar19 = 0;
                *(uint *)(this + 0x1c) = uStack_18;
                lVar18 = Library::MSVCRT::__ftol();
                iVar5 = (int)(short)lVar18 + (uVar8 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3
                        + (int)sStack_1c;
                iVar14 = ((uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) -
                         (int)uStack_20._2_2_;
                uVar8 = uStack_18;
              }
              else {
                uVar10 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
                *(uint *)(this + 0x1c) = uVar10;
                uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                bVar27 = 0;
                *(uint *)(this + 0x1c) = uVar12;
                uVar8 = uVar12 * 0x41c64e6d + 0x3039;
                *(uint *)(this + 0x1c) = uVar8;
                sVar26 = 0;
                iVar6 = -1;
                sVar24 = 0;
                sVar23 = 0;
                sVar22 = 0;
                sVar21 = 0;
                sVar20 = 0;
                sVar19 = 0;
                iVar5 = (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 + (int)sStack_1c;
                uStack_20._2_2_ = (short)((uint)uStack_20 >> 0x10);
                iVar14 = ((uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) -
                         (int)uStack_20._2_2_;
              }
              TraksClassTy::TraksCreate
                        (DAT_00802a7c,1,2,7,
                         (uVar8 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 +
                         (int)(short)uStack_20,iVar14 + -3,iVar5,sVar19,sVar20,sVar21,sVar22,sVar23,
                         sVar24,iVar6,sVar26,bVar27);
              param_1 = param_1 + 1;
              pSStack_8 = pSStack_8 + 6;
            } while (param_1 < (int)(uint)(byte)this[0x2bf]);
          }
          if (iStack_c == -1) {
            iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2738,0,0,
                                       &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_PDEP_007aa918);
            if (iVar5 != 0) {
              pcVar2 = (code *)swi(3);
              iVar5 = (*pcVar2)();
              return iVar5;
            }
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2739);
            return 0xffff;
          }
          if (iStack_c == 0) {
            *(undefined4 *)(this + 0x550) = 0;
            *(undefined4 *)(this + 0x54c) = 5;
            iVar5 = (**(code **)(*(int *)this + 0xd8))();
            return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
          }
        }
        goto switchD_0046db6f_caseD_2;
      }
      if (iVar5 != 5) {
        if (iVar5 == 6) {
          iVar5 = *(int *)(this + 0x548) + 1;
          *(int *)(this + 0x548) = iVar5;
          if (0x45 < iVar5) {
            if (*(int *)(this + 0x550) == 0) {
              iVar14 = (ushort)(*(short *)(this + 0x540) * 200) + 100;
              iVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)(this + 0x53e) * 0xc9) + 100;
              iVar5 = CONCAT22((short)((uint)iVar14 >> 0x10),*(short *)(this + 0x53c) * 0xc9) + 100;
              uVar4 = (undefined2)((uint)iVar6 >> 0x10);
              uVar4 = (**(code **)(*(int *)this + 0x10))
                                (CONCAT22(uVar4,*(undefined2 *)(this + 0x41)),
                                 CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(this + 0x43))
                                 ,CONCAT22(uVar4,*(undefined2 *)(this + 0x45)),iVar5,iVar6,iVar14);
              *(undefined2 *)(this + 0x542) = uVar4;
              *(undefined4 *)(this + 0x550) = 1;
            }
            if (*(int *)(this + 0x550) == 1) {
              uVar8 = thunk_FUN_004176c0(this,*(short *)(this + 0x542));
              uVar8 = thunk_FUN_00417910(this,(short)uVar8);
              if (uVar8 == 0xffffffff) {
                iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2798,0,0,
                                           &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_ODEP_007aa8ec
                                          );
                if (iVar5 != 0) {
                  pcVar2 = (code *)swi(3);
                  iVar5 = (*pcVar2)();
                  return iVar5;
                }
                iVar5 = 0x2799;
                goto LAB_0046e857;
              }
              if (uVar8 == 0) {
                *(undefined4 *)(this + 0x550) = 2;
              }
            }
            else {
              if (*(int *)(this + 0x550) == 2) {
                thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                                   *(short *)(this + 0x45),*(short *)(this + 0x53c) * 0xc9 + 100,
                                   *(short *)(this + 0x53e) * 0xc9 + 100,
                                   *(short *)(this + 0x540) * 200 + 100,(byte)this[0x61]);
                *(undefined4 *)(this + 0x550) = 3;
              }
              if (*(int *)(this + 0x550) == 3) {
                iStack_c = thunk_FUN_00415ed0(this,&uStack_10,&uStack_14);
                uVar8 = CONCAT31((int3)((uint)extraout_ECX >> 8),this[0x2bf]);
                param_1 = 0;
                if (this[0x2bf] != (STBoatC)0x0) {
                  pSStack_8 = this + 0x2b3;
                  do {
                    puVar9 = (undefined4 *)
                             thunk_FUN_0041dc40(auStack_28,*(undefined4 *)pSStack_8,
                                                *(undefined2 *)(pSStack_8 + 4),
                                                *(short *)(this + 0x6c));
                    uStack_20 = *puVar9;
                    sStack_1c = *(short *)(puVar9 + 1);
                    if (DAT_0080732c == 1) {
                      bVar27 = 0;
                      sVar26 = 0;
                      uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
                      iVar6 = -1;
                      *(uint *)(this + 0x1c) = uVar8;
                      sVar24 = 0;
                      sVar23 = 0;
                      uVar10 = uVar8 * 0x41c64e6d + 0x3039;
                      sVar22 = 0;
                      *(uint *)(this + 0x1c) = uVar10;
                      sVar21 = 0;
                      sVar20 = 0;
                      uStack_18 = uVar10 * 0x41c64e6d + 0x3039;
                      sVar19 = 0;
                      *(uint *)(this + 0x1c) = uStack_18;
                      lVar18 = Library::MSVCRT::__ftol();
                      iVar5 = (int)(short)lVar18 + (uVar8 >> 0x10) % 7 +
                              (int)*(short *)(this + 0x45) + -3 + (int)sStack_1c;
                      iVar14 = ((uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) -
                               (int)uStack_20._2_2_;
                      uVar8 = uStack_18;
                    }
                    else {
                      uVar10 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
                      *(uint *)(this + 0x1c) = uVar10;
                      uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                      bVar27 = 0;
                      *(uint *)(this + 0x1c) = uVar12;
                      uVar8 = uVar12 * 0x41c64e6d + 0x3039;
                      *(uint *)(this + 0x1c) = uVar8;
                      sVar26 = 0;
                      iVar6 = -1;
                      sVar24 = 0;
                      sVar23 = 0;
                      sVar22 = 0;
                      sVar21 = 0;
                      sVar20 = 0;
                      sVar19 = 0;
                      iVar5 = (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 +
                              (int)sStack_1c;
                      uStack_20._2_2_ = (short)((uint)uStack_20 >> 0x10);
                      iVar14 = ((uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) -
                               (int)uStack_20._2_2_;
                    }
                    TraksClassTy::TraksCreate
                              (DAT_00802a7c,1,2,7,
                               (uVar8 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 +
                               (int)(short)uStack_20,iVar14 + -3,iVar5,sVar19,sVar20,sVar21,sVar22,
                               sVar23,sVar24,iVar6,sVar26,bVar27);
                    param_1 = param_1 + 1;
                    uVar8 = (uint)(byte)this[0x2bf];
                    pSStack_8 = pSStack_8 + 6;
                  } while (param_1 < (int)uVar8);
                }
                if (iStack_c == -1) {
                  iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27bd,0,0,
                                             &DAT_007a4ccc,
                                             s_STBoatC__UnLoadRC__UNLOADRC_ODEP_007aa8c0);
                  if (iVar5 != 0) {
                    pcVar2 = (code *)swi(3);
                    iVar5 = (*pcVar2)();
                    return iVar5;
                  }
                  RaiseInternalException
                            (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27be);
                  return 0xffff;
                }
                if (iStack_c == 0) {
                  iVar5 = CONCAT22((short)(uVar8 >> 0x10),*(undefined2 *)(this + 0x49));
                  iVar14 = CONCAT22((short)((uint)(this + 0x536) >> 0x10),
                                    *(undefined2 *)(this + 0x47));
                  *(undefined4 *)(this + 0x54c) = 7;
                  thunk_FUN_0048dfd0(iVar14,iVar5,(uint)*(ushort *)(this + 0x4b),iVar14,iVar5,
                                     (int *)(uint)*(ushort *)(this + 0x4b),2,(short *)(this + 0x536)
                                     ,(short *)(this + 0x538),(short *)(this + 0x53a));
                  thunk_FUN_00481520(this,(int)*(short *)(this + 0x536),
                                     (int)*(short *)(this + 0x538),(int)*(short *)(this + 0x53a));
                  thunk_FUN_00460260(this,0);
                }
              }
            }
          }
          iVar5 = (**(code **)(*(int *)this + 0xd8))();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
        if (iVar5 != 7) {
          iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27e8,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC___incorrect_en_007aa858);
          if (iVar5 != 0) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          return -1;
        }
        iVar5 = thunk_FUN_00460260(this,2);
        if (iVar5 == -1) {
          iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27d5,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_MOVE_007aa884);
          if (iVar5 != 0) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          iVar5 = 0x27d5;
          goto LAB_0046e857;
        }
        if (iVar5 == 0) goto LAB_0046d72e;
        if (iVar5 != 3) goto switchD_0046d492_caseD_2;
        piVar11 = (int *)(uint)*(ushort *)(this + 0x4b);
        iVar7 = CONCAT22(extraout_var_03,*(undefined2 *)(this + 0x49));
        iVar6 = CONCAT22((short)((uint)(this + 0x536) >> 0x10),*(undefined2 *)(this + 0x47));
        iVar25 = 2;
        iVar5 = iVar6;
        iVar14 = iVar7;
        piVar16 = piVar11;
        goto LAB_0046e7ea;
      }
      iVar5 = *(int *)(this + 0x544);
      *(int *)(this + 0x544) = iVar5 + 1;
      if ((iVar5 + 1) % 10 != 1) goto switchD_0046d492_caseD_2;
      sVar19 = *(short *)(this + 0x52c);
      sVar20 = *(short *)(this + 0x530);
      sVar21 = *(short *)(this + 0x52e);
      if (((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < sVar21)) &&
          (((sVar21 < DAT_007fb242 && (-1 < sVar20)) &&
           (((sVar20 < DAT_007fb244 &&
             ((pvVar1 = *(void **)(DAT_007fb248 +
                                  ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                  + (int)sVar19) * 8), pvVar1 != (void *)0x0 &&
              (*(int *)((int)pvVar1 + 0x18) == *(int *)(this + 0x532))))) &&
            (*(int *)((int)pvVar1 + 0x4b4) == 0)))))) && (*(int *)((int)pvVar1 + 0x245) != 6)) {
        if (*(int *)(this + 0x4cd) % 0x78 == 1) {
          iVar5 = *(int *)(this + 0x6f7);
          if (iVar5 == 8) {
            iVar5 = *(int *)this;
            uVar28 = 0xfb;
LAB_0046e2c8:
            (**(code **)(iVar5 + 0x90))(3,uVar28);
          }
          else if (iVar5 == 0x14) {
            (**(code **)(*(int *)this + 0x90))(3,0x15f);
          }
          else if (iVar5 == 0x1a) {
            iVar5 = *(int *)this;
            uVar28 = 0x19e;
            goto LAB_0046e2c8;
          }
        }
        iVar5 = *(int *)(this + 0x7d2);
        iVar14 = 1;
        if (iVar5 < 1) {
          iVar5 = *(int *)(this + 0x7d6);
          if (iVar5 < 1) {
            iVar5 = *(int *)(this + 0x7da);
            if (0 < iVar5) {
              if (iVar5 < 1) {
                iVar14 = iVar5;
              }
              thunk_FUN_004e1d70(pvVar1,0xde,iVar14 * 0x14);
              thunk_FUN_004e16d0(pvVar1,*(int *)(this + 0x18));
              *(int *)(this + 0x7da) = *(int *)(this + 0x7da) - iVar14;
            }
          }
          else {
            if (iVar5 < 1) {
              iVar14 = iVar5;
            }
            thunk_FUN_004e1d70(pvVar1,0xdd,iVar14 * 3);
            thunk_FUN_004e16d0(pvVar1,*(int *)(this + 0x18));
            *(int *)(this + 0x7d6) = *(int *)(this + 0x7d6) - iVar14;
          }
        }
        else {
          if (iVar5 < 1) {
            iVar14 = iVar5;
          }
          thunk_FUN_004e1d70(pvVar1,0xdc,iVar14 * 5);
          thunk_FUN_004e16d0(pvVar1,*(int *)(this + 0x18));
          *(int *)(this + 0x7d2) = *(int *)(this + 0x7d2) - iVar14;
        }
        if (*(int *)(this + 0x7da) + *(int *)(this + 0x7d6) + *(int *)(this + 0x7d2) != 0)
        goto switchD_0046d492_caseD_2;
      }
      thunk_FUN_0048d930((int)this);
      *(undefined4 *)(this + 0x544) = 0;
      *(undefined4 *)(this + 0x54c) = 6;
      goto switchD_0046d492_caseD_2;
    }
    iVar5 = thunk_FUN_00460260(this,2);
    switch(iVar5) {
    case 0:
      sVar19 = *(short *)(this + 0x52c);
      sVar20 = *(short *)(this + 0x530);
      sVar21 = *(short *)(this + 0x52e);
      if (((-1 < sVar19) && (sVar19 < DAT_007fb240)) &&
         (((-1 < sVar21 && ((sVar21 < DAT_007fb242 && (-1 < sVar20)))) &&
          ((sVar20 < DAT_007fb244 &&
           (((piVar16 = *(int **)(DAT_007fb248 +
                                 ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                 + (int)sVar19) * 8), piVar16 != (int *)0x0 &&
             (piVar16[9] == *(int *)(this + 0x24))) &&
            ((iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 == 0x3b ||
             (iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 == 0x60)))))))))) {
        if (((*(short *)(this + 0x47) == *(short *)(this + 0x53c)) &&
            (*(short *)(this + 0x49) == *(short *)(this + 0x53e))) &&
           (*(short *)(this + 0x4b) == *(short *)(this + 0x540))) {
          *(undefined4 *)(this + 0x54c) = 4;
          *(undefined4 *)(this + 0x550) = 0;
          iVar5 = (**(code **)(*(int *)this + 0xd8))();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
        thunk_FUN_004e1690(piVar16,*(int *)(this + 0x18));
        return 0;
      }
      goto LAB_0046d652;
    case 1:
      thunk_FUN_004602b0((int *)this);
      sVar19 = *(short *)(this + 0x52c);
      sVar20 = *(short *)(this + 0x530);
      sVar21 = *(short *)(this + 0x52e);
      if (((-1 < sVar19) && (sVar19 < DAT_007fb240)) &&
         ((-1 < sVar21 && (((sVar21 < DAT_007fb242 && (-1 < sVar20)) && (sVar20 < DAT_007fb244))))))
      {
        pvVar1 = *(void **)(DAT_007fb248 +
                           ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                           (int)sVar19) * 8);
joined_r0x0046dd46:
        if (pvVar1 != (void *)0x0) {
          thunk_FUN_0048d7c0(this,pvVar1);
        }
      }
      break;
    default:
      goto switchD_0046db6f_caseD_2;
    case 3:
      sVar19 = *(short *)(this + 0x52c);
      sVar20 = *(short *)(this + 0x530);
      sVar21 = *(short *)(this + 0x52e);
      if (((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < sVar21)) &&
          ((sVar21 < DAT_007fb242 && (-1 < sVar20)))) && (sVar20 < DAT_007fb244)) {
        pvVar1 = *(void **)(DAT_007fb248 +
                           ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                           (int)sVar19) * 8);
        goto joined_r0x0046dd46;
      }
      break;
    case -1:
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x26d9,0,0,&DAT_007a4ccc,
                                 s_STBoatC__UnLoadRC__move_to_depot_007aa970);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      iVar5 = 0x26d9;
LAB_0046e857:
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar5);
      return 0xffff;
    }
    thunk_FUN_00481520(this,(int)*(short *)(this + 0x53c),(int)*(short *)(this + 0x53e),
                       (int)*(short *)(this + 0x540));
  }
  thunk_FUN_00460260(this,0);
switchD_0046db6f_caseD_2:
  iVar5 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
switchD_0046d492_caseD_0:
  sVar19 = *(short *)(this + 0x52c);
  sVar20 = *(short *)(this + 0x530);
  sVar21 = *(short *)(this + 0x52e);
  if (((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
      ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) || (DAT_007fb244 <= sVar20)) {
    piVar16 = (int *)0x0;
  }
  else {
    piVar16 = *(int **)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar20 + (int)DAT_007fb240 * (int)sVar21 +
                       (int)sVar19) * 8);
  }
  iVar5 = thunk_FUN_00490570((int)this);
  if (iVar5 == 1) {
    if (piVar16 != (int *)0x0) {
      if (((piVar16[9] == *(int *)(this + 0x24)) &&
          ((iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 == 0x3b ||
           (iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 == 0x60)))) &&
         (iVar5 = thunk_FUN_004e1490((int)piVar16), iVar5 != 1)) {
        uVar4 = (undefined2)((uint)(this + 0x536) >> 0x10);
        thunk_FUN_0048dfd0(CONCAT22(extraout_var_04,*(undefined2 *)(this + 0x47)),
                           CONCAT22(extraout_var_01,*(undefined2 *)(this + 0x49)),
                           CONCAT22(uVar4,*(undefined2 *)(this + 0x4b)),
                           CONCAT22(extraout_var_04,*(undefined2 *)(this + 0x52c)),
                           CONCAT22(extraout_var_01,*(undefined2 *)(this + 0x52e)),
                           (int *)CONCAT22(uVar4,*(short *)(this + 0x530) + 1),1,
                           (short *)(this + 0x536),(short *)(this + 0x538),(short *)(this + 0x53a));
        iVar5 = (int)*(short *)(this + 0x53a);
        iVar6 = (int)*(short *)(this + 0x538);
        iVar14 = (int)*(short *)(this + 0x536);
        *(undefined4 *)(this + 0x54c) = 1;
        *(undefined4 *)(this + 0xb7) = 0;
        goto LAB_0046e801;
      }
      goto LAB_0046d60c;
    }
  }
  else {
LAB_0046d60c:
    if (((piVar16 != (int *)0x0) && (piVar16[9] == *(int *)(this + 0x24))) &&
       ((iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 == 0x3b ||
        (iVar5 = (**(code **)(*piVar16 + 0x2c))(), iVar5 == 0x60)))) {
      *(undefined4 *)(this + 0x54c) = 2;
LAB_0046d818:
      iVar5 = Defence(this,0);
      return (-(uint)(iVar5 != -1) & 3) - 1;
    }
  }
  thunk_FUN_004602b0((int *)this);
  *(undefined4 *)(this + 0xb7) = 0;
LAB_0046d652:
  iVar5 = (**(code **)(*(int *)this + 0xd8))();
  return -(uint)(iVar5 != 0);
}

