#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Defence */

int __thiscall STBoatC::Defence(STBoatC *this,int param_1)

{
  STBoatC_field_045DState SVar1;
  dword dVar2;
  undefined4 uVar3;
  code *pcVar4;
  short sVar5;
  int iVar6;
  STGameObjC *pSVar7;
  undefined4 *puVar8;
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
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_03;
  uint uVar10;
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
    puVar8 = &this->field_02CC;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    this->field_02C4 = 0;
    this->field_0475 = this->field_0047;
    this->field_0477 = this->field_0049;
    this->field_0479 = this->field_004B;
    this->field_047B = 0;
    this->field_0487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_082E = 0xffffffff;
    SVar1 = this->field_045D;
    if ((((SVar1 == CASE_6) || (SVar1 == CASE_C)) || (SVar1 == CASE_D)) || (SVar1 == CASE_4)) {
      this->field_0836 = 2;
    }
    else {
      this->field_0836 = 4;
    }
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
  uVar10 = this->field_0836 + 1;
  this->field_0836 = uVar10;
  iVar9 = this->field_082E;
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      uVar3 = this->field_00B7;
      this->field_00B7 = 0;
      iVar9 = sub_0045FF50(this,2);
      this->field_00B7 = uVar3;
      if (iVar9 == -1) {
        return -1;
      }
      if (iVar9 == 0) {
        this->field_047F = -1;
        this->field_082E = 2;
      }
      else if (iVar9 == 3) {
        this->field_0469 = 0;
        this->field_082E = 0;
      }
      if (this->field_082E != 1) {
        return 2;
      }
      iVar9 = GetDefenceTarget(this,CASE_1);
      if (iVar9 != 0) {
        return 2;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pSVar7 = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,*(char *)&this->field_0487,
                          CONCAT22(extraout_var_01,*(undefined2 *)&this->field_048B),
                          this->field_0483);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar9 = thunk_FUN_00483300((int *)this,extraout_EDX_01);
      switch(iVar9) {
      case 0:
      case 10:
        thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
        local_64.field_000A = this->field_0043;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._8_2_ = this->field_0041;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_64._12_2_ = this->field_0045;
        local_10 = 0;
        if (this->field_02B2 == '\0') {
          return 2;
        }
        puVar11 = (undefined2 *)&this->field_0x2a8;
        do {
          if (this->field_07A2 < 1) {
            return 2;
          }
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar11 + -1),puVar11[1],
                                      this->field_006C);
          sStack_32 = (short)((uint)*puVar8 >> 0x10);
          local_64.field_000E = (short)*puVar8 + this->field_0041;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._16_2_ = this->field_0043 - sStack_32;
          local_64.field_0012 = this->field_0045 + *(short *)(puVar8 + 1);
          sStack_32 = *puVar11;
          local_34 = 0;
          puVar8 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
          local_34 = (short)*puVar8;
          sStack_32 = (short)((uint)*puVar8 >> 0x10);
          local_30 = *(undefined2 *)(puVar8 + 1);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._20_2_ = local_34 + (short)local_14;
          local_64.field_0016 = (short)local_18 - sStack_32;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._0_4_ = this->field_0024;
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
            this->field_07A2 = this->field_07A2 + -1;
          }
          local_10 = local_10 + 1;
          puVar11 = puVar11 + 3;
        } while (local_10 < (byte)this->field_02B2);
        return 2;
      case 1:
      case 5:
      case 6:
      case 7:
      case 8:
        goto switchD_00461334_caseD_1;
      default:
        return 2;
      case 9:
        thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
        sVar5 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                           local_1c);
        uVar10 = sub_004176C0(this,sVar5);
        sub_00417910(this,(short)uVar10);
        return 2;
      }
    }
    if (iVar9 == 2) {
      iVar9 = thunk_FUN_00483f10((int)this);
      if (iVar9 == 1) {
        sVar5 = this->field_0469;
        this->field_0469 = -sVar5;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar9 = (*this->vtable->vfunc_18)
                          (CONCAT22(extraout_var_02,this->field_0047),this->field_0049,
                           -sVar5 + this->field_004B);
        if (iVar9 == 1) {
          this->field_082E = 3;
          sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                       (int)this->field_0469 + (int)this->field_004B);
          uVar3 = this->field_00B7;
          this->field_00B7 = 0;
          iVar9 = sub_0045FF50(this,0);
          this->field_00B7 = uVar3;
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
      if ((this->field_082E == 2) && (iVar9 = GetDefenceTarget(this,CASE_2), iVar9 == 0)) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pSVar7 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,*(char *)&this->field_0487,
                            CONCAT22(extraout_var_04,*(undefined2 *)&this->field_048B),
                            this->field_0483);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar9 = thunk_FUN_00483300((int *)this,extraout_EDX_02);
        switch(iVar9) {
        case 0:
        case 10:
          thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
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
              puVar8 = (undefined4 *)
                       thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar11 + -1),puVar11[1],
                                          this->field_006C);
              sStack_32 = (short)((uint)*puVar8 >> 0x10);
              local_64.field_000E = (short)*puVar8 + this->field_0041;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._16_2_ = this->field_0043 - sStack_32;
              local_64.field_0012 = this->field_0045 + *(short *)(puVar8 + 1);
              sStack_32 = *puVar11;
              local_34 = 0;
              puVar8 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
              local_34 = (short)*puVar8;
              sStack_32 = (short)((uint)*puVar8 >> 0x10);
              local_30 = *(undefined2 *)(puVar8 + 1);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._20_2_ = local_34 + (short)local_14;
              local_64.field_0016 = (short)local_18 - sStack_32;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_64._0_4_ = this->field_0024;
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
          this->field_047F = -1;
          break;
        case 9:
          thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
          sVar5 = (*this->vtable->vfunc_10)
                            (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                             local_1c);
          uVar10 = sub_004176C0(this,sVar5);
          sub_00417910(this,(short)uVar10);
        }
      }
    }
    else {
      if (iVar9 == 3) {
        uVar3 = this->field_00B7;
        this->field_00B7 = 0;
        iVar9 = sub_0045FF50(this,2);
        this->field_00B7 = uVar3;
        if (iVar9 == -1) {
          return -1;
        }
        if ((iVar9 == 0) || (iVar9 == 3)) {
          this->field_0469 = 0;
          this->field_082E = 0;
        }
        if ((this->field_082E == 3) && (iVar9 = GetDefenceTarget(this,CASE_3), iVar9 == 0)) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          pSVar7 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,*(char *)&this->field_0487,
                              CONCAT22(extraout_var_05,*(undefined2 *)&this->field_048B),
                              this->field_0483);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar9 = thunk_FUN_00483300((int *)this,extraout_EDX_03);
          switch(iVar9) {
          case 0:
          case 10:
            thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
            local_64.field_000A = this->field_0043;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._8_2_ = this->field_0041;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64._12_2_ = this->field_0045;
            local_10 = 0;
            if (this->field_02B2 != '\0') {
              puVar11 = (undefined2 *)&this->field_0x2a8;
              while (0 < this->field_07A2) {
                puVar8 = (undefined4 *)
                         thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar11 + -1),puVar11[1]
                                            ,this->field_006C);
                sStack_32 = (short)((uint)*puVar8 >> 0x10);
                local_64.field_000E = (short)*puVar8 + this->field_0041;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_64._16_2_ = this->field_0043 - sStack_32;
                local_64.field_0012 = this->field_0045 + *(short *)(puVar8 + 1);
                sStack_32 = *puVar11;
                local_34 = 0;
                puVar8 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
                local_34 = (short)*puVar8;
                sStack_32 = (short)((uint)*puVar8 >> 0x10);
                local_30 = *(undefined2 *)(puVar8 + 1);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_64._20_2_ = local_34 + (short)local_14;
                local_64.field_0016 = (short)local_18 - sStack_32;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_64._0_4_ = this->field_0024;
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
                  this->field_07A2 = this->field_07A2 + -1;
                }
                local_10 = local_10 + 1;
                puVar11 = puVar11 + 3;
                if ((byte)this->field_02B2 <= local_10) {
                  return 2;
                }
              }
            }
            break;
          case 1:
          case 5:
          case 6:
          case 7:
          case 8:
