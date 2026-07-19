
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::UnLoadRC */

int __thiscall STBoatC::UnLoadRC(STBoatC *this,int param_1)

{
  STBoatC_field_054CState SVar1;
  void *pvVar2;
  STBoatC_field_06F7State SVar3;
  code *pcVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar15;
  uint uVar14;
  undefined4 extraout_ECX;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 uVar18;
  int iVar16;
  STBoatCVTable *pSVar17;
  int *piVar19;
  longlong lVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  int iVar27;
  short sVar28;
  byte bVar29;
  undefined4 uVar30;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar11 = &this->field_02CC;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    this->field_02C4 = 0;
    if (this->field_07DA + this->field_07D6 + *(int *)&this->field_0x7d2 == 0) {
      return 0;
    }
    sVar21 = *(short *)&this->field_0x396;
    sVar22 = *(short *)&this->field_0x39a;
    sVar23 = *(short *)&this->field_0x398;
    if (sVar21 < 0) {
      return 0;
    }
    if (DAT_007fb240 <= sVar21) {
      return 0;
    }
    if (sVar23 < 0) {
      return 0;
    }
    if (DAT_007fb242 <= sVar23) {
      return 0;
    }
    if (sVar22 < 0) {
      return 0;
    }
    if (DAT_007fb244 <= sVar22) {
      return 0;
    }
    piVar19 = *(int **)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar22 + (int)DAT_007fb240 * (int)sVar23 +
                       (int)sVar21) * 8);
    if (piVar19 == (int *)0x0) {
      return 0;
    }
    if (piVar19[9] != *(int *)&this->field_0x24) {
      return 0;
    }
    iVar7 = (**(code **)(*piVar19 + 0x2c))();
    if ((iVar7 != 0x3b) && (iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 != 0x60)) {
      return 0;
    }
    *(short *)&this->field_0x530 = *(short *)&this->field_0x39a;
    *(short *)&this->field_0x52e = *(short *)&this->field_0x398;
    *(short *)&this->field_0x52c = *(short *)&this->field_0x396;
    *(undefined4 *)&this->field_0x548 = 0;
    this->field_0544 = 0;
    this->field_054C = CASE_0;
    this->field_00B7 = 3;
    thunk_FUN_00481520(this,(int)*(short *)&this->field_0x396,(int)*(short *)&this->field_0x398,
                       *(short *)&this->field_0x39a + 1);
  }
  else {
    SVar1 = this->field_054C;
    if (SVar1 == CASE_0) {
      iVar7 = thunk_FUN_00460260(this,2);
      switch(iVar7) {
      case 0:
        goto switchD_0046d492_caseD_0;
      case 1:
        sVar21 = *(short *)&this->field_0x52c;
        sVar22 = *(short *)&this->field_0x530;
        sVar23 = *(short *)&this->field_0x52e;
        if (((((-1 < sVar21) && (sVar21 < DAT_007fb240)) && (-1 < sVar23)) &&
            (((sVar23 < DAT_007fb242 && (-1 < sVar22)) &&
             ((sVar22 < DAT_007fb244 &&
              ((piVar19 = *(int **)(DAT_007fb248 +
                                   ((int)sVar23 * (int)DAT_007fb240 +
                                    (int)DAT_007fb246 * (int)sVar22 + (int)sVar21) * 8),
               piVar19 != (int *)0x0 && (piVar19[9] == *(int *)&this->field_0x24)))))))) &&
           ((iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 == 0x3b ||
            (iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 == 0x60))))
        goto cf_common_exit_0046E811;
LAB_0046d71d:
        thunk_FUN_004602b0((int *)this);
        this->field_00B7 = 0;
LAB_0046d72e:
        iVar7 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar7 != 0);
      default:
        goto cf_common_exit_0046E811;
      case 3:
        iVar8 = (int)*(short *)&this->field_0x52e;
        iVar16 = (int)*(short *)&this->field_0x52c;
        iVar7 = *(short *)&this->field_0x530 + 1;
        goto cf_common_exit_0046E801;
      case -1:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2638,0,0,&DAT_007a4ccc,
                                   s_STBoatC__UnLoadRC__move_to_depot_007aa9dc);
        if (iVar7 != 0) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2638);
        return 0xffff;
      }
    }
    if (SVar1 == CASE_1) {
      iVar7 = thunk_FUN_00460260(this,2);
      switch(iVar7) {
      case 0:
        iVar7 = thunk_FUN_00490570((int)this);
        if (iVar7 != 1) {
          this->field_054C = CASE_2;
          this->field_00B7 = 3;
          goto LAB_0046d818;
        }
        iVar16 = CONCAT22(extraout_var_05,*(undefined2 *)&this->field_0x52e);
        uVar6 = (undefined2)((uint)&this->field_0x536 >> 0x10);
        iVar7 = CONCAT22(uVar6,*(undefined2 *)&this->field_0x52c);
        piVar19 = (int *)CONCAT22(extraout_var_02,*(short *)&this->field_0x530 + 1);
        iVar27 = 1;
        piVar13 = (int *)CONCAT22(extraout_var_02,this->field_004B);
        iVar9 = CONCAT22(extraout_var_05,this->field_0049);
        iVar8 = CONCAT22(uVar6,this->field_0047);
LAB_0046e7ea:
        thunk_FUN_0048dfd0(iVar8,iVar9,(uint)piVar13,iVar7,iVar16,piVar19,iVar27,
                           (short *)&this->field_0x536,(short *)&this->field_0x538,
                           (short *)&this->field_0x53a);
        sVar21 = *(short *)&this->field_0x53a;
        sVar22 = *(short *)&this->field_0x538;
        break;
      case 1:
        sVar21 = *(short *)&this->field_0x52c;
        sVar22 = *(short *)&this->field_0x530;
        sVar23 = *(short *)&this->field_0x52e;
        if ((((((sVar21 < 0) || (DAT_007fb240 <= sVar21)) || (sVar23 < 0)) ||
             ((DAT_007fb242 <= sVar23 || (sVar22 < 0)))) || (DAT_007fb244 <= sVar22)) ||
           (((piVar19 = *(int **)(DAT_007fb248 +
                                 ((int)sVar22 * (int)DAT_007fb246 + (int)sVar23 * (int)DAT_007fb240
                                 + (int)sVar21) * 8), piVar19 == (int *)0x0 ||
             (piVar19[9] != *(int *)&this->field_0x24)) ||
            ((iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 != 0x3b &&
             (iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 != 0x60)))))) {
          thunk_FUN_004602b0((int *)this);
          iVar7 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar7 != 0);
        }
        iVar7 = thunk_FUN_004e1490((int)piVar19);
        if ((iVar7 != 1) ||
           (bVar5 = thunk_FUN_0048d7c0(this,piVar19), CONCAT31(extraout_var,bVar5) != 1))
        goto cf_common_exit_0046E811;
        thunk_FUN_004602b0((int *)this);
        *(int *)&this->field_0x532 = piVar19[6];
        thunk_FUN_004e15f0(piVar19,this->field_0018);
        iVar7 = (int)*(short *)&this->field_0x540;
        iVar8 = (int)*(short *)&this->field_0x53e;
        iVar16 = (int)*(short *)&this->field_0x53c;
        this->field_0544 = 0;
        this->field_054C = CASE_3;
        goto cf_common_exit_0046E801;
      default:
        goto cf_common_exit_0046E811;
      case 3:
        iVar7 = thunk_FUN_00490570((int)this);
        if (iVar7 == 1) {
          uVar15 = (undefined2)((uint)&this->field_0x53a >> 0x10);
          uVar18 = (undefined2)((uint)&this->field_0x538 >> 0x10);
          uVar6 = (undefined2)((uint)&this->field_0x536 >> 0x10);
          thunk_FUN_0048dfd0(CONCAT22(uVar6,this->field_0047),CONCAT22(uVar18,this->field_0049),
                             CONCAT22(uVar15,this->field_004B),
                             CONCAT22(uVar6,*(undefined2 *)&this->field_0x52c),
                             CONCAT22(uVar18,*(undefined2 *)&this->field_0x52e),
                             (int *)CONCAT22(uVar15,*(short *)&this->field_0x530 + 1),1,
                             (short *)&this->field_0x536,(short *)&this->field_0x538,
                             (short *)&this->field_0x53a);
        }
        sVar21 = *(short *)&this->field_0x53a;
        sVar22 = *(short *)&this->field_0x538;
        break;
      case -1:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2678,0,0,&DAT_007a4ccc,
                                   s_STBoatC__UnLoadRC__correct_move_t_007aa9a4);
        if (iVar7 != 0) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2678);
        return 0xffff;
      }
      iVar7 = (int)sVar21;
      iVar8 = (int)sVar22;
      iVar16 = (int)*(short *)&this->field_0x536;
