#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Guard */

int __thiscall STBoatC::Guard(STBoatC *this,int param_1)

{
  dword dVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  STGameObjC *pSVar5;
  undefined4 *puVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STBoatCVTable *pSVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  uint uVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  bool bVar12;
  AnonShape_00645880_0D5933D4 local_64;
  undefined4 local_3c [2];
  short local_34;
  short sStack_32;
  undefined2 local_30;
  int local_2c [2];
  uint local_24;
  STTorpC *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    sub_00490CD0(this,this->field_03A6,this->field_03AA,this->field_03AE,this->field_03B2);
    this->field_047B = (DArrayTy *)0x0;
    this->field_0487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_082E = 0xffffffff;
    this->field_0836 = 2;
    this->field_0814 = this->field_0816 * 0xc9;
  }
  if (this->field_082E == -1) {
    iVar7 = this->field_0836 + -1;
    this->field_0836 = iVar7;
    if (1 < iVar7) {
      iVar7 = (*this->vtable->vfunc_D8)(this);
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    this->field_082E = 0;
  }
  uVar9 = this->field_0836 + 1;
  this->field_0836 = uVar9;
  iVar7 = this->field_082E;
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      uVar10 = this->field_00B7;
      this->field_00B7 = 0;
      iVar7 = sub_0045FF50(this,2);
      this->field_00B7 = uVar10;
      if (iVar7 == -1) {
        return -1;
      }
      if (iVar7 == 0) {
        this->field_047F = -1;
        this->field_082E = 2;
      }
      else if (iVar7 == 3) {
        this->field_082E = 0;
      }
      if ((this->field_082E != 1) || (iVar7 = GetDefenceTarget(this,CASE_1), iVar7 != 0))
      goto cf_common_exit_00472CB0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pSVar5 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&this->field_0487,
                          CONCAT22(extraout_var,*(undefined2 *)&this->field_048B),this->field_0483);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar7 = thunk_FUN_00483300((int *)this,extraout_EDX_00);
      switch(iVar7) {
      case 0:
      case 10:
        thunk_FUN_00416270(pSVar5,(undefined2 *)&local_14,&local_18,&local_1c);
        local_64.field_000A = this->field_0043;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._8_2_ = this->field_0041;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._12_2_ = this->field_0045;
        local_10 = 0;
        if (this->field_02B2 != '\0') {
          puVar11 = (undefined2 *)&this->field_0x2a8;
          do {
            if (this->field_07A2 < 1) break;
            puVar6 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar11 + -1),puVar11[1],
                                        this->field_006C);
            sStack_32 = (short)((uint)*puVar6 >> 0x10);
            local_64.field_000E = this->field_0041 + (short)*puVar6;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._16_2_ = this->field_0043 - sStack_32;
            local_64.field_0012 = *(short *)(puVar6 + 1) + this->field_0045;
            sStack_32 = *puVar11;
            local_34 = 0;
            puVar6 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
            local_34 = (short)*puVar6;
            sStack_32 = (short)((uint)*puVar6 >> 0x10);
            local_30 = *(undefined2 *)(puVar6 + 1);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._20_2_ = local_34 + (short)local_14;
            local_64.field_0016 = (short)local_18 - sStack_32;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._0_4_ = this->field_0024;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._24_2_ = (short)local_1c;
            local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
            if (iVar7 == 10) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._4_4_ = 0xa1;
            }
            else {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._4_4_ = this->field_079A;
            }
            local_64.field_001A = this->field_006C;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._28_4_ = this->field_0018;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._32_2_ = this->field_0032;
            thunk_FUN_00645880(&local_64);
            if (iVar7 == 10) {
              this->field_072A = 0;
            }
            else {
              this->field_07AA = 0;
              this->field_07A2 = this->field_07A2 + -1;
            }
            local_10 = local_10 + 1;
            puVar11 = puVar11 + 3;
          } while (local_10 < (byte)this->field_02B2);
        }
        break;
      case 1:
      case 5:
      case 6:
      case 7:
      case 8:
cf_common_exit_00472A1F:
        this->field_047F = -1;
        break;
      case 9:
