#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Build */

int __thiscall STBoatC::Build(STBoatC *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  STBoatC_field_0508State SVar4;
  STWorldObject *pSVar5;
  code *pcVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STBoatC *extraout_ECX;
  STBoatC *pSVar14;
  uint uVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_06;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  bool bVar16;
  longlong lVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  int iVar24;
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
  int local_89;
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
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    sVar18 = this->field_0373;
    sVar19 = this->field_0377;
    sVar20 = this->field_0375;
    if ((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) || (sVar20 < 0)) ||
       (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) ||
        ((g_worldGrid.sizeZ <= sVar19 ||
         (STGridAt3D(g_pathingGrid, sVar18, sVar20, sVar19) != 0)))))) {
      return 0;
    }
    this->field_04DD = sVar18;
    this->field_04FA = this->field_0390;
    this->field_04DF = this->field_0375;
    this->field_04E1 = this->field_0377;
    this->field_04E3 = this->field_0379;
    this->field_0502 = *(undefined4 *)(&DAT_00791d68 + this->field_0379 * 4);
    this->field_04E7 = this->field_037D;
    Library::MSVCRT::_strncpy(&this->field_0x4eb,&this->field_0x381,0xe);
    this->field_04F9 = 0;
    thunk_FUN_0048dcf0(this);
    this->field_0508 = CASE_0;
    this->field_050C = 0;
    sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
    iVar13 = sub_0045FF50(this,0);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pSVar14 = extraout_ECX;
    if (iVar13 == -1) {
      return -1;
    }
  }
  SVar4 = this->field_0508;
  if (SVar4 == CASE_0) {
    uVar8 = sub_0045FF50(this,2);
    switch(uVar8) {
    case 0:
      if ((((this->field_0047 != this->field_04FC) || (this->field_0049 != this->field_04FE)) ||
          (this->field_004B != this->field_0500)) ||
         (iVar13 = thunk_FUN_004ae0b0(this->field_04DD,(int)this->field_04DF,(int)this->field_04E1,
                                      this->field_04E3,this->field_0024,nullptr,nullptr
                                      ,nullptr,0,nullptr), iVar13 == 0)) {
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)this->field_06CB + 0x2c) == 0x19) {
        this->field_0508 = CASE_3 - (this->field_0502 != 0);
      }
      else {
        this->field_0508 = (-(uint)(this->field_0502 != 0) & 0xfffffffd) + CASE_5;
      }
      break;
    case 2:
      local_14 = g_playSystem_00802A38->field_00E4;
      if (local_14 % 10 != 0) break;
      sVar18 = this->field_04DD;
      uVar3 = this->field_04DF;
      local_18 = (uint)uVar3;
      sVar19 = this->field_04E1;
      if ((((-1 < sVar18) && (sVar18 < g_worldGrid.sizeX)) && (-1 < (short)uVar3)) &&
         ((((short)uVar3 < g_worldGrid.sizeY && (-1 < sVar19)) &&
          ((sVar19 < g_worldGrid.sizeZ &&
           (STGridAt3D(g_pathingGrid, sVar18, uVar3, sVar19) == 0)))))) break;
      if (((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) ||
         (((short)uVar3 < 0 ||
          ((((g_worldGrid.sizeY <= (short)uVar3 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19))
           || (pSVar5 = STGridAt3D(g_worldGrid, sVar18, uVar3, sVar19).objects[0],
              pSVar5 == nullptr)))))) {
        iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x23c0,0,0,"%s"
                                    ,"STBoatC::Build NULL");
        if (iVar13 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if ((pSVar5[1].vtable < (STWorldObjectVTable *)0x8) &&
         ((g_playSystem_00802A38 == nullptr ||
          (g_bulkInitializedRecords_008087C7[(int)pSVar5[1].vtable].field_0022 < 8)))) {
        bVar26 = *(byte *)&pSVar5[1].vtable;
        bVar1 = *(byte *)&this->field_0024;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_10 = (undefined4 *)CONCAT31(local_10._1_3_,bVar26);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_1c = CONCAT31(local_1c._1_3_,bVar1);
        if (DAT_00808a8f == '\0') {
          if (bVar26 == bVar1) {
LAB_0046b5ac:
            iVar13 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar26][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar26] == 0)) {
              iVar13 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar26] == 0)) {
              iVar13 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar26] == 1)) {
              iVar13 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar26] != 1)) goto LAB_0046b5ac;
              iVar13 = 2;
            }
          }
          bVar16 = iVar13 < 0;
        }
        else {
          bVar16 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                   g_bulkInitializedRecords_008087C7[bVar26].field_0023;
        }
        if (bVar16) {
          param_1 = local_14;
          CmdToObj(this,CASE_3,&param_1);
          break;
        }
      }
      this->field_0508 = CASE_1;
      break;
    case 3:
      thunk_FUN_0048dcf0(this);
      sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
      goto LAB_0046c3be;
    case 0xffffffff:
      iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2395,0,0,"%s",
                                  "STBoatC::Build, BUILD_MOVE error");
      if (iVar13 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2395
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    if (SVar4 == CASE_1) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar13 = this->StopMove(unaff_EDI);
      if (iVar13 == -1) {
        return -1;
      }
      if (iVar13 == 1) {
        this->field_0508 = CASE_7;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        thunk_FUN_0048df40(this,extraout_EDX);
        sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
        iVar13 = sub_0045FF50(this,0);
        if (iVar13 == -1) {
          return -1;
        }
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_2) {
      if (this->field_050C == 0) {
        iVar9 = (ushort)(this->field_0500 * 200) + 100;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar13 = CONCAT22((short)((uint)iVar9 >> 0x10),this->field_04DF + 1) * 0xc9;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar24 = CONCAT22((short)((uint)iVar13 >> 0x10),this->field_04DD + 1);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar7 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)(iVar24 * 0x19) >> 0x10),this->field_0045),
                           (short)(iVar24 * 0xc9),(short)iVar13,iVar9);
        this->field_0506 = uVar7;
        this->field_050C = 1;
      }
      if (this->field_050C == 1) {
        uVar10 = sub_004176C0(this,this->field_0506);
        uVar10 = sub_00417910(this,(short)uVar10);
        if (uVar10 == 0xffffffff) {
          iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x23f3,0,0,
                                      "%s","STBoatC::Build, BUILD_PMOVE");
          if (iVar13 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar13 = 0x23f4;
          goto cf_error_exit_0046C422;
        }
        if (uVar10 == 0) {
          this->field_050C = 2;
          goto LAB_0046b6e2;
        }
      }
      if (this->field_050C == 2) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     (this->field_04DD + 1) * 0xc9,(this->field_04DF + 1) * 0xc9,
                     this->field_0500 * 200 + 100,this->field_0061);
        this->field_050C = 3;
      }
      if (this->field_050C == 3) {
        local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,(int *)&local_14);
        local_20 = 0;
        if (this->field_02BF != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,(short)*local_10,*(ushort *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar24 = -1;
              this->field_001C = uVar10;
              sVar23 = 0;
              sVar22 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar21 = 0;
              this->field_001C = uVar12;
              sVar20 = 0;
              sVar19 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar18 = 0;
              this->field_001C = local_24;
              lVar17 = Library::MSVCRT::__ftol();
              iVar13 = (int)(short)lVar17 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar9 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
              uVar10 = local_24;
            }
            else {
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              bVar26 = 0;
              sVar25 = 0;
              uVar15 = uVar12 * 0x41c64e6d + 0x3039;
              iVar24 = -1;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              this->field_001C = uVar12;
              uVar10 = uVar15 * 0x41c64e6d + 0x3039;
              sVar18 = 0;
              this->field_001C = uVar15;
              this->field_001C = uVar10;
              iVar13 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar9 = ((uVar15 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_c,
                       iVar9 + -3,iVar13,sVar18,sVar19,sVar20,sVar21,sVar22,sVar23,iVar24,sVar25,
                       bVar26);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
          } while (local_20 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_1c == -1) {
          iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2419,0,0,
                                      "%s","STBoatC::Build, BUILD_PMOVE 2");
          if (iVar13 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x241a);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_1c == 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar13 = *(int *)((int)this->field_06CB + 0x2c);
          this->field_050C = 0;
          this->field_0508 = (-(uint)(iVar13 != 0x19) & 2) + CASE_3;
        }
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_3) {
      iVar13 = (int)this->field_006C;
      if (0x2d < iVar13 % 0x5a) {
        iVar13 = iVar13 + 0x2d;
      }
      uVar10 = sub_00417910(this,(short)(((iVar13 / 0x5a) * 0x5a) % 0x168));
      if (uVar10 == 0xffffffff) {
        iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2434,0,0,"%s"
                                    ,"STBoatC::Build, BUILD_ROTATE");
        if (iVar13 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar13 = 0x2435;
        goto cf_error_exit_0046C422;
      }
      if (uVar10 == 0) {
        this->field_0508 = CASE_4;
        this->field_050C = 2;
        iVar13 = this->vfunc_D8();
        return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_4) {
      if (this->field_050C == 2) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,this->field_0041,
                     this->field_0043,this->field_0045 + -200,this->field_0061);
        this->field_050C = 3;
      }
      if (this->field_050C == 3) {
        local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,(int *)&local_18);
        local_20 = 0;
        if (this->field_02BF != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,(short)*local_10,*(ushort *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar24 = -1;
              this->field_001C = uVar10;
              sVar23 = 0;
              sVar22 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar21 = 0;
              this->field_001C = uVar12;
              sVar20 = 0;
              sVar19 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar18 = 0;
              this->field_001C = local_24;
              lVar17 = Library::MSVCRT::__ftol();
              iVar13 = (int)(short)lVar17 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar9 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
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
              iVar24 = -1;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              sVar18 = 0;
              iVar13 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar9 = ((uVar15 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_c,
                       iVar9 + -3,iVar13,sVar18,sVar19,sVar20,sVar21,sVar22,sVar23,iVar24,sVar25,
                       bVar26);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
          } while (local_20 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_1c == -1) {
          iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x245f,0,0,
                                      "%s","STBoatC::Build, BUILD_PMOVE2");
          if (iVar13 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x2460);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_1c == 0) {
          this->field_0508 = CASE_5;
          this->field_050C = 0;
        }
      }