cf_common_exit_0046E801:
      thunk_FUN_00481520(this,iVar16,iVar8,iVar7);
      thunk_FUN_00460260(this,0);
cf_common_exit_0046E811:
      iVar7 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    if (SVar1 == CASE_2) {
      this->field_0544 = this->field_0544 + 1;
      iVar7 = Defence(this,2);
      if (iVar7 == -1) {
        return -1;
      }
      if ((this->field_082E != 0) || ((int)this->field_0544 % 0x32 != 1)) {
        return 2;
      }
      sVar21 = *(short *)&this->field_0x52c;
      sVar22 = *(short *)&this->field_0x530;
      sVar23 = *(short *)&this->field_0x52e;
      if ((((-1 < sVar21) && (sVar21 < DAT_007fb240)) && (-1 < sVar23)) &&
         ((((sVar23 < DAT_007fb242 && (-1 < sVar22)) &&
           ((sVar22 < DAT_007fb244 &&
            ((piVar19 = *(int **)(DAT_007fb248 +
                                 ((int)sVar22 * (int)DAT_007fb246 + (int)sVar23 * (int)DAT_007fb240
                                 + (int)sVar21) * 8), piVar19 != (int *)0x0 &&
             (piVar19[9] == *(int *)&this->field_0x24)))))) &&
          ((iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 == 0x3b ||
           (iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 == 0x60)))))) {
        iVar7 = thunk_FUN_004e1490((int)piVar19);
        if (iVar7 != 1) {
          return 2;
        }
        bVar5 = thunk_FUN_0048d7c0(this,piVar19);
        if (CONCAT31(extraout_var_00,bVar5) != 1) {
          return 2;
        }
        *(int *)&this->field_0x532 = piVar19[6];
        thunk_FUN_004e15f0(piVar19,this->field_0018);
        this->field_0544 = 0;
        this->field_054C = CASE_3;
        this->field_00B7 = 0;
        thunk_FUN_00481520(this,(int)*(short *)&this->field_0x53c,(int)*(short *)&this->field_0x53e,
                           (int)*(short *)&this->field_0x540);
        thunk_FUN_00460260(this,0);
        return 2;
      }
      goto LAB_0046d71d;
    }
    if (SVar1 != CASE_3) {
      if (SVar1 == CASE_4) {
        if (*(int *)&this->field_0x550 == 0) {
          iVar8 = (ushort)(*(short *)&this->field_0x530 * 200) + 300;
          iVar16 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)&this->field_0x52e + 1) * 0xc9;
          iVar9 = CONCAT22((short)((uint)iVar16 >> 0x10),*(short *)&this->field_0x52c + 1);
          iVar7 = iVar9 * 0xc9;
          uVar6 = (undefined2)((uint)(iVar9 * 0x19) >> 0x10);
          uVar6 = (*this->vtable->vfunc_10)
                            (CONCAT22(uVar6,this->field_0041),
                             CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                             CONCAT22(uVar6,this->field_0045),iVar7,iVar16,iVar8);
          *(undefined2 *)&this->field_0x542 = uVar6;
          *(undefined4 *)&this->field_0x550 = 1;
        }
        if (*(int *)&this->field_0x550 == 1) {
          uVar10 = thunk_FUN_004176c0(this,*(short *)&this->field_0x542);
          uVar10 = thunk_FUN_00417910(this,(short)uVar10);
          if (uVar10 == 0xffffffff) {
            iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2712,0,0,
                                       &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_PDEP_007aa944);
            if (iVar7 != 0) {
              pcVar4 = (code *)swi(3);
              iVar7 = (*pcVar4)();
              return iVar7;
            }
            iVar7 = 0x2713;
            goto cf_error_exit_0046E857;
          }
          if (uVar10 == 0) {
            *(undefined4 *)&this->field_0x550 = 2;
            iVar7 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
          }
        }
        if (*(int *)&this->field_0x550 == 2) {
          thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                             (*(short *)&this->field_0x52c + 1) * 0xc9,
                             (*(short *)&this->field_0x52e + 1) * 0xc9,
                             *(short *)&this->field_0x530 * 200 + 300,this->field_0x61);
          *(undefined4 *)&this->field_0x550 = 3;
        }
        if (*(int *)&this->field_0x550 == 3) {
          local_c = thunk_FUN_00415ed0(this,&local_14,&local_10);
          param_1 = 0;
          if (this->field_0x2bf != '\0') {
            local_8 = (undefined4 *)&this->field_0x2b3;
            do {
              puVar11 = (undefined4 *)
                        thunk_FUN_0041dc40(local_28,*local_8,*(undefined2 *)(local_8 + 1),
                                           this->field_006C);
              local_20 = *puVar11;
              local_1c = *(short *)(puVar11 + 1);
              if (DAT_0080732c == 1) {
                bVar29 = 0;
                sVar28 = 0;
                uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                iVar8 = -1;
                this->field_001C = uVar10;
                sVar26 = 0;
                sVar25 = 0;
                uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                sVar24 = 0;
                this->field_001C = uVar12;
                sVar23 = 0;
                sVar22 = 0;
                local_18 = uVar12 * 0x41c64e6d + 0x3039;
                sVar21 = 0;
                this->field_001C = local_18;
                lVar20 = Library::MSVCRT::__ftol();
                iVar7 = (int)(short)lVar20 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                        (int)local_1c;
                iVar16 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                uVar10 = local_18;
              }
              else {
                uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
                this->field_001C = uVar12;
                uVar14 = uVar12 * 0x41c64e6d + 0x3039;
                bVar29 = 0;
                this->field_001C = uVar14;
                uVar10 = uVar14 * 0x41c64e6d + 0x3039;
                this->field_001C = uVar10;
                sVar28 = 0;
                iVar8 = -1;
                sVar26 = 0;
                sVar25 = 0;
                sVar24 = 0;
                sVar23 = 0;
                sVar22 = 0;
                sVar21 = 0;
                iVar7 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                local_20._2_2_ = (short)((uint)local_20 >> 0x10);
                iVar16 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
              }
              TraksClassTy::TraksCreate
                        (DAT_00802a7c,1,2,7,
                         (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_20,
                         iVar16 + -3,iVar7,sVar21,sVar22,sVar23,sVar24,sVar25,sVar26,iVar8,sVar28,
                         bVar29);
              param_1 = param_1 + 1;
              local_8 = (undefined4 *)((int)local_8 + 6);
            } while (param_1 < (int)(uint)(byte)this->field_0x2bf);
          }
          if (local_c == -1) {
            iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2738,0,0,
                                       &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_PDEP_007aa918);
            if (iVar7 != 0) {
              pcVar4 = (code *)swi(3);
              iVar7 = (*pcVar4)();
              return iVar7;
            }
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2739);
            return 0xffff;
          }
          if (local_c == 0) {
            *(undefined4 *)&this->field_0x550 = 0;
            this->field_054C = CASE_5;
            iVar7 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
          }
        }
        goto cf_common_exit_0046E9F3;
      }
      if (SVar1 != CASE_5) {
        if (SVar1 == CASE_6) {
          iVar7 = *(int *)&this->field_0x548 + 1;
          *(int *)&this->field_0x548 = iVar7;
          if (0x45 < iVar7) {
            if (*(int *)&this->field_0x550 == 0) {
              iVar16 = (ushort)(*(short *)&this->field_0x540 * 200) + 100;
              iVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)&this->field_0x53e * 0xc9) +
                      100;
              iVar7 = CONCAT22((short)((uint)iVar16 >> 0x10),*(short *)&this->field_0x53c * 0xc9) +
                      100;
              uVar6 = (undefined2)((uint)iVar8 >> 0x10);
              uVar6 = (*this->vtable->vfunc_10)
                                (CONCAT22(uVar6,this->field_0041),
                                 CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                                 CONCAT22(uVar6,this->field_0045),iVar7,iVar8,iVar16);
              *(undefined2 *)&this->field_0x542 = uVar6;
              *(undefined4 *)&this->field_0x550 = 1;
            }
            if (*(int *)&this->field_0x550 == 1) {
              uVar10 = thunk_FUN_004176c0(this,*(short *)&this->field_0x542);
              uVar10 = thunk_FUN_00417910(this,(short)uVar10);
              if (uVar10 == 0xffffffff) {
                iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2798,0,0,
                                           &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_ODEP_007aa8ec
                                          );
                if (iVar7 != 0) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                iVar7 = 0x2799;
                goto cf_error_exit_0046E857;
              }
              if (uVar10 == 0) {
                *(undefined4 *)&this->field_0x550 = 2;
              }
            }
            else {
              if (*(int *)&this->field_0x550 == 2) {
                thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                                   *(short *)&this->field_0x53c * 0xc9 + 100,
                                   *(short *)&this->field_0x53e * 0xc9 + 100,
                                   *(short *)&this->field_0x540 * 200 + 100,this->field_0x61);
                *(undefined4 *)&this->field_0x550 = 3;
              }
              if (*(int *)&this->field_0x550 == 3) {
                local_c = thunk_FUN_00415ed0(this,&local_10,&local_14);
                uVar10 = CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_0x2bf);
                param_1 = 0;
                if (this->field_0x2bf != '\0') {
                  local_8 = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar11 = (undefined4 *)
                              thunk_FUN_0041dc40(local_28,*local_8,*(undefined2 *)(local_8 + 1),
                                                 this->field_006C);
                    local_20 = *puVar11;
                    local_1c = *(short *)(puVar11 + 1);
                    if (DAT_0080732c == 1) {
                      bVar29 = 0;
                      sVar28 = 0;
                      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar8 = -1;
                      this->field_001C = uVar10;
                      sVar26 = 0;
                      sVar25 = 0;
                      uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                      sVar24 = 0;
                      this->field_001C = uVar12;
                      sVar23 = 0;
                      sVar22 = 0;
                      local_18 = uVar12 * 0x41c64e6d + 0x3039;
                      sVar21 = 0;
                      this->field_001C = local_18;
                      lVar20 = Library::MSVCRT::__ftol();
                      iVar7 = (int)(short)lVar20 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3
                              + (int)local_1c;
                      iVar16 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                      uVar10 = local_18;
                    }
                    else {
                      uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar12;
                      uVar14 = uVar12 * 0x41c64e6d + 0x3039;
                      bVar29 = 0;
                      this->field_001C = uVar14;
                      uVar10 = uVar14 * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar10;
                      sVar28 = 0;
                      iVar8 = -1;
                      sVar26 = 0;
                      sVar25 = 0;
                      sVar24 = 0;
                      sVar23 = 0;
                      sVar22 = 0;
                      sVar21 = 0;
                      iVar7 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                      local_20._2_2_ = (short)((uint)local_20 >> 0x10);
                      iVar16 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                    }
                    TraksClassTy::TraksCreate
                              (DAT_00802a7c,1,2,7,
                               (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_20,iVar16 + -3,iVar7,sVar21,sVar22,sVar23,sVar24,
                               sVar25,sVar26,iVar8,sVar28,bVar29);
                    param_1 = param_1 + 1;
                    uVar10 = (uint)(byte)this->field_0x2bf;
                    local_8 = (undefined4 *)((int)local_8 + 6);
                  } while (param_1 < (int)uVar10);
                }
                if (local_c == -1) {
                  iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27bd,0,0,
                                             &DAT_007a4ccc,
                                             s_STBoatC__UnLoadRC__UNLOADRC_ODEP_007aa8c0);
                  if (iVar7 != 0) {
                    pcVar4 = (code *)swi(3);
                    iVar7 = (*pcVar4)();
                    return iVar7;
                  }
                  RaiseInternalException
                            (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27be);
                  return 0xffff;
                }
                if (local_c == 0) {
                  iVar7 = CONCAT22((short)(uVar10 >> 0x10),this->field_0049);
                  iVar16 = CONCAT22((short)((uint)&this->field_0x536 >> 0x10),this->field_0047);
                  this->field_054C = CASE_7;
                  thunk_FUN_0048dfd0(iVar16,iVar7,(uint)(ushort)this->field_004B,iVar16,iVar7,
                                     (int *)(uint)(ushort)this->field_004B,2,
                                     (short *)&this->field_0x536,(short *)&this->field_0x538,
                                     (short *)&this->field_0x53a);
                  thunk_FUN_00481520(this,(int)*(short *)&this->field_0x536,
                                     (int)*(short *)&this->field_0x538,
                                     (int)*(short *)&this->field_0x53a);
                  thunk_FUN_00460260(this,0);
                }
              }
            }
          }
          iVar7 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
        if (SVar1 != CASE_7) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27e8,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC___incorrect_en_007aa858);
          if (iVar7 != 0) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          return -1;
        }
        iVar7 = thunk_FUN_00460260(this,2);
        if (iVar7 == -1) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27d5,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_MOVE_007aa884);
          if (iVar7 != 0) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          iVar7 = 0x27d5;
          goto cf_error_exit_0046E857;
        }
        if (iVar7 == 0) goto LAB_0046d72e;
        if (iVar7 != 3) goto cf_common_exit_0046E811;
        piVar13 = (int *)(uint)(ushort)this->field_004B;
        iVar9 = CONCAT22(extraout_var_03,this->field_0049);
        iVar8 = CONCAT22((short)((uint)&this->field_0x536 >> 0x10),this->field_0047);
        iVar27 = 2;
        iVar7 = iVar8;
        iVar16 = iVar9;
        piVar19 = piVar13;
        goto LAB_0046e7ea;
      }
      iVar7 = this->field_0544 + 1;
      this->field_0544 = iVar7;
      if (iVar7 % 10 != 1) goto cf_common_exit_0046E811;
      sVar21 = *(short *)&this->field_0x52c;
      sVar22 = *(short *)&this->field_0x530;
      sVar23 = *(short *)&this->field_0x52e;
      if (((((-1 < sVar21) && (sVar21 < DAT_007fb240)) && (-1 < sVar23)) &&
          (((sVar23 < DAT_007fb242 && (-1 < sVar22)) &&
           (((sVar22 < DAT_007fb244 &&
             ((pvVar2 = *(void **)(DAT_007fb248 +
                                  ((int)sVar22 * (int)DAT_007fb246 + (int)sVar23 * (int)DAT_007fb240
                                  + (int)sVar21) * 8), pvVar2 != (void *)0x0 &&
              (*(int *)((int)pvVar2 + 0x18) == *(int *)&this->field_0x532)))) &&
            (*(int *)((int)pvVar2 + 0x4b4) == 0)))))) && (*(int *)((int)pvVar2 + 0x245) != 6)) {
        if ((int)this->field_04CD % 0x78 == 1) {
          SVar3 = this->field_06F7;
          if (SVar3 == CASE_8) {
            pSVar17 = this->vtable;
            uVar30 = 0xfb;
LAB_0046e2c8:
            (*pSVar17->vfunc_90)(3,uVar30);
          }
          else if (SVar3 == CASE_14) {
            (*this->vtable->vfunc_90)(3,0x15f);
          }
          else if (SVar3 == CASE_1A) {
            pSVar17 = this->vtable;
            uVar30 = 0x19e;
            goto LAB_0046e2c8;
          }
        }
        iVar7 = *(int *)&this->field_0x7d2;
        iVar16 = 1;
        if (iVar7 < 1) {
          iVar7 = this->field_07D6;
          if (iVar7 < 1) {
            iVar7 = this->field_07DA;
            if (0 < iVar7) {
              if (iVar7 < 1) {
                iVar16 = iVar7;
              }
              thunk_FUN_004e1d70(pvVar2,0xde,iVar16 * 0x14);
              thunk_FUN_004e16d0(pvVar2,this->field_0018);
              this->field_07DA = this->field_07DA - iVar16;
            }
          }
          else {
            if (iVar7 < 1) {
              iVar16 = iVar7;
            }
            thunk_FUN_004e1d70(pvVar2,0xdd,iVar16 * 3);
            thunk_FUN_004e16d0(pvVar2,this->field_0018);
            this->field_07D6 = this->field_07D6 - iVar16;
          }
        }
        else {
          if (iVar7 < 1) {
            iVar16 = iVar7;
          }
          thunk_FUN_004e1d70(pvVar2,0xdc,iVar16 * 5);
          thunk_FUN_004e16d0(pvVar2,this->field_0018);
          *(int *)&this->field_0x7d2 = *(int *)&this->field_0x7d2 - iVar16;
        }
        if (this->field_07DA + this->field_07D6 + *(int *)&this->field_0x7d2 != 0)
        goto cf_common_exit_0046E811;
      }
      thunk_FUN_0048d930((int)this);
      this->field_0544 = 0;
      this->field_054C = CASE_6;
      goto cf_common_exit_0046E811;
    }
    iVar7 = thunk_FUN_00460260(this,2);
    switch(iVar7) {
    case 0:
      sVar21 = *(short *)&this->field_0x52c;
      sVar22 = *(short *)&this->field_0x530;
      sVar23 = *(short *)&this->field_0x52e;
      if (((-1 < sVar21) && (sVar21 < DAT_007fb240)) &&
         (((-1 < sVar23 && ((sVar23 < DAT_007fb242 && (-1 < sVar22)))) &&
          ((sVar22 < DAT_007fb244 &&
           (((piVar19 = *(int **)(DAT_007fb248 +
                                 ((int)sVar22 * (int)DAT_007fb246 + (int)sVar23 * (int)DAT_007fb240
                                 + (int)sVar21) * 8), piVar19 != (int *)0x0 &&
             (piVar19[9] == *(int *)&this->field_0x24)) &&
            ((iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 == 0x3b ||
             (iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 == 0x60)))))))))) {
        if (((this->field_0047 == *(short *)&this->field_0x53c) &&
            (this->field_0049 == *(short *)&this->field_0x53e)) &&
           (this->field_004B == *(short *)&this->field_0x540)) {
          this->field_054C = CASE_4;
          *(undefined4 *)&this->field_0x550 = 0;
          iVar7 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
        thunk_FUN_004e1690(piVar19,this->field_0018);
        return 0;
      }
      goto LAB_0046d652;
    case 1:
      thunk_FUN_004602b0((int *)this);
      sVar21 = *(short *)&this->field_0x52c;
      sVar22 = *(short *)&this->field_0x530;
      sVar23 = *(short *)&this->field_0x52e;
      if (((-1 < sVar21) && (sVar21 < DAT_007fb240)) &&
         ((-1 < sVar23 && (((sVar23 < DAT_007fb242 && (-1 < sVar22)) && (sVar22 < DAT_007fb244))))))
      {
        pvVar2 = *(void **)(DAT_007fb248 +
                           ((int)sVar22 * (int)DAT_007fb246 + (int)sVar23 * (int)DAT_007fb240 +
                           (int)sVar21) * 8);
joined_r0x0046dd46:
        if (pvVar2 != (void *)0x0) {
          thunk_FUN_0048d7c0(this,pvVar2);
        }
      }
      break;
    default:
      goto cf_common_exit_0046E9F3;
    case 3:
      sVar21 = *(short *)&this->field_0x52c;
      sVar22 = *(short *)&this->field_0x530;
      sVar23 = *(short *)&this->field_0x52e;
      if (((((-1 < sVar21) && (sVar21 < DAT_007fb240)) && (-1 < sVar23)) &&
          ((sVar23 < DAT_007fb242 && (-1 < sVar22)))) && (sVar22 < DAT_007fb244)) {
        pvVar2 = *(void **)(DAT_007fb248 +
                           ((int)sVar22 * (int)DAT_007fb246 + (int)sVar23 * (int)DAT_007fb240 +
                           (int)sVar21) * 8);
        goto joined_r0x0046dd46;
      }
      break;
    case -1:
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x26d9,0,0,&DAT_007a4ccc,
                                 s_STBoatC__UnLoadRC__move_to_depot_007aa970);
      if (iVar7 != 0) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar7 = 0x26d9;
cf_error_exit_0046E857:
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar7);
      return 0xffff;
    }
    thunk_FUN_00481520(this,(int)*(short *)&this->field_0x53c,(int)*(short *)&this->field_0x53e,
                       (int)*(short *)&this->field_0x540);
  }
  thunk_FUN_00460260(this,0);
