
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Dismant */

int __thiscall STBoatC::Dismant(STBoatC *this,int *param_1,undefined4 param_2,int *param_3)

{
  STBoatC_field_06C3State SVar1;
  STBoatC_field_06F7State SVar2;
  code *pcVar3;
  bool bVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
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
  undefined4 local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
    puVar11 = &this->field_02CC;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    this->field_02C4 = 0;
    SVar2 = this->field_06F7;
    if (((SVar2 != CASE_C) && (SVar2 != CASE_18)) && (SVar2 != CASE_1D)) {
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
    if (DAT_007fb244 + -2 < (int)sVar14) {
      return 0;
    }
    if ((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
        ((sVar18 < 0 || ((DAT_007fb242 <= sVar18 || (sVar14 < 0)))))) || (DAT_007fb244 <= sVar14)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = *(int **)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar14 + (int)DAT_007fb240 * (int)sVar18 +
                         (int)sVar15) * 8);
    }
    if (param_1 == (int *)0x0) {
      return 0;
    }
    if (param_1[6] != local_1c) {
      return 0;
    }
    if (param_1[8] != 1000) {
      return 0;
    }
    if (param_1[9] != *(int *)&this->field_0x24) {
      return 0;
    }
    iVar7 = thunk_FUN_004b9d90((int)param_1);
    if (iVar7 == 0) {
      return 0;
    }
    iVar7 = (**(code **)(*param_1 + 0x2c))();
    iVar7 = *(int *)(&DAT_00791d68 + iVar7 * 4);
    *(int *)&this->field_0x6b9 = iVar7;
    if (iVar7 == 1) {
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
          sVar6 = sVar15 + (short)local_18;
          if (((((-1 < sVar14) && (sVar14 < DAT_007fb240)) && (-1 < sVar6)) &&
              ((sVar6 < DAT_007fb242 && (-1 < sVar18)))) &&
             ((sVar18 < DAT_007fb244 &&
              (uVar13 = local_14,
              *(short *)(DAT_007fb280 +
                        ((int)DAT_007fb278 * (int)sVar6 + (int)DAT_007fb27e * (int)sVar18 +
                        (int)sVar14) * 2) == 0)))) goto LAB_0047f4cd;
          local_18 = local_18 + 1;
        } while (local_18 < 2);
        local_8 = local_8 + 1;
        if (1 < local_8) {
          return 0;
        }
      } while( true );
    }
    uVar5 = (undefined2)((uint)iVar7 >> 0x10);
    local_c = (undefined4 *)CONCAT22(uVar5,this->field_06AD);
    sVar15 = this->field_06AB;
    sVar14 = this->field_06AD + 1;
    sVar18 = this->field_06A9;
    if (sVar18 < 0) {
      return 0;
    }
    if (DAT_007fb240 <= sVar18) {
      return 0;
    }
    if (sVar15 < 0) {
      return 0;
    }
    if (DAT_007fb242 <= sVar15) {
      return 0;
    }
    if (sVar14 < 0) {
      return 0;
    }
    if (DAT_007fb244 <= sVar14) {
      return 0;
    }
    uVar13 = CONCAT22(uVar5,sVar18);
    if (*(short *)(DAT_007fb280 +
                  ((int)sVar14 * (int)DAT_007fb27e + (int)sVar15 * (int)DAT_007fb278 + (int)sVar18)
                  * 2) != 0) {
      return 0;
    }
