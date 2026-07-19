
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Build */

int __thiscall STBoatC::Build(STBoatC *this,uint param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  STBoatC_field_0508State SVar4;
  code *pcVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  STBoatC *extraout_ECX;
  STBoatC *pSVar14;
  uint uVar15;
  undefined4 extraout_EDX;
  int iVar16;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  void *unaff_EDI;
  bool bVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  byte bVar26;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  undefined4 local_9c;
  char local_98 [14];
  undefined1 local_8a;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  int local_6d;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [2];
  STMessage local_44;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 local_c;
  short local_8;
  
  if ((param_1 == 0) || (pSVar14 = this, param_1 == 1)) {
    puVar11 = &this->field_02CC;
    for (iVar13 = 0x17; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    this->field_02C4 = 0;
    sVar19 = this->field_0373;
    sVar20 = this->field_0377;
    sVar21 = this->field_0375;
    if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
       (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) ||
        ((DAT_007fb244 <= sVar20 ||
         (*(short *)(DAT_007fb280 +
                    ((int)DAT_007fb278 * (int)sVar21 + (int)DAT_007fb27e * (int)sVar20 + (int)sVar19
                    ) * 2) != 0)))))) {
      return 0;
    }
    *(short *)&this->field_0x4dd = sVar19;
    *(undefined2 *)&this->field_0x4fa = *(undefined2 *)&this->field_0x390;
    *(undefined2 *)&this->field_0x4df = this->field_0375;
    *(undefined2 *)&this->field_0x4e1 = this->field_0377;
    *(int *)&this->field_0x4e3 = *(int *)&this->field_0x379;
    this->field_0502 = *(undefined4 *)(&DAT_00791d68 + *(int *)&this->field_0x379 * 4);
    *(undefined4 *)&this->field_0x4e7 = *(undefined4 *)&this->field_0x37d;
    Library::MSVCRT::_strncpy(&this->field_0x4eb,&this->field_0x381,0xe);
    this->field_0x4f9 = 0;
    thunk_FUN_0048dcf0((int)this);
    this->field_0508 = CASE_0;
    *(undefined4 *)&this->field_0x50c = 0;
    thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                       (int)*(short *)&this->field_0x500);
    iVar13 = thunk_FUN_0045ff50(this,0);
    pSVar14 = extraout_ECX;
    if (iVar13 == -1) {
      return -1;
    }
  }
  SVar4 = this->field_0508;
  if (SVar4 == CASE_0) {
    uVar7 = thunk_FUN_0045ff50(this,2);
    switch(uVar7) {
    case 0:
      if ((((this->field_0047 != *(short *)&this->field_0x4fc) ||
           (this->field_0049 != *(short *)&this->field_0x4fe)) ||
          (this->field_004B != *(short *)&this->field_0x500)) ||
         (iVar13 = thunk_FUN_004ae0b0((int)*(short *)&this->field_0x4dd,
                                      (int)*(short *)&this->field_0x4df,
                                      (int)*(short *)&this->field_0x4e1,
                                      *(Global_sub_004AE0B0_param_4Enum *)&this->field_0x4e3,
                                      *(int *)&this->field_0x24,(undefined4 *)0x0,(int *)0x0,
                                      (int *)0x0,0,(int *)0x0), iVar13 == 0)) {
        return 0;
      }
      if (this->field_06F7 == CASE_19) {
        this->field_0508 = CASE_3 - (this->field_0502 != 0);
      }
      else {
        this->field_0508 = (-(uint)(this->field_0502 != 0) & 0xfffffffd) + CASE_5;
      }
      break;
    case 2:
      local_14 = *(uint *)(DAT_00802a38 + 0xe4);
      if (local_14 % 10 != 0) break;
      sVar19 = *(short *)&this->field_0x4dd;
      uVar3 = *(ushort *)&this->field_0x4df;
      local_18 = (uint)uVar3;
      sVar20 = *(short *)&this->field_0x4e1;
      if ((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < (short)uVar3)) &&
         ((((short)uVar3 < DAT_007fb242 && (-1 < sVar20)) &&
          ((sVar20 < DAT_007fb244 &&
           (*(short *)(DAT_007fb280 +
                      ((int)DAT_007fb278 * (int)(short)uVar3 + (int)DAT_007fb27e * (int)sVar20 +
                      (int)sVar19) * 2) == 0)))))) break;
      if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
         (((short)uVar3 < 0 ||
          ((((DAT_007fb242 <= (short)uVar3 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)) ||
           (iVar13 = *(int *)(DAT_007fb248 +
                             ((int)(short)uVar3 * (int)DAT_007fb240 +
                              (int)DAT_007fb246 * (int)sVar20 + (int)sVar19) * 8), iVar13 == 0))))))
      {
        iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x23c0,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__Build_NULL_007aa704);
        if (iVar13 == 0) {
          return -1;
        }
        pcVar5 = (code *)swi(3);
        iVar13 = (*pcVar5)();
        return iVar13;
      }
      if ((*(uint *)(iVar13 + 0x24) < 8) &&
         ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[*(uint *)(iVar13 + 0x24) * 0x51] < 8)))) {
        bVar26 = *(byte *)(iVar13 + 0x24);
        bVar1 = this->field_0x24;
        local_10 = (undefined4 *)CONCAT31(local_10._1_3_,bVar26);
        local_1c = CONCAT31(local_1c._1_3_,bVar1);
        if (DAT_00808a8f == '\0') {
          if (bVar26 == bVar1) {
LAB_0046b5ac:
            iVar13 = 0;
          }
          else {
            uVar10 = (uint)bVar26;
            uVar12 = (uint)bVar1;
            cVar2 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar12);
            if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar10) == '\0')) {
              iVar13 = -2;
            }
            else if ((cVar2 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar10) == '\0')) {
              iVar13 = -1;
            }
            else if ((cVar2 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar10) == '\x01')) {
              iVar13 = 1;
            }
            else {
              if ((cVar2 != '\x01') ||
                 (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar10) != '\x01')) goto LAB_0046b5ac;
              iVar13 = 2;
            }
          }
          bVar17 = iVar13 < 0;
        }
        else {
          bVar17 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar26 * 0x51];
        }
        if (bVar17) {
          param_1 = local_14;
          CmdToObj(this,CASE_3,&param_1);
          break;
        }
      }
      this->field_0508 = CASE_1;
      break;
    case 3:
      thunk_FUN_0048dcf0((int)this);
      thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                         (int)*(short *)&this->field_0x500);
      goto LAB_0046c3be;
    case 0xffffffff:
      iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2395,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build__BUILD_MOVE_error_007aa71c);
      if (iVar13 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2395);
        return 0xffff;
      }
      pcVar5 = (code *)swi(3);
      iVar13 = (*pcVar5)();
      return iVar13;
    }
  }
  else {
    if (SVar4 == CASE_1) {
      iVar13 = (*this->vtable->StopMove)(this,unaff_EDI);
      if (iVar13 == -1) {
        return -1;
      }
      if (iVar13 == 1) {
        this->field_0508 = CASE_7;
        thunk_FUN_0048df40((int)this,extraout_EDX);
        thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                           (int)*(short *)&this->field_0x500);
        iVar13 = thunk_FUN_0045ff50(this,0);
        if (iVar13 == -1) {
          return -1;
        }
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_2) {
      if (*(int *)&this->field_0x50c == 0) {
        iVar8 = (ushort)(*(short *)&this->field_0x500 * 200) + 100;
        iVar16 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)&this->field_0x4df + 1) * 0xc9;
        iVar9 = CONCAT22((short)((uint)iVar16 >> 0x10),*(short *)&this->field_0x4dd + 1);
        iVar13 = iVar9 * 0xc9;
        uVar6 = (undefined2)((uint)(iVar9 * 0x19) >> 0x10);
        uVar6 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar6,this->field_0041),
                           CONCAT22((short)((uint)iVar13 >> 0x10),this->field_0043),
                           CONCAT22(uVar6,this->field_0045),iVar13,iVar16,iVar8);
        *(undefined2 *)&this->field_0x506 = uVar6;
        *(undefined4 *)&this->field_0x50c = 1;
      }
      if (*(int *)&this->field_0x50c == 1) {
        uVar10 = thunk_FUN_004176c0(this,*(short *)&this->field_0x506);
        uVar10 = thunk_FUN_00417910(this,(short)uVar10);
        if (uVar10 == 0xffffffff) {
          iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x23f3,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE_007aa6e0);
          if (iVar13 != 0) {
            pcVar5 = (code *)swi(3);
            iVar13 = (*pcVar5)();
            return iVar13;
          }
          iVar13 = 0x23f4;
          goto cf_error_exit_0046C422;
        }
        if (uVar10 == 0) {
          *(undefined4 *)&this->field_0x50c = 2;
          goto LAB_0046b6e2;
        }
      }
      if (*(int *)&this->field_0x50c == 2) {
        thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                           (*(short *)&this->field_0x4dd + 1) * 0xc9,
                           (*(short *)&this->field_0x4df + 1) * 0xc9,
                           *(short *)&this->field_0x500 * 200 + 100,this->field_0x61);
        *(undefined4 *)&this->field_0x50c = 3;
      }
      if (*(int *)&this->field_0x50c == 3) {
        local_1c = thunk_FUN_00415ed0(this,&local_18,&local_14);
        local_20 = 0;
        if (this->field_0x2bf != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,*local_10,*(undefined2 *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar8 = -1;
              this->field_001C = uVar10;
              sVar24 = 0;
              sVar23 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar22 = 0;
              this->field_001C = uVar12;
              sVar21 = 0;
              sVar20 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              this->field_001C = local_24;
              lVar18 = Library::MSVCRT::__ftol();
              iVar13 = (int)(short)lVar18 + (uVar10 >> 0x10) % 7 + (int)(short)this->field_0045 + -3
                       + (int)local_8;
              iVar16 = ((uVar12 >> 0x10) % 7 + (int)(short)this->field_0043) - (int)local_c._2_2_;
              uVar10 = local_24;
            }
            else {
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              bVar26 = 0;
              sVar25 = 0;
              uVar15 = uVar12 * 0x41c64e6d + 0x3039;
              iVar8 = -1;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              this->field_001C = uVar12;
              uVar10 = uVar15 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              this->field_001C = uVar15;
              this->field_001C = uVar10;
              iVar13 = (uVar12 >> 0x10) % 7 + (int)(short)this->field_0045 + -3 + (int)local_8;
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              iVar16 = ((uVar15 >> 0x10) % 7 + (int)(short)this->field_0043) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)(short)this->field_0041 + -3 +
                       (int)(short)local_c,iVar16 + -3,iVar13,sVar19,sVar20,sVar21,sVar22,sVar23,
                       sVar24,iVar8,sVar25,bVar26);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
          } while (local_20 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_1c == -1) {
          iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2419,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE_2_007aa6bc);
          if (iVar13 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x241a);
            return 0xffff;
          }
          pcVar5 = (code *)swi(3);
          iVar13 = (*pcVar5)();
          return iVar13;
        }
        if (local_1c == 0) {
          *(undefined4 *)&this->field_0x50c = 0;
          this->field_0508 = (-(uint)(this->field_06F7 != CASE_19) & 2) + CASE_3;
        }
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_3) {
      iVar13 = (int)(short)this->field_006C;
      if (0x2d < iVar13 % 0x5a) {
        iVar13 = iVar13 + 0x2d;
      }
      uVar10 = thunk_FUN_00417910(this,(short)(((iVar13 / 0x5a) * 0x5a) % 0x168));
      if (uVar10 == 0xffffffff) {
        iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2434,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__Build__BUILD_ROTATE_007aa698);
        if (iVar13 != 0) {
          pcVar5 = (code *)swi(3);
          iVar13 = (*pcVar5)();
          return iVar13;
        }
        iVar13 = 0x2435;
        goto cf_error_exit_0046C422;
      }
      if (uVar10 == 0) {
        this->field_0508 = CASE_4;
        *(undefined4 *)&this->field_0x50c = 2;
        iVar13 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_4) {
      if (*(int *)&this->field_0x50c == 2) {
        thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,this->field_0041,
                           this->field_0043,this->field_0045 + -200,this->field_0x61);
        *(undefined4 *)&this->field_0x50c = 3;
      }
      if (*(int *)&this->field_0x50c == 3) {
        local_1c = thunk_FUN_00415ed0(this,&local_14,&local_18);
        local_20 = 0;
        if (this->field_0x2bf != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,*local_10,*(undefined2 *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar8 = -1;
              this->field_001C = uVar10;
              sVar24 = 0;
              sVar23 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar22 = 0;
              this->field_001C = uVar12;
              sVar21 = 0;
              sVar20 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              this->field_001C = local_24;
              lVar18 = Library::MSVCRT::__ftol();
              iVar13 = (int)(short)lVar18 + (uVar10 >> 0x10) % 7 + (int)(short)this->field_0045 + -3
                       + (int)local_8;
              iVar16 = ((uVar12 >> 0x10) % 7 + (int)(short)this->field_0043) - (int)local_c._2_2_;
              uVar10 = local_24;
            }
            else {
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar12;
              uVar15 = uVar12 * 0x41c64e6d + 0x3039;
              bVar26 = 0;
              this->field_001C = uVar15;
              uVar10 = uVar15 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar10;
              sVar25 = 0;
              iVar8 = -1;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              iVar13 = (uVar12 >> 0x10) % 7 + (int)(short)this->field_0045 + -3 + (int)local_8;
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              iVar16 = ((uVar15 >> 0x10) % 7 + (int)(short)this->field_0043) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)(short)this->field_0041 + -3 +
                       (int)(short)local_c,iVar16 + -3,iVar13,sVar19,sVar20,sVar21,sVar22,sVar23,
                       sVar24,iVar8,sVar25,bVar26);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
          } while (local_20 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_1c == -1) {
          iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x245f,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE2_007aa674);
          if (iVar13 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2460);
            return 0xffff;
          }
          pcVar5 = (code *)swi(3);
          iVar13 = (*pcVar5)();
          return iVar13;
        }
        if (local_1c == 0) {
          this->field_0508 = CASE_5;
          *(undefined4 *)&this->field_0x50c = 0;
        }
      }
