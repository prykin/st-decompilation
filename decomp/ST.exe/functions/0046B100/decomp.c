#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Build

   [STSwitchEnumApplier] Switch target field_050C uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_050CState. Cases: CASE_1=1;CASE_2=2;CASE_5=5

   [STSwitchEnumApplier] Switch target field_050C uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_050CState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_5=5

   [STSwitchEnumApplier] Switch target field_050C uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_050CState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_5=5

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0046B100 -> 0045EF00 @ 0046B5C6 */

int __thiscall STBoatC::Build(STBoatC *this,uint *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  STBoatC_field_0508State SVar4;
  STWorldObject *pSVar5;
  ushort uVar7;
  int local_EAX_420;
  int local_EAX_950;
  int iVar8;
  uint uVar9;
  int iVar13;
  uint *puVar10;
  uint uVar11;
  int local_EAX_2223;
  int local_EAX_2460;
  int local_EAX_3077;
  int local_EAX_3970;
  int local_EAX_4673;
  int local_EAX_4880;
  int local_EAX_4958;
  int iVar12;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STBoatC *extraout_ECX;
  STBoatC *pSVar13;
  uint uVar14;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_03;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_04;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_05;
  uint uVar15;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_06;
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
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  char local_98 [14];
  byte local_8a;
  int local_89;
  uint local_85;
  uint local_81;
  int local_6d;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_54;
  uint local_50;
  uint local_4c [2];
  STMessage local_44;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint *local_14;
  undefined4 *local_10;
  uint local_c;
  short local_8;

  if ((param_1 == nullptr) || (pSVar13 = this, param_1 == (uint *)0x1)) {
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
    this->field_050C = CASE_0;
    /* ST_CALLSITE[0046B250]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
    sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
    /* ST_CALLSITE[0046B258]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
    iVar12 = sub_0045FF50(this,0);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    pSVar13 = extraout_ECX;
    if (iVar12 == -1) {
      return -1;
    }
  }
  SVar4 = this->field_0508;
  if (SVar4 == CASE_0) {
    /* ST_CALLSITE[0046B278]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
    iVar12 = sub_0045FF50(this,2);
    switch(iVar12) {
    case 0:
      if ((((this->field_0047 != this->field_04FC) || (this->field_0049 != this->field_04FE)) ||
          (this->field_004B != this->field_0500)) ||

         (iVar12 = thunk_FUN_004ae0b0(this->field_04DD,(int)this->field_04DF,(int)this->field_04E1,
                                      this->field_04E3,this->field_0024,nullptr,nullptr
                                      ,nullptr,0,nullptr), iVar12 == 0)) {
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
      local_14 = (uint *)g_playSystem_00802A38->field_00E4;
      if ((uint)local_14 % 10 != 0) break;
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

        local_EAX_950 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x23c0,0,0,"%s",
                                "STBoatC::Build NULL");
        if (local_EAX_950 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if ((pSVar5[1].vtable < (STWorldObjectVTable *)0x8) &&
         ((g_playSystem_00802A38 == nullptr ||
          (g_bulkInitializedRecords_008087C7[(int)pSVar5[1].vtable].field_0022 < 8)))) {
        bVar26 = *(byte *)&pSVar5[1].vtable;
        bVar1 = (byte)this->field_0024;
        local_10 = (undefined4 *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar26));
        local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar1));
        if (DAT_00808a8f == '\0') {
          if (bVar26 == bVar1) {
LAB_0046b5ac:
            iVar12 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar26][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar26] == 0)) {
              iVar12 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar26] == 0)) {
              iVar12 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar26] == 1)) {
              iVar12 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar26] != 1)) goto LAB_0046b5ac;
              iVar12 = 2;
            }
          }
          bVar16 = iVar12 < 0;
        }
        else {
          bVar16 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                   g_bulkInitializedRecords_008087C7[bVar26].field_0023;
        }
        if (bVar16) {
          param_1 = local_14;
          /* ST_CALLSITE[0046B5C6]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          CmdToObj(this,CASE_3,(uint *)&param_1);
          break;
        }
      }
      this->field_0508 = CASE_1;
      break;
    case 3:
      thunk_FUN_0048dcf0(this);
      /* ST_CALLSITE[0046B39C]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
      sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
      goto LAB_0046c3be;
    case -1:

      local_EAX_420 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2395,0,0,"%s",
                              "STBoatC::Build, BUILD_MOVE error");
      if (local_EAX_420 == 0) {
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
      /* ST_CALLSITE[0046B5EC]: CALL dword ptr [EAX + 0x20] */
      iVar12 = this->StopMove();
      if (iVar12 == -1) {
        return -1;
      }
      if (iVar12 == 1) {
        this->field_0508 = CASE_7;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        thunk_FUN_0048df40(this,extraout_EDX);
        /* ST_CALLSITE[0046B62B]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
        /* ST_CALLSITE[0046B633]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
        iVar12 = sub_0045FF50(this,0);
        if (iVar12 == -1) {
          return -1;
        }
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_2) {
      if (this->field_050C == CASE_0) {
        iVar8 = (ushort)(this->field_0500 * 200) + 100;
        iVar12 = STReplaceLowWord((uint32_t)(iVar8), (uint16_t)(this->field_04DF + 1)) * 0xc9;
        iVar24 = STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_04DD + 1));
        /* ST_CALLSITE[0046B6A0]: CALL dword ptr [EDX + 0x10] */
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar7 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)(iVar24 * 0x19) >> 0x10),this->field_0045),
                           (short)(iVar24 * 0xc9),(short)iVar12,iVar8);
        this->field_0506 = uVar7;
        this->field_050C = CASE_1;
      }
      if (this->field_050C == CASE_1) {
        /* ST_CALLSITE[0046B6C2]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STBoatC; source view only; no Ghidra override */
        uVar9 = sub_004176C0(this,this->field_0506);
        /* ST_CALLSITE[0046B6CA]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
        uVar9 = sub_00417910(this,(short)uVar9);
        if (uVar9 == 0xffffffff) {

          iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x23f3,0,0,
                                      "%s","STBoatC::Build, BUILD_PMOVE");
          if (iVar13 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar12 = 0x23f4;
          goto cf_error_exit_0046C422;
        }
        if (uVar9 == 0) {
          this->field_050C = CASE_2;
          goto LAB_0046b6e2;
        }
      }
      if (this->field_050C == CASE_2) {
        /* ST_CALLSITE[0046B786]: CALL 0x00402455; direct=00402455 sub_00415B30 */
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     (this->field_04DD + 1) * 0xc9,(this->field_04DF + 1) * 0xc9,
                     this->field_0500 * 200 + 100,this->field_0061);
        this->field_050C = CASE_3;
      }
      if (this->field_050C == CASE_3) {
        /* ST_CALLSITE[0046B7A7]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
        local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,(int *)&local_14);
        local_20 = 0;
        if (this->field_02BF != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {

            puVar10 = thunk_FUN_0041dc40(local_4c,(short)*local_10,*(ushort *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar10;
            local_8 = *(short *)(puVar10 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar24 = -1;
              this->field_001C = uVar9;
              sVar23 = 0;
              sVar22 = 0;
              uVar11 = uVar9 * 0x41c64e6d + 0x3039;
              sVar21 = 0;
              this->field_001C = uVar11;
              sVar20 = 0;
              sVar19 = 0;
              local_24 = uVar11 * 0x41c64e6d + 0x3039;
              sVar18 = 0;
              this->field_001C = local_24;
              lVar17 = Library::MSVCRT::__ftol();
              iVar12 = (short)lVar17 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              iVar8 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
              uVar9 = local_24;
            }
            else {
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              bVar26 = 0;
              sVar25 = 0;
              uVar14 = uVar11 * 0x41c64e6d + 0x3039;
              iVar24 = -1;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              this->field_001C = uVar11;
              uVar9 = uVar14 * 0x41c64e6d + 0x3039;
              sVar18 = 0;
              this->field_001C = uVar14;
              this->field_001C = uVar9;
              iVar12 = (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              STPiece<2,2>(local_c) = (short)((uint)local_c >> 0x10);
              iVar8 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
            }
            /* ST_CALLSITE[0046B93E]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + (short)local_c,
                       iVar8 + -3,iVar12,sVar18,sVar19,sVar20,sVar21,sVar22,sVar23,iVar24,sVar25,
                       bVar26);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
          } while (local_20 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_1c == -1) {

          local_EAX_2223 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2419,0,0,"%s",
                                  "STBoatC::Build, BUILD_PMOVE 2");
          if (local_EAX_2223 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x241a);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_1c == 0) {
          this->field_050C = CASE_0;
          this->field_0508 = (-(uint)(this->field_06F7 != CASE_19) & 2) + CASE_3;
        }
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_3) {
      iVar12 = (int)this->field_006C;
      if (0x2d < iVar12 % 0x5a) {
        iVar12 = iVar12 + 0x2d;
      }
      /* ST_CALLSITE[0046BA42]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar9 = sub_00417910(this,(short)(((iVar12 / 0x5a) * 0x5a) % 0x168));
      if (uVar9 == 0xffffffff) {

        local_EAX_2460 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2434,0,0,"%s",
                                "STBoatC::Build, BUILD_ROTATE");
        if (local_EAX_2460 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar12 = 0x2435;
        goto cf_error_exit_0046C422;
      }
      if (uVar9 == 0) {
        this->field_0508 = CASE_4;
        this->field_050C = CASE_2;
        /* ST_CALLSITE[0046BA6C]: CALL dword ptr [EAX + 0xd8] */
        iVar12 = this->vfunc_D8();
        return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_4) {
      if (this->field_050C == CASE_2) {
        /* ST_CALLSITE[0046BAE3]: CALL 0x00402455; direct=00402455 sub_00415B30 */
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,this->field_0041,
                     this->field_0043,this->field_0045 + -200,this->field_0061);
        this->field_050C = CASE_3;
      }
      if (this->field_050C == CASE_3) {
        /* ST_CALLSITE[0046BB04]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
        local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,(int *)&local_18);
        local_20 = 0;
        if (this->field_02BF != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {

            puVar10 = thunk_FUN_0041dc40(local_4c,(short)*local_10,*(ushort *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar10;
            local_8 = *(short *)(puVar10 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar24 = -1;
              this->field_001C = uVar9;
              sVar23 = 0;
              sVar22 = 0;
              uVar11 = uVar9 * 0x41c64e6d + 0x3039;
              sVar21 = 0;
              this->field_001C = uVar11;
              sVar20 = 0;
              sVar19 = 0;
              local_24 = uVar11 * 0x41c64e6d + 0x3039;
              sVar18 = 0;
              this->field_001C = local_24;
              lVar17 = Library::MSVCRT::__ftol();
              iVar12 = (short)lVar17 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              iVar8 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
              uVar9 = local_24;
            }
            else {
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              uVar14 = uVar11 * 0x41c64e6d + 0x3039;
              bVar26 = 0;
              this->field_001C = uVar14;
              uVar9 = uVar14 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar9;
              sVar25 = 0;
              iVar24 = -1;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              sVar18 = 0;
              iVar12 = (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              STPiece<2,2>(local_c) = (short)((uint)local_c >> 0x10);
              iVar8 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
            }
            /* ST_CALLSITE[0046BCA3]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + (short)local_c,
                       iVar8 + -3,iVar12,sVar18,sVar19,sVar20,sVar21,sVar22,sVar23,iVar24,sVar25,
                       bVar26);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
          } while (local_20 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_1c == -1) {

          local_EAX_3077 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x245f,0,0,"%s",
                                  "STBoatC::Build, BUILD_PMOVE2");
          if (local_EAX_3077 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x2460);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_1c == 0) {
          this->field_0508 = CASE_5;
          this->field_050C = CASE_0;
        }
      }
LAB_0046b6e2:
      /* ST_CALLSITE[0046B6E6]: CALL dword ptr [EAX + 0xd8] */
      iVar12 = this->vfunc_D8();
      return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
    }
    if (SVar4 == CASE_5) {
      puVar10 = &local_d8;
      memset(puVar10, 0, 0x6f); /* compiler bulk-zero initialization */
      puVar10 = (undefined4 *)((byte *)puVar10 + 0x6c);
      uVar15 = this->field_0502;
      sVar18 = this->field_04DD;
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
      local_c8 = uVar15;
      local_c0 = local_d4;
      local_b4 = uVar15;
      local_ac = (int)sVar18;
      Library::MSVCRT::_strncpy(local_98,&this->field_0x4eb,0xe);
      local_8a = 0;
      if (this->field_0502 == 0) {

        iVar12 = thunk_FUN_004ae0b0(this->field_04DD,(int)this->field_04DF,(int)this->field_04E1,
                                    this->field_04E3,this->field_0024,nullptr,nullptr,
                                    nullptr,0,nullptr);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar15 = extraout_EDX_00;
        if ((iVar12 != 0) &&
           /* ST_CALLSITE[0046BE8D]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
           /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
           (STPlaySystemC::CreateGameObject(this->field_000C,0x3e9,0,0,&local_d8,0),
           uVar15 = extraout_EDX_01, this->field_06F7 == CASE_19)) {
          local_44.arg0.ptr = &local_68;
          local_68 = 10000;
          local_64 = 0;
          local_60 = 0xfe;
          local_54 = 1;
          local_50 = 1;
          local_44.id = MESS_HITKILL;
          /* ST_CALLSITE[0046BECB]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/STBoatC;pointer:/SubmarineTitans/Recovered/STMessage */
          this->GetMessage(&local_44);
          goto cf_common_exit_0046C3C5;
        }
      }
      else {

        iVar12 = thunk_FUN_004ae0b0(this->field_04DD,(int)this->field_04DF,(int)this->field_04E1,
                                    this->field_04E3,this->field_0024,nullptr,nullptr,
                                    nullptr,0,nullptr);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar15 = extraout_EDX_02;
        if ((iVar12 != 0) &&
           /* ST_CALLSITE[0046BF13]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
           /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
           (STPlaySystemC::CreateGameObject(this->field_000C,0x3e9,0,0,&local_d8,0),
           uVar15 = extraout_EDX_03, this->field_06F7 == CASE_19)) {
          local_44.arg0.ptr = &local_68;
          local_68 = 10000;
          local_64 = 0;
          local_60 = 0xfe;
          local_54 = 1;
          local_50 = 1;
          local_44.id = MESS_HITKILL;
          /* ST_CALLSITE[0046BF4D]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/STBoatC;pointer:/SubmarineTitans/Recovered/STMessage */
          this->GetMessage(&local_44);
          goto cf_common_exit_0046C3C5;
        }
      }
      if (this->field_0502 == 1) {
        this->field_0508 = CASE_6;
      }
      else {
        this->field_0508 = CASE_7;
        thunk_FUN_0048df40(this,uVar15);
        /* ST_CALLSITE[0046BF96]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
        /* ST_CALLSITE[0046BF9E]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
        iVar12 = sub_0045FF50(this,0);
        if (iVar12 == -1) {
          return -1;
        }
      }
cf_common_exit_0046C04E:
      /* ST_CALLSITE[0046C052]: CALL dword ptr [EAX + 0xd8] */
      iVar12 = this->vfunc_D8();
      return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
    }
    if (SVar4 == CASE_6) {
      if (this->field_050C == CASE_0) {
        iVar12 = STReplaceLowWord((uint32_t)(pSVar13), (uint16_t)(this->field_04FE * 0xc9)) + 100;
        /* ST_CALLSITE[0046C007]: CALL dword ptr [EDX + 0x10] */
        uVar7 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_0045)),
                           this->field_04FC * 0xc9 + 100,(short)iVar12,
                           (ushort)(this->field_0500 * 200) + 100);
        this->field_0506 = uVar7;
        this->field_050C = CASE_1;
      }
      if (this->field_050C == CASE_1) {
        /* ST_CALLSITE[0046C02E]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STBoatC; source view only; no Ghidra override */
        uVar9 = sub_004176C0(this,this->field_0506);
        /* ST_CALLSITE[0046C036]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
        uVar9 = sub_00417910(this,(short)uVar9);
        if (uVar9 == 0xffffffff) {

          local_EAX_3970 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x24c1,0,0,"%s",
                                  "STBoatC::Build, BUILD_OMOVE");
          if (local_EAX_3970 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar12 = 0x24c2;
          goto cf_error_exit_0046C422;
        }
        if (uVar9 == 0) {
          this->field_050C = CASE_2;
          goto cf_common_exit_0046C04E;
        }
      }
      if (this->field_050C == CASE_2) {
        /* ST_CALLSITE[0046C0E7]: CALL 0x00402455; direct=00402455 sub_00415B30 */
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_04FC * 0xc9 + 100,this->field_04FE * 0xc9 + 100,
                     this->field_0500 * 200 + 100,this->field_0061);
        this->field_050C = CASE_3;
      }
      if (this->field_050C == CASE_3) {
        /* ST_CALLSITE[0046C108]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
        local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,(int *)&local_18);
        local_20 = 0;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar15 = extraout_EDX_04;
        if (this->field_02BF != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {

            puVar10 = thunk_FUN_0041dc40(local_4c,(short)*local_10,*(ushort *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar10;
            local_8 = *(short *)(puVar10 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar24 = -1;
              this->field_001C = uVar9;
              sVar23 = 0;
              sVar22 = 0;
              uVar11 = uVar9 * 0x41c64e6d + 0x3039;
              sVar21 = 0;
              this->field_001C = uVar11;
              sVar20 = 0;
              sVar19 = 0;
              local_24 = uVar11 * 0x41c64e6d + 0x3039;
              sVar18 = 0;
              this->field_001C = local_24;
              lVar17 = Library::MSVCRT::__ftol();
              iVar12 = (short)lVar17 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              iVar8 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
              uVar9 = local_24;
            }
            else {
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              uVar14 = uVar11 * 0x41c64e6d + 0x3039;
              bVar26 = 0;
              this->field_001C = uVar14;
              uVar9 = uVar14 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar9;
              sVar25 = 0;
              iVar24 = -1;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              sVar18 = 0;
              iVar12 = (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              STPiece<2,2>(local_c) = (short)((uint)local_c >> 0x10);
              iVar8 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
            }
            /* ST_CALLSITE[0046C2A7]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + (short)local_c,
                       iVar8 + -3,iVar12,sVar18,sVar19,sVar20,sVar21,sVar22,sVar23,iVar24,sVar25,
                       bVar26);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            uVar15 = extraout_EDX_05;
          } while (local_20 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_1c == -1) {

          local_EAX_4673 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x24e7,0,0,"%s",
                                  "STBoatC::Build, BUILD_OMOVE 2");
          if (local_EAX_4673 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x24e8);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_1c == 0) {
          this->field_0508 = CASE_7;
          thunk_FUN_0048df40(this,uVar15);
          /* ST_CALLSITE[0046C307]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
          sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
          /* ST_CALLSITE[0046C310]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
          iVar12 = sub_0045FF50(this,0);
          if (iVar12 == -1) {
            return -1;
          }
        }
      }
      goto cf_common_exit_0046C04E;
    }
    if (SVar4 != CASE_7) {

      local_EAX_4958 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2510,0,0,"%s",
                              "STBoatC::Build - incorrect entry");
      if (local_EAX_4958 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    /* ST_CALLSITE[0046C384]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
    iVar12 = sub_0045FF50(this,2);
    if (iVar12 == -1) {

      local_EAX_4880 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x24fe,0,0,"%s",
                              "STBoatC::Build, BUILD_ESCMOVE error");
      if (local_EAX_4880 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar12 = 0x24fe;
cf_error_exit_0046C422:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar12);
      return 0xffff;
    }
    if (iVar12 == 0) {
      /* ST_CALLSITE[0046C3E5]: CALL dword ptr [EAX + 0xd8] */
      iVar12 = this->vfunc_D8();
      return -(uint)(iVar12 != 0);
    }
    if (iVar12 != 3) goto cf_common_exit_0046C3C5;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    thunk_FUN_0048df40(this,extraout_EDX_06);
    /* ST_CALLSITE[0046C3B7]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
    sub_00481520(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
LAB_0046c3be:
    /* ST_CALLSITE[0046C3C0]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
    sub_0045FF50(this,0);
  }
cf_common_exit_0046C3C5:
  /* ST_CALLSITE[0046C3C9]: CALL dword ptr [EDX + 0xd8] */
  iVar12 = this->vfunc_D8();
  return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
}