LAB_0046b6e2:
      iVar13 = this->vfunc_D8();
      return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
    }
    if (SVar4 == CASE_5) {
      puVar11 = &local_d8;
      memset(puVar11, 0, 0x6c); /* compiler bulk-zero initialization */
      puVar11 = (undefined4 *)((byte *)puVar11 + 0x6c);
      uVar8 = this->field_0502;
      *(undefined2 *)puVar11 = 0;
      sVar18 = this->field_04DD;
      *(undefined1 *)((int)puVar11 + 2) = 0;
      local_d4 = this->field_0024;
      local_b0 = this->field_04E3;
      local_a8 = (int)this->field_04DF;
      local_a4 = (int)this->field_04E1;
      local_9c = this->field_04E7;
      local_6d = (int)this->field_006C;
      local_a0 = (uint)(ushort)this->field_04FA;
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
      local_ac = (int)sVar18;
      Library::MSVCRT::_strncpy(local_98,&this->field_0x4eb,0xe);
      local_8a = 0;
      if (this->field_0502 == 0) {
        iVar13 = thunk_FUN_004ae0b0(this->field_04DD,(int)this->field_04DF,(int)this->field_04E1,
                                    this->field_04E3,this->field_0024,nullptr,nullptr,
                                    nullptr,0,nullptr);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_EDX_00;
        /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((iVar13 != 0) &&
           (STPlaySystemC::CreateGameObject(this->field_000C,0x3e9,0,0,&local_d8,0),
           uVar8 = extraout_EDX_01, *(int *)((int)this->field_06CB + 0x2c) == 0x19)) {
          local_44.arg0.ptr = &local_68;
          local_68 = 10000;
          local_64 = 0;
          local_60 = 0xfe;
          local_54 = 1;
          local_50 = 1;
          local_44.id = MESS_HITKILL;
          this->GetMessage(&local_44);
          goto cf_common_exit_0046C3C5;
        }
      }
      else {
        iVar13 = thunk_FUN_004ae0b0(this->field_04DD,(int)this->field_04DF,(int)this->field_04E1,
                                    this->field_04E3,this->field_0024,nullptr,nullptr,
                                    nullptr,0,nullptr);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_EDX_02;
        /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((iVar13 != 0) &&
           (STPlaySystemC::CreateGameObject(this->field_000C,0x3e9,0,0,&local_d8,0),
           uVar8 = extraout_EDX_03, *(int *)((int)this->field_06CB + 0x2c) == 0x19)) {
          local_44.arg0.ptr = &local_68;
          local_68 = 10000;
          local_64 = 0;
          local_60 = 0xfe;
          local_54 = 1;
          local_50 = 1;
          local_44.id = MESS_HITKILL;
          this->GetMessage(&local_44);
          goto cf_common_exit_0046C3C5;
        }
      }
      if (this->field_0502 == 1) {
        this->field_0508 = CASE_6;
      }
      else {
        this->field_0508 = CASE_7;
        thunk_FUN_0048df40(this,uVar8);
        sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
        iVar13 = sub_0045FF50(this,0);
        if (iVar13 == -1) {
          return -1;
        }
      }
cf_common_exit_0046C04E:
      iVar13 = this->vfunc_D8();
      return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
    }
    if (SVar4 == CASE_6) {
      if (this->field_050C == 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar13 = CONCAT22((short)((uint)pSVar14 >> 0x10),this->field_04FE * 0xc9) + 100;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar7 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)iVar13 >> 0x10),this->field_0045),
                           this->field_04FC * 0xc9 + 100,(short)iVar13,
                           (ushort)(this->field_0500 * 200) + 100);
        this->field_0506 = uVar7;
        this->field_050C = 1;
      }
      if (this->field_050C == 1) {
        uVar10 = sub_004176C0(this,this->field_0506);
        uVar10 = sub_00417910(this,(short)uVar10);
        if (uVar10 == 0xffffffff) {
          iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x24c1,0,0,
                                      "%s","STBoatC::Build, BUILD_OMOVE");
          if (iVar13 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar13 = 0x24c2;
          goto cf_error_exit_0046C422;
        }
        if (uVar10 == 0) {
          this->field_050C = 2;
          goto cf_common_exit_0046C04E;
        }
      }
      if (this->field_050C == 2) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_04FC * 0xc9 + 100,this->field_04FE * 0xc9 + 100,
                     this->field_0500 * 200 + 100,this->field_0061);
        this->field_050C = 3;
      }
      if (this->field_050C == 3) {
        local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,(int *)&local_18);
        local_20 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_EDX_04;
        if (this->field_02BF != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,(short)*local_10,*(ushort *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar24 = -1;
              this->field_001C = uVar10;
              sVar23 = 0;
              sVar22 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar21 = 0;
              this->field_001C = uVar12;
              sVar20 = 0;
              sVar19 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar18 = 0;
              this->field_001C = local_24;
              lVar17 = Library::MSVCRT::__ftol();
              iVar13 = (int)(short)lVar17 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar9 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
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
              iVar24 = -1;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              sVar18 = 0;
              iVar13 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar9 = ((uVar15 >> 0x10) % 7 + (int)this->field_0043) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_c,
                       iVar9 + -3,iVar13,sVar18,sVar19,sVar20,sVar21,sVar22,sVar23,iVar24,sVar25,
                       bVar26);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar8 = extraout_EDX_05;
          } while (local_20 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_1c == -1) {
          iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x24e7,0,0,
                                      "%s","STBoatC::Build, BUILD_OMOVE 2");
          if (iVar13 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x24e8);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_1c == 0) {
          this->field_0508 = CASE_7;
          thunk_FUN_0048df40(this,uVar8);
          sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
          iVar13 = sub_0045FF50(this,0);
          if (iVar13 == -1) {
            return -1;
          }
        }
      }
      goto cf_common_exit_0046C04E;
    }
    if (SVar4 != CASE_7) {
      iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2510,0,0,"%s",
                                  "STBoatC::Build - incorrect entry");
      if (iVar13 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar13 = sub_0045FF50(this,2);
    if (iVar13 == -1) {
      iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x24fe,0,0,"%s",
                                  "STBoatC::Build, BUILD_ESCMOVE error");
      if (iVar13 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar13 = 0x24fe;
cf_error_exit_0046C422:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar13);
      return 0xffff;
    }
    if (iVar13 == 0) {
      iVar13 = this->vfunc_D8();
      return -(uint)(iVar13 != 0);
    }
    if (iVar13 != 3) goto cf_common_exit_0046C3C5;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    thunk_FUN_0048df40(this,extraout_EDX_06);
    sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
LAB_0046c3be:
    sub_0045FF50(this,0);
  }
cf_common_exit_0046C3C5:
  iVar13 = this->vfunc_D8();
  return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
}