LAB_0046b6e2:
      iVar13 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
    }
    if (SVar4 == CASE_5) {
      puVar11 = &local_d8;
      for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      uVar7 = this->field_0502;
      *(undefined2 *)puVar11 = 0;
      sVar19 = *(short *)&this->field_0x4dd;
      *(undefined1 *)((int)puVar11 + 2) = 0;
      local_d4 = *(undefined4 *)&this->field_0x24;
      local_b0 = *(undefined4 *)&this->field_0x4e3;
      local_a8 = (int)*(short *)&this->field_0x4df;
      local_a4 = (int)*(short *)&this->field_0x4e1;
      local_9c = *(undefined4 *)&this->field_0x4e7;
      local_6d = (int)(short)this->field_006C;
      local_a0 = (uint)*(ushort *)&this->field_0x4fa;
      local_85 = 100;
      local_81 = 100;
      local_89 = this->field_0018;
      local_cc = 1;
      local_d0 = 1;
      local_d8 = 0x3e9;
      local_b8 = 1;
      local_bc = 1;
      local_c4 = 1000;
      local_c8 = uVar7;
      local_c0 = local_d4;
      local_b4 = uVar7;
      local_ac = (int)sVar19;
      Library::MSVCRT::_strncpy(local_98,&this->field_0x4eb,0xe);
      local_8a = 0;
      if (this->field_0502 == 0) {
        iVar13 = thunk_FUN_004ae0b0((int)*(short *)&this->field_0x4dd,
                                    (int)*(short *)&this->field_0x4df,
                                    (int)*(short *)&this->field_0x4e1,
                                    *(Global_sub_004AE0B0_param_4Enum *)&this->field_0x4e3,
                                    *(int *)&this->field_0x24,(undefined4 *)0x0,(int *)0x0,
                                    (int *)0x0,0,(int *)0x0);
        uVar7 = extraout_EDX_00;
        if ((iVar13 != 0) &&
           (STPlaySystemC::CreateGameObject
                      (*(STPlaySystemC **)&this->field_0xc,0x3e9,0,0,&local_d8,0),
           uVar7 = extraout_EDX_01, this->field_06F7 == CASE_19)) {
          local_44.data = &local_68;
          local_68 = 10000;
          local_64 = 0;
          local_60 = 0xfe;
          local_54 = 1;
          local_50 = 1;
          local_44.id = MESS_HITKILL;
          (*this->vtable->GetMessage)(this,&local_44);
          goto cf_common_exit_0046C3C5;
        }
      }
      else {
        iVar13 = thunk_FUN_004ae0b0((int)*(short *)&this->field_0x4dd,
                                    (int)*(short *)&this->field_0x4df,
                                    (int)*(short *)&this->field_0x4e1,
                                    *(Global_sub_004AE0B0_param_4Enum *)&this->field_0x4e3,
                                    *(int *)&this->field_0x24,(undefined4 *)0x0,(int *)0x0,
                                    (int *)0x0,0,(int *)0x0);
        uVar7 = extraout_EDX_02;
        if ((iVar13 != 0) &&
           (STPlaySystemC::CreateGameObject
                      (*(STPlaySystemC **)&this->field_0xc,0x3e9,0,0,&local_d8,0),
           uVar7 = extraout_EDX_03, this->field_06F7 == CASE_19)) {
          local_44.data = &local_68;
          local_68 = 10000;
          local_64 = 0;
          local_60 = 0xfe;
          local_54 = 1;
          local_50 = 1;
          local_44.id = MESS_HITKILL;
          (*this->vtable->GetMessage)(this,&local_44);
          goto cf_common_exit_0046C3C5;
        }
      }
      if (this->field_0502 == 1) {
        this->field_0508 = CASE_6;
      }
      else {
        this->field_0508 = CASE_7;
        thunk_FUN_0048df40((int)this,uVar7);
        thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                           (int)*(short *)&this->field_0x500);
        iVar13 = thunk_FUN_0045ff50(this,0);
        if (iVar13 == -1) {
          return -1;
        }
      }