LAB_0047f4cd:
    this->field_06C3 = CASE_0;
    this->field_00B7 = 3;
    thunk_FUN_00481520(this,(int)(short)uVar13,(int)sVar15,(short)local_c + 1);
    thunk_FUN_00460260(this,0);
    return 2;
  }
  SVar1 = this->field_06C3;
  if (SVar1 == CASE_0) {
    iVar7 = thunk_FUN_00460260(this,2);
    switch(iVar7) {
    case 0:
      sVar15 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar14 = this->field_06AB;
      this->field_00B7 = 0;
      if (((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
         ((sVar14 < 0 || (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18))))))
      {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = *(int **)(DAT_007fb248 +
                           ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                           (int)sVar15) * 8);
      }
      if (((param_1 == (int *)0x0) || (param_1[6] != this->field_06AF)) ||
         ((param_1[9] != *(int *)&this->field_0x24 ||
          (iVar7 = thunk_FUN_004b9d90((int)param_1), iVar7 == 0)))) {
        return 0;
      }
      bVar4 = thunk_FUN_00495420(this,(short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                 (short *)&this->field_0x6b7);
      if ((CONCAT31(extraout_var,bVar4) == 1) &&
         ((param_1[300] == 0 || (param_1[300] == this->field_0018)))) {
        param_1[300] = this->field_0018;
        this->field_06C3 = CASE_2;
LAB_0047e4df:
        iVar7 = (int)*(short *)&this->field_0x6b7;
        sVar15 = *(short *)&this->field_0x6b5;
        sVar18 = *(short *)&this->field_0x6b3;
LAB_0047e4ee:
        thunk_FUN_00481520(this,(int)sVar18,(int)sVar15,iVar7);
        thunk_FUN_00460260(this,0);
        return 2;
      }
      this->field_06C3 = CASE_1;
      *(undefined4 *)&this->field_0x6bf = 0;
LAB_0047e0a4:
      iVar7 = Defence(this,0);
      if (iVar7 == -1) {
        return -1;
      }
      break;
    case 1:
      sVar15 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar14 = this->field_06AB;
      if (((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
         ((sVar14 < 0 || (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18))))))
      {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = *(int **)(DAT_007fb248 +
                           ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                           (int)sVar15) * 8);
      }
      if (((param_1 == (int *)0x0) || (param_1[6] != this->field_06AF)) ||
         ((param_1[9] != *(int *)&this->field_0x24 ||
          (iVar7 = thunk_FUN_004b9d90((int)param_1), iVar7 == 0)))) {
        thunk_FUN_004602b0((int *)this);
        this->field_00B7 = 0;
        return 0;
      }
      break;
    case 3:
      sVar15 = this->field_06AB;
      sVar18 = this->field_06A9;
      iVar7 = (short)this->field_06AD + 1;
      goto LAB_0047e4ee;
    case -1:
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3987,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Dismant__DISMANT_MOVE_e_007ab804);
      if (iVar7 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3987);
        return 0xffff;
      }
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  else {
    if (SVar1 == CASE_1) {
      iVar7 = Defence(this,2);
      if (iVar7 == -1) {
        return -1;
      }
      if (((this->field_082E == 0) && (this->field_048B == 0xffff)) &&
         (*(int *)&this->field_0x6bf % 10 == 0)) {
        sVar15 = this->field_06A9;
        sVar18 = this->field_06AD;
        sVar14 = this->field_06AB;
        if ((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
            ((sVar14 < 0 || ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))))) ||
           (DAT_007fb244 <= sVar18)) {
          param_1 = (int *)0x0;
        }
        else {
          param_1 = *(int **)(DAT_007fb248 +
                             ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                             (int)sVar15) * 8);
        }
        if (param_1 == (int *)0x0) {
          return 0;
        }
        if (param_1[6] != this->field_06AF) {
          return 0;
        }
        if (param_1[9] != *(int *)&this->field_0x24) {
          return 0;
        }
        iVar7 = thunk_FUN_004b9d90((int)param_1);
        if (iVar7 == 0) {
          return 0;
        }
        bVar4 = thunk_FUN_00495420(this,(short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                   (short *)&this->field_0x6b7);
        if ((CONCAT31(extraout_var_00,bVar4) == 1) &&
           ((param_1[300] == 0 || (param_1[300] == this->field_0018)))) {
          param_1[300] = this->field_0018;
          this->field_06C3 = CASE_2;
          thunk_FUN_00481520(this,(int)*(short *)&this->field_0x6b3,
                             (int)*(short *)&this->field_0x6b5,(int)*(short *)&this->field_0x6b7);
          thunk_FUN_00460260(this,0);
        }
      }
      *(int *)&this->field_0x6bf = *(int *)&this->field_0x6bf + 1;
      return 2;
    }
    if (SVar1 != CASE_2) {
      if (SVar1 == CASE_3) {
        if (*(int *)&this->field_0x6c7 == 0) {
          iVar8 = (ushort)(*(short *)&this->field_0x6b7 * 200) + 100;
          iVar17 = CONCAT22((short)((uint)iVar8 >> 0x10),this->field_06AB + 1) * 0xc9;
          iVar9 = CONCAT22((short)((uint)iVar17 >> 0x10),this->field_06A9 + 1);
          iVar7 = iVar9 * 0xc9;
          uVar5 = (undefined2)((uint)(iVar9 * 0x19) >> 0x10);
          uVar5 = (*this->vtable->vfunc_10)
                            (CONCAT22(uVar5,this->field_0041),
                             CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                             CONCAT22(uVar5,this->field_0045),iVar7,iVar17,iVar8);
          *(undefined2 *)&this->field_0x6bd = uVar5;
          *(undefined4 *)&this->field_0x6c7 = 1;
        }
        if (*(int *)&this->field_0x6c7 == 1) {
          uVar10 = thunk_FUN_004176c0(this,*(short *)&this->field_0x6bd);
          uVar10 = thunk_FUN_00417910(this,(short)uVar10);
          if (uVar10 == 0xffffffff) {
            iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3a2d,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_PMOVE_007ab7ac);
            if (iVar7 != 0) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            iVar7 = 0x3a2e;
LAB_0047f1f7:
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar7);
            return 0xffff;
          }
          if (uVar10 == 0) {
            *(undefined4 *)&this->field_0x6c7 = 2;
            iVar7 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
          }
        }
        if (*(int *)&this->field_0x6c7 == 2) {
          thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                             (this->field_06A9 + 1) * 0xc9,(this->field_06AB + 1) * 0xc9,
                             *(short *)&this->field_0x6b7 * 200 + 100,this->field_0x61);
          *(undefined4 *)&this->field_0x6c7 = 3;
        }
        if (*(int *)&this->field_0x6c7 != 3) goto cf_common_exit_0047F19A;
        local_10 = thunk_FUN_00415ed0(this,&local_18,&local_14);
        local_8 = 0;
        if (this->field_0x2bf != '\0') {
          local_c = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_2c,*local_c,*(undefined2 *)(local_c + 1),
                                         this->field_006C);
            uVar13 = *puVar11;
            local_20 = *(short *)(puVar11 + 1);
            local_24 = uVar13;
            if (DAT_0080732c == 1) {
              bVar23 = 0;
              sVar22 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar7 = -1;
              this->field_001C = uVar10;
              sVar21 = 0;
              sVar20 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar6 = 0;
              this->field_001C = uVar12;
              sVar14 = 0;
              sVar18 = 0;
              local_1c = uVar12 * 0x41c64e6d + 0x3039;
              sVar15 = 0;
              this->field_001C = local_1c;
              lVar19 = Library::MSVCRT::__ftol();
              TraksClassTy::TraksCreate
                        (DAT_00802a7c,1,2,7,
                         (local_1c >> 0x10) % 7 + (int)(short)this->field_0041 + -3 +
                         (int)(short)local_24,
                         (((uVar12 >> 0x10) % 7 + (int)(short)this->field_0043) -
                         (int)local_24._2_2_) + -3,
                         (int)(short)lVar19 + (uVar10 >> 0x10) % 7 + (int)(short)this->field_0045 +
                         -3 + (int)local_20,sVar15,sVar18,sVar14,sVar6,sVar20,sVar21,iVar7,sVar22,
                         bVar23);
            }
            else {
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar12;
              uVar16 = uVar12 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar16;
              uVar10 = uVar16 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar10;
              local_24._2_2_ = (short)((uint)uVar13 >> 0x10);
              iVar7 = (int)local_24._2_2_;
              local_24._0_2_ = (short)uVar13;
              iVar17 = (int)(short)local_24;
              TraksClassTy::TraksCreate
                        (DAT_00802a7c,1,2,7,
                         (uVar10 >> 0x10) % 7 + (int)(short)this->field_0041 + -3 + iVar17,
                         (((uVar16 >> 0x10) % 7 + (int)(short)this->field_0043) - iVar7) + -3,
                         (uVar12 >> 0x10) % 7 + (int)(short)this->field_0045 + -3 + (int)local_20,0,
                         0,0,0,0,0,-1,0,0);
            }
            local_8 = local_8 + 1;
            local_c = (undefined4 *)((int)local_c + 6);
          } while (local_8 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_10 == -1) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3a53,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_PMOVE_2_007ab784);
          if (iVar7 != 0) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
          iVar7 = 0x3a54;