LAB_00472a3a:
        thunk_FUN_00416270(pSVar5,(undefined2 *)&local_14,&local_18,&local_1c);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        sVar3 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)local_18 >> 0x10),this->field_0045),
                           (short)local_14,(short)local_18,local_1c);
        uVar9 = sub_004176C0(this,sVar3);
        sub_00417910(this,(short)uVar9);
      }
    }
    else {
      if (iVar7 != 2) {
        if (iVar7 != 3) {
          if (iVar7 == 4) {
            uVar10 = this->field_00B7;
            this->field_00B7 = 0;
            iVar7 = thunk_FUN_004601f0(this,2);
            this->field_00B7 = uVar10;
            if (iVar7 != -1) {
              if ((iVar7 == 0) || (iVar7 == 3)) {
                this->field_0836 = 1;
                this->field_082E = 0;
              }
              iVar7 = (*this->vtable->vfunc_D8)(this);
              return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
            }
          }
          else {
            if (iVar7 != 5) {
              iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2dbf,0,0,
                                         "%s","STBoatC::Guard - incorrect entry");
              if (iVar7 == 0) {
                return 2;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            uVar10 = this->field_00B7;
            this->field_00B7 = 0;
            iVar7 = thunk_FUN_004601f0(this,2);
            this->field_00B7 = uVar10;
            if (iVar7 != -1) {
              if (iVar7 == 0) {
                iVar7 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,
                                     (int)this->field_004B,(int)this->field_0475,
                                     (int)this->field_0477,(int)this->field_0479);
                if (0 < iVar7) {
                  sub_00481520(this,(int)this->field_0475,(int)this->field_0477,
                               (int)this->field_0479);
                  uVar10 = this->field_00B7;
                  this->field_00B7 = 0;
                  iVar7 = thunk_FUN_004601f0(this,0);
                  if (iVar7 == -1) {
                    return -1;
                  }
                  this->field_00B7 = uVar10;
                  goto cf_common_exit_00472CB0;
                }
              }
              else if (iVar7 != 3) goto cf_common_exit_00472CB0;
              this->field_0836 = 1;
              this->field_082E = 0;
              goto cf_common_exit_00472CB0;
            }
          }
          return -1;
        }
        uVar10 = this->field_00B7;
        this->field_00B7 = 0;
        iVar7 = sub_0045FF50(this,2);
        this->field_00B7 = uVar10;
        if (iVar7 == -1) {
          return -1;
        }
        if ((iVar7 == 0) || (iVar7 == 3)) {
          this->field_082E = 0;
        }
        if ((this->field_082E != 1) || (iVar7 = GetDefenceTarget(this,CASE_1), iVar7 != 0))
        goto cf_common_exit_00472CB0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pSVar5 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,*(char *)&this->field_0487,
                            CONCAT22(extraout_var_01,*(undefined2 *)&this->field_048B),
                            this->field_0483);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar7 = thunk_FUN_00483300((int *)this,extraout_EDX_02);
        switch(iVar7) {
        case 0:
        case 10:
          thunk_FUN_00416270(pSVar5,(undefined2 *)&local_14,&local_18,&local_1c);
          local_64.field_000A = this->field_0043;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._8_2_ = this->field_0041;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._12_2_ = this->field_0045;
          local_10 = 0;
          if (this->field_02B2 != '\0') {
            puVar11 = (undefined2 *)&this->field_0x2a8;
            do {
              if (this->field_07A2 < 1) break;
              puVar6 = (undefined4 *)
                       thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar11 + -1),puVar11[1],
                                          this->field_006C);
              sStack_32 = (short)((uint)*puVar6 >> 0x10);
              local_64.field_000E = this->field_0041 + (short)*puVar6;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._16_2_ = this->field_0043 - sStack_32;
              local_64.field_0012 = *(short *)(puVar6 + 1) + this->field_0045;
              sStack_32 = *puVar11;
              local_34 = 0;
              puVar6 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
              local_34 = (short)*puVar6;
              sStack_32 = (short)((uint)*puVar6 >> 0x10);
              local_30 = *(undefined2 *)(puVar6 + 1);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._20_2_ = local_34 + (short)local_14;
              local_64.field_0016 = (short)local_18 - sStack_32;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._0_4_ = this->field_0024;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._24_2_ = (short)local_1c;
              local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
              if (iVar7 == 10) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_64._4_4_ = 0xa1;
              }
              else {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_64._4_4_ = this->field_079A;
              }
              local_64.field_001A = this->field_006C;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._28_4_ = this->field_0018;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._32_2_ = this->field_0032;
              thunk_FUN_00645880(&local_64);
              if (iVar7 == 10) {
                this->field_072A = 0;
              }
              else {
                this->field_07AA = 0;
                this->field_07A2 = this->field_07A2 + -1;
              }
              local_10 = local_10 + 1;
              puVar11 = puVar11 + 3;
            } while (local_10 < (byte)this->field_02B2);
          }
          break;
        case 1:
        case 5:
        case 6:
        case 7:
        case 8:
          goto cf_common_exit_00472A1F;
        case 9:
          goto switchD_004727e9_caseD_9;
        }
        goto cf_common_exit_00472CB0;
      }
      iVar7 = thunk_FUN_00483f10((int)this);
      if (iVar7 == 1) {
        sVar3 = this->field_0469;
        this->field_0469 = -sVar3;
        iVar7 = (*this->vtable->vfunc_18)
                          (this,this->field_0047,this->field_0049,-sVar3 + this->field_004B);
        if (iVar7 == 1) {
          this->field_082E = 3;
          sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                       (int)this->field_0469 + (int)this->field_004B);
          uVar10 = this->field_00B7;
          this->field_00B7 = 0;
          iVar7 = sub_0045FF50(this,0);
          this->field_00B7 = uVar10;
          if (iVar7 == -1) {
            return -1;
          }
          if ((iVar7 != 0) && (iVar7 != 3)) {
            return 2;
          }
          this->field_0469 = 0;
          this->field_082E = 0;
          return 2;
        }
        this->field_0469 = -this->field_0469;
      }
      if ((this->field_082E != 2) || (iVar7 = GetDefenceTarget(this,CASE_2), iVar7 != 0))
      goto cf_common_exit_00472CB0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pSVar5 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&this->field_0487,
                          CONCAT22(extraout_var_00,*(undefined2 *)&this->field_048B),
                          this->field_0483);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar7 = thunk_FUN_00483300((int *)this,extraout_EDX_01);
      switch(iVar7) {
      case 0:
      case 10:
        thunk_FUN_00416270(pSVar5,(undefined2 *)&local_14,&local_18,&local_1c);
        local_64.field_000A = this->field_0043;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._8_2_ = this->field_0041;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._12_2_ = this->field_0045;
        local_10 = 0;
        if (this->field_02B2 != '\0') {
          puVar11 = (undefined2 *)&this->field_0x2a8;
          do {
            if (this->field_07A2 < 1) break;
            puVar6 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar11 + -1),puVar11[1],
                                        this->field_006C);
            sStack_32 = (short)((uint)*puVar6 >> 0x10);
            local_64.field_000E = this->field_0041 + (short)*puVar6;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._16_2_ = this->field_0043 - sStack_32;
            local_64.field_0012 = *(short *)(puVar6 + 1) + this->field_0045;
            sStack_32 = *puVar11;
            local_34 = 0;
            puVar6 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
            local_34 = (short)*puVar6;
            sStack_32 = (short)((uint)*puVar6 >> 0x10);
            local_30 = *(undefined2 *)(puVar6 + 1);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._20_2_ = local_34 + (short)local_14;
            local_64.field_0016 = (short)local_18 - sStack_32;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._0_4_ = this->field_0024;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._24_2_ = (short)local_1c;
            local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
            if (iVar7 == 10) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._4_4_ = 0xa1;
            }
            else {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._4_4_ = this->field_079A;
            }
            local_64.field_001A = this->field_006C;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._28_4_ = this->field_0018;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._32_2_ = this->field_0032;
            thunk_FUN_00645880(&local_64);
            if (iVar7 == 10) {
              this->field_072A = 0;
            }
            else {
              this->field_07AA = 0;
              this->field_07A2 = this->field_07A2 + -1;
            }
            local_10 = local_10 + 1;
            puVar11 = puVar11 + 3;
          } while (local_10 < (byte)this->field_02B2);
        }
        break;
      case 1:
      case 5:
      case 6:
      case 7:
      case 8:
        goto cf_common_exit_00472A1F;
      case 9:
