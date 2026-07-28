#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Capture */

int __thiscall STBoatC::Capture(STBoatC *this,int param_1)

{
  STBoatC_field_0611State SVar1;
  STWorldObject *pSVar2;
  code *pcVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  STGameObjC *pSVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  STBoatCVTable *pSVar11;
  int iVar12;
  uint uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  int iVar14;
  short sVar15;
  longlong lVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  byte bVar22;
  undefined4 uVar23;
  STMessage local_64;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_24 [2];
  undefined4 local_1c;
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
    this->field_05FF = *(undefined4 *)&this->field_0x3ef;
    iVar6 = thunk_FUN_00492b20(this);
    if (iVar6 != 1) {
      return 0;
    }
    iVar12 = (int)this->field_0607;
    iVar14 = (int)this->field_0605;
    iVar6 = (int)this->field_0603;
    this->field_0611 = CASE_0;
    goto cf_common_exit_00476DBA;
  }
  SVar1 = this->field_0611;
  if (SVar1 == CASE_0) {
    iVar6 = sub_00460260(this,2);
    switch(iVar6) {
    case 0:
      iVar6 = thunk_FUN_00492b20(this);
      if (iVar6 != 0) {
        if (((this->field_0603 == this->field_0047) && (this->field_0605 == this->field_0049)) &&
           (this->field_0607 == this->field_004B)) {
          this->field_0611 = CASE_1;
          return 2;
        }
        iVar12 = (int)this->field_0607;
        iVar14 = (int)this->field_0605;
        iVar6 = (int)this->field_0603;
cf_common_exit_00476DBA:
        sub_00481520(this,iVar6,iVar14,iVar12);
        iVar6 = sub_00460260(this,0);
        return (-(uint)(iVar6 != -1) & 3) - 1;
      }
      break;
    case 1:
      pSVar7 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
      if (((pSVar7 != (STGameObjC *)0x0) && (pSVar7->field_0018 == this->field_05FF)) &&
         (iVar6 = (*pSVar7->vtable->vfunc_108)(this->field_0024), iVar6 != 0)) {
        return 2;
      }
      sub_004602B0(this);
      break;
    default:
      return 2;
    case 3:
      iVar6 = thunk_FUN_00492b20(this);
      if (iVar6 == 1) {
        iVar12 = (int)this->field_0607;
        iVar14 = (int)this->field_0605;
        iVar6 = (int)this->field_0603;
        goto cf_common_exit_00476DBA;
      }
      break;
    case -1:
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x31d2,0,0,"%s",
                                 "STBoatC::Capture, CAPTURE_MOVE error");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return 0xffff;
    }
    return 0;
  }
  if (SVar1 == CASE_1) {
    iVar6 = this->vfunc_D8();
    if (iVar6 != 0) {
      return -1;
    }
    pSVar7 = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
    if (pSVar7 == (STGameObjC *)0x0) {
      return 0;
    }
    if (pSVar7->field_0018 != this->field_05FF) {
      return 0;
    }
    iVar6 = (*pSVar7->vtable->vfunc_108)(this->field_0024);
    if (iVar6 != 0) {
      if (pSVar7->field_002C == 0) {
        thunk_FUN_004cd3e0(pSVar7,this->field_0018,this->field_0024);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar6 = *(int *)((int)this->field_06CB + 0x2c);
        this->field_0611 = CASE_3;
        if (iVar6 == 6) {
          this->vfunc_90(3,0xed);
          return 2;
        }
        if (iVar6 != 0x12) {
          if (iVar6 != 0x22) {
            return 2;
          }
          this->vfunc_90(3,0x1d2);
          return 2;
        }
        this->vfunc_90(3,0x151);
        return 2;
      }
      if (pSVar7->field_002C != 1) {
        return 2;
      }
      sVar15 = this->field_0609;
      iVar14 = (int)sVar15;
      iVar6 = iVar14 + 1;
      if (iVar14 <= iVar6) {
        sVar17 = this->field_060B;
        sVar18 = sVar17;
        do {
          for (; (int)sVar18 <= sVar17 + 1; sVar18 = sVar18 + 1) {
            if ((((((sVar15 != this->field_0047) || (sVar18 != this->field_0049)) &&
                  (sVar4 = this->field_060D + 1, -1 < sVar15)) &&
                 ((sVar15 < g_worldGrid.sizeX && (-1 < sVar18)))) && (sVar18 < g_worldGrid.sizeY))
               && (((-1 < sVar4 && (sVar4 < g_worldGrid.sizeZ)) &&
                   ((pSVar2 = g_worldGrid.cells
                              [(int)g_worldGrid.sizeX * (int)sVar18 +
                               iVar14 + (int)sVar4 * (int)g_worldGrid.planeStride].objects[0],
                    pSVar2 != (STWorldObject *)0x0 &&
                    ((pSVar2->value_20 == 0x14 && (*(int *)((int)&pSVar2[0x1f].vtable + 1) == 9)))))
                   ))) {
              iVar12 = *(int *)&pSVar2[0x2b].field_0x5;
              if (iVar12 == 2) {
                return 2;
              }
              if (iVar12 == 3) {
                return 2;
              }
              if (iVar12 == 4) {
                return 2;
              }
            }
          }
          sVar15 = sVar15 + 1;
          iVar14 = (int)sVar15;
          sVar18 = sVar17;
        } while (iVar14 <= iVar6);
      }
      this->field_0611 = CASE_2;
      this->field_0615 = 0;
      return 2;
    }
    return 0;
  }
  if (SVar1 == CASE_2) {
    if (this->field_0615 == 0) {
      iVar14 = (ushort)(this->field_060D * 200) + 300;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22((short)((uint)iVar14 >> 0x10),this->field_060B + 1) * 0xc9;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar12 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0609 + 1);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         CONCAT22((short)((uint)(iVar12 * 0x19) >> 0x10),this->field_0045),
                         (short)(iVar12 * 0xc9),(short)iVar6,iVar14);
      this->field_060F = uVar5;
      this->field_0615 = 1;
    }
    if (this->field_0615 == 1) {
      uVar8 = sub_004176C0(this,this->field_060F);
      uVar8 = sub_00417910(this,(short)uVar8);
      if (uVar8 == 0xffffffff) {
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3237,0,0,"%s",
                                   "STBoatC::Capture, CAPTURE_PMOVE");
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (uVar8 == 0) {
        this->field_0615 = 2;
        goto cf_common_exit_00477B2E;
      }
    }
    if (this->field_0615 == 2) {
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   (this->field_0609 + 1) * 0xc9,(this->field_060B + 1) * 0xc9,
                   this->field_060D * 200 + 300,this->field_0061);
      this->field_0615 = 3;
    }
    if (this->field_0615 == 3) {
      local_8 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_c);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = 0;
      if (this->field_02BF != '\0') {
        do {
          puVar9 = (undefined4 *)
                   thunk_FUN_0041dc40(local_24,(short)*(undefined4 *)
                                                       (&this->field_0x2b3 + (short)param_1 * 6),
                                      *(ushort *)(&this->field_0x2b7 + (short)param_1 * 6),
                                      this->field_006C);
          uVar23 = *puVar9;
          local_18 = *(short *)(puVar9 + 1);
          local_1c = uVar23;
          if (DAT_0080732c == 1) {
            bVar22 = 0;
            sVar21 = 0;
            uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar6 = -1;
            this->field_001C = uVar8;
            sVar20 = 0;
            sVar19 = 0;
            uVar10 = uVar8 * 0x41c64e6d + 0x3039;
            sVar4 = 0;
            this->field_001C = uVar10;
            sVar18 = 0;
            sVar17 = 0;
            local_14 = uVar10 * 0x41c64e6d + 0x3039;
            sVar15 = 0;
            this->field_001C = local_14;
            lVar16 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                       (((uVar10 >> 0x10) % 7 + (int)this->field_0043) - (int)local_1c._2_2_) + -3,
                       (int)(short)lVar16 + (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_18,sVar15,sVar17,sVar18,sVar4,sVar19,sVar20,iVar6,sVar21,bVar22);
          }
          else {
            uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar10;
            uVar13 = uVar10 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar13;
            uVar8 = uVar13 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar8;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_1c._2_2_ = (short)((uint)uVar23 >> 0x10);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar6 = (int)local_1c._2_2_;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_1c._0_2_ = (short)uVar23;
            iVar14 = (int)(short)local_1c;
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar8 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar14,
                       (((uVar13 >> 0x10) % 7 + (int)this->field_0043) - iVar6) + -3,
                       (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0,0
                       ,-1,0,0);
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = param_1 + 1;
        } while ((short)param_1 < (short)(ushort)(byte)this->field_02BF);
      }
      if (local_8 == -1) {
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x325c,0,0,"%s",
                                   "STBoatC::Capture, CAPTURE_PMOVE 2");
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (local_8 == 0) {
        pSVar7 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
        if (((pSVar7 == (STGameObjC *)0x0) || (pSVar7->field_0018 != this->field_05FF)) ||
           (iVar6 = (*pSVar7->vtable->vfunc_108)(this->field_0024), iVar6 == 0)) {
          this->field_0611 = CASE_4;
          this->field_0615 = 0;
        }
        else {
          thunk_FUN_004cd3e0(pSVar7,this->field_0018,this->field_0024);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar6 = *(int *)((int)this->field_06CB + 0x2c);
          this->field_0611 = CASE_3;
          if (iVar6 == 6) {
            pSVar11 = this->vtable;
            uVar23 = 0xed;
          }
          else {
            if (iVar6 == 0x12) {
              this->vfunc_90(3,0x151);
              goto cf_common_exit_0047746B;
            }
            if (iVar6 != 0x22) goto cf_common_exit_0047746B;
            pSVar11 = this->vtable;
            uVar23 = 0x1d2;
          }
          (*pSVar11->vfunc_90)(this,3,uVar23);
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
        iVar6 = sub_0045FF50(this,2);
        if (iVar6 == -1) {
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x32fc,0,0,
                                     "%s","STBoatC::Capture, CAPTURE_ESCMOVE error");
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (iVar6 == 0) {
          iVar6 = this->vfunc_D8();
          return -(uint)(iVar6 != 0);
        }
        if (iVar6 == 3) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          thunk_FUN_00492f30(this,extraout_EDX_02);
          sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
          sub_0045FF50(this,0);
        }
cf_common_exit_00477B2E:
        iVar6 = this->vfunc_D8();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      if (this->field_0615 == 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar6 = CONCAT22((short)((uint)this >> 0x10),this->field_0605 * 0xc9) + 100;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar5 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0045),
                           this->field_0603 * 0xc9 + 100,(short)iVar6,
                           (ushort)(this->field_0607 * 200) + 100);
        this->field_060F = uVar5;
        this->field_0615 = 1;
      }
      if (this->field_0615 == 1) {
        uVar8 = sub_004176C0(this,this->field_060F);
        uVar8 = sub_00417910(this,(short)uVar8);
        if (uVar8 == 0xffffffff) {
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x32c1,0,0,
                                     "%s","STBoatC::Capture, CAPTURE_OMOVE");
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (uVar8 == 0) {
          this->field_0615 = 2;
          goto cf_common_exit_00477B2E;
        }
      }
      if (this->field_0615 == 2) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_0603 * 0xc9 + 100,this->field_0605 * 0xc9 + 100,
                     this->field_0607 * 200 + 100,this->field_0061);
        this->field_0615 = 3;
      }
      if (this->field_0615 == 3) {
        local_8 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_c,&local_10);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar23 = CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_02BF);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = 0;
        if (this->field_02BF != '\0') {
          do {
            puVar9 = (undefined4 *)
                     thunk_FUN_0041dc40(local_24,(short)*(undefined4 *)
                                                         (&this->field_0x2b3 + (short)param_1 * 6),
                                        *(ushort *)(&this->field_0x2b7 + (short)param_1 * 6),
                                        this->field_006C);
            uVar23 = *puVar9;
            local_18 = *(short *)(puVar9 + 1);
            local_1c = uVar23;
            if (DAT_0080732c == 1) {
              bVar22 = 0;
              sVar21 = 0;
              uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar6 = -1;
              this->field_001C = uVar8;
              sVar20 = 0;
              sVar19 = 0;
              uVar10 = uVar8 * 0x41c64e6d + 0x3039;
              sVar4 = 0;
              this->field_001C = uVar10;
              sVar18 = 0;
              sVar17 = 0;
              local_14 = uVar10 * 0x41c64e6d + 0x3039;
              sVar15 = 0;
              this->field_001C = local_14;
              lVar16 = Library::MSVCRT::__ftol();
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                         (((uVar10 >> 0x10) % 7 + (int)this->field_0043) - (int)local_1c._2_2_) + -3
                         ,(int)(short)lVar16 + (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_18,sVar15,sVar17,sVar18,sVar4,sVar19,sVar20,iVar6,sVar21,bVar22
                        );
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar23 = extraout_EDX_00;
            }
            else {
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar10;
              uVar13 = uVar10 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar13;
              uVar8 = uVar13 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar8;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_1c._2_2_ = (short)((uint)uVar23 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar6 = (int)local_1c._2_2_;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_1c._0_2_ = (short)uVar23;
              iVar14 = (int)(short)local_1c;
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar8 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar14,
                         (((uVar13 >> 0x10) % 7 + (int)this->field_0043) - iVar6) + -3,
                         (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0
                         ,0,-1,0,0);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar23 = extraout_EDX_01;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + 1;
          } while ((short)param_1 < (short)(ushort)(byte)this->field_02BF);
        }
        if (local_8 == -1) {
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x32e6,0,0,
                                     "%s","STBoatC::Capture, CAPTURE_OMOVE 2");
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (local_8 == 0) {
          this->field_0611 = CASE_5;
          thunk_FUN_00492f30(this,uVar23);
          sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
          iVar6 = sub_0045FF50(this,0);
          if (iVar6 == -1) {
            return -1;
          }
        }
      }
      iVar6 = this->vfunc_D8();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    pSVar7 = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
    if (((pSVar7 == (STGameObjC *)0x0) || (pSVar7->field_0018 != this->field_05FF)) ||
       (iVar6 = (*pSVar7->vtable->vfunc_108)(this->field_0024), iVar6 == 0)) {
      if (((int)this->field_0041 == (this->field_0609 + 1) * 0xc9) &&
         ((int)this->field_0043 == (this->field_060B + 1) * 0xc9)) {
        this->field_0611 = CASE_4;
        this->field_0615 = 0;
        iVar6 = this->vfunc_D8();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    iVar6 = thunk_FUN_004cd480((AnonShape_004CC900_31EE9CAA *)pSVar7);
    if (iVar6 == 1) {
      if (DAT_008117bc != (undefined4 *)0x0) {
        local_2e = pSVar7->field_0032;
        local_30 = *(undefined2 *)&pSVar7->field_0024;
        local_34 = 0x5dd4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_2c = CONCAT22(this->field_0032,*(undefined2 *)&this->field_0024);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)(local_44);
      }
      pSVar7->vfunc_10C();
      (*pSVar7->vtable->vfunc_110)(this->field_0024,(int)this->field_06CB[5]);
    }
    else if (iVar6 != 2) goto cf_common_exit_0047746B;
    uVar8 = GetPlayerRaceId(*(char *)&pSVar7->field_0024);
    iVar6 = (*pSVar7->vtable->vfunc_2C)();
    local_64.arg0.ptr = &local_40;
    local_40 = *(undefined4 *)(&DAT_007e1374 + ((uVar8 & 0xff) + iVar6 * 3) * 4);
    local_38 = 0xff;
    local_3c = 0;
    local_2c = 1;
    local_64.id = MESS_TORPHIT;
    this->GetMessage(&local_64);
    iVar6 = (this->field_0609 + 1) * 0xc9;
    if ((this->field_0041 == iVar6) &&
       (iVar6 = (this->field_060B + 1) * 0xc9, this->field_0043 == iVar6)) {
      this->field_0611 = CASE_4;
      this->field_0615 = 0;
    }
    else {
      this->field_0611 = CASE_5;
      thunk_FUN_00492f30(this,iVar6);
      sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
      iVar6 = sub_0045FF50(this,0);
      if (iVar6 == -1) {
        return -1;
      }
    }
  }
cf_common_exit_0047746B:
  iVar6 = this->vfunc_D8();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

