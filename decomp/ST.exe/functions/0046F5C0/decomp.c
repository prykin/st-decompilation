
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ToDok */

int __thiscall STBoatC::ToDok(STBoatC *this,int param_1)

{
  uint uVar1;
  STBoatC_field_0580State SVar2;
  undefined4 uVar3;
  void *this_00;
  code *pcVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar13;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined2 uVar16;
  undefined2 extraout_var_01;
  uint uVar14;
  short *psVar15;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  int iVar17;
  undefined2 extraout_var_08;
  int *piVar18;
  longlong lVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  int iVar26;
  short sVar27;
  byte bVar28;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar10 = &this->field_02CC;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    this->field_02C4 = 0;
    if (this->field_0716 == this->field_0712) {
      return 0;
    }
    sVar20 = *(short *)&this->field_0x3a0;
    sVar21 = *(short *)&this->field_0x3a4;
    sVar22 = *(short *)&this->field_0x3a2;
    if (sVar20 < 0) {
      return 0;
    }
    if (DAT_007fb240 <= sVar20) {
      return 0;
    }
    if (sVar22 < 0) {
      return 0;
    }
    if (DAT_007fb242 <= sVar22) {
      return 0;
    }
    if (sVar21 < 0) {
      return 0;
    }
    if (DAT_007fb244 <= sVar21) {
      return 0;
    }
    piVar18 = *(int **)(DAT_007fb248 +
                       ((int)sVar21 * (int)DAT_007fb246 + (int)sVar22 * (int)DAT_007fb240 +
                       (int)sVar20) * 8);
    if (piVar18 == (int *)0x0) {
      return 0;
    }
    iVar7 = (**(code **)(*piVar18 + 0x2c))();
    if (iVar7 != 0x33) {
      return 0;
    }
    if (piVar18[9] != *(int *)&this->field_0x24) {
      return 0;
    }
    this->field_0580 = CASE_0;
    this->field_0554 = *(short *)&this->field_0x3a0;
    this->field_0556 = *(short *)&this->field_0x3a2;
    this->field_0558 = *(short *)&this->field_0x3a4;
    *(undefined4 *)&this->field_0x57c = 0;
    *(undefined4 *)&this->field_0x578 = 0;
    *(undefined4 *)&this->field_0x574 = 0;
    sVar20 = this->field_0558;
    sVar22 = this->field_0556;
    sVar21 = this->field_0554;
    this->field_00B7 = 3;
LAB_00470e23:
    thunk_FUN_00481520(this,(int)sVar21,(int)sVar22,sVar20 + 1);
cf_common_exit_00470E2B:
    thunk_FUN_00460260(this,0);
cf_common_exit_00470E32:
    iVar7 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
  }
  SVar2 = this->field_0580;
  if (SVar2 == CASE_0) {
    iVar7 = thunk_FUN_00460260(this,2);
    switch(iVar7) {
    case 0:
      if (this->field_0564 == 1) {
        iVar26 = (int)this->field_0556;
        iVar7 = (int)this->field_0554;
        iVar8 = this->field_0558 + 1;
        this->field_0564 = 0;
        break;
      }
      sVar20 = this->field_0554;
      sVar21 = this->field_0558;
      sVar22 = this->field_0556;
      if ((((sVar20 < 0) || (DAT_007fb240 <= sVar20)) || (sVar22 < 0)) ||
         (((DAT_007fb242 <= sVar22 || (sVar21 < 0)) || (DAT_007fb244 <= sVar21)))) {
        piVar18 = (int *)0x0;
      }
      else {
        piVar18 = *(int **)(DAT_007fb248 +
                           ((int)sVar21 * (int)DAT_007fb246 + (int)sVar22 * (int)DAT_007fb240 +
                           (int)sVar20) * 8);
      }
      iVar7 = thunk_FUN_00490570((int)this);
      if (iVar7 != 1) {
LAB_0046f794:
        if (((piVar18 != (int *)0x0) && (iVar7 = (**(code **)(*piVar18 + 0x2c))(), iVar7 == 0x33))
           && (piVar18[9] == *(int *)&this->field_0x24)) {
          this->field_0580 = CASE_2;
LAB_0046f98f:
          iVar7 = Defence(this,0);
          return (-(uint)(iVar7 != -1) & 3) - 1;
        }
LAB_0046f888:
        thunk_FUN_004602b0((int *)this);
        this->field_00B7 = 0;
        iVar7 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar7 != 0);
      }
      iVar7 = extraout_ECX;
      uVar6 = extraout_var_04;
      if (((piVar18 != (int *)0x0) &&
          (iVar26 = (**(code **)(*piVar18 + 0x2c))(), iVar7 = extraout_ECX_00,
          uVar6 = extraout_var_05, iVar26 == 0x33)) &&
         (iVar7 = piVar18[9], iVar7 == *(int *)&this->field_0x24)) {
        iVar26 = thunk_FUN_004e1eb0(piVar18,(int)this->field_0041,(int)this->field_0043,
                                    (int)this->field_0045);
        this->field_0568 = iVar26;
        iVar7 = extraout_ECX_01;
        uVar6 = extraout_var_06;
        if (iVar26 != -1) goto LAB_0046f794;
      }
      uVar16 = (undefined2)((uint)iVar7 >> 0x10);
      uVar13 = (undefined2)((uint)&this->field_055E >> 0x10);
      thunk_FUN_0048dfd0(CONCAT22(uVar16,this->field_0047),CONCAT22(uVar13,this->field_0049),
                         CONCAT22(uVar6,this->field_004B),CONCAT22(uVar16,this->field_0554),
                         CONCAT22(uVar13,this->field_0556),
                         (int *)CONCAT22(uVar6,this->field_0558 + 1),1,&this->field_055E,
                         &this->field_0560,(short *)&this->field_0x562);
      iVar8 = (int)*(short *)&this->field_0x562;
      iVar26 = (int)this->field_0560;
      iVar7 = (int)this->field_055E;
      this->field_0580 = CASE_1;
      this->field_00B7 = 0;
      break;
    case 1:
      if (this->field_0564 != 1) {
        sVar20 = this->field_0554;
        sVar21 = this->field_0558;
        sVar22 = this->field_0556;
        if ((((((-1 < sVar20) && (sVar20 < DAT_007fb240)) && (-1 < sVar22)) &&
             ((sVar22 < DAT_007fb242 && (-1 < sVar21)))) &&
            ((sVar21 < DAT_007fb244 &&
             ((piVar18 = *(int **)(DAT_007fb248 +
                                  ((int)sVar21 * (int)DAT_007fb246 + (int)sVar22 * (int)DAT_007fb240
                                  + (int)sVar20) * 8), piVar18 != (int *)0x0 &&
              (iVar7 = (**(code **)(*piVar18 + 0x2c))(), iVar7 == 0x33)))))) &&
           (piVar18[9] == *(int *)&this->field_0x24)) goto cf_common_exit_004707B7;
        goto LAB_0046f888;
      }
      this->field_0564 = 0;
      thunk_FUN_004602b0((int *)this);
    case 3:
      iVar26 = (int)this->field_0556;
      iVar7 = (int)this->field_0554;
      iVar8 = this->field_0558 + 1;
      break;
    default:
      goto cf_common_exit_004707B7;
    case -1:
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x28ac,0,0,&DAT_007a4ccc,
                                 s_STBoatC__ToDok__move_to_dock_err_007aac3c);
      if (iVar7 != 0) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar7 = 0x28ac;