LAB_0047edd5:
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar7);
          return 0xffff;
        }
        if (local_10 != 0) goto cf_common_exit_0047F19A;
        sVar15 = this->field_06A9;
        sVar18 = this->field_06AD;
        sVar14 = this->field_06AB;
        if ((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
           (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
          param_1 = (int *)0x0;
        }
        else {
          param_1 = *(int **)(DAT_007fb248 +
                             ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                             (int)sVar15) * 8);
        }
        if (((param_1 != (int *)0x0) && (param_1[6] == this->field_06AF)) &&
           ((param_1[9] == *(int *)&this->field_0x24 &&
            (iVar7 = thunk_FUN_004b9d90((int)param_1), iVar7 != 0)))) {
          thunk_FUN_004b9cf0(param_1);
          this->field_06C3 = CASE_4;
          goto cf_common_exit_0047F19A;
        }
        FUN_006e62d0(DAT_00802a38,this->field_06AF,(int *)&param_1);
        if ((param_1 != (int *)0x0) && (param_1[300] == this->field_0018)) {
          param_1[300] = 0;
        }
      }
      else {
        if (SVar1 != CASE_4) {
          if (SVar1 == CASE_5) {
            if (*(int *)&this->field_0x6c7 == 0) {
              iVar7 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x6b7 * 200) + 100
              ;
              iVar8 = CONCAT22((short)((uint)in_EDX >> 0x10),*(short *)&this->field_0x6b5 * 0xc9) +
                      100;
              iVar17 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)&this->field_0x6b3 * 0xc9) +
                       100;
              uVar5 = (undefined2)((uint)iVar8 >> 0x10);
              uVar5 = (*this->vtable->vfunc_10)
                                (CONCAT22(uVar5,this->field_0041),
                                 CONCAT22((short)((uint)iVar17 >> 0x10),this->field_0043),
                                 CONCAT22(uVar5,this->field_0045),iVar17,iVar8,iVar7);
              *(undefined2 *)&this->field_0x6bd = uVar5;
              *(undefined4 *)&this->field_0x6c7 = 1;
            }
            if (*(int *)&this->field_0x6c7 == 1) {
              uVar10 = thunk_FUN_004176c0(this,*(short *)&this->field_0x6bd);
              uVar10 = thunk_FUN_00417910(this,(short)uVar10);
              if (uVar10 == 0xffffffff) {
                iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3aa0,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_OMOVE_007ab75c)
                ;
                if (iVar7 != 0) {
                  pcVar3 = (code *)swi(3);
                  iVar7 = (*pcVar3)();
                  return iVar7;
                }
                iVar7 = 0x3aa1;
                goto LAB_0047edd5;
              }
              if (uVar10 == 0) {
                *(undefined4 *)&this->field_0x6c7 = 2;
                goto cf_common_exit_0047F19A;
              }
            }
            if (*(int *)&this->field_0x6c7 == 2) {
              thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                                 *(short *)&this->field_0x6b3 * 0xc9 + 100,
                                 *(short *)&this->field_0x6b5 * 0xc9 + 100,
                                 *(short *)&this->field_0x6b7 * 200 + 100,this->field_0x61);
              *(undefined4 *)&this->field_0x6c7 = 3;
            }
            if (*(int *)&this->field_0x6c7 == 3) {
              local_10 = thunk_FUN_00415ed0(this,&local_14,&local_18);
              uVar10 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this->field_0x2bf);
              local_8 = 0;
              if (this->field_0x2bf != '\0') {
                local_c = (undefined4 *)&this->field_0x2b3;
                do {
                  puVar11 = (undefined4 *)
                            thunk_FUN_0041dc40(local_2c,*local_c,*(undefined2 *)(local_c + 1),
                                               this->field_006C);
                  local_24 = *puVar11;
                  local_20 = *(short *)(puVar11 + 1);
                  if (DAT_0080732c == 1) {
                    bVar23 = 0;
                    sVar22 = 0;
                    iVar8 = -1;
                    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                    sVar21 = 0;
                    this->field_001C = uVar10;
                    sVar20 = 0;
                    sVar6 = 0;
                    uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                    sVar14 = 0;
                    this->field_001C = uVar12;
                    local_1c = uVar12 * 0x41c64e6d + 0x3039;
                    sVar18 = 0;
                    this->field_001C = local_1c;
                    sVar15 = 0;
                    lVar19 = Library::MSVCRT::__ftol();
                    iVar7 = (int)(short)lVar19 + (uVar10 >> 0x10) % 7 + (int)(short)this->field_0045
                            + -3 + (int)local_20;
                    iVar17 = ((uVar12 >> 0x10) % 7 + (int)(short)this->field_0043) -
                             (int)local_24._2_2_;
                    uVar10 = local_1c;
                  }
                  else {
                    uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
                    bVar23 = 0;
                    this->field_001C = uVar12;
                    uVar16 = uVar12 * 0x41c64e6d + 0x3039;
                    sVar22 = 0;
                    this->field_001C = uVar16;
                    uVar10 = uVar16 * 0x41c64e6d + 0x3039;
                    this->field_001C = uVar10;
                    iVar8 = -1;
                    sVar21 = 0;
                    sVar20 = 0;
                    sVar6 = 0;
                    sVar14 = 0;
                    sVar18 = 0;
                    sVar15 = 0;
                    iVar7 = (uVar12 >> 0x10) % 7 + (int)(short)this->field_0045 + -3 + (int)local_20
                    ;
                    local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                    iVar17 = ((uVar16 >> 0x10) % 7 + (int)(short)this->field_0043) -
                             (int)local_24._2_2_;
                  }
                  TraksClassTy::TraksCreate
                            (DAT_00802a7c,1,2,7,
                             (uVar10 >> 0x10) % 7 + (int)(short)this->field_0041 + -3 +
                             (int)(short)local_24,iVar17 + -3,iVar7,sVar15,sVar18,sVar14,sVar6,
                             sVar20,sVar21,iVar8,sVar22,bVar23);
                  local_8 = local_8 + 1;
                  uVar10 = (uint)(byte)this->field_0x2bf;
                  local_c = (undefined4 *)((int)local_c + 6);
                } while (local_8 < (int)uVar10);
              }
              if (local_10 == -1) {
                iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ac6,0,0,
                                           &DAT_007a4ccc,
                                           s_STBoatC__Dismant__DISMANT_OMOVE_2_007ab734);
                if (iVar7 == 0) {
                  RaiseInternalException
                            (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ac7);
                  return 0xffff;
                }
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              if (local_10 == 0) {
                iVar7 = CONCAT22((short)(uVar10 >> 0x10),this->field_06AB);
                uVar10 = (uint)(ushort)(this->field_06AD + 1);
                iVar17 = CONCAT22((short)((uint)&this->field_0x6b3 >> 0x10),this->field_06A9);
                this->field_06C3 = CASE_6;
                thunk_FUN_0048dfd0(iVar17,iVar7,uVar10,iVar17,iVar7,(int *)uVar10,1,
                                   (short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                   (short *)&this->field_0x6b7);
                thunk_FUN_00481520(this,(int)*(short *)&this->field_0x6b3,
                                   (int)*(short *)&this->field_0x6b5,
                                   (int)*(short *)&this->field_0x6b7);
                iVar7 = thunk_FUN_0045ff50(this,0);
                if (iVar7 == -1) {
                  return -1;
                }
              }
            }
            iVar7 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
          }
          if (SVar1 != CASE_6) {
            iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3af1,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant___incorrect_ent_007ab6d8);
            if (iVar7 == 0) {
              return -1;
            }
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
          iVar7 = thunk_FUN_0045ff50(this,2);
          if (iVar7 == -1) {
            iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ade,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_ESCMOV_007ab704);
            if (iVar7 != 0) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            iVar7 = 0x3ade;
            goto LAB_0047f1f7;
          }
          if (iVar7 == 0) {
            iVar7 = (*this->vtable->vfunc_D8)();
            return -(uint)(iVar7 != 0);
          }
          if (iVar7 == 3) {
            iVar7 = CONCAT22(extraout_var_02,this->field_06AB);
            uVar10 = (uint)(ushort)(this->field_06AD + 1);
            iVar17 = CONCAT22((short)((uint)&this->field_0x6b3 >> 0x10),this->field_06A9);
            thunk_FUN_0048dfd0(iVar17,iVar7,uVar10,iVar17,iVar7,(int *)uVar10,1,
                               (short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                               (short *)&this->field_0x6b7);
            thunk_FUN_00481520(this,(int)*(short *)&this->field_0x6b3,
                               (int)*(short *)&this->field_0x6b5,(int)*(short *)&this->field_0x6b7);
            thunk_FUN_0045ff50(this,0);
          }
          goto cf_common_exit_0047F19A;
        }
        sVar15 = this->field_06A9;
        sVar18 = this->field_06AD;
        sVar14 = this->field_06AB;
        if (((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
            ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
          param_1 = (int *)0x0;
        }
        else {
          param_1 = *(int **)(DAT_007fb248 +
                             ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                             (int)sVar15) * 8);
        }
        if (((param_1 != (int *)0x0) && (param_1[6] == this->field_06AF)) &&
           ((param_1[9] == *(int *)&this->field_0x24 &&
            (iVar7 = thunk_FUN_004b9d90((int)param_1), iVar7 != 0)))) {
          if (*(int *)((int)param_1 + 0x245) == 6) {
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
        FUN_006e62d0(DAT_00802a38,this->field_06AF,(int *)&param_1);
        iVar7 = extraout_ECX;
        if ((param_1 != (int *)0x0) && (iVar7 = param_1[300], iVar7 == this->field_0018)) {
          param_1[300] = 0;
        }
        if (*(int *)&this->field_0x6b9 != 1) {
          iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),this->field_06AB);
          uVar10 = CONCAT22((short)((uint)param_1 >> 0x10),this->field_06AD + 1);
          iVar17 = CONCAT22((short)((uint)&this->field_0x6b3 >> 0x10),this->field_06A9);
          this->field_06C3 = CASE_6;
          thunk_FUN_0048dfd0(iVar17,iVar7,uVar10,iVar17,iVar7,(int *)uVar10,1,
                             (short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                             (short *)&this->field_0x6b7);
          thunk_FUN_00481520(this,(int)*(short *)&this->field_0x6b3,
                             (int)*(short *)&this->field_0x6b5,(int)*(short *)&this->field_0x6b7);
          iVar7 = thunk_FUN_0045ff50(this,0);
          if (iVar7 == -1) {
            return -1;
          }
          goto cf_common_exit_0047F19A;
        }
      }
      this->field_06C3 = CASE_5;
      *(undefined4 *)&this->field_0x6c7 = 0;
cf_common_exit_0047F19A:
      iVar7 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    iVar7 = thunk_FUN_00460260(this,2);
    switch(iVar7) {
    case 0:
      sVar15 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar14 = this->field_06AB;
      if ((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
         (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = *(int **)(DAT_007fb248 +
                           ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                           (int)sVar15) * 8);
      }
      if (((param_1 == (int *)0x0) || (param_1[6] != this->field_06AF)) ||
         ((param_1[9] != *(int *)&this->field_0x24 ||
          (iVar7 = thunk_FUN_004b9d90((int)param_1), iVar7 == 0)))) {
        FUN_006e62d0(DAT_00802a38,this->field_06AF,(int *)&param_1);
        if (param_1 == (int *)0x0) {
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
      if (param_1[300] != this->field_0018) {
        return 0;
      }
      param_1[300] = 0;
      return 0;
    case 1:
      sVar15 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar14 = this->field_06AB;
      if (((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
          ((DAT_007fb242 <= sVar14 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = *(int **)(DAT_007fb248 +
                           ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                           (int)sVar15) * 8);
      }
      if (((param_1 == (int *)0x0) || (param_1[6] != this->field_06AF)) ||
         ((param_1[9] != *(int *)&this->field_0x24 ||
          (iVar7 = thunk_FUN_004b9d90((int)param_1), iVar7 == 0)))) {
        FUN_006e62d0(DAT_00802a38,this->field_06AF,(int *)&param_1);
        if ((param_1 != (int *)0x0) && (param_1[300] == this->field_0018)) {
          param_1[300] = 0;
        }
        thunk_FUN_004602b0((int *)this);
        return 0;
      }
      break;
    case 3:
      bVar4 = thunk_FUN_00495420(this,(short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                 (short *)&this->field_0x6b7);
      if (CONCAT31(extraout_var_01,bVar4) == 1) goto LAB_0047e4df;
      sVar15 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar14 = this->field_06AB;
      if ((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
         (((DAT_007fb242 <= sVar14 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = *(int **)(DAT_007fb248 +
                           ((int)sVar18 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                           (int)sVar15) * 8);
      }
      if (((param_1 == (int *)0x0) || (param_1[6] != this->field_06AF)) ||
         ((param_1[9] != *(int *)&this->field_0x24 ||
          (iVar7 = thunk_FUN_004b9d90((int)param_1), iVar7 == 0)))) {
        FUN_006e62d0(DAT_00802a38,this->field_06AF,(int *)&param_1);
        if (param_1 == (int *)0x0) {
          return 0;
        }
        if (param_1[300] != this->field_0018) {
          return 0;
        }
        param_1[300] = 0;
        return 0;
      }
      if (param_1[300] == this->field_0018) {
        param_1[300] = 0;
      }
      this->field_06C3 = CASE_1;
      *(undefined4 *)&this->field_0x6bf = 0;
      goto LAB_0047e0a4;
    case -1:
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x39d9,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Dismant_DISMANT_MOVEOBJ_007ab7d4);
      if (iVar7 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x39d9);
        return 0xffff;
      }
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  return 2;
}