switchD_00461334_caseD_1:
            this->field_047F = -1;
            return 2;
          case 9:
            thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
            sVar5 = (*this->vtable->vfunc_10)
                              (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                               local_1c);
            uVar10 = sub_004176C0(this,sVar5);
            sub_00417910(this,(short)uVar10);
            return 2;
          }
        }
        return 2;
      }
      if (iVar9 != 4) {
        iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1808,0,0,"%s",
                                   "STBoatC::Defence - incorrect entry");
        if (iVar9 == 0) {
          return 2;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      uVar3 = this->field_00B7;
      this->field_00B7 = 0;
      iVar9 = thunk_FUN_004601f0(this,2);
      this->field_00B7 = uVar3;
      if (iVar9 == -1) {
        return -1;
      }
      if ((iVar9 == 0) || (iVar9 == 3)) {
        this->field_0836 = 1;
        this->field_082E = 0;
      }
    }
switchD_0046166b_caseD_2:
    iVar9 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
  }
  if (0 < this->field_073A) goto switchD_0046166b_caseD_2;
  uVar10 = uVar10 & 0x80000001;
  bVar12 = uVar10 == 0;
  if ((int)uVar10 < 0) {
    bVar12 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar12) && (DAT_007fa134 != 0)) {
    dVar2 = PTR_007fa130->count;
    local_34 = (short)dVar2;
    sStack_32 = (short)(dVar2 >> 0x10);
    if ((dVar2 != 0) && (uVar10 = 0, iVar9 = DAT_007fa134, dVar2 != 0)) {
      do {
        if (iVar9 < 1) break;
        DArrayGetElement(PTR_007fa130,uVar10,&local_20);
        if (local_20 != (STTorpC *)0x0) {
          iVar9 = iVar9 + -1;
          STFishC::sub_004162B0
                    ((STFishC *)local_20,(undefined2 *)((int)&local_10 + 2),&local_c,&local_a);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_2c[0] = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,
                                     (int)this->field_004B,(int)local_10._2_2_,(int)local_c,
                                     (int)local_a);
          if ((local_2c[0] <= (int)this->field_080C / 0xc9 + 1) &&
             (iVar6 = STTorpC::IsDangerous(local_20,this->field_0018,&local_24), iVar6 != 2)) {
            if (iVar6 == 0) {
              iVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004603B0::
                      thunk_FUN_004838e0((AnonReceiver_004603B0 *)this,
                                         (AnonShape_004838E0_0C45D4D6 *)local_20);
              if (iVar6 == 1) {
                STTorpC::SetDangerous(local_20,this->field_0018,&local_24);
LAB_00460adb:
                iVar6 = thunk_FUN_00483e30(this,(AnonShape_00482DB0_070D50BF *)local_20);
                if (iVar6 == 1) {
                  STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
                  this->field_046B = local_20;
                  this->field_046F = local_20->field_026E;
                  uVar3 = local_20->field_0018;
                  this->field_0471 = uVar3;
                  if (this->field_004B == 0) {
                    this->field_0469 = 1;
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    iVar9 = (*this->vtable->vfunc_18)
                                      (CONCAT22(extraout_var,this->field_0047),
                                       CONCAT22((short)((uint)uVar3 >> 0x10),this->field_0049),1);
                    if (iVar9 != 1) {
LAB_00460d94:
                      this->field_0469 = 0;
                      break;
                    }
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar3 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar9 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar3;
                    if (iVar9 == -1) {
                      return -1;
                    }
                    if (iVar9 != 0) {
                      if (iVar9 == 3) {
                        this->field_0469 = 0;
                        this->field_082E = 0;
                      }
                      break;
                    }
                  }
                  else if (this->field_004B == 4) {
                    this->field_0469 = -1;
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    iVar9 = (*this->vtable->vfunc_18)
                                      (CONCAT22(extraout_var_03,this->field_0047),
                                       CONCAT22(extraout_var,this->field_0049),3);
                    if (iVar9 != 1) goto LAB_00460d94;
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar3 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar9 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar3;
                    if (iVar9 == -1) {
                      return -1;
                    }
                    if (iVar9 != 0) {
                      if (iVar9 == 3) {
                        this->field_0469 = 0;
                        this->field_082E = 0;
                      }
                      break;
                    }
                  }
                  else {
                    iVar9 = this->field_001C * 0x41c64e6d;
                    uVar10 = iVar9 + 0x3039;
                    this->field_001C = uVar10;
                    this->field_0469 = (ushort)(uVar10 >> 0x10) & 1;
                    if ((uVar10 & 0x10000) == 0) {
                      this->field_0469 = -1;
                    }
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    iVar9 = (*this->vtable->vfunc_18)
                                      (this->field_0047,
                                       CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0049),
                                       this->field_0469 + this->field_004B);
                    if (iVar9 == 1) {
                      this->field_082E = 1;
                      sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                   (int)this->field_0469 + (int)this->field_004B);
                      uVar3 = this->field_00B7;
                      this->field_00B7 = 0;
                      iVar9 = sub_0045FF50(this,0);
                      this->field_00B7 = uVar3;
                    }
                    else {
                      sVar5 = this->field_0469;
                      this->field_0469 = -sVar5;
                      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                      iVar9 = (*this->vtable->vfunc_18)
                                        (CONCAT22(extraout_var_00,this->field_0047),this->field_0049
                                         ,-sVar5 + this->field_004B);
                      if (iVar9 != 1) goto LAB_00460d94;
                      this->field_082E = 1;
                      sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                   (int)this->field_0469 + (int)this->field_004B);
                      uVar3 = this->field_00B7;
                      this->field_00B7 = 0;
                      iVar9 = sub_0045FF50(this,0);
                      this->field_00B7 = uVar3;
                    }
                    if (iVar9 == -1) {
                      return -1;
                    }
                    if ((iVar9 != 0) && (iVar9 != 3)) break;
                  }
                  this->field_0469 = 0;
                  this->field_082E = 0;
                  break;
                }
              }
              else {
                STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
              }
            }
            else if (iVar6 == 1) goto LAB_00460adb;
          }
        }
        uVar10 = uVar10 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      } while (uVar10 < CONCAT22(sStack_32,local_34));
    }
  }
  if (this->field_082E != 0) goto LAB_00461264;
  if (this->field_0836 == 2) {
    this->field_047F = -1;
    iVar9 = GetDefenceTarget(this,CASE_0);
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % 0x15;
    this->field_047F = uVar10;
  }
  else {
    iVar9 = GetDefenceTarget(this,CASE_0);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar10 = extraout_EDX;
  }
  if (iVar9 == 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    pSVar7 = STAllPlayersC::GetObjPtr
                       (g_sTAllPlayers_007FA174,*(char *)&this->field_0487,
                        CONCAT22((short)(uVar10 >> 0x10),*(undefined2 *)&this->field_048B),
                        this->field_0483);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar9 = thunk_FUN_00483300((int *)this,extraout_EDX_00);
    switch(iVar9) {
    case 0:
    case 10:
      thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
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
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(local_2c,(short)*(undefined4 *)(puVar11 + -1),puVar11[1],
                                      this->field_006C);
          sStack_32 = (short)((uint)*puVar8 >> 0x10);
          local_64.field_000E = (short)*puVar8 + this->field_0041;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._16_2_ = this->field_0043 - sStack_32;
          local_64.field_0012 = this->field_0045 + *(short *)(puVar8 + 1);
          sStack_32 = *puVar11;
          local_34 = 0;
          puVar8 = (undefined4 *)thunk_FUN_0041dc40(local_3c,0,0,this->field_006C);
          local_34 = (short)*puVar8;
          sStack_32 = (short)((uint)*puVar8 >> 0x10);
          local_30 = *(undefined2 *)(puVar8 + 1);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._20_2_ = local_34 + (short)local_14;
          local_64.field_0016 = (short)local_18 - sStack_32;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_64._0_4_ = this->field_0024;
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
            this->field_07A2 = this->field_07A2 + -1;
          }
          local_10 = local_10 + 1;
          puVar11 = puVar11 + 3;
        } while (local_10 < (byte)this->field_02B2);
      }
      break;
    case 1:
      iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x16e0,0,-1,"%s",
                                 "STBoatC::Defence NOT_ZONE_A");
      if (iVar9 == 0) {
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x16e1);
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    case 5:
      this->field_082E = 4;
      thunk_FUN_004162f0(pSVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                         (undefined2 *)&local_1c);