cf_common_exit_0046E9F3:
  iVar7 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
switchD_0046d492_caseD_0:
  sVar21 = *(short *)&this->field_0x52c;
  sVar22 = *(short *)&this->field_0x530;
  sVar23 = *(short *)&this->field_0x52e;
  if (((((sVar21 < 0) || (DAT_007fb240 <= sVar21)) || (sVar23 < 0)) ||
      ((DAT_007fb242 <= sVar23 || (sVar22 < 0)))) || (DAT_007fb244 <= sVar22)) {
    piVar19 = (int *)0x0;
  }
  else {
    piVar19 = *(int **)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar22 + (int)DAT_007fb240 * (int)sVar23 +
                       (int)sVar21) * 8);
  }
  iVar7 = thunk_FUN_00490570((int)this);
  if (iVar7 == 1) {
    if (piVar19 != (int *)0x0) {
      if (((piVar19[9] == *(int *)&this->field_0x24) &&
          ((iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 == 0x3b ||
           (iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 == 0x60)))) &&
         (iVar7 = thunk_FUN_004e1490((int)piVar19), iVar7 != 1)) {
        uVar6 = (undefined2)((uint)&this->field_0x536 >> 0x10);
        thunk_FUN_0048dfd0(CONCAT22(extraout_var_04,this->field_0047),
                           CONCAT22(extraout_var_01,this->field_0049),
                           CONCAT22(uVar6,this->field_004B),
                           CONCAT22(extraout_var_04,*(undefined2 *)&this->field_0x52c),
                           CONCAT22(extraout_var_01,*(undefined2 *)&this->field_0x52e),
                           (int *)CONCAT22(uVar6,*(short *)&this->field_0x530 + 1),1,
                           (short *)&this->field_0x536,(short *)&this->field_0x538,
                           (short *)&this->field_0x53a);
        iVar7 = (int)*(short *)&this->field_0x53a;
        iVar8 = (int)*(short *)&this->field_0x538;
        iVar16 = (int)*(short *)&this->field_0x536;
        this->field_054C = CASE_1;
        this->field_00B7 = 0;
        goto cf_common_exit_0046E801;
      }
      goto LAB_0046d60c;
    }
  }
  else {
LAB_0046d60c:
    if (((piVar19 != (int *)0x0) && (piVar19[9] == *(int *)&this->field_0x24)) &&
       ((iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 == 0x3b ||
        (iVar7 = (**(code **)(*piVar19 + 0x2c))(), iVar7 == 0x60)))) {
      this->field_054C = CASE_2;
LAB_0046d818:
      iVar7 = Defence(this,0);
      return (-(uint)(iVar7 != -1) & 3) - 1;
    }
  }
  thunk_FUN_004602b0((int *)this);
  this->field_00B7 = 0;
LAB_0046d652:
  iVar7 = (*this->vtable->vfunc_D8)();
  return -(uint)(iVar7 != 0);
}