switchD_004727e9_caseD_9:
        goto LAB_00472a3a;
      }
    }
cf_common_exit_00472CB0:
    iVar7 = (*this->vtable->vfunc_D8)(this);
    return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
  }
  uVar9 = uVar9 & 0x80000001;
  bVar12 = uVar9 == 0;
  if ((int)uVar9 < 0) {
    bVar12 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar12) && (DAT_007fa134 != 0)) {
    dVar1 = PTR_007fa130->count;
    local_34 = (short)dVar1;
    sStack_32 = (short)(dVar1 >> 0x10);
    if ((dVar1 != 0) && (uVar9 = 0, iVar7 = DAT_007fa134, dVar1 != 0)) {
      while (0 < iVar7) {
        DArrayGetElement(PTR_007fa130,uVar9,&local_20);
        if (local_20 != (STTorpC *)0x0) {
          iVar7 = iVar7 + -1;
          STFishC::sub_004162B0
                    ((STFishC *)local_20,(undefined2 *)((int)&local_10 + 2),&local_c,&local_a);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_2c[0] = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,
                                     (int)this->field_004B,(int)local_10._2_2_,(int)local_c,
                                     (int)local_a);
          if ((local_2c[0] <= (int)this->field_080C / 0xc9 + 1) &&
             (iVar4 = STTorpC::IsDangerous(local_20,this->field_0018,&local_24), iVar4 != 2)) {
            if (iVar4 == 0) {
              iVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004603B0::
                      thunk_FUN_004838e0((AnonReceiver_004603B0 *)this,
                                         (AnonShape_004838E0_0C45D4D6 *)local_20);
              if (iVar4 == 1) {
                STTorpC::SetDangerous(local_20,this->field_0018,&local_24);
LAB_00471cbd:
                iVar4 = thunk_FUN_00483e30(this,(AnonShape_00482DB0_070D50BF *)local_20);
                if (iVar4 == 1) {
                  STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
                  this->field_046B = local_20;
                  this->field_046F = local_20->field_026E;
                  this->field_0471 = local_20->field_0018;
                  if (this->field_004B == 0) {
                    pSVar8 = this->vtable;
                    this->field_0469 = 1;
                    sVar3 = 1;
LAB_00471ec9:
                    iVar7 = (*pSVar8->vfunc_18)(this,this->field_0047,this->field_0049,sVar3);
                    if (iVar7 != 1) break;
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar10 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar7 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar10;
                  }
                  else if (this->field_004B == 4) {
                    this->field_0469 = -1;
                    iVar7 = (*this->vtable->vfunc_18)(this,this->field_0047,this->field_0049,3);
                    if (iVar7 != 1) break;
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar10 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar7 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar10;
                  }
                  else {
                    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
                    this->field_001C = uVar9;
                    this->field_0469 = (ushort)(uVar9 >> 0x10) & 1;
                    sVar3 = (-(ushort)((uVar9 & 0x10000) != 0) & 2) - 1;
                    this->field_0469 = sVar3;
                    iVar7 = (*this->vtable->vfunc_18)
                                      (this,this->field_0047,this->field_0049,
                                       sVar3 + this->field_004B);
                    if (iVar7 != 1) {
                      sVar3 = this->field_0469;
                      pSVar8 = this->vtable;
                      this->field_0469 = -sVar3;
                      sVar3 = -sVar3 + this->field_004B;
                      goto LAB_00471ec9;
                    }
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar10 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar7 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar10;
                  }
                  if (iVar7 == -1) {
                    return -1;
                  }
                  if ((iVar7 == 0) || (iVar7 == 3)) {
                    this->field_0469 = 0;
                    this->field_082E = 0;
                  }
                  break;
                }
              }
              else {
                STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
              }
            }
            else if (iVar4 == 1) goto LAB_00471cbd;
          }
        }
        uVar9 = uVar9 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (CONCAT22(sStack_32,local_34) <= uVar9) break;
      }
    }
  }
  if (this->field_082E != 0) goto switchD_00471fe0_caseD_2;
  if (this->field_0836 == 2) {
    this->field_047F = -1;
    iVar7 = GetDefenceTarget(this,CASE_0);
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    this->field_047F = (uVar9 >> 0x10) % 0x15;
  }
  else {
    iVar7 = GetDefenceTarget(this,CASE_0);
  }
  iVar4 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                       (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
  if (iVar7 != 0) {
    if (iVar4 < 1) goto switchD_00471fe0_caseD_2;
    this->field_082E = 5;
    sub_00481520(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
    uVar10 = this->field_00B7;
    this->field_00B7 = 0;
    iVar7 = thunk_FUN_004601f0(this,0);
    if (iVar7 == -1) {
      return -1;
    }
    goto LAB_0047233a;
  }
  if (5 < iVar4) {
    this->field_082E = 5;
    sub_00481520(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
    uVar10 = this->field_00B7;
    this->field_00B7 = 0;
    goto LAB_004720a6;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  pSVar5 = STAllPlayersC::GetObjPtr
                     (g_allPlayers_007FA174,*(char *)&this->field_0487,
                      CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)&this->field_048B),
                      this->field_0483);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  iVar7 = thunk_FUN_00483300((int *)this,extraout_EDX);
  switch(iVar7) {
  case 0:
  case 10:
    thunk_FUN_00416270(pSVar5,(undefined2 *)&local_14,&local_18,&local_1c);
    local_64.field_000A = this->field_0043;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_64._8_2_ = this->field_0041;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_64._12_2_ = this->field_0045;
    local_10 = 0;
    if (this->field_02B2 != '\0') {
      puVar11 = (undefined2 *)&this->field_0x2a8;
      do {
        if (this->field_07A2 < 1) break;
        puVar6 = (undefined4 *)
                 thunk_FUN_0041dc40(local_2c,(short)*(undefined4 *)(puVar11 + -1),puVar11[1],
                                    this->field_006C);
        sStack_32 = (short)((uint)*puVar6 >> 0x10);
        local_64.field_000E = this->field_0041 + (short)*puVar6;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._16_2_ = this->field_0043 - sStack_32;
        local_64.field_0012 = *(short *)(puVar6 + 1) + this->field_0045;
        sStack_32 = *puVar11;
        local_34 = 0;
        puVar6 = (undefined4 *)thunk_FUN_0041dc40(local_3c,0,0,this->field_006C);
        local_34 = (short)*puVar6;
        sStack_32 = (short)((uint)*puVar6 >> 0x10);
        local_30 = *(undefined2 *)(puVar6 + 1);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._20_2_ = local_34 + (short)local_14;
        local_64.field_0016 = (short)local_18 - sStack_32;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._0_4_ = this->field_0024;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._24_2_ = (short)local_1c;
        local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
        if (iVar7 == 10) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._4_4_ = 0xa1;
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._4_4_ = this->field_079A;
        }
        local_64.field_001A = this->field_006C;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._28_4_ = this->field_0018;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._32_2_ = this->field_0032;
        thunk_FUN_00645880(&local_64);
        if (iVar7 == 10) {
          this->field_072A = 0;
        }
        else {
          this->field_07AA = 0;
          this->field_07A2 = this->field_07A2 + -1;
        }
        local_10 = local_10 + 1;
        puVar11 = puVar11 + 3;
      } while (local_10 < (byte)this->field_02B2);
    }
    break;
  case 1:
    iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2c5e,0,-1,"%s",
                               "STBoatC::Guard NOT_ZONE_A");
    if (iVar7 == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2c5f);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  case 5:
    this->field_082E = 4;
    STFishC::sub_004162F0
              ((STFishC *)pSVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
               (undefined2 *)&local_1c);
    goto LAB_0047207e;
  case 6:
  case 7:
  case 8:
    STFishC::sub_004162F0((STFishC *)pSVar5,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
    this->field_0800 = local_6;
    this->field_0802 = local_8;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this->field_0804 = param_1._2_2_;
    iVar7 = thunk_FUN_00484020(this,(short)iVar7,(short *)&local_14,(short *)&local_18,
                               (short *)&local_1c);
    if (iVar7 == 0) {
      if (300 < (short)this->field_0814) {
        this->field_0814 = this->field_0814 + -0xc9;
      }
      break;
    }
    this->field_082E = 4;
LAB_0047207e:
    sub_00481520(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
    uVar10 = this->field_00B7;
    this->field_00B7 = 0;
LAB_004720a6:
    iVar7 = thunk_FUN_004601f0(this,0);
    if (iVar7 == -1) {
      return -1;
    }
LAB_0047233a:
    this->field_00B7 = uVar10;
    break;
  case 9:
    thunk_FUN_00416270(pSVar5,(undefined2 *)&local_14,&local_18,&local_1c);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    sVar3 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       CONCAT22((short)((uint)local_18 >> 0x10),this->field_0045),(short)local_14,
                       (short)local_18,local_1c);
    uVar9 = sub_004176C0(this,sVar3);
    sub_00417910(this,(short)uVar9);
  }
switchD_00471fe0_caseD_2:
  if ((this->field_082E == 0) && (this->field_048B == 0xffff)) {
    if ((this->field_0475 != this->field_0047) ||
       ((this->field_0477 != this->field_0049 || (this->field_0479 != this->field_004B)))) {
      iVar7 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                           (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
      if ((iVar7 != -4) && (iVar7 < 8)) {
        this->field_082E = 4;
        sub_00481520(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
        uVar10 = this->field_00B7;
        this->field_00B7 = 0;
        iVar7 = thunk_FUN_004601f0(this,0);
        if (iVar7 != -1) {
          this->field_00B7 = uVar10;
          iVar7 = (*this->vtable->vfunc_D8)(this);
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
        return -1;
      }
      this->field_0475 = this->field_005B;
      this->field_0477 = this->field_005D;
      this->field_0479 = this->field_005F;
    }
  }
  iVar7 = (*this->vtable->vfunc_D8)(this);
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
}

