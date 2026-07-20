
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Dismant */

int __thiscall
STBoatC::Dismant(STBoatC *this,AnonShape_004B9D90_4F3151F9 *param_1,undefined4 param_2,int *param_3)

{
  STBoatC_field_06C3State SVar1;
  undefined4 uVar2;
  STBoatC_field_06F7State SVar3;
  code *pcVar4;
  bool bVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_02;
  short sVar18;
  undefined4 in_EDX;
  undefined2 extraout_var_03;
  longlong lVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  byte bVar23;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if ((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
     (param_1 == (AnonShape_004B9D90_4F3151F9 *)0x1)) {
    puVar12 = &this->field_02CC;
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    this->field_02C4 = 0;
    SVar3 = this->field_06F7;
    if (((SVar3 != CASE_C) && (SVar3 != CASE_18)) && (SVar3 != CASE_1D)) {
      return 0;
    }
    sVar15 = *(short *)&this->field_0x42d;
    sVar18 = *(short *)&this->field_0x42f;
    sVar14 = *(short *)&this->field_0x431;
    local_1c = *(uint *)&this->field_0x433;
    this->field_06A9 = sVar15;
    this->field_06AB = sVar18;
    this->field_06AD = sVar14;
    this->field_06AF = local_1c;
    if (SHORT_007fb244 + -2 < (int)sVar14) {
      return 0;
    }
    if ((((sVar15 < 0) || (SHORT_007fb240 <= sVar15)) ||
        ((sVar18 < 0 || ((SHORT_007fb242 <= sVar18 || (sVar14 < 0)))))) ||
       (SHORT_007fb244 <= sVar14)) {
      param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
    }
    else {
      param_1 = *(AnonShape_004B9D90_4F3151F9 **)
                 (DAT_007fb248 +
                 ((int)SHORT_007fb246 * (int)sVar14 + (int)SHORT_007fb240 * (int)sVar18 +
                 (int)sVar15) * 8);
    }
    if (param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) {
      return 0;
    }
    if (*(int *)&param_1->field_0x18 != local_1c) {
      return 0;
    }
    if (*(int *)&param_1->field_0x20 != 1000) {
      return 0;
    }
    if (*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24) {
      return 0;
    }
    iVar8 = thunk_FUN_004b9d90(param_1);
    if (iVar8 == 0) {
      return 0;
    }
    iVar8 = (**(code **)(*(int *)param_1 + 0x2c))();
    iVar8 = *(int *)(&DAT_00791d68 + iVar8 * 4);
    *(int *)&this->field_0x6b9 = iVar8;
    if (iVar8 == 1) {
      sVar15 = this->field_06AB;
      local_c = (undefined4 *)CONCAT22(extraout_var_03,this->field_06AD);
      local_10 = CONCAT22(local_10._2_2_,sVar15);
      local_8 = 0;
      sVar18 = this->field_06AD + 1;
      local_14 = CONCAT22(local_14._2_2_,this->field_06A9);
      do {
        local_18 = 0;
        sVar14 = (short)local_8 + this->field_06A9;
        do {
          sVar7 = sVar15 + (short)local_18;
          if (((((-1 < sVar14) && (sVar14 < SHORT_007fb240)) && (-1 < sVar7)) &&
              ((sVar7 < SHORT_007fb242 && (-1 < sVar18)))) &&
             ((sVar18 < SHORT_007fb244 &&
              (iVar8 = local_14,
              *(short *)(DAT_007fb280 +
                        ((int)SHORT_007fb278 * (int)sVar7 + (int)SHORT_007fb27e * (int)sVar18 +
                        (int)sVar14) * 2) == 0)))) goto LAB_0047f4cd;
          local_18 = local_18 + 1;
        } while (local_18 < 2);
        local_8 = local_8 + 1;
        if (1 < local_8) {
          return 0;
        }
      } while( true );
    }
    uVar6 = (undefined2)((uint)iVar8 >> 0x10);
    local_c = (undefined4 *)CONCAT22(uVar6,this->field_06AD);
    sVar15 = this->field_06AB;
    sVar14 = this->field_06AD + 1;
    sVar18 = this->field_06A9;
    if (sVar18 < 0) {
      return 0;
    }
    if (SHORT_007fb240 <= sVar18) {
      return 0;
    }
    if (sVar15 < 0) {
      return 0;
    }
    if (SHORT_007fb242 <= sVar15) {
      return 0;
    }
    if (sVar14 < 0) {
      return 0;
    }
    if (SHORT_007fb244 <= sVar14) {
      return 0;
    }
    iVar8 = CONCAT22(uVar6,sVar18);
    if (*(short *)(DAT_007fb280 +
                  ((int)sVar14 * (int)SHORT_007fb27e + (int)sVar15 * (int)SHORT_007fb278 +
                  (int)sVar18) * 2) != 0) {
      return 0;
    }
LAB_0047f4cd:
    this->field_06C3 = CASE_0;
    this->field_00B7 = 3;
    sub_00481520(this,(int)(short)iVar8,(int)sVar15,(short)local_c + 1);
    sub_00460260(this,0);
    return 2;
  }
  SVar1 = this->field_06C3;
  if (SVar1 == CASE_0) {
    iVar8 = sub_00460260(this,2);
    switch(iVar8) {
    case 0:
      sVar15 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar14 = this->field_06AB;
      this->field_00B7 = 0;
      if (((sVar15 < 0) || (SHORT_007fb240 <= sVar15)) ||
         ((sVar14 < 0 ||
          (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))))) {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        param_1 = *(AnonShape_004B9D90_4F3151F9 **)
                   (DAT_007fb248 +
                   ((int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                   (int)sVar15) * 8);
      }
      if (((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&param_1->field_0x18 != this->field_06AF)) ||
         ((*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24 ||
          (iVar8 = thunk_FUN_004b9d90(param_1), iVar8 == 0)))) {
        return 0;
      }
      bVar5 = thunk_FUN_00495420(this,(short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                 (short *)&this->field_0x6b7);
      if ((CONCAT31(extraout_var,bVar5) == 1) &&
         ((*(int *)&param_1->field_0x4b0 == 0 || (*(int *)&param_1->field_0x4b0 == this->field_0018)
          ))) {
        *(undefined4 *)&param_1->field_0x4b0 = this->field_0018;
        this->field_06C3 = CASE_2;
LAB_0047e4df:
        iVar8 = (int)*(short *)&this->field_0x6b7;
        sVar15 = *(short *)&this->field_0x6b5;
        sVar18 = *(short *)&this->field_0x6b3;
LAB_0047e4ee:
        sub_00481520(this,(int)sVar18,(int)sVar15,iVar8);
        sub_00460260(this,0);
        return 2;
      }
      this->field_06C3 = CASE_1;
      *(undefined4 *)&this->field_0x6bf = 0;
LAB_0047e0a4:
      iVar8 = Defence(this,0);
      if (iVar8 == -1) {
        return -1;
      }
      break;
    case 1:
      sVar15 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar14 = this->field_06AB;
      if (((sVar15 < 0) || (SHORT_007fb240 <= sVar15)) ||
         ((sVar14 < 0 ||
          (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))))) {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        param_1 = *(AnonShape_004B9D90_4F3151F9 **)
                   (DAT_007fb248 +
                   ((int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                   (int)sVar15) * 8);
      }
      if (((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&param_1->field_0x18 != this->field_06AF)) ||
         ((*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24 ||
          (iVar8 = thunk_FUN_004b9d90(param_1), iVar8 == 0)))) {
        sub_004602B0(this);
        this->field_00B7 = 0;
        return 0;
      }
      break;
    case 3:
      sVar15 = this->field_06AB;
      sVar18 = this->field_06A9;
      iVar8 = (short)this->field_06AD + 1;
      goto LAB_0047e4ee;
    case -1:
      iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3987,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Dismant__DISMANT_MOVE_e_007ab804);
      if (iVar8 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3987
                  );
        return 0xffff;
      }
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
  }
  else {
    if (SVar1 == CASE_1) {
      iVar8 = Defence(this,2);
      if (iVar8 == -1) {
        return -1;
      }
      if (((this->field_082E == 0) && (this->field_048B == 0xffff)) &&
         (*(int *)&this->field_0x6bf % 10 == 0)) {
        sVar15 = this->field_06A9;
        sVar18 = this->field_06AD;
        sVar14 = this->field_06AB;
        if ((((sVar15 < 0) || (SHORT_007fb240 <= sVar15)) ||
            ((sVar14 < 0 || ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))))) ||
           (SHORT_007fb244 <= sVar18)) {
          param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
        }
        else {
          param_1 = *(AnonShape_004B9D90_4F3151F9 **)
                     (DAT_007fb248 +
                     ((int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                     (int)sVar15) * 8);
        }
        if (param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) {
          return 0;
        }
        if (*(int *)&param_1->field_0x18 != this->field_06AF) {
          return 0;
        }
        if (*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24) {
          return 0;
        }
        iVar8 = thunk_FUN_004b9d90(param_1);
        if (iVar8 == 0) {
          return 0;
        }
        bVar5 = thunk_FUN_00495420(this,(short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                   (short *)&this->field_0x6b7);
        if ((CONCAT31(extraout_var_00,bVar5) == 1) &&
           ((*(int *)&param_1->field_0x4b0 == 0 ||
            (*(int *)&param_1->field_0x4b0 == this->field_0018)))) {
          *(undefined4 *)&param_1->field_0x4b0 = this->field_0018;
          this->field_06C3 = CASE_2;
          sub_00481520(this,(int)*(short *)&this->field_0x6b3,(int)*(short *)&this->field_0x6b5,
                       (int)*(short *)&this->field_0x6b7);
          sub_00460260(this,0);
        }
      }
      *(int *)&this->field_0x6bf = *(int *)&this->field_0x6bf + 1;
      return 2;
    }
    if (SVar1 != CASE_2) {
      if (SVar1 == CASE_3) {
        if (*(int *)&this->field_0x6c7 == 0) {
          iVar9 = (ushort)(*(short *)&this->field_0x6b7 * 200) + 100;
          iVar17 = CONCAT22((short)((uint)iVar9 >> 0x10),this->field_06AB + 1) * 0xc9;
          iVar10 = CONCAT22((short)((uint)iVar17 >> 0x10),this->field_06A9 + 1);
          iVar8 = iVar10 * 0xc9;
          uVar6 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
          uVar6 = (*this->vtable->vfunc_10)
                            (CONCAT22(uVar6,this->field_0041),
                             CONCAT22((short)((uint)iVar8 >> 0x10),this->field_0043),
                             CONCAT22(uVar6,this->field_0045),iVar8,iVar17,iVar9);
          *(undefined2 *)&this->field_0x6bd = uVar6;
          *(undefined4 *)&this->field_0x6c7 = 1;
        }
        if (*(int *)&this->field_0x6c7 == 1) {
          uVar11 = sub_004176C0(this,*(short *)&this->field_0x6bd);
          uVar11 = sub_00417910(this,(short)uVar11);
          if (uVar11 == 0xffffffff) {
            iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3a2d,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_PMOVE_007ab7ac);
            if (iVar8 != 0) {
              pcVar4 = (code *)swi(3);
              iVar8 = (*pcVar4)();
              return iVar8;
            }
            iVar8 = 0x3a2e;
LAB_0047f1f7:
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       iVar8);
            return 0xffff;
          }
          if (uVar11 == 0) {
            *(undefined4 *)&this->field_0x6c7 = 2;
            iVar8 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
          }
        }
        if (*(int *)&this->field_0x6c7 == 2) {
          STJellyGunC::sub_00415B30
                    ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                     (this->field_06A9 + 1) * 0xc9,(this->field_06AB + 1) * 0xc9,
                     *(short *)&this->field_0x6b7 * 200 + 100,this->field_0061);
          *(undefined4 *)&this->field_0x6c7 = 3;
        }
        if (*(int *)&this->field_0x6c7 != 3) goto cf_common_exit_0047F19A;
        local_10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
        local_8 = 0;
        if (this->field_0x2bf != '\0') {
          local_c = (undefined4 *)&this->field_0x2b3;
          do {
            puVar12 = (undefined4 *)
                      thunk_FUN_0041dc40(local_2c,*local_c,*(undefined2 *)(local_c + 1),
                                         this->field_006C);
            uVar2 = *puVar12;
            local_20 = *(short *)(puVar12 + 1);
            local_24 = uVar2;
            if (DAT_0080732c == 1) {
              bVar23 = 0;
              sVar22 = 0;
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar8 = -1;
              this->field_001C = uVar11;
              sVar21 = 0;
              sVar20 = 0;
              uVar13 = uVar11 * 0x41c64e6d + 0x3039;
              sVar7 = 0;
              this->field_001C = uVar13;
              sVar14 = 0;
              sVar18 = 0;
              local_1c = uVar13 * 0x41c64e6d + 0x3039;
              sVar15 = 0;
              this->field_001C = local_1c;
              lVar19 = Library::MSVCRT::__ftol();
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (local_1c >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_24,
                         (((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_) + -3
                         ,(int)(short)lVar19 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_20,sVar15,sVar18,sVar14,sVar7,sVar20,sVar21,iVar8,sVar22,bVar23
                        );
            }
            else {
              uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar13;
              uVar16 = uVar13 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar16;
              uVar11 = uVar16 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              local_24._2_2_ = (short)((uint)uVar2 >> 0x10);
              iVar8 = (int)local_24._2_2_;
              local_24._0_2_ = (short)uVar2;
              iVar17 = (int)(short)local_24;
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar17,
                         (((uVar16 >> 0x10) % 7 + (int)this->field_0043) - iVar8) + -3,
                         (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20,0,0,0,0,0
                         ,0,-1,0,0);
            }
            local_8 = local_8 + 1;
            local_c = (undefined4 *)((int)local_c + 6);
          } while (local_8 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_10 == -1) {
          iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3a53,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_PMOVE_2_007ab784);
          if (iVar8 != 0) {
            pcVar4 = (code *)swi(3);
            iVar8 = (*pcVar4)();
            return iVar8;
          }
          iVar8 = 0x3a54;
LAB_0047edd5:
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                     iVar8);
          return 0xffff;
        }
        if (local_10 != 0) goto cf_common_exit_0047F19A;
        sVar15 = this->field_06A9;
        sVar18 = this->field_06AD;
        sVar14 = this->field_06AB;
        if ((((sVar15 < 0) || (SHORT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
           (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))) {
          param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
        }
        else {
          param_1 = *(AnonShape_004B9D90_4F3151F9 **)
                     (DAT_007fb248 +
                     ((int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                     (int)sVar15) * 8);
        }
        if (((param_1 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
            (*(int *)&param_1->field_0x18 == this->field_06AF)) &&
           ((*(int *)&param_1->field_0x24 == *(int *)&this->field_0x24 &&
            (iVar8 = thunk_FUN_004b9d90(param_1), iVar8 != 0)))) {
          thunk_FUN_004b9cf0(param_1);
          this->field_06C3 = CASE_4;
          goto cf_common_exit_0047F19A;
        }
        FUN_006e62d0(PTR_00802a38,this->field_06AF,(int *)&param_1);
        if ((param_1 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
           (*(int *)&param_1->field_0x4b0 == this->field_0018)) {
          *(undefined4 *)&param_1->field_0x4b0 = 0;
        }
      }
      else {
        if (SVar1 != CASE_4) {
          if (SVar1 == CASE_5) {
            if (*(int *)&this->field_0x6c7 == 0) {
              iVar8 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x6b7 * 200) + 100
              ;
              iVar9 = CONCAT22((short)((uint)in_EDX >> 0x10),*(short *)&this->field_0x6b5 * 0xc9) +
                      100;
              iVar17 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)&this->field_0x6b3 * 0xc9) +
                       100;
              uVar6 = (undefined2)((uint)iVar9 >> 0x10);
              uVar6 = (*this->vtable->vfunc_10)
                                (CONCAT22(uVar6,this->field_0041),
                                 CONCAT22((short)((uint)iVar17 >> 0x10),this->field_0043),
                                 CONCAT22(uVar6,this->field_0045),iVar17,iVar9,iVar8);
              *(undefined2 *)&this->field_0x6bd = uVar6;
              *(undefined4 *)&this->field_0x6c7 = 1;
            }
            if (*(int *)&this->field_0x6c7 == 1) {
              uVar11 = sub_004176C0(this,*(short *)&this->field_0x6bd);
              uVar11 = sub_00417910(this,(short)uVar11);
              if (uVar11 == 0xffffffff) {
                iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3aa0,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_OMOVE_007ab75c)
                ;
                if (iVar8 != 0) {
                  pcVar4 = (code *)swi(3);
                  iVar8 = (*pcVar4)();
                  return iVar8;
                }
                iVar8 = 0x3aa1;
                goto LAB_0047edd5;
              }
              if (uVar11 == 0) {
                *(undefined4 *)&this->field_0x6c7 = 2;
                goto cf_common_exit_0047F19A;
              }
            }
            if (*(int *)&this->field_0x6c7 == 2) {
              STJellyGunC::sub_00415B30
                        ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                         *(short *)&this->field_0x6b3 * 0xc9 + 100,
                         *(short *)&this->field_0x6b5 * 0xc9 + 100,
                         *(short *)&this->field_0x6b7 * 200 + 100,this->field_0061);
              *(undefined4 *)&this->field_0x6c7 = 3;
            }
            if (*(int *)&this->field_0x6c7 == 3) {
              local_10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,&local_18);
              uVar11 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this->field_0x2bf);
              local_8 = 0;
              if (this->field_0x2bf != '\0') {
                local_c = (undefined4 *)&this->field_0x2b3;
                do {
                  puVar12 = (undefined4 *)
                            thunk_FUN_0041dc40(local_2c,*local_c,*(undefined2 *)(local_c + 1),
                                               this->field_006C);
                  local_24 = *puVar12;
                  local_20 = *(short *)(puVar12 + 1);
                  if (DAT_0080732c == 1) {
                    bVar23 = 0;
                    sVar22 = 0;
                    iVar9 = -1;
                    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                    sVar21 = 0;
                    this->field_001C = uVar11;
                    sVar20 = 0;
                    sVar7 = 0;
                    uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                    sVar14 = 0;
                    this->field_001C = uVar13;
                    local_1c = uVar13 * 0x41c64e6d + 0x3039;
                    sVar18 = 0;
                    this->field_001C = local_1c;
                    sVar15 = 0;
                    lVar19 = Library::MSVCRT::__ftol();
                    iVar8 = (int)(short)lVar19 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                            (int)local_20;
                    iVar17 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_;
                    uVar11 = local_1c;
                  }
                  else {
                    uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
                    bVar23 = 0;
                    this->field_001C = uVar13;
                    uVar16 = uVar13 * 0x41c64e6d + 0x3039;
                    sVar22 = 0;
                    this->field_001C = uVar16;
                    uVar11 = uVar16 * 0x41c64e6d + 0x3039;
                    this->field_001C = uVar11;
                    iVar9 = -1;
                    sVar21 = 0;
                    sVar20 = 0;
                    sVar7 = 0;
                    sVar14 = 0;
                    sVar18 = 0;
                    sVar15 = 0;
                    iVar8 = (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                    local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                    iVar17 = ((uVar16 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_;
                  }
                  TraksClassTy::TraksCreate
                            (g_traksClass_00802A7C,1,2,7,
                             (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                             (int)(short)local_24,iVar17 + -3,iVar8,sVar15,sVar18,sVar14,sVar7,
                             sVar20,sVar21,iVar9,sVar22,bVar23);
                  local_8 = local_8 + 1;
                  uVar11 = (uint)(byte)this->field_0x2bf;
                  local_c = (undefined4 *)((int)local_c + 6);
                } while (local_8 < (int)uVar11);
              }
              if (local_10 == -1) {
                iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ac6,0,0,
                                           &DAT_007a4ccc,
                                           s_STBoatC__Dismant__DISMANT_OMOVE_2_007ab734);
                if (iVar8 == 0) {
                  RaiseInternalException
                            (0xffff,g_overwriteContext_007ED77C,
                             s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ac7);
                  return 0xffff;
                }
                pcVar4 = (code *)swi(3);
                iVar8 = (*pcVar4)();
                return iVar8;
              }
              if (local_10 == 0) {
                iVar8 = CONCAT22((short)(uVar11 >> 0x10),this->field_06AB);
                uVar11 = (uint)(ushort)(this->field_06AD + 1);
                iVar17 = CONCAT22((short)((uint)&this->field_0x6b3 >> 0x10),this->field_06A9);
                this->field_06C3 = CASE_6;
                thunk_FUN_0048dfd0(iVar17,iVar8,uVar11,iVar17,iVar8,(int *)uVar11,1,
                                   (short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                   (short *)&this->field_0x6b7);
                sub_00481520(this,(int)*(short *)&this->field_0x6b3,
                             (int)*(short *)&this->field_0x6b5,(int)*(short *)&this->field_0x6b7);
                iVar8 = sub_0045FF50(this,0);
                if (iVar8 == -1) {
                  return -1;
                }
              }
            }
            iVar8 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
          }
          if (SVar1 != CASE_6) {
            iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3af1,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant___incorrect_ent_007ab6d8);
            if (iVar8 == 0) {
              return -1;
            }
            pcVar4 = (code *)swi(3);
            iVar8 = (*pcVar4)();
            return iVar8;
          }
          iVar8 = sub_0045FF50(this,2);
          if (iVar8 == -1) {
            iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ade,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_ESCMOV_007ab704);
            if (iVar8 != 0) {
              pcVar4 = (code *)swi(3);
              iVar8 = (*pcVar4)();
              return iVar8;
            }
            iVar8 = 0x3ade;
            goto LAB_0047f1f7;
          }
          if (iVar8 == 0) {
            iVar8 = (*this->vtable->vfunc_D8)();
            return -(uint)(iVar8 != 0);
          }
          if (iVar8 == 3) {
            iVar8 = CONCAT22(extraout_var_02,this->field_06AB);
            uVar11 = (uint)(ushort)(this->field_06AD + 1);
            iVar17 = CONCAT22((short)((uint)&this->field_0x6b3 >> 0x10),this->field_06A9);
            thunk_FUN_0048dfd0(iVar17,iVar8,uVar11,iVar17,iVar8,(int *)uVar11,1,
                               (short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                               (short *)&this->field_0x6b7);
            sub_00481520(this,(int)*(short *)&this->field_0x6b3,(int)*(short *)&this->field_0x6b5,
                         (int)*(short *)&this->field_0x6b7);
            sub_0045FF50(this,0);
          }
          goto cf_common_exit_0047F19A;
        }
        sVar15 = this->field_06A9;
        sVar18 = this->field_06AD;
        sVar14 = this->field_06AB;
        if (((((sVar15 < 0) || (SHORT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
            ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))) || (SHORT_007fb244 <= sVar18)) {
          param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
        }
        else {
          param_1 = *(AnonShape_004B9D90_4F3151F9 **)
                     (DAT_007fb248 +
                     ((int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                     (int)sVar15) * 8);
        }
        if (((param_1 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
            (*(int *)&param_1->field_0x18 == this->field_06AF)) &&
           ((*(int *)&param_1->field_0x24 == *(int *)&this->field_0x24 &&
            (iVar8 = thunk_FUN_004b9d90(param_1), iVar8 != 0)))) {
          if (param_1->field_0245 == 6) {
            if (*(int *)&this->field_0x6b9 == 1) {
              this->field_06C3 = CASE_5;
              *(undefined4 *)&this->field_0x6c7 = 0;
            }
            else {
              this->field_06C3 = CASE_6;
            }
          }
          goto cf_common_exit_0047F19A;
        }
        FUN_006e62d0(PTR_00802a38,this->field_06AF,(int *)&param_1);
        iVar8 = extraout_ECX;
        if ((param_1 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
           (iVar8 = *(int *)&param_1->field_0x4b0, iVar8 == this->field_0018)) {
          *(undefined4 *)&param_1->field_0x4b0 = 0;
        }
        if (*(int *)&this->field_0x6b9 != 1) {
          iVar8 = CONCAT22((short)((uint)iVar8 >> 0x10),this->field_06AB);
          uVar11 = CONCAT22((short)((uint)param_1 >> 0x10),this->field_06AD + 1);
          iVar17 = CONCAT22((short)((uint)&this->field_0x6b3 >> 0x10),this->field_06A9);
          this->field_06C3 = CASE_6;
          thunk_FUN_0048dfd0(iVar17,iVar8,uVar11,iVar17,iVar8,(int *)uVar11,1,
                             (short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                             (short *)&this->field_0x6b7);
          sub_00481520(this,(int)*(short *)&this->field_0x6b3,(int)*(short *)&this->field_0x6b5,
                       (int)*(short *)&this->field_0x6b7);
          iVar8 = sub_0045FF50(this,0);
          if (iVar8 == -1) {
            return -1;
          }
          goto cf_common_exit_0047F19A;
        }
      }
      this->field_06C3 = CASE_5;
      *(undefined4 *)&this->field_0x6c7 = 0;
cf_common_exit_0047F19A:
      iVar8 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
    }
    iVar8 = sub_00460260(this,2);
    switch(iVar8) {
    case 0:
      sVar15 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar14 = this->field_06AB;
      if ((((sVar15 < 0) || (SHORT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
         (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))) {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        param_1 = *(AnonShape_004B9D90_4F3151F9 **)
                   (DAT_007fb248 +
                   ((int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                   (int)sVar15) * 8);
      }
      if (((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&param_1->field_0x18 != this->field_06AF)) ||
         ((*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24 ||
          (iVar8 = thunk_FUN_004b9d90(param_1), iVar8 == 0)))) {
        FUN_006e62d0(PTR_00802a38,this->field_06AF,(int *)&param_1);
        if (param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) {
          return 0;
        }
      }
      else {
        if (*(int *)&this->field_0x6b9 != 1) {
          thunk_FUN_004b9cf0(param_1);
          this->field_06C3 = CASE_4;
          return 2;
        }
        if (((this->field_0047 == *(short *)&this->field_0x6b3) &&
            (this->field_0049 == *(short *)&this->field_0x6b5)) &&
           (this->field_004B == *(short *)&this->field_0x6b7)) {
          this->field_06C3 = CASE_3;
          *(undefined4 *)&this->field_0x6c7 = 0;
          return 2;
        }
      }
      if (*(int *)&param_1->field_0x4b0 != this->field_0018) {
        return 0;
      }
      *(undefined4 *)&param_1->field_0x4b0 = 0;
      return 0;
    case 1:
      sVar15 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar14 = this->field_06AB;
      if (((((sVar15 < 0) || (SHORT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
          ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))) || (SHORT_007fb244 <= sVar18)) {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        param_1 = *(AnonShape_004B9D90_4F3151F9 **)
                   (DAT_007fb248 +
                   ((int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                   (int)sVar15) * 8);
      }
      if (((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&param_1->field_0x18 != this->field_06AF)) ||
         ((*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24 ||
          (iVar8 = thunk_FUN_004b9d90(param_1), iVar8 == 0)))) {
        FUN_006e62d0(PTR_00802a38,this->field_06AF,(int *)&param_1);
        if ((param_1 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
           (*(int *)&param_1->field_0x4b0 == this->field_0018)) {
          *(undefined4 *)&param_1->field_0x4b0 = 0;
        }
        sub_004602B0(this);
        return 0;
      }
      break;
    case 3:
      bVar5 = thunk_FUN_00495420(this,(short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                 (short *)&this->field_0x6b7);
      if (CONCAT31(extraout_var_01,bVar5) == 1) goto LAB_0047e4df;
      sVar15 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar14 = this->field_06AB;
      if ((((sVar15 < 0) || (SHORT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
         (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))) {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        param_1 = *(AnonShape_004B9D90_4F3151F9 **)
                   (DAT_007fb248 +
                   ((int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                   (int)sVar15) * 8);
      }
      if (((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&param_1->field_0x18 != this->field_06AF)) ||
         ((*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24 ||
          (iVar8 = thunk_FUN_004b9d90(param_1), iVar8 == 0)))) {
        FUN_006e62d0(PTR_00802a38,this->field_06AF,(int *)&param_1);
        if (param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) {
          return 0;
        }
        if (*(int *)&param_1->field_0x4b0 != this->field_0018) {
          return 0;
        }
        *(undefined4 *)&param_1->field_0x4b0 = 0;
        return 0;
      }
      if (*(int *)&param_1->field_0x4b0 == this->field_0018) {
        *(undefined4 *)&param_1->field_0x4b0 = 0;
      }
      this->field_06C3 = CASE_1;
      *(undefined4 *)&this->field_0x6bf = 0;
      goto LAB_0047e0a4;
    case -1:
      iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x39d9,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Dismant_DISMANT_MOVEOBJ_007ab7d4);
      if (iVar8 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x39d9
                  );
        return 0xffff;
      }
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
  }
  return 2;
}

