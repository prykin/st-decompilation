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
  undefined4 uVar5;
  undefined2 uVar8;
  STGameObjC *pSVar6;
  undefined4 *puVar7;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  STBoatCVTable *pSVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  uint uVar11;
  undefined2 *puVar12;
  bool bVar13;
  undefined4 uVar14;
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
    puVar7 = &this->field_02CC;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    this->field_02C4 = 0;
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00490CD0::thunk_FUN_00490cd0
              ((AnonReceiver_00490CD0 *)this,this->field_03A6,this->field_03AA,this->field_03AE,
               this->field_03B2);
    this->field_047B = 0;
    *(undefined4 *)&this->field_0x487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_082E = 0xffffffff;
    this->field_0836 = 2;
    this->field_0814 = this->field_0816 * 0xc9;
  }
  if (this->field_082E == -1) {
    iVar9 = this->field_0836 + -1;
    this->field_0836 = iVar9;
    if (1 < iVar9) {
      iVar9 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
    }
    this->field_082E = 0;
  }
  uVar11 = this->field_0836 + 1;
  this->field_0836 = uVar11;
  iVar9 = this->field_082E;
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      uVar5 = this->field_00B7;
      this->field_00B7 = 0;
      iVar9 = sub_0045FF50(this,2);
      this->field_00B7 = uVar5;
      if (iVar9 == -1) {
        return -1;
      }
      if (iVar9 == 0) {
        this->field_047F = 0xffffffff;
        this->field_082E = 2;
      }
      else if (iVar9 == 3) {
        this->field_082E = 0;
      }
      if ((this->field_082E != 1) || (iVar9 = GetDefenceTarget(this,CASE_1), iVar9 != 0))
      goto cf_common_exit_00472CB0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pSVar6 = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,this->field_0x487,
                          CONCAT22(extraout_var_01,*(undefined2 *)&this->field_048B),
                          this->field_0483);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar9 = thunk_FUN_00483300((int *)this,extraout_EDX_00);
      switch(iVar9) {
      case 0:
      case 10:
        thunk_FUN_00416270(pSVar6,(undefined2 *)&local_14,&local_18,&local_1c);
        local_64.field_000A = this->field_0043;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._8_2_ = this->field_0041;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._12_2_ = this->field_0045;
        local_10 = 0;
        if (this->field_0x2b2 != '\0') {
          puVar12 = (undefined2 *)&this->field_0x2a8;
          do {
            if (*(int *)&this->field_0x7a2 < 1) break;
            puVar7 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                        this->field_006C);
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_64.field_000E = this->field_0041 + (short)*puVar7;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._16_2_ = this->field_0043 - sStack_32;
            local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
            sStack_32 = *puVar12;
            local_34 = 0;
            puVar7 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
            local_34 = (short)*puVar7;
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_30 = *(undefined2 *)(puVar7 + 1);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._20_2_ = local_34 + (short)local_14;
            local_64.field_0016 = (short)local_18 - sStack_32;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._0_4_ = *(undefined4 *)&this->field_0x24;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._24_2_ = (short)local_1c;
            local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
            if (iVar9 == 10) {
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
            if (iVar9 == 10) {
              this->field_072A = 0;
            }
            else {
              this->field_07AA = 0;
              *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
            }
            local_10 = local_10 + 1;
            puVar12 = puVar12 + 3;
          } while (local_10 < (byte)this->field_0x2b2);
        }
        break;
      case 1:
      case 5:
      case 6:
      case 7:
      case 8:
cf_common_exit_00472A1F:
        this->field_047F = 0xffffffff;
        break;
      case 9:
LAB_00472a3a:
        thunk_FUN_00416270(pSVar6,(undefined2 *)&local_14,&local_18,&local_1c);
        sVar3 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                           local_1c);
        uVar11 = sub_004176C0(this,sVar3);
        sub_00417910(this,(short)uVar11);
      }
    }
    else {
      if (iVar9 != 2) {
        if (iVar9 != 3) {
          if (iVar9 == 4) {
            uVar5 = this->field_00B7;
            this->field_00B7 = 0;
            iVar9 = thunk_FUN_004601f0(this,2);
            this->field_00B7 = uVar5;
            if (iVar9 != -1) {
              if ((iVar9 == 0) || (iVar9 == 3)) {
                this->field_0836 = 1;
                this->field_082E = 0;
              }
              iVar9 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
            }
          }
          else {
            if (iVar9 != 5) {
              iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2dbf,0,0,
                                         &DAT_007a4ccc,s_STBoatC__Guard___incorrect_entry_007aad20);
              if (iVar9 == 0) {
                return 2;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            uVar5 = this->field_00B7;
            this->field_00B7 = 0;
            iVar9 = thunk_FUN_004601f0(this,2);
            this->field_00B7 = uVar5;
            if (iVar9 != -1) {
              if (iVar9 == 0) {
                iVar9 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,
                                     (int)this->field_004B,(int)(short)this->field_0475,
                                     (int)(short)this->field_0477,(int)(short)this->field_0479);
                if (0 < iVar9) {
                  sub_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                               (int)(short)this->field_0479);
                  uVar5 = this->field_00B7;
                  this->field_00B7 = 0;
                  iVar9 = thunk_FUN_004601f0(this,0);
                  if (iVar9 == -1) {
                    return -1;
                  }
                  this->field_00B7 = uVar5;
                  goto cf_common_exit_00472CB0;
                }
              }
              else if (iVar9 != 3) goto cf_common_exit_00472CB0;
              this->field_0836 = 1;
              this->field_082E = 0;
              goto cf_common_exit_00472CB0;
            }
          }
          return -1;
        }
        uVar5 = this->field_00B7;
        this->field_00B7 = 0;
        iVar9 = sub_0045FF50(this,2);
        this->field_00B7 = uVar5;
        if (iVar9 == -1) {
          return -1;
        }
        if ((iVar9 == 0) || (iVar9 == 3)) {
          this->field_082E = 0;
        }
        if ((this->field_082E != 1) || (iVar9 = GetDefenceTarget(this,CASE_1), iVar9 != 0))
        goto cf_common_exit_00472CB0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pSVar6 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,this->field_0x487,
                            CONCAT22(extraout_var_05,*(undefined2 *)&this->field_048B),
                            this->field_0483);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar9 = thunk_FUN_00483300((int *)this,extraout_EDX_02);
        switch(iVar9) {
        case 0:
        case 10:
          thunk_FUN_00416270(pSVar6,(undefined2 *)&local_14,&local_18,&local_1c);
          local_64.field_000A = this->field_0043;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._8_2_ = this->field_0041;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._12_2_ = this->field_0045;
          local_10 = 0;
          if (this->field_0x2b2 != '\0') {
            puVar12 = (undefined2 *)&this->field_0x2a8;
            do {
              if (*(int *)&this->field_0x7a2 < 1) break;
              puVar7 = (undefined4 *)
                       thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                          this->field_006C);
              sStack_32 = (short)((uint)*puVar7 >> 0x10);
              local_64.field_000E = this->field_0041 + (short)*puVar7;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._16_2_ = this->field_0043 - sStack_32;
              local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
              sStack_32 = *puVar12;
              local_34 = 0;
              puVar7 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
              local_34 = (short)*puVar7;
              sStack_32 = (short)((uint)*puVar7 >> 0x10);
              local_30 = *(undefined2 *)(puVar7 + 1);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._20_2_ = local_34 + (short)local_14;
              local_64.field_0016 = (short)local_18 - sStack_32;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._0_4_ = *(undefined4 *)&this->field_0x24;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._24_2_ = (short)local_1c;
              local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
              if (iVar9 == 10) {
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
              if (iVar9 == 10) {
                this->field_072A = 0;
              }
              else {
                this->field_07AA = 0;
                *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
              }
              local_10 = local_10 + 1;
              puVar12 = puVar12 + 3;
            } while (local_10 < (byte)this->field_0x2b2);
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
      iVar9 = thunk_FUN_00483f10((int)this);
      if (iVar9 == 1) {
        sVar3 = this->field_0469;
        this->field_0469 = -sVar3;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar9 = (*this->vtable->vfunc_18)
                          (CONCAT22(extraout_var_02,this->field_0047),this->field_0049,
                           -sVar3 + this->field_004B);
        if (iVar9 == 1) {
          this->field_082E = 3;
          sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                       (int)(short)this->field_0469 + (int)this->field_004B);
          uVar5 = this->field_00B7;
          this->field_00B7 = 0;
          iVar9 = sub_0045FF50(this,0);
          this->field_00B7 = uVar5;
          if (iVar9 == -1) {
            return -1;
          }
          if ((iVar9 != 0) && (iVar9 != 3)) {
            return 2;
          }
          this->field_0469 = 0;
          this->field_082E = 0;
          return 2;
        }
        this->field_0469 = -this->field_0469;
      }
      if ((this->field_082E != 2) || (iVar9 = GetDefenceTarget(this,CASE_2), iVar9 != 0))
      goto cf_common_exit_00472CB0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pSVar6 = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,this->field_0x487,
                          CONCAT22(extraout_var_04,*(undefined2 *)&this->field_048B),
                          this->field_0483);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar9 = thunk_FUN_00483300((int *)this,extraout_EDX_01);
      switch(iVar9) {
      case 0:
      case 10:
        thunk_FUN_00416270(pSVar6,(undefined2 *)&local_14,&local_18,&local_1c);
        local_64.field_000A = this->field_0043;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._8_2_ = this->field_0041;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._12_2_ = this->field_0045;
        local_10 = 0;
        if (this->field_0x2b2 != '\0') {
          puVar12 = (undefined2 *)&this->field_0x2a8;
          do {
            if (*(int *)&this->field_0x7a2 < 1) break;
            puVar7 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                        this->field_006C);
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_64.field_000E = this->field_0041 + (short)*puVar7;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._16_2_ = this->field_0043 - sStack_32;
            local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
            sStack_32 = *puVar12;
            local_34 = 0;
            puVar7 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
            local_34 = (short)*puVar7;
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_30 = *(undefined2 *)(puVar7 + 1);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._20_2_ = local_34 + (short)local_14;
            local_64.field_0016 = (short)local_18 - sStack_32;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._0_4_ = *(undefined4 *)&this->field_0x24;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._24_2_ = (short)local_1c;
            local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
            if (iVar9 == 10) {
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
            if (iVar9 == 10) {
              this->field_072A = 0;
            }
            else {
              this->field_07AA = 0;
              *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
            }
            local_10 = local_10 + 1;
            puVar12 = puVar12 + 3;
          } while (local_10 < (byte)this->field_0x2b2);
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
    iVar9 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
  }
  uVar11 = uVar11 & 0x80000001;
  bVar13 = uVar11 == 0;
  if ((int)uVar11 < 0) {
    bVar13 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar13) && (DAT_007fa134 != 0)) {
    dVar1 = PTR_007fa130->count;
    local_34 = (short)dVar1;
    sStack_32 = (short)(dVar1 >> 0x10);
    if ((dVar1 != 0) && (uVar11 = 0, iVar9 = DAT_007fa134, dVar1 != 0)) {
      while (0 < iVar9) {
        DArrayGetElement(PTR_007fa130,uVar11,&local_20);
        if (local_20 != (STTorpC *)0x0) {
          iVar9 = iVar9 + -1;
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
                      thunk_FUN_004838e0((AnonReceiver_004603B0 *)this,(int)local_20);
              if (iVar4 == 1) {
                STTorpC::SetDangerous(local_20,this->field_0018,&local_24);
LAB_00471cbd:
                iVar4 = thunk_FUN_00483e30(this,(AnonShape_00482DB0_070D50BF *)local_20);
                if (iVar4 == 1) {
                  STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
                  this->field_046B = local_20;
                  this->field_046F = local_20->field_026E;
                  uVar5 = *(undefined4 *)&local_20->field_0x18;
                  this->field_0471 = uVar5;
                  sVar3 = this->field_004B;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  uVar5 = CONCAT22((short)((uint)uVar5 >> 0x10),sVar3);
                  if (sVar3 == 0) {
                    pSVar10 = this->vtable;
                    this->field_0469 = 1;
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    uVar8 = extraout_var;
                    uVar14 = 1;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00471ec9:
                    iVar9 = (*pSVar10->vfunc_18)
                                      (CONCAT22(uVar8,this->field_0047),
                                       CONCAT22((short)((uint)uVar5 >> 0x10),this->field_0049),
                                       uVar14);
                    if (iVar9 != 1) break;
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)(short)this->field_0469 + (int)this->field_004B);
                    uVar5 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar9 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar5;
                  }
                  else if (sVar3 == 4) {
                    this->field_0469 = 0xffff;
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    iVar9 = (*this->vtable->vfunc_18)
                                      (CONCAT22(extraout_var_03,this->field_0047),
                                       CONCAT22(extraout_var,this->field_0049),3);
                    if (iVar9 != 1) break;
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)(short)this->field_0469 + (int)this->field_004B);
                    uVar5 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar9 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar5;
                  }
                  else {
                    iVar4 = this->field_001C * 0x41c64e6d;
                    uVar11 = iVar4 + 0x3039;
                    this->field_001C = uVar11;
                    this->field_0469 = (ushort)(uVar11 >> 0x10) & 1;
                    iVar9 = (-(uint)((uVar11 & 0x10000) != 0) & 2) - 1;
                    sVar3 = (short)iVar9;
                    this->field_0469 = sVar3;
                    uVar8 = (undefined2)((uint)iVar9 >> 0x10);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    iVar9 = (*this->vtable->vfunc_18)
                                      (CONCAT22(uVar8,this->field_0047),
                                       CONCAT22((short)((uint)iVar4 >> 0x10),this->field_0049),
                                       CONCAT22(uVar8,sVar3 + this->field_004B));
                    if (iVar9 != 1) {
                      sVar3 = this->field_0469;
                      pSVar10 = this->vtable;
                      this->field_0469 = -sVar3;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      uVar5 = CONCAT22((short)((uint)iVar9 >> 0x10),-sVar3 + this->field_004B);
                      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                      uVar8 = extraout_var_00;
                      uVar14 = uVar5;
                      goto LAB_00471ec9;
                    }
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)(short)this->field_0469 + (int)this->field_004B);
                    uVar5 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar9 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar5;
                  }
                  if (iVar9 == -1) {
                    return -1;
                  }
                  if ((iVar9 == 0) || (iVar9 == 3)) {
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
        uVar11 = uVar11 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (CONCAT22(sStack_32,local_34) <= uVar11) break;
      }
    }
  }
  if (this->field_082E != 0) goto switchD_00471fe0_caseD_2;
  if (this->field_0836 == 2) {
    this->field_047F = 0xffffffff;
    iVar9 = GetDefenceTarget(this,CASE_0);
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar11;
    this->field_047F = (uVar11 >> 0x10) % 0x15;
  }
  else {
    iVar9 = GetDefenceTarget(this,CASE_0);
  }
  iVar4 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                       (int)(short)this->field_0475,(int)(short)this->field_0477,
                       (int)(short)this->field_0479);
  if (iVar9 != 0) {
    if (iVar4 < 1) goto switchD_00471fe0_caseD_2;
    this->field_082E = 5;
    sub_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                 (int)(short)this->field_0479);
    uVar5 = this->field_00B7;
    this->field_00B7 = 0;
    iVar9 = thunk_FUN_004601f0(this,0);
    if (iVar9 == -1) {
      return -1;
    }
    goto LAB_0047233a;
  }
  if (5 < iVar4) {
    this->field_082E = 5;
    sub_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                 (int)(short)this->field_0479);
    uVar5 = this->field_00B7;
    this->field_00B7 = 0;
    goto LAB_004720a6;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  pSVar6 = STAllPlayersC::GetObjPtr
                     (g_sTAllPlayers_007FA174,this->field_0x487,
                      CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)&this->field_048B),
                      this->field_0483);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  iVar9 = thunk_FUN_00483300((int *)this,extraout_EDX);
  switch(iVar9) {
  case 0:
  case 10:
    thunk_FUN_00416270(pSVar6,(undefined2 *)&local_14,&local_18,&local_1c);
    local_64.field_000A = this->field_0043;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_64._8_2_ = this->field_0041;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_64._12_2_ = this->field_0045;
    local_10 = 0;
    if (this->field_0x2b2 != '\0') {
      puVar12 = (undefined2 *)&this->field_0x2a8;
      do {
        if (*(int *)&this->field_0x7a2 < 1) break;
        puVar7 = (undefined4 *)
                 thunk_FUN_0041dc40(local_2c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                    this->field_006C);
        sStack_32 = (short)((uint)*puVar7 >> 0x10);
        local_64.field_000E = this->field_0041 + (short)*puVar7;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._16_2_ = this->field_0043 - sStack_32;
        local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
        sStack_32 = *puVar12;
        local_34 = 0;
        puVar7 = (undefined4 *)thunk_FUN_0041dc40(local_3c,0,0,this->field_006C);
        local_34 = (short)*puVar7;
        sStack_32 = (short)((uint)*puVar7 >> 0x10);
        local_30 = *(undefined2 *)(puVar7 + 1);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._20_2_ = local_34 + (short)local_14;
        local_64.field_0016 = (short)local_18 - sStack_32;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._0_4_ = *(undefined4 *)&this->field_0x24;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._24_2_ = (short)local_1c;
        local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
        if (iVar9 == 10) {
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
        if (iVar9 == 10) {
          this->field_072A = 0;
        }
        else {
          this->field_07AA = 0;
          *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
        }
        local_10 = local_10 + 1;
        puVar12 = puVar12 + 3;
      } while (local_10 < (byte)this->field_0x2b2);
    }
    break;
  case 1:
    iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2c5e,0,-1,&DAT_007a4ccc,
                               s_STBoatC__Guard_NOT_ZONE_A_007aad48);
    if (iVar9 == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2c5f);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  case 5:
    this->field_082E = 4;
    thunk_FUN_004162f0(pSVar6,(undefined2 *)&local_14,(undefined2 *)&local_18,
                       (undefined2 *)&local_1c);
    goto LAB_0047207e;
  case 6:
  case 7:
  case 8:
    thunk_FUN_004162f0(pSVar6,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
    *(undefined2 *)&this->field_0x800 = local_6;
    *(undefined2 *)&this->field_0x802 = local_8;
    *(undefined2 *)&this->field_0x804 = param_1._2_2_;
    iVar9 = thunk_FUN_00484020(this,(short)iVar9,(short *)&local_14,(short *)&local_18,
                               (short *)&local_1c);
    if (iVar9 == 0) {
      if (300 < (short)this->field_0814) {
        this->field_0814 = this->field_0814 + -0xc9;
      }
      break;
    }
    this->field_082E = 4;
LAB_0047207e:
    sub_00481520(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
    uVar5 = this->field_00B7;
    this->field_00B7 = 0;
LAB_004720a6:
    iVar9 = thunk_FUN_004601f0(this,0);
    if (iVar9 == -1) {
      return -1;
    }
LAB_0047233a:
    this->field_00B7 = uVar5;
    break;
  case 9:
    thunk_FUN_00416270(pSVar6,(undefined2 *)&local_14,&local_18,&local_1c);
    sVar3 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,local_1c
                      );
    uVar11 = sub_004176C0(this,sVar3);
    sub_00417910(this,(short)uVar11);
  }
switchD_00471fe0_caseD_2:
  if ((this->field_082E == 0) && (this->field_048B == 0xffff)) {
    if ((this->field_0475 != this->field_0047) ||
       ((this->field_0477 != this->field_0049 || (this->field_0479 != this->field_004B)))) {
      iVar9 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                           (int)(short)this->field_0475,(int)(short)this->field_0477,
                           (int)(short)this->field_0479);
      if ((iVar9 != -4) && (iVar9 < 8)) {
        this->field_082E = 4;
        sub_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                     (int)(short)this->field_0479);
        uVar5 = this->field_00B7;
        this->field_00B7 = 0;
        iVar9 = thunk_FUN_004601f0(this,0);
        if (iVar9 != -1) {
          this->field_00B7 = uVar5;
          iVar9 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
        }
        return -1;
      }
      this->field_0475 = this->field_005B;
      this->field_0477 = this->field_005D;
      this->field_0479 = this->field_005F;
    }
  }
  iVar9 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
}

