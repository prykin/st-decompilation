
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Build */

int __thiscall STBoatC::Build(STBoatC *this,uint param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  STBoatC_field_0508State SVar4;
  STWorldObject *pSVar5;
  code *pcVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  STBoatC *extraout_ECX;
  STBoatC *pSVar15;
  uint uVar16;
  undefined4 extraout_EDX;
  int iVar17;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  void *unaff_EDI;
  bool bVar18;
  longlong lVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  byte bVar27;
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
  
  if ((param_1 == 0) || (pSVar15 = this, param_1 == 1)) {
    puVar12 = &this->field_02CC;
    for (iVar14 = 0x17; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    this->field_02C4 = 0;
    sVar20 = this->field_0373;
    sVar21 = this->field_0377;
    sVar22 = this->field_0375;
    if ((((sVar20 < 0) || (SHORT_007fb240 <= sVar20)) || (sVar22 < 0)) ||
       (((SHORT_007fb242 <= sVar22 || (sVar21 < 0)) ||
        ((SHORT_007fb244 <= sVar21 ||
         (*(short *)(DAT_007fb280 +
                    ((int)SHORT_007fb278 * (int)sVar22 + (int)SHORT_007fb27e * (int)sVar21 +
                    (int)sVar20) * 2) != 0)))))) {
      return 0;
    }
    *(short *)&this->field_0x4dd = sVar20;
    *(undefined2 *)&this->field_0x4fa = *(undefined2 *)&this->field_0x390;
    *(undefined2 *)&this->field_0x4df = this->field_0375;
    *(undefined2 *)&this->field_0x4e1 = this->field_0377;
    *(int *)&this->field_0x4e3 = *(int *)&this->field_0x379;
    this->field_0502 = *(undefined4 *)(&DAT_00791d68 + *(int *)&this->field_0x379 * 4);
    *(undefined4 *)&this->field_0x4e7 = *(undefined4 *)&this->field_0x37d;
    Library::MSVCRT::_strncpy(&this->field_0x4eb,&this->field_0x381,0xe);
    this->field_0x4f9 = 0;
    thunk_FUN_0048dcf0((AnonShape_0048DCF0_C8633E73 *)this);
    this->field_0508 = CASE_0;
    *(undefined4 *)&this->field_0x50c = 0;
    sub_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                 (int)*(short *)&this->field_0x500);
    iVar14 = sub_0045FF50(this,0);
    pSVar15 = extraout_ECX;
    if (iVar14 == -1) {
      return -1;
    }
  }
  SVar4 = this->field_0508;
  if (SVar4 == CASE_0) {
    uVar8 = sub_0045FF50(this,2);
    switch(uVar8) {
    case 0:
      if ((((this->field_0047 != *(short *)&this->field_0x4fc) ||
           (this->field_0049 != *(short *)&this->field_0x4fe)) ||
          (this->field_004B != *(short *)&this->field_0x500)) ||
         (iVar14 = thunk_FUN_004ae0b0((int)*(short *)&this->field_0x4dd,
                                      (int)*(short *)&this->field_0x4df,
                                      (int)*(short *)&this->field_0x4e1,
                                      *(Global_sub_004AE0B0_param_4Enum *)&this->field_0x4e3,
                                      *(int *)&this->field_0x24,(undefined4 *)0x0,(int *)0x0,
                                      (int *)0x0,0,(int *)0x0), iVar14 == 0)) {
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
      local_14 = PTR_00802a38->field_00E4;
      if (local_14 % 10 != 0) break;
      sVar20 = *(short *)&this->field_0x4dd;
      uVar3 = *(ushort *)&this->field_0x4df;
      local_18 = (uint)uVar3;
      sVar21 = *(short *)&this->field_0x4e1;
      if ((((-1 < sVar20) && (sVar20 < SHORT_007fb240)) && (-1 < (short)uVar3)) &&
         ((((short)uVar3 < SHORT_007fb242 && (-1 < sVar21)) &&
          ((sVar21 < SHORT_007fb244 &&
           (*(short *)(DAT_007fb280 +
                      ((int)SHORT_007fb278 * (int)(short)uVar3 + (int)SHORT_007fb27e * (int)sVar21 +
                      (int)sVar20) * 2) == 0)))))) break;
      if (((sVar20 < 0) || (SHORT_007fb240 <= sVar20)) ||
         (((short)uVar3 < 0 ||
          ((((SHORT_007fb242 <= (short)uVar3 || (sVar21 < 0)) || (SHORT_007fb244 <= sVar21)) ||
           (pSVar5 = g_worldCells
                     [(int)(short)uVar3 * (int)SHORT_007fb240 + (int)SHORT_007fb246 * (int)sVar21 +
                      (int)sVar20].objects[0], pSVar5 == (STWorldObject *)0x0)))))) {
        iVar14 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x23c0,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__Build_NULL_007aa704);
        if (iVar14 == 0) {
          return -1;
        }
        pcVar6 = (code *)swi(3);
        iVar14 = (*pcVar6)();
        return iVar14;
      }
      if ((pSVar5[1].vtable < (STWorldObjectVTable *)0x8) &&
         ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
          ((byte)(&DAT_008087e9)[(int)pSVar5[1].vtable * 0x51] < 8)))) {
        bVar27 = *(byte *)&pSVar5[1].vtable;
        bVar1 = this->field_0x24;
        local_10 = (undefined4 *)CONCAT31(local_10._1_3_,bVar27);
        local_1c = CONCAT31(local_1c._1_3_,bVar1);
        if (DAT_00808a8f == '\0') {
          if (bVar27 == bVar1) {
LAB_0046b5ac:
            iVar14 = 0;
          }
          else {
            uVar11 = (uint)bVar27;
            uVar13 = (uint)bVar1;
            cVar2 = *(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar13);
            if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar11) == '\0')) {
              iVar14 = -2;
            }
            else if ((cVar2 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar11) == '\0')) {
              iVar14 = -1;
            }
            else if ((cVar2 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar11) == '\x01')) {
              iVar14 = 1;
            }
            else {
              if ((cVar2 != '\x01') ||
                 (*(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar11) != '\x01')) goto LAB_0046b5ac;
              iVar14 = 2;
            }
          }
          bVar18 = iVar14 < 0;
        }
        else {
          bVar18 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar27 * 0x51];
        }
        if (bVar18) {
          param_1 = local_14;
          CmdToObj(this,CASE_3,&param_1);
          break;
        }
      }
      this->field_0508 = CASE_1;
      break;
    case 3:
      thunk_FUN_0048dcf0((AnonShape_0048DCF0_C8633E73 *)this);
      sub_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                   (int)*(short *)&this->field_0x500);
      goto LAB_0046c3be;
    case 0xffffffff:
      iVar14 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2395,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build__BUILD_MOVE_error_007aa71c);
      if (iVar14 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2395
                  );
        return 0xffff;
      }
      pcVar6 = (code *)swi(3);
      iVar14 = (*pcVar6)();
      return iVar14;
    }
  }
  else {
    if (SVar4 == CASE_1) {
      iVar14 = (*this->vtable->StopMove)(this,unaff_EDI);
      if (iVar14 == -1) {
        return -1;
      }
      if (iVar14 == 1) {
        this->field_0508 = CASE_7;
        thunk_FUN_0048df40((AnonShape_0048DF40_8D46D7E8 *)this,extraout_EDX);
        sub_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                     (int)*(short *)&this->field_0x500);
        iVar14 = sub_0045FF50(this,0);
        if (iVar14 == -1) {
          return -1;
        }
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_2) {
      if (*(int *)&this->field_0x50c == 0) {
        iVar9 = (ushort)(*(short *)&this->field_0x500 * 200) + 100;
        iVar17 = CONCAT22((short)((uint)iVar9 >> 0x10),*(short *)&this->field_0x4df + 1) * 0xc9;
        iVar10 = CONCAT22((short)((uint)iVar17 >> 0x10),*(short *)&this->field_0x4dd + 1);
        iVar14 = iVar10 * 0xc9;
        uVar7 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
        uVar7 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar7,this->field_0041),
                           CONCAT22((short)((uint)iVar14 >> 0x10),this->field_0043),
                           CONCAT22(uVar7,this->field_0045),iVar14,iVar17,iVar9);
        *(undefined2 *)&this->field_0x506 = uVar7;
        *(undefined4 *)&this->field_0x50c = 1;
      }
      if (*(int *)&this->field_0x50c == 1) {
        uVar11 = sub_004176C0(this,*(short *)&this->field_0x506);
        uVar11 = sub_00417910(this,(short)uVar11);
        if (uVar11 == 0xffffffff) {
          iVar14 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x23f3,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE_007aa6e0);
          if (iVar14 != 0) {
            pcVar6 = (code *)swi(3);
            iVar14 = (*pcVar6)();
            return iVar14;
          }
          iVar14 = 0x23f4;
          goto cf_error_exit_0046C422;
        }
        if (uVar11 == 0) {
          *(undefined4 *)&this->field_0x50c = 2;
          goto LAB_0046b6e2;
        }
      }
      if (*(int *)&this->field_0x50c == 2) {
        STJellyGunC::sub_00415B30
                  ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                   (*(short *)&this->field_0x4dd + 1) * 0xc9,
                   (*(short *)&this->field_0x4df + 1) * 0xc9,
                   *(short *)&this->field_0x500 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x50c = 3;
      }
      if (*(int *)&this->field_0x50c == 3) {
        local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,(int *)&local_14);
        local_20 = 0;
        if (this->field_0x2bf != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar12 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,*local_10,*(undefined2 *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar12;
            local_8 = *(short *)(puVar12 + 1);
            if (DAT_0080732c == 1) {
              bVar27 = 0;
              sVar26 = 0;
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar9 = -1;
              this->field_001C = uVar11;
              sVar25 = 0;
              sVar24 = 0;
              uVar13 = uVar11 * 0x41c64e6d + 0x3039;
              sVar23 = 0;
              this->field_001C = uVar13;
              sVar22 = 0;
              sVar21 = 0;
              local_24 = uVar13 * 0x41c64e6d + 0x3039;
              sVar20 = 0;
              this->field_001C = local_24;
              lVar19 = Library::MSVCRT::__ftol();
              iVar14 = (int)(short)lVar19 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              iVar17 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
              uVar11 = local_24;
            }
            else {
              uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
              bVar27 = 0;
              sVar26 = 0;
              uVar16 = uVar13 * 0x41c64e6d + 0x3039;
              iVar9 = -1;
              sVar25 = 0;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              this->field_001C = uVar13;
              uVar11 = uVar16 * 0x41c64e6d + 0x3039;
              sVar20 = 0;
              this->field_001C = uVar16;
              this->field_001C = uVar11;
              iVar14 = (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              iVar17 = ((uVar16 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_c,
                       iVar17 + -3,iVar14,sVar20,sVar21,sVar22,sVar23,sVar24,sVar25,iVar9,sVar26,
                       bVar27);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
          } while (local_20 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_1c == -1) {
          iVar14 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2419,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE_2_007aa6bc);
          if (iVar14 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x241a);
            return 0xffff;
          }
          pcVar6 = (code *)swi(3);
          iVar14 = (*pcVar6)();
          return iVar14;
        }
        if (local_1c == 0) {
          *(undefined4 *)&this->field_0x50c = 0;
          this->field_0508 = (-(uint)(this->field_06F7 != CASE_19) & 2) + CASE_3;
        }
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_3) {
      iVar14 = (int)this->field_006C;
      if (0x2d < iVar14 % 0x5a) {
        iVar14 = iVar14 + 0x2d;
      }
      uVar11 = sub_00417910(this,(short)(((iVar14 / 0x5a) * 0x5a) % 0x168));
      if (uVar11 == 0xffffffff) {
        iVar14 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2434,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__Build__BUILD_ROTATE_007aa698);
        if (iVar14 != 0) {
          pcVar6 = (code *)swi(3);
          iVar14 = (*pcVar6)();
          return iVar14;
        }
        iVar14 = 0x2435;
        goto cf_error_exit_0046C422;
      }
      if (uVar11 == 0) {
        this->field_0508 = CASE_4;
        *(undefined4 *)&this->field_0x50c = 2;
        iVar14 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar14 != 0) & 0xfffffffd) + 2;
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_4) {
      if (*(int *)&this->field_0x50c == 2) {
        STJellyGunC::sub_00415B30
                  ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0041,this->field_0043,this->field_0045 + -200,this->field_0061);
        *(undefined4 *)&this->field_0x50c = 3;
      }
      if (*(int *)&this->field_0x50c == 3) {
        local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,(int *)&local_18);
        local_20 = 0;
        if (this->field_0x2bf != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar12 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,*local_10,*(undefined2 *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar12;
            local_8 = *(short *)(puVar12 + 1);
            if (DAT_0080732c == 1) {
              bVar27 = 0;
              sVar26 = 0;
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar9 = -1;
              this->field_001C = uVar11;
              sVar25 = 0;
              sVar24 = 0;
              uVar13 = uVar11 * 0x41c64e6d + 0x3039;
              sVar23 = 0;
              this->field_001C = uVar13;
              sVar22 = 0;
              sVar21 = 0;
              local_24 = uVar13 * 0x41c64e6d + 0x3039;
              sVar20 = 0;
              this->field_001C = local_24;
              lVar19 = Library::MSVCRT::__ftol();
              iVar14 = (int)(short)lVar19 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              iVar17 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
              uVar11 = local_24;
            }
            else {
              uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar13;
              uVar16 = uVar13 * 0x41c64e6d + 0x3039;
              bVar27 = 0;
              this->field_001C = uVar16;
              uVar11 = uVar16 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              sVar26 = 0;
              iVar9 = -1;
              sVar25 = 0;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              iVar14 = (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              iVar17 = ((uVar16 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_c,
                       iVar17 + -3,iVar14,sVar20,sVar21,sVar22,sVar23,sVar24,sVar25,iVar9,sVar26,
                       bVar27);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
          } while (local_20 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_1c == -1) {
          iVar14 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x245f,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE2_007aa674);
          if (iVar14 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x2460);
            return 0xffff;
          }
          pcVar6 = (code *)swi(3);
          iVar14 = (*pcVar6)();
          return iVar14;
        }
        if (local_1c == 0) {
          this->field_0508 = CASE_5;
          *(undefined4 *)&this->field_0x50c = 0;
        }
      }
LAB_0046b6e2:
      iVar14 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar14 != 0) & 0xfffffffd) + 2;
    }
    if (SVar4 == CASE_5) {
      puVar12 = &local_d8;
      for (iVar14 = 0x1b; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      uVar8 = this->field_0502;
      *(undefined2 *)puVar12 = 0;
      sVar20 = *(short *)&this->field_0x4dd;
      *(undefined1 *)((int)puVar12 + 2) = 0;
      local_d4 = *(undefined4 *)&this->field_0x24;
      local_b0 = *(undefined4 *)&this->field_0x4e3;
      local_a8 = (int)*(short *)&this->field_0x4df;
      local_a4 = (int)*(short *)&this->field_0x4e1;
      local_9c = *(undefined4 *)&this->field_0x4e7;
      local_6d = (int)this->field_006C;
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
      local_c8 = uVar8;
      local_c0 = local_d4;
      local_b4 = uVar8;
      local_ac = (int)sVar20;
      Library::MSVCRT::_strncpy(local_98,&this->field_0x4eb,0xe);
      local_8a = 0;
      if (this->field_0502 == 0) {
        iVar14 = thunk_FUN_004ae0b0((int)*(short *)&this->field_0x4dd,
                                    (int)*(short *)&this->field_0x4df,
                                    (int)*(short *)&this->field_0x4e1,
                                    *(Global_sub_004AE0B0_param_4Enum *)&this->field_0x4e3,
                                    *(int *)&this->field_0x24,(undefined4 *)0x0,(int *)0x0,
                                    (int *)0x0,0,(int *)0x0);
        uVar8 = extraout_EDX_00;
        if ((iVar14 != 0) &&
           (STPlaySystemC::CreateGameObject
                      (*(STPlaySystemC **)&this->field_0xc,0x3e9,0,0,&local_d8,0),
           uVar8 = extraout_EDX_01, this->field_06F7 == CASE_19)) {
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
        iVar14 = thunk_FUN_004ae0b0((int)*(short *)&this->field_0x4dd,
                                    (int)*(short *)&this->field_0x4df,
                                    (int)*(short *)&this->field_0x4e1,
                                    *(Global_sub_004AE0B0_param_4Enum *)&this->field_0x4e3,
                                    *(int *)&this->field_0x24,(undefined4 *)0x0,(int *)0x0,
                                    (int *)0x0,0,(int *)0x0);
        uVar8 = extraout_EDX_02;
        if ((iVar14 != 0) &&
           (STPlaySystemC::CreateGameObject
                      (*(STPlaySystemC **)&this->field_0xc,0x3e9,0,0,&local_d8,0),
           uVar8 = extraout_EDX_03, this->field_06F7 == CASE_19)) {
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
        thunk_FUN_0048df40((AnonShape_0048DF40_8D46D7E8 *)this,uVar8);
        sub_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                     (int)*(short *)&this->field_0x500);
        iVar14 = sub_0045FF50(this,0);
        if (iVar14 == -1) {
          return -1;
        }
      }
cf_common_exit_0046C04E:
      iVar14 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar14 != 0) & 0xfffffffd) + 2;
    }
    if (SVar4 == CASE_6) {
      if (*(int *)&this->field_0x50c == 0) {
        iVar14 = (ushort)(*(short *)&this->field_0x500 * 200) + 100;
        iVar9 = CONCAT22((short)((uint)pSVar15 >> 0x10),*(short *)&this->field_0x4fe * 0xc9) + 100;
        iVar17 = CONCAT22((short)((uint)iVar14 >> 0x10),*(short *)&this->field_0x4fc * 0xc9) + 100;
        uVar7 = (undefined2)((uint)iVar9 >> 0x10);
        uVar7 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar7,this->field_0041),
                           CONCAT22((short)((uint)iVar17 >> 0x10),this->field_0043),
                           CONCAT22(uVar7,this->field_0045),iVar17,iVar9,iVar14);
        *(undefined2 *)&this->field_0x506 = uVar7;
        *(undefined4 *)&this->field_0x50c = 1;
      }
      if (*(int *)&this->field_0x50c == 1) {
        uVar11 = sub_004176C0(this,*(short *)&this->field_0x506);
        uVar11 = sub_00417910(this,(short)uVar11);
        if (uVar11 == 0xffffffff) {
          iVar14 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24c1,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_OMOVE_007aa650);
          if (iVar14 != 0) {
            pcVar6 = (code *)swi(3);
            iVar14 = (*pcVar6)();
            return iVar14;
          }
          iVar14 = 0x24c2;
          goto cf_error_exit_0046C422;
        }
        if (uVar11 == 0) {
          *(undefined4 *)&this->field_0x50c = 2;
          goto cf_common_exit_0046C04E;
        }
      }
      if (*(int *)&this->field_0x50c == 2) {
        STJellyGunC::sub_00415B30
                  ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                   *(short *)&this->field_0x4fc * 0xc9 + 100,
                   *(short *)&this->field_0x4fe * 0xc9 + 100,
                   *(short *)&this->field_0x500 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x50c = 3;
      }
      if (*(int *)&this->field_0x50c == 3) {
        local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,(int *)&local_18);
        local_20 = 0;
        uVar8 = extraout_EDX_04;
        if (this->field_0x2bf != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar12 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,*local_10,*(undefined2 *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar12;
            local_8 = *(short *)(puVar12 + 1);
            if (DAT_0080732c == 1) {
              bVar27 = 0;
              sVar26 = 0;
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar9 = -1;
              this->field_001C = uVar11;
              sVar25 = 0;
              sVar24 = 0;
              uVar13 = uVar11 * 0x41c64e6d + 0x3039;
              sVar23 = 0;
              this->field_001C = uVar13;
              sVar22 = 0;
              sVar21 = 0;
              local_24 = uVar13 * 0x41c64e6d + 0x3039;
              sVar20 = 0;
              this->field_001C = local_24;
              lVar19 = Library::MSVCRT::__ftol();
              iVar14 = (int)(short)lVar19 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              iVar17 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
              uVar11 = local_24;
            }
            else {
              uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar13;
              uVar16 = uVar13 * 0x41c64e6d + 0x3039;
              bVar27 = 0;
              this->field_001C = uVar16;
              uVar11 = uVar16 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              sVar26 = 0;
              iVar9 = -1;
              sVar25 = 0;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              iVar14 = (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              iVar17 = ((uVar16 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_c,
                       iVar17 + -3,iVar14,sVar20,sVar21,sVar22,sVar23,sVar24,sVar25,iVar9,sVar26,
                       bVar27);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
            uVar8 = extraout_EDX_05;
          } while (local_20 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_1c == -1) {
          iVar14 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24e7,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_OMOVE_2_007aa62c);
          if (iVar14 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x24e8);
            return 0xffff;
          }
          pcVar6 = (code *)swi(3);
          iVar14 = (*pcVar6)();
          return iVar14;
        }
        if (local_1c == 0) {
          this->field_0508 = CASE_7;
          thunk_FUN_0048df40((AnonShape_0048DF40_8D46D7E8 *)this,uVar8);
          sub_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                       (int)*(short *)&this->field_0x500);
          iVar14 = sub_0045FF50(this,0);
          if (iVar14 == -1) {
            return -1;
          }
        }
      }
      goto cf_common_exit_0046C04E;
    }
    if (SVar4 != CASE_7) {
      iVar14 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2510,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build___incorrect_entry_007aa5d8);
      if (iVar14 == 0) {
        return -1;
      }
      pcVar6 = (code *)swi(3);
      iVar14 = (*pcVar6)();
      return iVar14;
    }
    iVar14 = sub_0045FF50(this,2);
    if (iVar14 == -1) {
      iVar14 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24fe,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build__BUILD_ESCMOVE_er_007aa600);
      if (iVar14 != 0) {
        pcVar6 = (code *)swi(3);
        iVar14 = (*pcVar6)();
        return iVar14;
      }
      iVar14 = 0x24fe;
cf_error_exit_0046C422:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar14);
      return 0xffff;
    }
    if (iVar14 == 0) {
      iVar14 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar14 != 0);
    }
    if (iVar14 != 3) goto cf_common_exit_0046C3C5;
    thunk_FUN_0048df40((AnonShape_0048DF40_8D46D7E8 *)this,extraout_EDX_06);
    sub_00481520(this,(int)*(short *)&this->field_0x4fc,(int)*(short *)&this->field_0x4fe,
                 (int)*(short *)&this->field_0x500);
LAB_0046c3be:
    sub_0045FF50(this,0);
  }
cf_common_exit_0046C3C5:
  iVar14 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar14 != 0) & 0xfffffffd) + 2;
}