cf_error_exit_00470C46:
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar7);
      return 0xffff;
    }
    goto LAB_0046fb98;
  }
  if (SVar2 != CASE_1) {
    if (SVar2 == CASE_2) {
      *(int *)&this->field_0x574 = *(int *)&this->field_0x574 + 1;
      iVar7 = Defence(this,2);
      if (iVar7 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_048B != 0xffff) {
        return 2;
      }
      if (*(int *)&this->field_0x574 % 0x32 != 1) {
        return 2;
      }
      sVar20 = this->field_0554;
      sVar21 = this->field_0558;
      sVar22 = this->field_0556;
      if ((((-1 < sVar20) && (sVar20 < DAT_007fb240)) &&
          ((-1 < sVar22 && ((sVar22 < DAT_007fb242 && (-1 < sVar21)))))) &&
         ((sVar21 < DAT_007fb244 &&
          (((piVar18 = *(int **)(DAT_007fb248 +
                                ((int)sVar21 * (int)DAT_007fb246 + (int)sVar22 * (int)DAT_007fb240 +
                                (int)sVar20) * 8), piVar18 != (int *)0x0 &&
            (iVar7 = (**(code **)(*piVar18 + 0x2c))(), iVar7 == 0x33)) &&
           (piVar18[9] == *(int *)&this->field_0x24)))))) {
        iVar7 = thunk_FUN_004e1eb0(piVar18,(int)this->field_0041,(int)this->field_0043,
                                   (int)this->field_0045);
        this->field_0568 = iVar7;
        if (iVar7 == -1) {
          return 2;
        }
        bVar5 = thunk_FUN_004908a0(this,piVar18,iVar7);
        if (CONCAT31(extraout_var_00,bVar5) != 1) {
          return 2;
        }
        *(int *)&this->field_0x55a = piVar18[6];
        thunk_FUN_004e1fb0(piVar18,this->field_0568,this->field_0018);
        sVar22 = *(short *)&this->field_0x570;
        sVar21 = *(short *)&this->field_0x56e;
        sVar20 = *(short *)&this->field_0x56c;
        this->field_0580 = CASE_3;
        this->field_00B7 = 0;
LAB_00470bfe:
        thunk_FUN_00481520(this,(int)sVar20,(int)sVar21,(int)sVar22);
        thunk_FUN_00460260(this,0);
        return 2;
      }
LAB_0046fd37:
      thunk_FUN_004602b0((int *)this);
LAB_0046fd3e:
      iVar7 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar7 != 0);
    }
    if (SVar2 == CASE_3) {
      iVar7 = thunk_FUN_00460260(this,2);
      switch(iVar7) {
      case 0:
        if (this->field_0564 != 1) {
          sVar20 = this->field_0554;
          sVar21 = this->field_0558;
          sVar22 = this->field_0556;
          if ((((-1 < sVar20) && (sVar20 < DAT_007fb240)) &&
              ((-1 < sVar22 && ((sVar22 < DAT_007fb242 && (-1 < sVar21)))))) &&
             ((sVar21 < DAT_007fb244 &&
              ((((piVar18 = *(int **)(DAT_007fb248 +
                                     ((int)sVar21 * (int)DAT_007fb246 +
                                      (int)sVar22 * (int)DAT_007fb240 + (int)sVar20) * 8),
                 piVar18 != (int *)0x0 && (iVar7 = (**(code **)(*piVar18 + 0x2c))(), iVar7 == 0x33))
                && (piVar18[0x12d] == 0)) &&
               ((*(int *)((int)piVar18 + 0x245) != 6 && (piVar18[9] == *(int *)&this->field_0x24))))
              )))) {
            if ((this->field_0047 == *(short *)&this->field_0x56c) &&
               ((this->field_0049 == *(short *)&this->field_0x56e &&
                (this->field_004B == *(short *)&this->field_0x570)))) {
              this->field_0580 = CASE_4;
              *(undefined4 *)&this->field_0x584 = 0;
              iVar7 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
            }
            thunk_FUN_004e2000(piVar18,this->field_0568,this->field_0018);
            return 0;
          }
          goto LAB_0046fd3e;
        }
        break;
      case 1:
        if (this->field_0564 != 1) {
          thunk_FUN_004602b0((int *)this);
          sVar20 = this->field_0554;
          sVar21 = this->field_0558;
          sVar22 = this->field_0556;
          if (((sVar20 < 0) || (DAT_007fb240 <= sVar20)) ||
             (((sVar22 < 0 || ((DAT_007fb242 <= sVar22 || (sVar21 < 0)))) ||
              ((DAT_007fb244 <= sVar21 ||
               (((piVar18 = *(int **)(DAT_007fb248 +
                                     ((int)sVar21 * (int)DAT_007fb246 +
                                      (int)sVar22 * (int)DAT_007fb240 + (int)sVar20) * 8),
                 piVar18 == (int *)0x0 || (iVar7 = (**(code **)(*piVar18 + 0x2c))(), iVar7 != 0x33))
                || (piVar18[9] != *(int *)&this->field_0x24)))))))) goto LAB_004700a6;
          goto LAB_00470071;
        }
        thunk_FUN_004602b0((int *)this);
        break;
      default:
        goto cf_common_exit_00470E32;
      case 3:
        sVar20 = this->field_0554;
        sVar21 = this->field_0558;
        sVar22 = this->field_0556;
        if (((((sVar20 < 0) || (DAT_007fb240 <= sVar20)) ||
             ((sVar22 < 0 || ((DAT_007fb242 <= sVar22 || (sVar21 < 0)))))) ||
            (DAT_007fb244 <= sVar21)) ||
           (((piVar18 = *(int **)(DAT_007fb248 +
                                 ((int)sVar21 * (int)DAT_007fb246 + (int)sVar22 * (int)DAT_007fb240
                                 + (int)sVar20) * 8), piVar18 == (int *)0x0 ||
             (iVar7 = (**(code **)(*piVar18 + 0x2c))(), iVar7 != 0x33)) ||
            (piVar18[9] != *(int *)&this->field_0x24)))) {
LAB_004700a6:
          iVar7 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar7 != 0);
        }
LAB_00470071:
        thunk_FUN_004908a0(this,piVar18,this->field_0568);
        thunk_FUN_00481520(this,(int)*(short *)&this->field_0x56c,(int)*(short *)&this->field_0x56e,
                           (int)*(short *)&this->field_0x570);
        goto cf_common_exit_00470E2B;
      case -1:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2977,0,0,&DAT_007a4ccc,
                                   s_STBoatC__ToDok__move_to_depot_2_e_007aabd8);
        if (iVar7 != 0) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        iVar7 = 0x2977;
        goto cf_error_exit_00470C46;
      }
      sVar20 = this->field_0558;
      sVar22 = this->field_0556;
      sVar21 = this->field_0554;
      this->field_0564 = 0;
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      goto LAB_00470e23;
    }
    if (SVar2 == CASE_4) {
      if (*(int *)&this->field_0x584 == 0) {
        iVar8 = (ushort)(this->field_0558 * 200) + 300;
        iVar26 = CONCAT22((short)((uint)iVar8 >> 0x10),this->field_0556 + 1) * 0xc9;
        iVar11 = CONCAT22((short)((uint)iVar26 >> 0x10),
                          *(short *)&this->field_0568 + this->field_0554);
        iVar7 = iVar11 * 0xc9 + 100;
        uVar6 = (undefined2)((uint)(iVar11 * 0x19) >> 0x10);
        uVar6 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar6,this->field_0041),
                           CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                           CONCAT22(uVar6,this->field_0045),iVar7,iVar26,iVar8);
        *(undefined2 *)&this->field_0x572 = uVar6;
        *(undefined4 *)&this->field_0x584 = 1;
      }
      if (*(int *)&this->field_0x584 == 1) {
        uVar9 = thunk_FUN_004176c0(this,*(short *)&this->field_0x572);
        uVar9 = thunk_FUN_00417910(this,(short)uVar9);
        if (uVar9 == 0xffffffff) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29d3,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok__TODOK_PDOCK_007aabb4);
          if (iVar7 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29d4);
            return 0xffff;
          }
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if (uVar9 == 0) {
LAB_004707ad:
          *(undefined4 *)&this->field_0x584 = 2;
          goto cf_common_exit_004707B7;
        }
      }
      if (*(int *)&this->field_0x584 == 2) {
        thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                           (*(short *)&this->field_0568 + this->field_0554) * 0xc9 + 100,
                           (this->field_0556 + 1) * 0xc9,this->field_0558 * 200 + 300,
                           this->field_0x61);
        *(undefined4 *)&this->field_0x584 = 3;
      }
      if (*(int *)&this->field_0x584 == 3) {
        local_c = thunk_FUN_00415ed0(this,&local_18,&local_14);
        uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar9;
        iVar7 = (uVar9 >> 0x10) % 7 - 3;
        uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar9;
        uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar1;
        local_10 = (uVar1 >> 0x10) % 7 - 3;
        if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
           (param_1 = 0, this->field_0x2bf != '\0')) {
          local_8 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar10 = (undefined4 *)
                      thunk_FUN_0041dc40(local_28,*local_8,*(undefined2 *)(local_8 + 1),
                                         this->field_006C);
            uVar3 = *puVar10;
            bVar28 = 0;
            sVar27 = 0;
            iVar26 = -1;
            local_1c = *(short *)(puVar10 + 1);
            sVar25 = 0;
            sVar24 = 0;
            sVar23 = 0;
            sVar22 = 0;
            sVar21 = 0;
            sVar20 = 0;
            local_20 = uVar3;
            if (DAT_0080732c == 1) {
              sVar20 = 0;
              sVar21 = 0;
              sVar22 = 0;
              sVar23 = 0;
              sVar24 = 0;
              sVar25 = 0;
              sVar27 = 0;
              bVar28 = 0;
              lVar19 = Library::MSVCRT::__ftol();
              iVar17 = (int)local_1c + this->field_0045 + local_10 + (int)(short)lVar19;
              iVar8 = (int)this->field_0043 - (int)local_20._2_2_;
              iVar11 = (int)(short)local_20 + iVar7 + this->field_0041;
            }
            else {
              iVar17 = (int)local_1c + local_10 + this->field_0045;
              local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
              iVar8 = (int)this->field_0043 - (int)local_20._2_2_;
              local_20._0_2_ = (short)uVar3;
              iVar11 = (int)(short)local_20 + iVar7 + this->field_0041;
            }
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,iVar11,iVar8 + ((uVar9 >> 0x10) % 7 - 3),iVar17,sVar20,
                       sVar21,sVar22,sVar23,sVar24,sVar25,iVar26,sVar27,bVar28);
            local_8 = (undefined4 *)((int)local_8 + 6);
            param_1 = param_1 + 1;
          } while (param_1 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_c == -1) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29fe,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC__TODOK_PDOCK_2_007aab8c);
          if (iVar7 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29ff);
            return 0xffff;
          }
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if (local_c == 0) {
          this->field_0580 = CASE_5;
          *(undefined4 *)&this->field_0x574 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar9;
          *(undefined4 *)&this->field_0x584 = 0;
          *(uint *)&this->field_0x578 = (uVar9 >> 0x10) % 0x33 + 0x28;
        }
      }
      goto cf_common_exit_004707B7;
    }
    if (SVar2 == CASE_5) {
      sVar20 = this->field_0554;
      sVar21 = this->field_0558;
      sVar22 = this->field_0556;
      if ((((-1 < sVar20) && (sVar20 < DAT_007fb240)) && (-1 < sVar22)) &&
         (((sVar22 < DAT_007fb242 && (-1 < sVar21)) &&
          ((sVar21 < DAT_007fb244 &&
           ((this_00 = *(void **)(DAT_007fb248 +
                                 ((int)sVar21 * (int)DAT_007fb246 + (int)sVar22 * (int)DAT_007fb240
                                 + (int)sVar20) * 8), this_00 != (void *)0x0 &&
            (*(int *)((int)this_00 + 0x18) == *(int *)&this->field_0x55a)))))))) {
        if (*(int *)(DAT_00802a38 + 0xe4) == *(int *)&this->field_0x574 + *(int *)&this->field_0x578
           ) {
          (*this->vtable->vfunc_90)(3,0x363);
          iVar7 = (*(short *)&this->field_0x237 * -7) / 10;
          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar9;
          iVar26 = (*(short *)&this->field_0x237 * -2) / 10;
          uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar1;
          local_20 = CONCAT22((short)((uVar1 >> 0x10) %
                                     (((*(short *)&this->field_0x237 * 2) / 10 - iVar26) + 1U)) +
                              (short)iVar26,
                              (short)((uVar9 >> 0x10) %
                                     (((*(short *)&this->field_0x237 * 7) / 10 - iVar7) + 1U)) +
                              (short)iVar7);
          puVar10 = (undefined4 *)thunk_FUN_0041dc40(local_28,local_20,0,this->field_006C);
          uVar3 = *puVar10;
          local_1c = *(short *)(puVar10 + 1);
          local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
          iVar26 = (int)local_20._2_2_;
          local_20._0_2_ = (short)uVar3;
          iVar7 = (int)(short)local_20;
          local_20 = uVar3;
          thunk_FUN_00637930(this->field_01ED,0,this->field_0041 + iVar7,this->field_0043 + iVar26,
                             this->field_0045 + -0x28,0,0);
          *(undefined4 *)&this->field_0x574 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar9;
          *(uint *)&this->field_0x578 = (uVar9 >> 0x10) % 0x33 + 0x28;
        }
        thunk_FUN_004e20d0(this_00,this->field_0568,this->field_0018,this->field_06F7,
                           this->field_0716);
        iVar7 = thunk_FUN_004e2340(this_00,this->field_0568,this->field_0018,(undefined4 *)0x0);
        this->field_0716 = iVar7;
        if (iVar7 != this->field_0712) goto cf_common_exit_00470E32;
      }
      thunk_FUN_0048dba0((int)this);
      this->field_0580 = CASE_6;
      iVar7 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    if (SVar2 != CASE_6) {
      if (SVar2 == CASE_7) {
        iVar7 = thunk_FUN_00460260(this,2);
        if (iVar7 == -1) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a8c,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok__TODOK_MOVEWAIT_e_007aab18);
          if (iVar7 != 0) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          iVar7 = 0x2a8c;
          goto cf_error_exit_00470C46;
        }
        if (iVar7 == 0) {
          return 0;
        }
        if (iVar7 != 3) {
          return 2;
        }
        piVar12 = (int *)(uint)(ushort)this->field_004B;
        iVar8 = CONCAT22(extraout_var_02,this->field_0049);
        iVar11 = CONCAT22((short)((uint)&this->field_055E >> 0x10),this->field_0047);
        iVar17 = 3;
        iVar7 = iVar11;
        iVar26 = iVar8;
        piVar18 = piVar12;
      }
      else {
        if (SVar2 != CASE_8) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ab3,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok___incorrect_entry_007aaaf0);
          if (iVar7 == 0) {
            return -1;
          }
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        iVar7 = thunk_FUN_00460260(this,2);
        if (iVar7 == -1) {
          return -1;
        }
        if (iVar7 == 0) {
          return 0;
        }
        if (iVar7 != 3) {
          return 2;
        }
        piVar18 = (int *)CONCAT22(extraout_var_03,this->field_004B);
        iVar26 = CONCAT22(extraout_var_08,this->field_0049);
        iVar17 = 1;
        iVar7 = CONCAT22(extraout_var_03,this->field_0047);
        piVar12 = (int *)CONCAT22(extraout_var_08,*(undefined2 *)&this->field_0x562);
        iVar8 = CONCAT22(extraout_var_03,this->field_0560);
        iVar11 = CONCAT22(extraout_var_08,this->field_055E);
      }
      thunk_FUN_0048dfd0(iVar11,iVar8,(uint)piVar12,iVar7,iVar26,piVar18,iVar17,&this->field_055E,
                         &this->field_0560,(short *)&this->field_0x562);
      sVar22 = *(short *)&this->field_0x562;
      sVar21 = this->field_0560;
      sVar20 = this->field_055E;
      goto LAB_00470bfe;
    }
    iVar7 = *(int *)&this->field_0x57c + 1;
    *(int *)&this->field_0x57c = iVar7;
    if (iVar7 < 0x1e) goto cf_common_exit_004707B7;
    if (*(int *)&this->field_0x584 == 0) {
      iVar26 = (ushort)(*(short *)&this->field_0x570 * 200) + 100;
      iVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)&this->field_0x56e * 0xc9) + 100;
      iVar7 = CONCAT22((short)((uint)iVar26 >> 0x10),*(short *)&this->field_0x56c * 0xc9) + 100;
      uVar6 = (undefined2)((uint)iVar8 >> 0x10);
      uVar6 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar6,this->field_0041),
                         CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                         CONCAT22(uVar6,this->field_0045),iVar7,iVar8,iVar26);
      *(undefined2 *)&this->field_0x572 = uVar6;
      *(undefined4 *)&this->field_0x584 = 1;
    }
    if (*(int *)&this->field_0x584 == 1) {
      uVar9 = thunk_FUN_004176c0(this,*(short *)&this->field_0x572);
      uVar9 = thunk_FUN_00417910(this,(short)uVar9);
      if (uVar9 == 0xffffffff) {
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a42,0,0,&DAT_007a4ccc,
                                   s_STBoatC__ToDok__TODOK_ODOCK_007aab68);
        if (iVar7 == 0) {
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a43)
          ;
          return 0xffff;
        }
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (uVar9 != 0) goto cf_common_exit_004707B7;
      goto LAB_004707ad;
    }
    if (*(int *)&this->field_0x584 == 2) {
      thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                         *(short *)&this->field_0x56c * 0xc9 + 100,
                         *(short *)&this->field_0x56e * 0xc9 + 100,
                         *(short *)&this->field_0x570 * 200 + 100,this->field_0x61);
      *(undefined4 *)&this->field_0x584 = 3;
    }
    if (*(int *)&this->field_0x584 != 3) goto cf_common_exit_00470E32;
    local_c = thunk_FUN_00415ed0(this,&local_10,&local_14);
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    iVar7 = (uVar9 >> 0x10) % 7 - 3;
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar1;
    uVar14 = this->field_074A;
    local_18 = (uVar1 >> 0x10) % 7 - 3;
    if (((int)uVar14 <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
       (param_1 = 0, this->field_0x2bf != '\0')) {
      local_8 = (undefined4 *)&this->field_0x2b3;
      do {
        puVar10 = (undefined4 *)
                  thunk_FUN_0041dc40(local_28,*local_8,*(undefined2 *)(local_8 + 1),this->field_006C
                                    );
        uVar3 = *puVar10;
        bVar28 = 0;
        sVar27 = 0;
        iVar26 = -1;
        local_1c = *(short *)(puVar10 + 1);
        sVar25 = 0;
        sVar24 = 0;
        sVar23 = 0;
        sVar22 = 0;
        sVar21 = 0;
        sVar20 = 0;
        local_20 = uVar3;
        if (DAT_0080732c == 1) {
          sVar20 = 0;
          sVar21 = 0;
          sVar22 = 0;
          sVar23 = 0;
          sVar24 = 0;
          sVar25 = 0;
          sVar27 = 0;
          bVar28 = 0;
          lVar19 = Library::MSVCRT::__ftol();
          iVar17 = (int)local_1c + this->field_0045 + local_18 + (int)(short)lVar19;
          iVar8 = (int)this->field_0043 - (int)local_20._2_2_;
          iVar11 = (int)(short)local_20 + iVar7 + this->field_0041;
        }
        else {
          iVar17 = (int)local_1c + local_18 + this->field_0045;
          local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
          iVar8 = (int)this->field_0043 - (int)local_20._2_2_;
          local_20._0_2_ = (short)uVar3;
          iVar11 = (int)(short)local_20 + iVar7 + this->field_0041;
        }
        TraksClassTy::TraksCreate
                  (DAT_00802a7c,1,2,7,iVar11,iVar8 + ((uVar9 >> 0x10) % 7 - 3),iVar17,sVar20,sVar21,
                   sVar22,sVar23,sVar24,sVar25,iVar26,sVar27,bVar28);
        local_8 = (undefined4 *)((int)local_8 + 6);
        param_1 = param_1 + 1;
        uVar14 = (uint)(byte)this->field_0x2bf;
      } while (param_1 < (int)uVar14);
    }
    if (local_c == -1) {
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a6c,0,0,&DAT_007a4ccc,
                                 s_STBoatC__ToDok__TODOK_ODOCK_2_007aab44);
      if (iVar7 != 0) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar7 = 0x2a6d;
      goto cf_error_exit_00470C46;
    }
    if (local_c != 0) goto cf_common_exit_00470E32;
    sVar20 = this->field_0554;
    iVar7 = 0;
    sVar21 = this->field_0558;
    psVar15 = (short *)CONCAT22((short)(uVar14 >> 0x10),sVar21);
    sVar22 = this->field_0556;
    if ((((sVar20 < 0) || (DAT_007fb240 <= sVar20)) || (sVar22 < 0)) ||
       (((DAT_007fb242 <= sVar22 || (sVar21 < 0)) || (DAT_007fb244 <= sVar21)))) {
cf_common_exit_00470B14:
      uVar9 = CONCAT22((short)((uint)iVar7 >> 0x10),this->field_004B);
      iVar7 = CONCAT22((short)((uint)psVar15 >> 0x10),this->field_0049);
      iVar26 = CONCAT22((short)((uint)&this->field_055E >> 0x10),this->field_0047);
      this->field_0580 = CASE_7;
      thunk_FUN_0048dfd0(iVar26,iVar7,uVar9,iVar26,iVar7,(int *)uVar9,3,&this->field_055E,
                         &this->field_0560,(short *)&this->field_0x562);
    }
    else {
      psVar15 = (short *)((int)sVar21 * (int)DAT_007fb246 + (int)sVar22 * (int)DAT_007fb240 +
                         (int)sVar20);
      iVar7 = *(int *)(DAT_007fb248 + (int)psVar15 * 8);
      if ((iVar7 == 0) ||
         (psVar15 = *(short **)(iVar7 + 0x18),
         psVar15 != (short *)*(undefined1 **)&this->field_0x55a)) goto cf_common_exit_00470B14;
      psVar15 = &this->field_055E;
      if (*(int *)(iVar7 + 0x42c) != 0) {
        if (psVar15 != (short *)0x0) {
          uVar3 = *(undefined4 *)(iVar7 + 0x430);
          this->field_055E = (short)uVar3;
          this->field_0560 = (short)((uint)uVar3 >> 0x10);
        }
        if (&this->field_0560 != (short *)0x0) {
          psVar15 = *(short **)(iVar7 + 0x434);
          *(short **)&this->field_0560 = psVar15;
        }
        if (&this->field_0x562 != (undefined1 *)0x0) {
          *(undefined4 *)&this->field_0x562 = *(undefined4 *)(iVar7 + 0x438);
        }
      }
      if (*(int *)(iVar7 + 0x42c) != 1) goto cf_common_exit_00470B14;
      this->field_0580 = CASE_8;
    }
    thunk_FUN_00481520(this,(int)this->field_055E,(int)this->field_0560,
                       (int)*(short *)&this->field_0x562);
    goto cf_common_exit_00470E2B;
  }
  iVar7 = thunk_FUN_00460260(this,2);
  switch(iVar7) {
  case 0:
    iVar7 = thunk_FUN_00490570((int)this);
    if (iVar7 != 1) {
      this->field_0580 = CASE_2;
      goto LAB_0046f98f;
    }
    uVar6 = (undefined2)((uint)&this->field_055E >> 0x10);
    thunk_FUN_0048dfd0(CONCAT22(extraout_var_01,this->field_0047),CONCAT22(uVar6,this->field_0049),
                       CONCAT22(extraout_var_07,this->field_004B),
                       CONCAT22(extraout_var_01,this->field_0554),CONCAT22(uVar6,this->field_0556),
                       (int *)CONCAT22(extraout_var_07,this->field_0558 + 1),1,&this->field_055E,
                       &this->field_0560,(short *)&this->field_0x562);
    iVar8 = (int)*(short *)&this->field_0x562;
    iVar26 = (int)this->field_0560;
    iVar7 = (int)this->field_055E;
    break;
  case 1:
    if (this->field_0564 == 1) {
      this->field_0564 = 0;
      thunk_FUN_004602b0((int *)this);
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      thunk_FUN_00481520(this,(int)this->field_0554,(int)this->field_0556,this->field_0558 + 1);
      thunk_FUN_00460260(this,0);
      goto cf_common_exit_004707B7;
    }
    sVar20 = this->field_0554;
    sVar21 = this->field_0558;
    sVar22 = this->field_0556;
    if (((((((sVar20 < 0) || (DAT_007fb240 <= sVar20)) || (sVar22 < 0)) ||
          ((DAT_007fb242 <= sVar22 || (sVar21 < 0)))) || (DAT_007fb244 <= sVar21)) ||
        ((piVar18 = *(int **)(DAT_007fb248 +
                             ((int)sVar21 * (int)DAT_007fb246 + (int)sVar22 * (int)DAT_007fb240 +
                             (int)sVar20) * 8), piVar18 == (int *)0x0 ||
         (iVar7 = (**(code **)(*piVar18 + 0x2c))(), iVar7 != 0x33)))) ||
       (piVar18[9] != *(int *)&this->field_0x24)) goto LAB_0046fd37;
    iVar7 = thunk_FUN_004e1eb0(piVar18,(int)this->field_0041,(int)this->field_0043,
                               (int)this->field_0045);
    this->field_0568 = iVar7;
    if ((iVar7 == -1) ||
       (bVar5 = thunk_FUN_004908a0(this,piVar18,iVar7), CONCAT31(extraout_var,bVar5) != 1))
    goto cf_common_exit_004707B7;
    thunk_FUN_004602b0((int *)this);
    *(int *)&this->field_0x55a = piVar18[6];
    thunk_FUN_004e1fb0(piVar18,this->field_0568,this->field_0018);
    iVar8 = (int)*(short *)&this->field_0x570;
    iVar26 = (int)*(short *)&this->field_0x56e;
    iVar7 = (int)*(short *)&this->field_0x56c;
    this->field_0580 = CASE_3;
    break;
  default:
    goto cf_common_exit_004707B7;
  case 3:
    iVar7 = thunk_FUN_00490570((int)this);
    if (iVar7 == 1) {
      uVar16 = (undefined2)((uint)&this->field_0x562 >> 0x10);
      uVar6 = (undefined2)((uint)&this->field_0560 >> 0x10);
      uVar13 = (undefined2)((uint)&this->field_055E >> 0x10);
      thunk_FUN_0048dfd0(CONCAT22(uVar13,this->field_0047),CONCAT22(uVar6,this->field_0049),
                         CONCAT22(uVar16,this->field_004B),CONCAT22(uVar13,this->field_0554),
                         CONCAT22(uVar6,this->field_0556),
                         (int *)CONCAT22(uVar16,this->field_0558 + 1),1,&this->field_055E,
                         &this->field_0560,(short *)&this->field_0x562);
    }
    thunk_FUN_00481520(this,(int)this->field_055E,(int)this->field_0560,
                       (int)*(short *)&this->field_0x562);
    thunk_FUN_00460260(this,0);
    goto cf_common_exit_004707B7;
  case -1:
    iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2907,0,0,&DAT_007a4ccc,
                               s_STBoatC__ToDok__correct_move_to_d_007aac08);
    if (iVar7 == 0) {
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2907);
      return 0xffff;
    }
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
LAB_0046fb98:
  thunk_FUN_00481520(this,iVar7,iVar26,iVar8);
  thunk_FUN_00460260(this,0);
cf_common_exit_004707B7:
  iVar7 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
}