cf_common_exit_0046C04E:
      iVar13 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
    }
    if (SVar4 == CASE_6) {
      if (*(int *)&this->field_0x50c == 0) {
        iVar13 = (ushort)(*(short *)&this->field_0x500 * 200) + 100;
        iVar8 = CONCAT22((short)((uint)pSVar14 >> 0x10),*(short *)&this->field_0x4fe * 0xc9) + 100;
        iVar16 = CONCAT22((short)((uint)iVar13 >> 0x10),*(short *)&this->field_0x4fc * 0xc9) + 100;
        uVar6 = (undefined2)((uint)iVar8 >> 0x10);
        uVar6 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar6,this->field_0041),
                           CONCAT22((short)((uint)iVar16 >> 0x10),this->field_0043),
                           CONCAT22(uVar6,this->field_0045),iVar16,iVar8,iVar13);
        *(undefined2 *)&this->field_0x506 = uVar6;
        *(undefined4 *)&this->field_0x50c = 1;
      }
      if (*(int *)&this->field_0x50c == 1) {
        uVar10 = thunk_FUN_004176c0(this,*(short *)&this->field_0x506);
        uVar10 = thunk_FUN_00417910(this,(short)uVar10);
        if (uVar10 == 0xffffffff) {
          iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24c1,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_OMOVE_007aa650);
          if (iVar13 != 0) {
            pcVar5 = (code *)swi(3);
            iVar13 = (*pcVar5)();
            return iVar13;
          }
          iVar13 = 0x24c2;
          goto cf_error_exit_0046C422;
        }
        if (uVar10 == 0) {
          *(undefined4 *)&this->field_0x50c = 2;
          goto cf_common_exit_0046C04E;
        }
      }
      if (*(int *)&this->field_0x50c == 2) {
        thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                           *(short *)&this->field_0x4fc * 0xc9 + 100,
                           *(short *)&this->field_0x4fe * 0xc9 + 100,
                           *(short *)&this->field_0x500 * 200 + 100,this->field_0x61);
        *(undefined4 *)&this->field_0x50c = 3;
      }
      if (*(int *)&this->field_0x50c == 3) {
        local_1c = thunk_FUN_00415ed0(this,&local_14,&local_18);
        local_20 = 0;
        uVar7 = extraout_EDX_04;
        if (this->field_0x2bf != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,*local_10,*(undefined2 *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar8 = -1;
              this->field_001C = uVar10;
              sVar24 = 0;
              sVar23 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar22 = 0;
              this->field_001C = uVar12;
              sVar21 = 0;
              sVar20 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              this->field_001C = local_24;
              lVar18 = Library::MSVCRT::__ftol();
              iVar13 = (int)(short)lVar18 + (uVar10 >> 0x10) % 7 + (int)(short)this->field_0045 + -3
                       + (int)local_8;
              iVar16 = ((uVar12 >> 0x10) % 7 + (int)(short)this->field_0043) - (int)local_c._2_2_;
              uVar10 = local_24;
            }
            else {
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar12;
              uVar15 = uVar12 * 0x41c64e6d + 0x3039;
              bVar26 = 0;
              this->field_001C = uVar15;
              uVar10 = uVar15 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar10;
              sVar25 = 0;
              iVar8 = -1;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              iVar13 = (uVar12 >> 0x10) % 7 + (int)(short)this->field_0045 + -3 + (int)local_8;
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              iVar16 = ((uVar15 >> 0x10) % 7 + (int)(short)this->field_0043) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)(short)this->field_0041 + -3 +
                       (int)(short)local_c,iVar16 + -3,iVar13,sVar19,sVar20,sVar21,sVar22,sVar23,
                       sVar24,iVar8,sVar25,bVar26);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
            uVar7 = extraout_EDX_05;
          } while (local_20 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_1c == -1) {
          iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24e7,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_OMOVE_2_007aa62c);
          if (iVar13 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24e8);
            return 0xffff;
          }
          pcVar5 = (code *)swi(3);
          iVar13 = (*pcVar5)();
          return iVar13;
        }
        if (local_1c == 0) {
          this->field_0508 = CASE_7;
          thunk_FUN_0048df40((int)this,uVar7);
          thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4fc,
                             (int)*(short *)&this->field_0x4fe,(int)*(short *)&this->field_0x500);
          iVar13 = thunk_FUN_0045ff50(this,0);
          if (iVar13 == -1) {
            return -1;
          }
        }
      }
      goto cf_common_exit_0046C04E;
    }
    if (SVar4 != CASE_7) {
      iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2510,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build___incorrect_entry_007aa5d8);
      if (iVar13 == 0) {
        return -1;
      }
      pcVar5 = (code *)swi(3);
      iVar13 = (*pcVar5)();
      return iVar13;
    }
    iVar13 = thunk_FUN_0045ff50(this,2);
    if (iVar13 == -1) {
      iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24fe,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build__BUILD_ESCMOVE_er_007aa600);
      if (iVar13 != 0) {
        pcVar5 = (code *)swi(3);
        iVar13 = (*pcVar5)();
        return iVar13;
      }
      iVar13 = 0x24fe;
cf_error_exit_0046C422:
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar13);
      return 0xffff;
    }
    if (iVar13 == 0) {
      iVar13 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar13 != 0);
    }
    if (iVar13 != 3) goto cf_common_exit_0046C3C5;
    thunk_FUN_0048df40((int)this,extraout_EDX_06);
    thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                       (int)*(short *)&this->field_0x500);
LAB_0046c3be:
    thunk_FUN_0045ff50(this,0);
  }
cf_common_exit_0046C3C5:
  iVar13 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
}

