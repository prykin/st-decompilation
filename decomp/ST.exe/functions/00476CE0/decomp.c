#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Capture */

int __thiscall STBoatC::Capture(STBoatC *this,int param_1)

{
  STBoatC_field_0611State SVar1;
  STWorldObject *pSVar2;
  STBoatC_field_06F7State SVar3;
  code *pcVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  STGameObjC *pSVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  STBoatCVTable *pSVar12;
  int iVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  int iVar15;
  short sVar16;
  longlong lVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  byte bVar23;
  undefined4 uVar24;
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

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    this->field_05FD = *(undefined2 *)&this->field_0x3ed;
    this->field_05FC = this->field_0x3ec;
    this->field_05FF = *(undefined4 *)&this->field_0x3ef;
    iVar7 = thunk_FUN_00492b20((AnonShape_00492B20_AFE20A9A *)this);
    if (iVar7 != 1) {
      return 0;
    }
    iVar13 = (int)this->field_0607;
    iVar15 = (int)this->field_0605;
    iVar7 = (int)this->field_0603;
    this->field_0611 = CASE_0;
    goto cf_common_exit_00476DBA;
  }
  SVar1 = this->field_0611;
  if (SVar1 == CASE_0) {
    iVar7 = sub_00460260(this,2);
    switch(iVar7) {
    case 0:
      iVar7 = thunk_FUN_00492b20((AnonShape_00492B20_AFE20A9A *)this);
      if (iVar7 != 0) {
        if (((this->field_0603 == this->field_0047) && (this->field_0605 == this->field_0049)) &&
           (this->field_0607 == this->field_004B)) {
          this->field_0611 = CASE_1;
          return 2;
        }
        iVar13 = (int)this->field_0607;
        iVar15 = (int)this->field_0605;
        iVar7 = (int)this->field_0603;
cf_common_exit_00476DBA:
        sub_00481520(this,iVar7,iVar15,iVar13);
        iVar7 = sub_00460260(this,0);
        return (-(uint)(iVar7 != -1) & 3) - 1;
      }
      break;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    case 1:
      pSVar8 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,this->field_05FC,
                          CONCAT22(extraout_var,this->field_05FD),CASE_1);
      if (((pSVar8 != (STGameObjC *)0x0) && (pSVar8->field_0018 == this->field_05FF)) &&
         (iVar7 = (*pSVar8->vtable->vfunc_108)(this->field_0024), iVar7 != 0)) {
        return 2;
      }
      sub_004602B0(this);
      break;
    default:
      return 2;
    case 3:
      iVar7 = thunk_FUN_00492b20((AnonShape_00492B20_AFE20A9A *)this);
      if (iVar7 == 1) {
        iVar13 = (int)this->field_0607;
        iVar15 = (int)this->field_0605;
        iVar7 = (int)this->field_0603;
        goto cf_common_exit_00476DBA;
      }
      break;
    case -1:
      iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x31d2,0,0,"%s",
                                 "STBoatC::Capture, CAPTURE_MOVE error");
      if (iVar7 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return 0xffff;
    }
    return 0;
  }
  if (SVar1 == CASE_1) {
    iVar7 = (*this->vtable->vfunc_D8)(this);
    if (iVar7 != 0) {
      return -1;
    }
    pSVar8 = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,this->field_05FC,(uint)(ushort)this->field_05FD,CASE_1
                       );
    if (pSVar8 == (STGameObjC *)0x0) {
      return 0;
    }
    if (pSVar8->field_0018 != this->field_05FF) {
      return 0;
    }
    iVar7 = (*pSVar8->vtable->vfunc_108)(this->field_0024);
    if (iVar7 != 0) {
      if (pSVar8->field_002C == 0) {
        thunk_FUN_004cd3e0(pSVar8,this->field_0018,this->field_0024);
        SVar3 = this->field_06F7;
        this->field_0611 = CASE_3;
        if (SVar3 == CASE_6) {
          (*this->vtable->vfunc_90)(this,3,0xed);
          return 2;
        }
        if (SVar3 != CASE_12) {
          if (SVar3 != CASE_22) {
            return 2;
          }
          (*this->vtable->vfunc_90)(this,3,0x1d2);
          return 2;
        }
        (*this->vtable->vfunc_90)(this,3,0x151);
        return 2;
      }
      if (pSVar8->field_002C != 1) {
        return 2;
      }
      sVar16 = this->field_0609;
      iVar15 = (int)sVar16;
      iVar7 = iVar15 + 1;
      if (iVar15 <= iVar7) {
        sVar18 = this->field_060B;
        sVar19 = sVar18;
        do {
          for (; (int)sVar19 <= sVar18 + 1; sVar19 = sVar19 + 1) {
            if ((((((sVar16 != this->field_0047) || (sVar19 != this->field_0049)) &&
                  (sVar5 = this->field_060D + 1, -1 < sVar16)) &&
                 ((sVar16 < g_worldGrid.sizeX && (-1 < sVar19)))) && (sVar19 < g_worldGrid.sizeY))
               && (((-1 < sVar5 && (sVar5 < g_worldGrid.sizeZ)) &&
                   ((pSVar2 = g_worldGrid.cells
                              [(int)g_worldGrid.sizeX * (int)sVar19 +
                               iVar15 + (int)sVar5 * (int)g_worldGrid.planeStride].objects[0],
                    pSVar2 != (STWorldObject *)0x0 &&
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
          sVar16 = sVar16 + 1;
          iVar15 = (int)sVar16;
          sVar19 = sVar18;
        } while (iVar15 <= iVar7);
      }
      this->field_0611 = CASE_2;
      this->field_0615 = 0;
      return 2;
    }
    return 0;
  }
  if (SVar1 == CASE_2) {
    if (this->field_0615 == 0) {
      iVar15 = (ushort)(this->field_060D * 200) + 300;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22((short)((uint)iVar15 >> 0x10),this->field_060B + 1) * 0xc9;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar13 = CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0609 + 1);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar6 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         CONCAT22((short)((uint)(iVar13 * 0x19) >> 0x10),this->field_0045),
                         (short)(iVar13 * 0xc9),(short)iVar7,iVar15);
      this->field_060F = uVar6;
      this->field_0615 = 1;
    }
    if (this->field_0615 == 1) {
      uVar9 = sub_004176C0(this,this->field_060F);
      uVar9 = sub_00417910(this,(short)uVar9);
      if (uVar9 == 0xffffffff) {
        iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3237,0,0,"%s",
                                   "STBoatC::Capture, CAPTURE_PMOVE");
        if (iVar7 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (uVar9 == 0) {
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
      iVar7 = 0;
      param_1 = 0;
      if (this->field_02BF != '\0') {
        do {
          puVar10 = (undefined4 *)
                    thunk_FUN_0041dc40(local_24,(short)*(undefined4 *)
                                                        (&this->field_0x2b3 + (short)param_1 * 6),
                                       *(undefined2 *)(&this->field_0x2b7 + (short)param_1 * 6),
                                       this->field_006C);
          uVar24 = *puVar10;
          local_18 = *(short *)(puVar10 + 1);
          local_1c = uVar24;
          if (DAT_0080732c == 1) {
            bVar23 = 0;
            sVar22 = 0;
            uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar7 = -1;
            this->field_001C = uVar9;
            sVar21 = 0;
            sVar20 = 0;
            uVar11 = uVar9 * 0x41c64e6d + 0x3039;
            sVar5 = 0;
            this->field_001C = uVar11;
            sVar19 = 0;
            sVar18 = 0;
            local_14 = uVar11 * 0x41c64e6d + 0x3039;
            sVar16 = 0;
            this->field_001C = local_14;
            lVar17 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                       (((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)local_1c._2_2_) + -3,
                       (int)(short)lVar17 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_18,sVar16,sVar18,sVar19,sVar5,sVar20,sVar21,iVar7,sVar22,bVar23);
          }
          else {
            uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar11;
            uVar14 = uVar11 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar14;
            uVar9 = uVar14 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar9;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_1c._2_2_ = (short)((uint)uVar24 >> 0x10);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar7 = (int)local_1c._2_2_;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_1c._0_2_ = (short)uVar24;
            iVar15 = (int)(short)local_1c;
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar15,
                       (((uVar14 >> 0x10) % 7 + (int)this->field_0043) - iVar7) + -3,
                       (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0,0
                       ,-1,0,0);
          }
          iVar7 = param_1 + 1;
          param_1 = iVar7;
        } while ((short)iVar7 < (short)(ushort)(byte)this->field_02BF);
      }
      if (local_8 == -1) {
        iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x325c,0,0,"%s",
                                   "STBoatC::Capture, CAPTURE_PMOVE 2");
        if (iVar7 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (local_8 == 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar8 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this->field_05FC,
                            CONCAT22((short)((uint)iVar7 >> 0x10),this->field_05FD),CASE_1);
        if (((pSVar8 == (STGameObjC *)0x0) || (pSVar8->field_0018 != this->field_05FF)) ||
           (iVar7 = (*pSVar8->vtable->vfunc_108)(this->field_0024), iVar7 == 0)) {
          this->field_0611 = CASE_4;
          this->field_0615 = 0;
        }
        else {
          thunk_FUN_004cd3e0(pSVar8,this->field_0018,this->field_0024);
          SVar3 = this->field_06F7;
          this->field_0611 = CASE_3;
          if (SVar3 == CASE_6) {
            pSVar12 = this->vtable;
            uVar24 = 0xed;
          }
          else {
            if (SVar3 == CASE_12) {
              (*this->vtable->vfunc_90)(this,3,0x151);
              goto cf_common_exit_0047746B;
            }
            if (SVar3 != CASE_22) goto cf_common_exit_0047746B;
            pSVar12 = this->vtable;
            uVar24 = 0x1d2;
          }
          (*pSVar12->vfunc_90)(this,3,uVar24);
        }
      }
    }
  }
  else {
    if (SVar1 != CASE_3) {
      if (SVar1 != CASE_4) {
        if (SVar1 != CASE_5) {
          iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x330e,0,0,
                                     "%s","STBoatC::Capture - incorrect entry");
          if (iVar7 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        iVar7 = sub_0045FF50(this,2);
        if (iVar7 == -1) {
          iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x32fc,0,0,
                                     "%s","STBoatC::Capture, CAPTURE_ESCMOVE error");
          if (iVar7 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (iVar7 == 0) {
          iVar7 = (*this->vtable->vfunc_D8)(this);
          return -(uint)(iVar7 != 0);
        }
        if (iVar7 == 3) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          thunk_FUN_00492f30((AnonShape_00492F30_E8F69762 *)this,extraout_EDX_02);
          sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
          sub_0045FF50(this,0);
        }
cf_common_exit_00477B2E:
        iVar7 = (*this->vtable->vfunc_D8)(this);
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      if (this->field_0615 == 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar7 = CONCAT22((short)((uint)this >> 0x10),this->field_0605 * 0xc9) + 100;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar6 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0045),
                           this->field_0603 * 0xc9 + 100,(short)iVar7,
                           (ushort)(this->field_0607 * 200) + 100);
        this->field_060F = uVar6;
        this->field_0615 = 1;
      }
      if (this->field_0615 == 1) {
        uVar9 = sub_004176C0(this,this->field_060F);
        uVar9 = sub_00417910(this,(short)uVar9);
        if (uVar9 == 0xffffffff) {
          iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x32c1,0,0,
                                     "%s","STBoatC::Capture, CAPTURE_OMOVE");
          if (iVar7 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (uVar9 == 0) {
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
        uVar24 = CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_02BF);
        param_1 = 0;
        if (this->field_02BF != '\0') {
          do {
            puVar10 = (undefined4 *)
                      thunk_FUN_0041dc40(local_24,(short)*(undefined4 *)
                                                          (&this->field_0x2b3 + (short)param_1 * 6),
                                         *(undefined2 *)(&this->field_0x2b7 + (short)param_1 * 6),
                                         this->field_006C);
            uVar24 = *puVar10;
            local_18 = *(short *)(puVar10 + 1);
            local_1c = uVar24;
            if (DAT_0080732c == 1) {
              bVar23 = 0;
              sVar22 = 0;
              uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar7 = -1;
              this->field_001C = uVar9;
              sVar21 = 0;
              sVar20 = 0;
              uVar11 = uVar9 * 0x41c64e6d + 0x3039;
              sVar5 = 0;
              this->field_001C = uVar11;
              sVar19 = 0;
              sVar18 = 0;
              local_14 = uVar11 * 0x41c64e6d + 0x3039;
              sVar16 = 0;
              this->field_001C = local_14;
              lVar17 = Library::MSVCRT::__ftol();
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                         (((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)local_1c._2_2_) + -3
                         ,(int)(short)lVar17 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_18,sVar16,sVar18,sVar19,sVar5,sVar20,sVar21,iVar7,sVar22,bVar23
                        );
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar24 = extraout_EDX_00;
            }
            else {
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              uVar14 = uVar11 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar14;
              uVar9 = uVar14 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar9;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_1c._2_2_ = (short)((uint)uVar24 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar7 = (int)local_1c._2_2_;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_1c._0_2_ = (short)uVar24;
              iVar15 = (int)(short)local_1c;
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar15,
                         (((uVar14 >> 0x10) % 7 + (int)this->field_0043) - iVar7) + -3,
                         (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0
                         ,0,-1,0,0);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar24 = extraout_EDX_01;
            }
            param_1 = param_1 + 1;
          } while ((short)param_1 < (short)(ushort)(byte)this->field_02BF);
        }
        if (local_8 == -1) {
          iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x32e6,0,0,
                                     "%s","STBoatC::Capture, CAPTURE_OMOVE 2");
          if (iVar7 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (local_8 == 0) {
          this->field_0611 = CASE_5;
          thunk_FUN_00492f30((AnonShape_00492F30_E8F69762 *)this,uVar24);
          sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
          iVar7 = sub_0045FF50(this,0);
          if (iVar7 == -1) {
            return -1;
          }
        }
      }
      iVar7 = (*this->vtable->vfunc_D8)(this);
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    pSVar8 = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,this->field_05FC,(uint)(ushort)this->field_05FD,CASE_1
                       );
    if (((pSVar8 == (STGameObjC *)0x0) || (pSVar8->field_0018 != this->field_05FF)) ||
       (iVar7 = (*pSVar8->vtable->vfunc_108)(this->field_0024), iVar7 == 0)) {
      if (((int)this->field_0041 == (this->field_0609 + 1) * 0xc9) &&
         ((int)this->field_0043 == (this->field_060B + 1) * 0xc9)) {
        this->field_0611 = CASE_4;
        this->field_0615 = 0;
        iVar7 = (*this->vtable->vfunc_D8)(this);
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      iVar7 = (*this->vtable->vfunc_D8)(this);
      return -(uint)(iVar7 != 0);
    }
    iVar7 = thunk_FUN_004cd480((AnonShape_004CC900_31EE9CAA *)pSVar8);
    if (iVar7 == 1) {
      if (DAT_008117bc != (undefined4 *)0x0) {
        local_2e = pSVar8->field_0032;
        local_30 = *(undefined2 *)&pSVar8->field_0024;
        local_34 = 0x5dd4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_2c = CONCAT22(this->field_0032,*(undefined2 *)&this->field_0024);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)(local_44);
      }
      (*pSVar8->vtable->vfunc_10C)(pSVar8);
      (*pSVar8->vtable->vfunc_110)(this->field_0024,this->field_06F3);
    }
    else if (iVar7 != 2) goto cf_common_exit_0047746B;
    uVar9 = GetPlayerRaceId(*(char *)&pSVar8->field_0024);
    iVar7 = (*pSVar8->vtable->vfunc_2C)();
    local_64.arg0.ptr = &local_40;
    local_40 = *(undefined4 *)(&DAT_007e1374 + ((uVar9 & 0xff) + iVar7 * 3) * 4);
    local_38 = 0xff;
    local_3c = 0;
    local_2c = 1;
    local_64.id = MESS_TORPHIT;
    (*this->vtable->GetMessage)(this,&local_64);
    iVar7 = (this->field_0609 + 1) * 0xc9;
    if ((this->field_0041 == iVar7) &&
       (iVar7 = (this->field_060B + 1) * 0xc9, this->field_0043 == iVar7)) {
      this->field_0611 = CASE_4;
      this->field_0615 = 0;
    }
    else {
      this->field_0611 = CASE_5;
      thunk_FUN_00492f30((AnonShape_00492F30_E8F69762 *)this,iVar7);
      sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
      iVar7 = sub_0045FF50(this,0);
      if (iVar7 == -1) {
        return -1;
      }
    }
  }
cf_common_exit_0047746B:
  iVar7 = (*this->vtable->vfunc_D8)(this);
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
}

