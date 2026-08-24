#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Capture

   [STSwitchEnumApplier] Switch target field_0615 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0615State. Cases: CASE_0=0;CASE_2=2;CASE_5=5 */

int __thiscall STBoatC::Capture(STBoatC *this,int param_1)

{
  STBoatC_field_0611State SVar1;
  STWorldObject *pSVar2;
  STBoatC_field_06F7State SVar3;
  short sVar5;
  int local_EAX_51;
  int local_EAX_97;
  int local_EAX_229;
  ushort uVar6;
  int iVar7;
  STGameObjC *pSVar8;
  uint uVar9;
  int local_EAX_1129;
  uint *puVar10;
  uint uVar11;
  STBoatCVTable *pSVar12;
  int local_EAX_2033;
  int uVar8;
  int local_EAX_2791;
  int local_EAX_3531;
  int local_EAX_3737;
  int iVar6;
  int iVar13;
  uint uVar14;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  uint uVar15;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_02;
  int iVar16;
  short sVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  byte bVar24;
  STMessage local_64;
  STMessage local_44;
  undefined4 local_24 [2];
  uint local_1c;
  short local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    this->field_05FD = *(undefined2 *)&this->field_0x3ed;
    this->field_05FC = this->field_0x3ec;
    this->field_0x5ff = this->field_0x3ef;
    *(undefined2 *)&this->field_0x600 = this->field_03F0;
    this->field_0x602 = this->field_03F2;
    iVar7 = thunk_FUN_00492b20(this);
    if (iVar7 != 1) {
      return 0;
    }
    iVar13 = (int)this->field_0607;
    iVar16 = (int)this->field_0605;
    iVar7 = (int)this->field_0603;
    this->field_0611 = CASE_0;
    goto cf_common_exit_00476DBA;
  }
  SVar1 = this->field_0611;
  if (SVar1 == CASE_0) {
    /* ST_CALLSITE[00476D13]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
    local_EAX_51 = sub_00460260(this,2);
    switch(local_EAX_51) {
    case 0:
      iVar7 = thunk_FUN_00492b20(this);
      if (iVar7 != 0) {
        if (((this->field_0603 == this->field_0047) && (this->field_0605 == this->field_0049)) &&
           (this->field_0607 == this->field_004B)) {
          this->field_0611 = CASE_1;
          return 2;
        }
        iVar13 = (int)this->field_0607;
        iVar16 = (int)this->field_0605;
        iVar7 = (int)this->field_0603;
cf_common_exit_00476DBA:
        /* ST_CALLSITE[00476DBC]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        sub_00481520(this,iVar7,iVar16,iVar13);
        /* ST_CALLSITE[00476DC5]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
        local_EAX_229 = sub_00460260(this,0);
        return (-(uint)(local_EAX_229 != -1) & 3) - 1;
      }
      break;
    case 1:
      /* ST_CALLSITE[00476DF2]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      pSVar8 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
      if (((pSVar8 != nullptr) && (pSVar8->field_0018 == *(int *)&this->field_0x5ff)) &&
         /* ST_CALLSITE[00476E10]: CALL dword ptr [EDX + 0x108]; [STIndirectCallsiteApplier] exact slot 0x108; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined4 */
         (iVar7 = (*pSVar8->vtable[1].vfunc_34)(pSVar8,this->field_0024), iVar7 != 0)) {
        return 2;
      }
      /* ST_CALLSITE[00476E20]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
      sub_004602B0(this);
      break;
    default:
      return 2;
    case 3:
      iVar7 = thunk_FUN_00492b20(this);
      if (iVar7 == 1) {
        iVar13 = (int)this->field_0607;
        iVar16 = (int)this->field_0605;
        iVar7 = (int)this->field_0603;
        goto cf_common_exit_00476DBA;
      }
      break;
    case -1:
      local_EAX_97 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x31d2,0,0,
                                        "%s","STBoatC::Capture, CAPTURE_MOVE error");
      if (local_EAX_97 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return 0xffff;
    }
    return 0;
  }
  if (SVar1 == CASE_1) {
    /* ST_CALLSITE[00476E64]: CALL dword ptr [EDX + 0xd8] */
    iVar7 = this->vfunc_D8();
    if (iVar7 != 0) {
      return -1;
    }
    /* ST_CALLSITE[00476E90]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar8 = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
    if (pSVar8 == nullptr) {
      return 0;
    }
    if (pSVar8->field_0018 != *(int *)&this->field_0x5ff) {
      return 0;
    }
    /* ST_CALLSITE[00476EB4]: CALL dword ptr [EAX + 0x108]; [STIndirectCallsiteApplier] exact slot 0x108; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined4 */
    iVar7 = (*pSVar8->vtable[1].vfunc_34)(pSVar8,this->field_0024);
    if (iVar7 != 0) {
      if (pSVar8->field_002C == 0) {
        thunk_FUN_004cd3e0(pSVar8,this->field_0018,this->field_0024);
        SVar3 = this->field_06F7;
        this->field_0611 = CASE_3;
        if (SVar3 == CASE_6) {
          /* ST_CALLSITE[00477078]: CALL dword ptr [EAX + 0x90] */
          this->vfunc_90(3,0xed);
          return 2;
        }
        if (SVar3 != CASE_12) {
          if (SVar3 != CASE_22) {
            return 2;
          }
          /* ST_CALLSITE[0047703A]: CALL dword ptr [EAX + 0x90] */
          this->vfunc_90(3,0x1d2);
          return 2;
        }
        /* ST_CALLSITE[00477059]: CALL dword ptr [EDX + 0x90] */
        this->vfunc_90(3,0x151);
        return 2;
      }
      if (pSVar8->field_002C != 1) {
        return 2;
      }
      sVar17 = this->field_0609;
      iVar16 = (int)sVar17;
      iVar7 = iVar16 + 1;
      if (iVar16 <= iVar7) {
        sVar19 = this->field_060B;
        sVar20 = sVar19;
        do {
          for (; (int)sVar20 <= sVar19 + 1; sVar20 = sVar20 + 1) {
            if ((((((sVar17 != this->field_0047) || (sVar20 != this->field_0049)) &&
                  (sVar5 = this->field_060D + 1, -1 < sVar17)) &&
                 ((sVar17 < g_worldGrid.sizeX && (-1 < sVar20)))) && (sVar20 < g_worldGrid.sizeY))
               && (((-1 < sVar5 && (sVar5 < g_worldGrid.sizeZ)) &&
                   ((pSVar2 = STGridAt3D(g_worldGrid, iVar16, sVar20, sVar5).objects[0],
                    pSVar2 != nullptr &&
                    ((pSVar2->value_20 == 0x14 && (*(int *)((int)&pSVar2[0x1f].vtable + 1) == 9)))))
                   ))) {
              iVar13 = *(int *)&pSVar2[0x2b].field_0x5;
              if (iVar13 == 2) {
                return 2;
              }
              if (iVar13 == 3) {
                return 2;
              }
              if (iVar13 == 4) {
                return 2;
              }
            }
          }
          sVar17 = sVar17 + 1;
          iVar16 = (int)sVar17;
          sVar20 = sVar19;
        } while (iVar16 <= iVar7);
      }
      this->field_0611 = CASE_2;
      this->field_0615 = CASE_0;
      return 2;
    }
    return 0;
  }
  if (SVar1 == CASE_2) {
    if (this->field_0615 == CASE_0) {
      iVar16 = (ushort)(this->field_060D * 200) + 300;
      iVar7 = STReplaceLowWord((uint32_t)(iVar16), (uint16_t)(this->field_060B + 1)) * 0xc9;
      iVar13 = STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_0609 + 1));
      /* ST_CALLSITE[004770EA]: CALL dword ptr [EDX + 0x10] */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar6 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         CONCAT22((short)((uint)(iVar13 * 0x19) >> 0x10),this->field_0045),
                         (short)(iVar13 * 0xc9),(short)iVar7,iVar16);
      this->field_060F = uVar6;
      this->field_0615 = 1;
    }
    if (this->field_0615 == 1) {
      /* ST_CALLSITE[0047710C]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      uVar9 = sub_004176C0(this,this->field_060F);
      /* ST_CALLSITE[00477114]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar9 = sub_00417910(this,(short)uVar9);
      if (uVar9 == 0xffffffff) {
        local_EAX_1129 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3237,0,0,"%s",
                                "STBoatC::Capture, CAPTURE_PMOVE");
        if (local_EAX_1129 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (uVar9 == 0) {
        this->field_0615 = CASE_2;
        goto cf_common_exit_00477B2E;
      }
    }
    if (this->field_0615 == CASE_2) {
      /* ST_CALLSITE[004771C0]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   (this->field_0609 + 1) * 0xc9,(this->field_060B + 1) * 0xc9,
                   this->field_060D * 200 + 300,this->field_0061);
      this->field_0615 = 3;
    }
    if (this->field_0615 == 3) {
      /* ST_CALLSITE[004771E1]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      local_8 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_c);
      param_1 = 0;
      if (this->field_02BF != '\0') {
        do {
          puVar10 = thunk_FUN_0041dc40(local_24,(short)*(undefined4 *)
                                                        (&this->field_0x2b3 + (short)param_1 * 6),
                                       *(ushort *)(&this->field_0x2b7 + (short)param_1 * 6),
                                       this->field_006C);
          uVar15 = *puVar10;
          local_18 = *(short *)(puVar10 + 1);
          local_1c = uVar15;
          if (DAT_0080732c == 1) {
            bVar24 = 0;
            sVar23 = 0;
            uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar7 = -1;
            this->field_001C = uVar9;
            sVar22 = 0;
            sVar21 = 0;
            uVar11 = uVar9 * 0x41c64e6d + 0x3039;
            sVar5 = 0;
            this->field_001C = uVar11;
            sVar20 = 0;
            sVar19 = 0;
            local_14 = uVar11 * 0x41c64e6d + 0x3039;
            sVar17 = 0;
            this->field_001C = local_14;
            lVar18 = Library::MSVCRT::__ftol();
            /* ST_CALLSITE[00477303]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                       (((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_1c)) + -3,
                       (int)(short)lVar18 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_18,sVar17,sVar19,sVar20,sVar5,sVar21,sVar22,iVar7,sVar23,bVar24);
          }
          else {
            uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar11;
            uVar14 = uVar11 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar14;
            uVar9 = uVar14 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar9;
            STPiece<2,2>(local_1c) = (short)((uint)uVar15 >> 0x10);
            iVar7 = (int)STPiece<2,2>(local_1c);
            STPiece<0,2>(local_1c) = (short)uVar15;
            iVar16 = (int)(short)local_1c;
            /* ST_CALLSITE[004773B3]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar16,
                       (((uVar14 >> 0x10) % 7 + (int)this->field_0043) - iVar7) + -3,
                       (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0,0
                       ,-1,0,0);
          }
          param_1 = param_1 + 1;
        } while ((short)param_1 < (short)(ushort)(byte)this->field_02BF);
      }
      if (local_8 == -1) {
        local_EAX_2033 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x325c,0,0,"%s",
                                "STBoatC::Capture, CAPTURE_PMOVE 2");
        if (local_EAX_2033 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (local_8 == 0) {
        /* ST_CALLSITE[004773FA]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar8 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
        if (((pSVar8 == nullptr) || (pSVar8->field_0018 != *(int *)&this->field_0x5ff)) ||
           /* ST_CALLSITE[00477422]: CALL dword ptr [EDX + 0x108]; [STIndirectCallsiteApplier] exact slot 0x108; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined4 */
           (iVar7 = (*pSVar8->vtable[1].vfunc_34)(pSVar8,this->field_0024), iVar7 == 0)) {
          this->field_0611 = CASE_4;
          this->field_0615 = CASE_0;
        }
        else {
          thunk_FUN_004cd3e0(pSVar8,this->field_0018,this->field_0024);
          SVar3 = this->field_06F7;
          this->field_0611 = CASE_3;
          if (SVar3 == CASE_6) {
            pSVar12 = this->vtable;
            uVar6 = 0xed;
          }
          else {
            if (SVar3 == CASE_12) {
              /* ST_CALLSITE[00477492]: CALL dword ptr [EDX + 0x90] */
              this->vfunc_90(3,0x151);
              goto cf_common_exit_0047746B;
            }
            if (SVar3 != CASE_22) goto cf_common_exit_0047746B;
            pSVar12 = this->vtable;
            uVar6 = 0x1d2;
          }
          /* ST_CALLSITE[00477465]: CALL dword ptr [EAX + 0x90] */
          (*pSVar12->vfunc_90)(this,3,uVar6);
        }
      }
    }
  }
  else {
    if (SVar1 != CASE_3) {
      if (SVar1 != CASE_4) {
        if (SVar1 != CASE_5) {
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x330e,0,0,
                                     "%s","STBoatC::Capture - incorrect entry");
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        /* ST_CALLSITE[00477AED]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
        iVar7 = sub_0045FF50(this,2);
        if (iVar7 == -1) {
          local_EAX_3737 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x32fc,0,0,"%s",
                                  "STBoatC::Capture, CAPTURE_ESCMOVE error");
          if (local_EAX_3737 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (iVar7 == 0) {
          /* ST_CALLSITE[00477B4E]: CALL dword ptr [EDX + 0xd8] */
          iVar7 = this->vfunc_D8();
          return -(uint)(iVar7 != 0);
        }
        if (iVar7 == 3) {
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          thunk_FUN_00492f30(this,extraout_EDX_02);
          /* ST_CALLSITE[00477B20]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
          sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
          /* ST_CALLSITE[00477B29]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
          sub_0045FF50(this,0);
        }
cf_common_exit_00477B2E:
        /* ST_CALLSITE[00477B32]: CALL dword ptr [EAX + 0xd8] */
        iVar7 = this->vfunc_D8();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      if (this->field_0615 == CASE_0) {
        iVar7 = STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_0605 * 0xc9)) + 100;
        /* ST_CALLSITE[00477768]: CALL dword ptr [EDX + 0x10] */
        uVar6 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_0045)),
                           this->field_0603 * 0xc9 + 100,(short)iVar7,
                           (ushort)(this->field_0607 * 200) + 100);
        this->field_060F = uVar6;
        this->field_0615 = 1;
      }
      if (this->field_0615 == 1) {
        /* ST_CALLSITE[0047778A]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
        uVar9 = sub_004176C0(this,this->field_060F);
        /* ST_CALLSITE[00477792]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
        uVar9 = sub_00417910(this,(short)uVar9);
        if (uVar9 == 0xffffffff) {
          local_EAX_2791 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x32c1,0,0,"%s",
                                  "STBoatC::Capture, CAPTURE_OMOVE");
          if (local_EAX_2791 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (uVar9 == 0) {
          this->field_0615 = CASE_2;
          goto cf_common_exit_00477B2E;
        }
      }
      if (this->field_0615 == CASE_2) {
        /* ST_CALLSITE[0047782E]: CALL 0x00402455; direct=00402455 sub_00415B30 */
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_0603 * 0xc9 + 100,this->field_0605 * 0xc9 + 100,
                     this->field_0607 * 200 + 100,this->field_0061);
        this->field_0615 = 3;
      }
      if (this->field_0615 == 3) {
        /* ST_CALLSITE[0047784F]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
        local_8 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_c,&local_10);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar15 = STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(this->field_02BF));
        param_1 = 0;
        if (this->field_02BF != '\0') {
          do {
            puVar10 = thunk_FUN_0041dc40(local_24,(short)*(undefined4 *)
                                                          (&this->field_0x2b3 + (short)param_1 * 6),
                                         *(ushort *)(&this->field_0x2b7 + (short)param_1 * 6),
                                         this->field_006C);
            uVar15 = *puVar10;
            local_18 = *(short *)(puVar10 + 1);
            local_1c = uVar15;
            if (DAT_0080732c == 1) {
              bVar24 = 0;
              sVar23 = 0;
              uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar7 = -1;
              this->field_001C = uVar9;
              sVar22 = 0;
              sVar21 = 0;
              uVar11 = uVar9 * 0x41c64e6d + 0x3039;
              sVar5 = 0;
              this->field_001C = uVar11;
              sVar20 = 0;
              sVar19 = 0;
              local_14 = uVar11 * 0x41c64e6d + 0x3039;
              sVar17 = 0;
              this->field_001C = local_14;
              lVar18 = Library::MSVCRT::__ftol();
              /* ST_CALLSITE[00477971]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                         (((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_1c)) + -3
                         ,(int)(short)lVar18 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_18,sVar17,sVar19,sVar20,sVar5,sVar21,sVar22,iVar7,sVar23,bVar24
                        );
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar15 = extraout_EDX_00;
            }
            else {
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              uVar14 = uVar11 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar14;
              uVar9 = uVar14 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar9;
              STPiece<2,2>(local_1c) = (short)((uint)uVar15 >> 0x10);
              iVar7 = (int)STPiece<2,2>(local_1c);
              STPiece<0,2>(local_1c) = (short)uVar15;
              iVar16 = (int)(short)local_1c;
              /* ST_CALLSITE[00477A21]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar16,
                         (((uVar14 >> 0x10) % 7 + (int)this->field_0043) - iVar7) + -3,
                         (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0
                         ,0,-1,0,0);
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar15 = extraout_EDX_01;
            }
            param_1 = param_1 + 1;
          } while ((short)param_1 < (short)(ushort)(byte)this->field_02BF);
        }
        if (local_8 == -1) {
          local_EAX_3531 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x32e6,0,0,"%s",
                                  "STBoatC::Capture, CAPTURE_OMOVE 2");
          if (local_EAX_3531 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (local_8 == 0) {
          this->field_0611 = CASE_5;
          thunk_FUN_00492f30(this,uVar15);
          /* ST_CALLSITE[00477A75]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
          sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
          /* ST_CALLSITE[00477A7E]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
          iVar7 = sub_0045FF50(this,0);
          if (iVar7 == -1) {
            return -1;
          }
        }
      }
      /* ST_CALLSITE[00477AC8]: CALL dword ptr [EDX + 0xd8] */
      iVar7 = this->vfunc_D8();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    /* ST_CALLSITE[0047750D]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar8 = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
    if (((pSVar8 == nullptr) || (pSVar8->field_0018 != *(int *)&this->field_0x5ff)) ||
       /* ST_CALLSITE[00477535]: CALL dword ptr [EAX + 0x108]; [STIndirectCallsiteApplier] exact slot 0x108; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined4 */
       (iVar7 = (*pSVar8->vtable[1].vfunc_34)(pSVar8,this->field_0024), iVar7 == 0)) {
      if (((int)this->field_0041 == (this->field_0609 + 1) * 0xc9) &&
         ((int)this->field_0043 == (this->field_060B + 1) * 0xc9)) {
        this->field_0611 = CASE_4;
        this->field_0615 = CASE_0;
        /* ST_CALLSITE[004776E3]: CALL dword ptr [EDX + 0xd8] */
        iVar7 = this->vfunc_D8();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      /* ST_CALLSITE[004776FF]: CALL dword ptr [EAX + 0xd8] */
      iVar7 = this->vfunc_D8();
      return -(uint)(iVar7 != 0);
    }
    iVar7 = thunk_FUN_004cd480((AnonShape_004CC900_31EE9CAA *)pSVar8);
    if (iVar7 == 1) {
      if (g_aiBossClass_008117BC != nullptr) {
        local_44.arg0.words.high = pSVar8->field_0032;
        local_44.arg0.words.low = *(undefined2 *)&pSVar8->field_0024;
        local_44.id = 0x5dd4;
        local_44.arg1.words.high = this->field_0032;
        local_44.arg1.words.low = *(undefined2 *)&this->field_0024;
        /* ST_CALLSITE[0047758C]: CALL dword ptr [EDX] */
        g_aiBossClass_008117BC->GetMessage(&local_44);
      }
      /* ST_CALLSITE[00477592]: CALL dword ptr [EDX + 0x10c]; [STIndirectCallsiteApplier] exact slot 0x10C; signature=__thiscall;/void;pointer:/STGameObjC */
      (*pSVar8->vtable[1].vfunc_38)(pSVar8);
      /* ST_CALLSITE[004775A7]: CALL dword ptr [EAX + 0x110] */
      (*pSVar8->vtable[1].vfunc_3C)((short)this->field_0024);
    }
    else if (iVar7 != 2) goto cf_common_exit_0047746B;
    /* ST_CALLSITE[004775B7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    uVar8 = LookupRecordByte(*(char *)&pSVar8->field_0024);
    /* ST_CALLSITE[004775CB]: CALL dword ptr [EAX + 0x2c] */
    iVar7 = pSVar8->vfunc_2C();
    local_64.arg0.ptr = &local_44.unknown_04;
    local_44.unknown_04 = *(dword *)(&DAT_007e1374 + ((uint)(byte)uVar8 + iVar7 * 3) * 4);
    local_44.unknown_0c = 0xff;
    local_44.unknown_08 = 0;
    local_44.arg1.u32 = 1;
    local_64.id = MESS_TORPHIT;
    /* ST_CALLSITE[00477604]: CALL dword ptr [EDX] */
    this->GetMessage(&local_64);
    iVar7 = (this->field_0609 + 1) * 0xc9;
    if ((this->field_0041 == iVar7) &&
       (iVar7 = (this->field_060B + 1) * 0xc9, this->field_0043 == iVar7)) {
      this->field_0611 = CASE_4;
      this->field_0615 = CASE_0;
    }
    else {
      this->field_0611 = CASE_5;
      thunk_FUN_00492f30(this,iVar7);
      /* ST_CALLSITE[00477678]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
      sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
      /* ST_CALLSITE[00477680]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
      iVar7 = sub_0045FF50(this,0);
      if (iVar7 == -1) {
        return -1;
      }
    }
  }
cf_common_exit_0047746B:
  /* ST_CALLSITE[0047746F]: CALL dword ptr [EDX + 0xd8] */
  iVar7 = this->vfunc_D8();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
}

