#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Guard */

int __thiscall STBoatC::Guard(STBoatC *this,int param_1)

{
  dword dVar1;
  short sVar3;
  int local_EAX_438;
  int iVar5;
  int iVar4;
  STGameObjC *pSVar6;
  int local_EAX_1296;
  int local_EAX_1512;
  uint local_EAX_1596;
  undefined4 *puVar7;
  int local_EAX_2039;
  int local_EAX_2149;
  int local_EAX_2286;
  int local_EAX_2362;
  int local_EAX_2627;
  int local_EAX_3345;
  int local_EAX_3904;
  uint uVar9;
  int local_EAX_4449;
  int local_EAX_4547;
  int local_EAX_4659;
  int local_EAX_4714;
  int iVar7;
  int iVar8;
  STBoatCVTable *pSVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  uint uVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  bool bVar13;
  RecoveredRecord_STBoatC_00645880 local_64;
  undefined4 local_3c [2];
  short local_34;
  short sStack_32;
  undefined2 local_30;
  int local_2c [2];
  uint local_24;
  STTorpC *local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  short local_c;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    sub_00490CD0(this,this->field_03A6,this->field_03AA,this->field_03AE,this->field_03B2);
    this->field_047B = nullptr;
    this->field_0487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_082E = 0xffffffff;
    this->field_0836 = 2;
    this->field_0814 = this->field_0816 * 0xc9;
  }
  if (this->field_082E == -1) {
    iVar8 = this->field_0836 + -1;
    this->field_0836 = iVar8;
    if (1 < iVar8) {
      iVar8 = this->vfunc_D8();
      return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
    }
    this->field_082E = 0;
  }
  uVar10 = this->field_0836 + 1;
  this->field_0836 = uVar10;
  iVar8 = this->field_082E;
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      uVar11 = this->field_00B7;
      this->field_00B7 = 0;
      iVar8 = sub_0045FF50(this,2);
      this->field_00B7 = uVar11;
      if (iVar8 == -1) {
        return -1;
      }
      if (iVar8 == 0) {
        this->field_047F = -1;
        this->field_082E = 2;
      }
      else if (iVar8 == 3) {
        this->field_082E = 0;
      }
      if ((this->field_082E != 1) || (iVar8 = GetDefenceTarget(this,CASE_1), iVar8 != 0))
      goto cf_common_exit_00472CB0;
      pSVar6 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&this->field_0487,
                          *(ushort *)&this->field_048B,this->field_0483);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_EAX_2627 = thunk_FUN_00483300((int *)this,extraout_EDX_00);
      switch(local_EAX_2627) {
      case 0:
      case 10:
        thunk_FUN_00416270(pSVar6,&local_14,&local_18,(short *)&local_1c);
        local_64.field_000A = this->field_0043;
        local_64.field_0008 = this->field_0041;
        local_64.field_000C = this->field_0045;
        local_10 = 0;
        if (this->field_02B2 != '\0') {
          puVar12 = (undefined2 *)&this->field_0x2a8;
          do {
            if (this->field_07A2 < 1) break;
            puVar7 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                        this->field_006C);
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_64.field_000E = this->field_0041 + (short)*puVar7;
            local_64.field_0010 = this->field_0043 - sStack_32;
            local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
            sStack_32 = *puVar12;
            local_34 = 0;
            puVar7 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
            local_34 = (short)*puVar7;
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_30 = *(undefined2 *)(puVar7 + 1);
            local_64.field_0014 = local_34 + (short)local_14;
            local_64.field_0016 = (short)local_18 - sStack_32;
            local_64.field_0000 = this->field_0024;
            local_64.field_0018 = (short)local_1c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_64.field_0022 =
                 (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
            if (local_EAX_2627 == 10) {
              local_64.field_0004 = 0xa1;
            }
            else {
              local_64.field_0004 = this->field_079A;
            }
            local_64.field_001A = this->field_006C;
            local_64.field_001C = this->field_0018;
            local_64.field_0020 = this->field_0032;
            thunk_FUN_00645880(&local_64);
            if (local_EAX_2627 == 10) {
              this->field_072A = 0;
            }
            else {
              this->field_07AA = 0;
              this->field_07A2 = this->field_07A2 + -1;
            }
            local_10 = local_10 + 1;
            puVar12 = puVar12 + 3;
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
        thunk_FUN_00416270(pSVar6,&local_14,&local_18,(short *)&local_1c);
        sVar3 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),
                           (short)local_14,(short)local_18,local_1c);
        uVar9 = sub_004176C0(this,sVar3);
        sub_00417910(this,(short)uVar9);
      }
    }
    else {
      if (iVar8 != 2) {
        if (iVar8 != 3) {
          if (iVar8 == 4) {
            uVar11 = this->field_00B7;
            this->field_00B7 = 0;
            local_EAX_4449 = thunk_FUN_004601f0(this,2);
            this->field_00B7 = uVar11;
            if (local_EAX_4449 != -1) {
              if ((local_EAX_4449 == 0) || (local_EAX_4449 == 3)) {
                this->field_0836 = 1;
                this->field_082E = 0;
              }
              iVar8 = this->vfunc_D8();
              return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
            }
          }
          else {
            if (iVar8 != 5) {
              iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2dbf,0,0,
                                         "%s","STBoatC::Guard - incorrect entry");
              if (iVar7 == 0) {
                return 2;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            uVar11 = this->field_00B7;
            this->field_00B7 = 0;
            local_EAX_4547 = thunk_FUN_004601f0(this,2);
            this->field_00B7 = uVar11;
            if (local_EAX_4547 != -1) {
              if (local_EAX_4547 == 0) {
                local_EAX_4659 =
                     FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                                  (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
                if (0 < local_EAX_4659) {
                  sub_00481520(this,(int)this->field_0475,(int)this->field_0477,
                               (int)this->field_0479);
                  uVar11 = this->field_00B7;
                  this->field_00B7 = 0;
                  local_EAX_4714 = thunk_FUN_004601f0(this,0);
                  if (local_EAX_4714 == -1) {
                    return -1;
                  }
                  this->field_00B7 = uVar11;
                  goto cf_common_exit_00472CB0;
                }
              }
              else if (local_EAX_4547 != 3) goto cf_common_exit_00472CB0;
              this->field_0836 = 1;
              this->field_082E = 0;
              goto cf_common_exit_00472CB0;
            }
          }
          return -1;
        }
        uVar11 = this->field_00B7;
        this->field_00B7 = 0;
        iVar8 = sub_0045FF50(this,2);
        this->field_00B7 = uVar11;
        if (iVar8 == -1) {
          return -1;
        }
        if ((iVar8 == 0) || (iVar8 == 3)) {
          this->field_082E = 0;
        }
        if ((this->field_082E != 1) || (iVar8 = GetDefenceTarget(this,CASE_1), iVar8 != 0))
        goto cf_common_exit_00472CB0;
        pSVar6 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,*(char *)&this->field_0487,
                            *(ushort *)&this->field_048B,this->field_0483);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        local_EAX_3904 = thunk_FUN_00483300((int *)this,extraout_EDX_02);
        switch(local_EAX_3904) {
        case 0:
        case 10:
          thunk_FUN_00416270(pSVar6,&local_14,&local_18,(short *)&local_1c);
          local_64.field_000A = this->field_0043;
          local_64.field_0008 = this->field_0041;
          local_64.field_000C = this->field_0045;
          local_10 = 0;
          if (this->field_02B2 != '\0') {
            puVar12 = (undefined2 *)&this->field_0x2a8;
            do {
              if (this->field_07A2 < 1) break;
              puVar7 = (undefined4 *)
                       thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                          this->field_006C);
              sStack_32 = (short)((uint)*puVar7 >> 0x10);
              local_64.field_000E = this->field_0041 + (short)*puVar7;
              local_64.field_0010 = this->field_0043 - sStack_32;
              local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
              sStack_32 = *puVar12;
              local_34 = 0;
              puVar7 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
              local_34 = (short)*puVar7;
              sStack_32 = (short)((uint)*puVar7 >> 0x10);
              local_30 = *(undefined2 *)(puVar7 + 1);
              local_64.field_0014 = local_34 + (short)local_14;
              local_64.field_0016 = (short)local_18 - sStack_32;
              local_64.field_0000 = this->field_0024;
              local_64.field_0018 = (short)local_1c;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_64.field_0022 =
                   (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
              if (local_EAX_3904 == 10) {
                local_64.field_0004 = 0xa1;
              }
              else {
                local_64.field_0004 = this->field_079A;
              }
              local_64.field_001A = this->field_006C;
              local_64.field_001C = this->field_0018;
              local_64.field_0020 = this->field_0032;
              thunk_FUN_00645880(&local_64);
              if (local_EAX_3904 == 10) {
                this->field_072A = 0;
              }
              else {
                this->field_07AA = 0;
                this->field_07A2 = this->field_07A2 + -1;
              }
              local_10 = local_10 + 1;
              puVar12 = puVar12 + 3;
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
      iVar8 = thunk_FUN_00483f10(this);
      if (iVar8 == 1) {
        sVar3 = this->field_0469;
        this->field_0469 = -sVar3;
        iVar8 = this->vfunc_18(this->field_0047,this->field_0049,-sVar3 + this->field_004B);
        if (iVar8 == 1) {
          this->field_082E = 3;
          sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                       (int)this->field_0469 + (int)this->field_004B);
          uVar11 = this->field_00B7;
          this->field_00B7 = 0;
          iVar8 = sub_0045FF50(this,0);
          this->field_00B7 = uVar11;
          if (iVar8 == -1) {
            return -1;
          }
          if ((iVar8 != 0) && (iVar8 != 3)) {
            return 2;
          }
          this->field_0469 = 0;
          this->field_082E = 0;
          return 2;
        }
        this->field_0469 = -this->field_0469;
      }
      if ((this->field_082E != 2) || (iVar8 = GetDefenceTarget(this,CASE_2), iVar8 != 0))
      goto cf_common_exit_00472CB0;
      pSVar6 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&this->field_0487,
                          *(ushort *)&this->field_048B,this->field_0483);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_EAX_3345 = thunk_FUN_00483300((int *)this,extraout_EDX_01);
      switch(local_EAX_3345) {
      case 0:
      case 10:
        thunk_FUN_00416270(pSVar6,&local_14,&local_18,(short *)&local_1c);
        local_64.field_000A = this->field_0043;
        local_64.field_0008 = this->field_0041;
        local_64.field_000C = this->field_0045;
        local_10 = 0;
        if (this->field_02B2 != '\0') {
          puVar12 = (undefined2 *)&this->field_0x2a8;
          do {
            if (this->field_07A2 < 1) break;
            puVar7 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                        this->field_006C);
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_64.field_000E = this->field_0041 + (short)*puVar7;
            local_64.field_0010 = this->field_0043 - sStack_32;
            local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
            sStack_32 = *puVar12;
            local_34 = 0;
            puVar7 = (undefined4 *)thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
            local_34 = (short)*puVar7;
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_30 = *(undefined2 *)(puVar7 + 1);
            local_64.field_0014 = local_34 + (short)local_14;
            local_64.field_0016 = (short)local_18 - sStack_32;
            local_64.field_0000 = this->field_0024;
            local_64.field_0018 = (short)local_1c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_64.field_0022 =
                 (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
            if (local_EAX_3345 == 10) {
              local_64.field_0004 = 0xa1;
            }
            else {
              local_64.field_0004 = this->field_079A;
            }
            local_64.field_001A = this->field_006C;
            local_64.field_001C = this->field_0018;
            local_64.field_0020 = this->field_0032;
            thunk_FUN_00645880(&local_64);
            if (local_EAX_3345 == 10) {
              this->field_072A = 0;
            }
            else {
              this->field_07AA = 0;
              this->field_07A2 = this->field_07A2 + -1;
            }
            local_10 = local_10 + 1;
            puVar12 = puVar12 + 3;
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
    iVar8 = this->vfunc_D8();
    return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
  }
  uVar10 = uVar10 & 0x80000001;
  bVar13 = uVar10 == 0;
  if ((int)uVar10 < 0) {
    bVar13 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar13) && (DAT_007fa134 != 0)) {
    dVar1 = g_array_007FA130->count;
    local_34 = (short)dVar1;
    sStack_32 = (short)(dVar1 >> 0x10);
    if ((dVar1 != 0) && (uVar10 = 0, iVar8 = DAT_007fa134, dVar1 != 0)) {
      while (0 < iVar8) {
        DArrayGetElement(g_array_007FA130,uVar10,&local_20);
        if (local_20 != nullptr) {
          iVar8 = iVar8 + -1;
          STFishC::sub_004162B0((STFishC *)local_20,(short *)((int)&local_10 + 2),&local_c,&local_a);
          local_2c[0] = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,
                                     (int)this->field_004B,(int)STPiece<2,2>(local_10),(int)local_c,
                                     (int)local_a);
          if ((local_2c[0] <= (int)this->field_080C / 0xc9 + 1) &&
             (local_EAX_438 = STTorpC::IsDangerous(local_20,this->field_0018,&local_24),
             local_EAX_438 != 2)) {
            if (local_EAX_438 == 0) {
              iVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004603B0::
                      thunk_FUN_004838e0((AnonReceiver_004603B0 *)this,
                                         (RecoveredRecord_STBoatC_004838E0 *)local_20);
              if (iVar5 == 1) {
                STTorpC::SetDangerous(local_20,this->field_0018,&local_24);
LAB_00471cbd:
                iVar5 = thunk_FUN_00483e30(this,(RecoveredRecord_STBoatC_00482DB0 *)local_20);
                if (iVar5 == 1) {
                  STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
                  this->field_046B = (ushort *)local_20;
                  this->field_046F = local_20->field_026E;
                  this->field_0471 = (AnonShape_005EFAE0_B406B78B *)local_20->field_0018;
                  if (this->field_004B == 0) {
                    pSVar9 = this->vtable;
                    this->field_0469 = 1;
                    sVar3 = 1;
LAB_00471ec9:
                    iVar8 = (*pSVar9->vfunc_18)(this,this->field_0047,this->field_0049,sVar3);
                    if (iVar8 != 1) break;
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar11 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar8 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar11;
                  }
                  else if (this->field_004B == 4) {
                    this->field_0469 = -1;
                    iVar8 = this->vfunc_18(this->field_0047,this->field_0049,3);
                    if (iVar8 != 1) break;
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar11 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar8 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar11;
                  }
                  else {
                    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                    this->field_001C = uVar10;
                    this->field_0469 = (ushort)(uVar10 >> 0x10) & 1;
                    sVar3 = (-(ushort)((uVar10 & 0x10000) != 0) & 2) - 1;
                    this->field_0469 = sVar3;
                    iVar8 = this->vfunc_18(this->field_0047,this->field_0049,
                                       sVar3 + this->field_004B);
                    if (iVar8 != 1) {
                      sVar3 = this->field_0469;
                      pSVar9 = this->vtable;
                      this->field_0469 = -sVar3;
                      sVar3 = -sVar3 + this->field_004B;
                      goto LAB_00471ec9;
                    }
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar11 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar8 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar11;
                  }
                  if (iVar8 == -1) {
                    return -1;
                  }
                  if ((iVar8 == 0) || (iVar8 == 3)) {
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
            else if (local_EAX_438 == 1) goto LAB_00471cbd;
          }
        }
        uVar10 = uVar10 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (CONCAT22(sStack_32,local_34) <= uVar10) break;
      }
    }
  }
  if (this->field_082E != 0) goto switchD_00471fe0_caseD_2;
  if (this->field_0836 == 2) {
    this->field_047F = -1;
    iVar8 = GetDefenceTarget(this,CASE_0);
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    this->field_047F = (uVar10 >> 0x10) % 0x15;
  }
  else {
    iVar8 = GetDefenceTarget(this,CASE_0);
  }
  iVar4 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                       (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
  if (iVar8 != 0) {
    if (iVar4 < 1) goto switchD_00471fe0_caseD_2;
    this->field_082E = 5;
    sub_00481520(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
    uVar11 = this->field_00B7;
    this->field_00B7 = 0;
    local_EAX_2149 = thunk_FUN_004601f0(this,0);
    if (local_EAX_2149 == -1) {
      return -1;
    }
    goto LAB_0047233a;
  }
  if (5 < iVar4) {
    this->field_082E = 5;
    sub_00481520(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
    uVar11 = this->field_00B7;
    this->field_00B7 = 0;
    goto LAB_004720a6;
  }
  pSVar6 = STAllPlayersC::GetObjPtr
                     (g_allPlayers_007FA174,*(char *)&this->field_0487,*(ushort *)&this->field_048B,
                      this->field_0483);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_EAX_1296 = thunk_FUN_00483300((int *)this,extraout_EDX);
  switch(local_EAX_1296) {
  case 0:
  case 10:
    thunk_FUN_00416270(pSVar6,&local_14,&local_18,(short *)&local_1c);
    local_64.field_000A = this->field_0043;
    local_64.field_0008 = this->field_0041;
    local_64.field_000C = this->field_0045;
    local_10 = 0;
    if (this->field_02B2 != '\0') {
      puVar12 = (undefined2 *)&this->field_0x2a8;
      do {
        if (this->field_07A2 < 1) break;
        puVar7 = (undefined4 *)
                 thunk_FUN_0041dc40(local_2c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                    this->field_006C);
        sStack_32 = (short)((uint)*puVar7 >> 0x10);
        local_64.field_000E = this->field_0041 + (short)*puVar7;
        local_64.field_0010 = this->field_0043 - sStack_32;
        local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
        sStack_32 = *puVar12;
        local_34 = 0;
        puVar7 = (undefined4 *)thunk_FUN_0041dc40(local_3c,0,0,this->field_006C);
        local_34 = (short)*puVar7;
        sStack_32 = (short)((uint)*puVar7 >> 0x10);
        local_30 = *(undefined2 *)(puVar7 + 1);
        local_64.field_0014 = local_34 + (short)local_14;
        local_64.field_0016 = (short)local_18 - sStack_32;
        local_64.field_0000 = this->field_0024;
        local_64.field_0018 = (short)local_1c;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_64.field_0022 =
             (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
        if (local_EAX_1296 == 10) {
          local_64.field_0004 = 0xa1;
        }
        else {
          local_64.field_0004 = this->field_079A;
        }
        local_64.field_001A = this->field_006C;
        local_64.field_001C = this->field_0018;
        local_64.field_0020 = this->field_0032;
        thunk_FUN_00645880(&local_64);
        if (local_EAX_1296 == 10) {
          this->field_072A = 0;
        }
        else {
          this->field_07AA = 0;
          this->field_07A2 = this->field_07A2 + -1;
        }
        local_10 = local_10 + 1;
        puVar12 = puVar12 + 3;
      } while (local_10 < (byte)this->field_02B2);
    }
    break;
  case 1:
    local_EAX_2039 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2c5e,0,-1,"%s",
                            "STBoatC::Guard NOT_ZONE_A");
    if (local_EAX_2039 == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2c5f);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  case 5:
    this->field_082E = 4;
    STFishC::sub_004162F0
              ((STFishC *)pSVar6,(undefined2 *)&local_14,(undefined2 *)&local_18,
               (undefined2 *)&local_1c);
    goto LAB_0047207e;
  case 6:
  case 7:
  case 8:
    STFishC::sub_004162F0((STFishC *)pSVar6,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
    this->field_0800 = local_6;
    this->field_0802 = local_8;
    this->field_0804 = STPiece<2,2>(param_1);
    iVar8 = thunk_FUN_00484020(this,(short)local_EAX_1296,(short *)&local_14,(short *)&local_18,
                               (short *)&local_1c);
    if (iVar8 == 0) {
      if (300 < (short)this->field_0814) {
        this->field_0814 = this->field_0814 + -0xc9;
      }
      break;
    }
    this->field_082E = 4;
LAB_0047207e:
    sub_00481520(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
    uVar11 = this->field_00B7;
    this->field_00B7 = 0;
LAB_004720a6:
    local_EAX_1512 = thunk_FUN_004601f0(this,0);
    if (local_EAX_1512 == -1) {
      return -1;
    }
LAB_0047233a:
    this->field_00B7 = uVar11;
    break;
  case 9:
    thunk_FUN_00416270(pSVar6,&local_14,&local_18,(short *)&local_1c);
    sVar3 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),(short)local_14,
                       (short)local_18,local_1c);
    local_EAX_1596 = sub_004176C0(this,sVar3);
    sub_00417910(this,(short)local_EAX_1596);
  }
switchD_00471fe0_caseD_2:
  if ((this->field_082E == 0) && (this->field_048B == 0xffff)) {
    if ((this->field_0475 != this->field_0047) ||
       ((this->field_0477 != this->field_0049 || (this->field_0479 != this->field_004B)))) {
      local_EAX_2286 =
           FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                        (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
      if ((local_EAX_2286 != -4) && (local_EAX_2286 < 8)) {
        this->field_082E = 4;
        sub_00481520(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
        uVar11 = this->field_00B7;
        this->field_00B7 = 0;
        local_EAX_2362 = thunk_FUN_004601f0(this,0);
        if (local_EAX_2362 != -1) {
          this->field_00B7 = uVar11;
          iVar8 = this->vfunc_D8();
          return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
        }
        return -1;
      }
      this->field_0475 = this->field_005B;
      this->field_0477 = this->field_005D;
      this->field_0479 = this->field_005F;
    }
  }
  iVar8 = this->vfunc_D8();
  return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
}