LAB_00460fac:
      sub_00481520(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
      uVar3 = this->field_00B7;
      this->field_00B7 = 0;
      iVar9 = thunk_FUN_004601f0(this,0);
      if (iVar9 == -1) {
        return -1;
      }
      this->field_00B7 = uVar3;
      break;
    case 6:
    case 7:
    case 8:
      thunk_FUN_004162f0(pSVar7,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
      this->field_0800 = local_6;
      this->field_0802 = local_8;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this->field_0804 = param_1._2_2_;
      iVar9 = thunk_FUN_00484020(this,(short)iVar9,(short *)&local_14,(short *)&local_18,
                                 (short *)&local_1c);
      if (iVar9 != 0) {
        this->field_082E = 4;
        goto LAB_00460fac;
      }
      if (300 < (short)this->field_0814) {
        this->field_0814 = this->field_0814 + -0xc9;
      }
      break;
    case 9:
      thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
      sVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                         local_1c);
      uVar10 = sub_004176C0(this,sVar5);
      sub_00417910(this,(short)uVar10);
    }
  }
  if ((this->field_082E == 0) && (this->field_048B == 0xffff)) {
    if ((this->field_0475 != this->field_0047) ||
       ((this->field_0477 != this->field_0049 || (this->field_0479 != this->field_004B)))) {
      iVar9 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                           (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
      if ((iVar9 != -4) && (iVar9 < 8)) {
        this->field_082E = 4;
        sub_00481520(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
        uVar3 = this->field_00B7;
        this->field_00B7 = 0;
        iVar9 = thunk_FUN_004601f0(this,0);
        if (iVar9 == -1) {
          return -1;
        }
        this->field_00B7 = uVar3;
        iVar9 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
      }
      this->field_0475 = this->field_005B;
      this->field_0477 = this->field_005D;
      this->field_0479 = this->field_005F;
    }
  }
LAB_00461264:
  iVar9 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
}

