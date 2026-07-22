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
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  STBoatCVTable *pSVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
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
  undefined4 uVar25;
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
    iVar9 = (int)this->field_0607;
    iVar16 = (int)this->field_0605;
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
        iVar9 = (int)this->field_0607;
        iVar16 = (int)this->field_0605;
        iVar7 = (int)this->field_0603;
cf_common_exit_00476DBA:
        sub_00481520(this,iVar7,iVar16,iVar9);
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
         (iVar7 = (*pSVar8->vtable[1].vfunc_34)(this->field_0024), iVar7 != 0)) {
        return 2;
      }
      sub_004602B0(this);
      break;
    default:
      return 2;
    case 3:
      iVar7 = thunk_FUN_00492b20((AnonShape_00492B20_AFE20A9A *)this);
      if (iVar7 == 1) {
        iVar9 = (int)this->field_0607;
        iVar16 = (int)this->field_0605;
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
    iVar7 = (*this->vtable->vfunc_D8)();
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
    iVar7 = (*pSVar8->vtable[1].vfunc_34)(this->field_0024);
    if (iVar7 != 0) {
      if (pSVar8->field_002C == 0) {
        thunk_FUN_004cd3e0(pSVar8,this->field_0018,this->field_0024);
        SVar3 = this->field_06F7;
        this->field_0611 = CASE_3;
        if (SVar3 == CASE_6) {
          (*this->vtable->vfunc_90)(3,0xed);
          return 2;
        }
        if (SVar3 != CASE_12) {
          if (SVar3 != CASE_22) {
            return 2;
          }
          (*this->vtable->vfunc_90)(3,0x1d2);
          return 2;
        }
        (*this->vtable->vfunc_90)(3,0x151);
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
                   ((pSVar2 = g_worldGrid.cells
                              [(int)g_worldGrid.sizeX * (int)sVar20 +
                               iVar16 + (int)sVar5 * (int)g_worldGrid.planeStride].objects[0],
                    pSVar2 != (STWorldObject *)0x0 &&
                    ((pSVar2->value_20 == 0x14 && (*(int *)((int)&pSVar2[0x1f].vtable + 1) == 9)))))
                   ))) {
              iVar9 = *(int *)&pSVar2[0x2b].field_0x5;
              if (iVar9 == 2) {
                return 2;
              }
              if (iVar9 == 3) {
                return 2;
              }
              if (iVar9 == 4) {
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
      this->field_0615 = 0;
      return 2;
    }
    return 0;
  }
  if (SVar1 == CASE_2) {
    if (this->field_0615 == 0) {
      iVar9 = (ushort)(this->field_060D * 200) + 300;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar16 = CONCAT22((short)((uint)iVar9 >> 0x10),this->field_060B + 1) * 0xc9;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar10 = CONCAT22((short)((uint)iVar16 >> 0x10),this->field_0609 + 1);
      iVar7 = iVar10 * 0xc9;
      uVar6 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar6 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar6,this->field_0041),
                         CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                         CONCAT22(uVar6,this->field_0045),iVar7,iVar16,iVar9);
      this->field_060F = uVar6;
      this->field_0615 = 1;
    }
    if (this->field_0615 == 1) {
      uVar11 = sub_004176C0(this,this->field_060F);
      uVar11 = sub_00417910(this,(short)uVar11);
      if (uVar11 == 0xffffffff) {
        iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3237,0,0,"%s",
                                   "STBoatC::Capture, CAPTURE_PMOVE");
        if (iVar7 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (uVar11 == 0) {
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
          puVar12 = (undefined4 *)
                    thunk_FUN_0041dc40(local_24,(short)*(undefined4 *)
                                                        (&this->field_0x2b3 + (short)param_1 * 6),
                                       *(undefined2 *)(&this->field_0x2b7 + (short)param_1 * 6),
                                       this->field_006C);
          uVar25 = *puVar12;
          local_18 = *(short *)(puVar12 + 1);
          local_1c = uVar25;
          if (DAT_0080732c == 1) {
            bVar24 = 0;
            sVar23 = 0;
            uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar7 = -1;
            this->field_001C = uVar11;
            sVar22 = 0;
            sVar21 = 0;
            uVar13 = uVar11 * 0x41c64e6d + 0x3039;
            sVar5 = 0;
            this->field_001C = uVar13;
            sVar20 = 0;
            sVar19 = 0;
            local_14 = uVar13 * 0x41c64e6d + 0x3039;
            sVar17 = 0;
            this->field_001C = local_14;
            lVar18 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                       (((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_1c._2_2_) + -3,
                       (int)(short)lVar18 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_18,sVar17,sVar19,sVar20,sVar5,sVar21,sVar22,iVar7,sVar23,bVar24);
          }
          else {
            uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar13;
            uVar15 = uVar13 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar15;
            uVar11 = uVar15 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar11;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_1c._2_2_ = (short)((uint)uVar25 >> 0x10);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar7 = (int)local_1c._2_2_;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_1c._0_2_ = (short)uVar25;
            iVar16 = (int)(short)local_1c;
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar16,
                       (((uVar15 >> 0x10) % 7 + (int)this->field_0043) - iVar7) + -3,
                       (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0,0
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
           (iVar7 = (*pSVar8->vtable[1].vfunc_34)(this->field_0024), iVar7 == 0)) {
          this->field_0611 = CASE_4;
          this->field_0615 = 0;
        }
        else {
          thunk_FUN_004cd3e0(pSVar8,this->field_0018,this->field_0024);
          SVar3 = this->field_06F7;
          this->field_0611 = CASE_3;
          if (SVar3 == CASE_6) {
            pSVar14 = this->vtable;
            uVar25 = 0xed;
          }
          else {
            if (SVar3 == CASE_12) {
              (*this->vtable->vfunc_90)(3,0x151);
              goto cf_common_exit_0047746B;
            }
            if (SVar3 != CASE_22) goto cf_common_exit_0047746B;
            pSVar14 = this->vtable;
            uVar25 = 0x1d2;
          }
          (*pSVar14->vfunc_90)(3,uVar25);
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
          iVar7 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar7 != 0);
        }
        if (iVar7 == 3) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          thunk_FUN_00492f30((AnonShape_00492F30_E8F69762 *)this,extraout_EDX_02);
          sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
          sub_0045FF50(this,0);
        }
cf_common_exit_00477B2E:
        iVar7 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      if (this->field_0615 == 0) {
        iVar7 = (ushort)(this->field_0607 * 200) + 100;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar9 = CONCAT22((short)((uint)this >> 0x10),this->field_0605 * 0xc9) + 100;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar16 = CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0603 * 0xc9) + 100;
        uVar6 = (undefined2)((uint)iVar9 >> 0x10);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar6 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar6,this->field_0041),
                           CONCAT22((short)((uint)iVar16 >> 0x10),this->field_0043),
                           CONCAT22(uVar6,this->field_0045),iVar16,iVar9,iVar7);
        this->field_060F = uVar6;
        this->field_0615 = 1;
      }
      if (this->field_0615 == 1) {
        uVar11 = sub_004176C0(this,this->field_060F);
        uVar11 = sub_00417910(this,(short)uVar11);
        if (uVar11 == 0xffffffff) {
          iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x32c1,0,0,
                                     "%s","STBoatC::Capture, CAPTURE_OMOVE");
          if (iVar7 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (uVar11 == 0) {
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
        uVar25 = CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_02BF);
        param_1 = 0;
        if (this->field_02BF != '\0') {
          do {
            puVar12 = (undefined4 *)
                      thunk_FUN_0041dc40(local_24,(short)*(undefined4 *)
                                                          (&this->field_0x2b3 + (short)param_1 * 6),
                                         *(undefined2 *)(&this->field_0x2b7 + (short)param_1 * 6),
                                         this->field_006C);
            uVar25 = *puVar12;
            local_18 = *(short *)(puVar12 + 1);
            local_1c = uVar25;
            if (DAT_0080732c == 1) {
              bVar24 = 0;
              sVar23 = 0;
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar7 = -1;
              this->field_001C = uVar11;
              sVar22 = 0;
              sVar21 = 0;
              uVar13 = uVar11 * 0x41c64e6d + 0x3039;
              sVar5 = 0;
              this->field_001C = uVar13;
              sVar20 = 0;
              sVar19 = 0;
              local_14 = uVar13 * 0x41c64e6d + 0x3039;
              sVar17 = 0;
              this->field_001C = local_14;
              lVar18 = Library::MSVCRT::__ftol();
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                         (((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_1c._2_2_) + -3
                         ,(int)(short)lVar18 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_18,sVar17,sVar19,sVar20,sVar5,sVar21,sVar22,iVar7,sVar23,bVar24
                        );
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_00;
            }
            else {
              uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar13;
              uVar15 = uVar13 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar15;
              uVar11 = uVar15 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_1c._2_2_ = (short)((uint)uVar25 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar7 = (int)local_1c._2_2_;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_1c._0_2_ = (short)uVar25;
              iVar16 = (int)(short)local_1c;
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar16,
                         (((uVar15 >> 0x10) % 7 + (int)this->field_0043) - iVar7) + -3,
                         (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0
                         ,0,-1,0,0);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_01;
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
          thunk_FUN_00492f30((AnonShape_00492F30_E8F69762 *)this,uVar25);
          sub_00481520(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
          iVar7 = sub_0045FF50(this,0);
          if (iVar7 == -1) {
            return -1;
          }
        }
      }
      iVar7 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    pSVar8 = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,this->field_05FC,(uint)(ushort)this->field_05FD,CASE_1
                       );
    if (((pSVar8 == (STGameObjC *)0x0) || (pSVar8->field_0018 != this->field_05FF)) ||
       (iVar7 = (*pSVar8->vtable[1].vfunc_34)(this->field_0024), iVar7 == 0)) {
      if (((int)this->field_0041 == (this->field_0609 + 1) * 0xc9) &&
         ((int)this->field_0043 == (this->field_060B + 1) * 0xc9)) {
        this->field_0611 = CASE_4;
        this->field_0615 = 0;
        iVar7 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      iVar7 = (*this->vtable->vfunc_D8)();
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
      (*pSVar8->vtable[1].vfunc_38)();
      (*pSVar8->vtable[1].vfunc_3C)(this->field_0024,this->field_06F3);
    }
    else if (iVar7 != 2) goto cf_common_exit_0047746B;
    uVar11 = GetPlayerRaceId(*(char *)&pSVar8->field_0024);
    iVar7 = (*pSVar8->vtable->vfunc_2C)();
    local_64.arg0.ptr = &local_40;
    local_40 = *(undefined4 *)(&DAT_007e1374 + ((uVar11 & 0xff) + iVar7 * 3) * 4);
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
  iVar7 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
}

