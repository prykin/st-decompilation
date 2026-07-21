
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Guard */

int __thiscall STBoatC::Guard(STBoatC *this,int param_1)

{
  dword dVar1;
  code *pcVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 uVar9;
  STGameObjC *pSVar7;
  undefined3 extraout_var;
  undefined4 *puVar8;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar10;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined4 extraout_ECX;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  STBoatCVTable *pSVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined2 extraout_var_08;
  undefined4 extraout_EDX_02;
  undefined2 extraout_var_09;
  undefined4 extraout_EDX_03;
  uint uVar12;
  ushort *puVar13;
  bool bVar14;
  undefined4 uVar15;
  AnonShape_00645880_0D5933D4 local_64;
  undefined4 local_3c [2];
  short local_34;
  ushort uStack_32;
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
    for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
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
    iVar10 = this->field_0836 + -1;
    this->field_0836 = iVar10;
    if (1 < iVar10) {
      iVar10 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
    }
    this->field_082E = 0;
  }
  uVar12 = this->field_0836 + 1;
  this->field_0836 = uVar12;
  iVar10 = this->field_082E;
  if (iVar10 != 0) {
    if (iVar10 == 1) {
      uVar6 = this->field_00B7;
      this->field_00B7 = 0;
      iVar10 = sub_0045FF50(this,2);
      this->field_00B7 = uVar6;
      if (iVar10 == -1) {
        return -1;
      }
      if (iVar10 == 0) {
        this->field_047F = 0xffffffff;
        this->field_082E = 2;
      }
      else if (iVar10 == 3) {
        this->field_082E = 0;
      }
      if ((this->field_082E != 1) || (iVar10 = GetDefenceTarget(this,CASE_1), iVar10 != 0))
      goto cf_common_exit_00472CB0;
      pSVar7 = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this->field_0x487),
                          CONCAT22(extraout_var_05,*(undefined2 *)&this->field_048B),
                          this->field_0483);
      bVar3 = thunk_FUN_00483300((int *)this,extraout_EDX_01);
      iVar10 = CONCAT31(extraout_var_00,bVar3);
      switch(iVar10) {
      case 0:
      case 10:
        thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
        local_64.field_000A = this->field_0043;
        local_64._8_2_ = this->field_0041;
        local_64._12_2_ = this->field_0045;
        local_10 = 0;
        if (this->field_0x2b2 != '\0') {
          puVar13 = (ushort *)&this->field_0x2a8;
          do {
            if (*(int *)&this->field_0x7a2 < 1) break;
            puVar8 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar13 + -1),puVar13[1],
                                        this->field_006C);
            uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
            local_64.field_000E = this->field_0041 + (short)*puVar8;
            local_64._16_2_ = this->field_0043 - uStack_32;
            local_64.field_0012 = *(short *)(puVar8 + 1) + this->field_0045;
            uStack_32 = *puVar13;
            local_34 = 0;
            puVar8 = (undefined4 *)
                     thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,this->field_006C);
            local_34 = (short)*puVar8;
            uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
            local_30 = *(undefined2 *)(puVar8 + 1);
            local_64._20_2_ = local_34 + (short)local_14;
            local_64.field_0016 = (short)local_18 - uStack_32;
            local_64._0_4_ = *(undefined4 *)&this->field_0x24;
            local_64._24_2_ = (short)local_1c;
            local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
            if (iVar10 == 10) {
              local_64._4_4_ = 0xa1;
            }
            else {
              local_64._4_4_ = this->field_079A;
            }
            local_64.field_001A = this->field_006C;
            local_64._28_4_ = this->field_0018;
            local_64._32_2_ = this->field_0032;
            thunk_FUN_00645880(&local_64);
            if (iVar10 == 10) {
              this->field_072A = 0;
            }
            else {
              this->field_07AA = 0;
              *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
            }
            local_10 = local_10 + 1;
            puVar13 = puVar13 + 3;
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
        thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
        sVar4 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                           local_1c);
        uVar12 = sub_004176C0(this,sVar4);
        sub_00417910(this,(short)uVar12);
      }
    }
    else {
      if (iVar10 != 2) {
        if (iVar10 != 3) {
          if (iVar10 == 4) {
            uVar6 = this->field_00B7;
            this->field_00B7 = 0;
            iVar10 = thunk_FUN_004601f0(this,2);
            this->field_00B7 = uVar6;
            if (iVar10 != -1) {
              if ((iVar10 == 0) || (iVar10 == 3)) {
                this->field_0836 = 1;
                this->field_082E = 0;
              }
              iVar10 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
            }
          }
          else {
            if (iVar10 != 5) {
              iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2dbf,0,0,
                                          &DAT_007a4ccc,s_STBoatC__Guard___incorrect_entry_007aad20)
              ;
              if (iVar10 == 0) {
                return 2;
              }
              pcVar2 = (code *)swi(3);
              iVar10 = (*pcVar2)();
              return iVar10;
            }
            uVar6 = this->field_00B7;
            this->field_00B7 = 0;
            iVar10 = thunk_FUN_004601f0(this,2);
            this->field_00B7 = uVar6;
            if (iVar10 != -1) {
              if (iVar10 == 0) {
                iVar10 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,
                                      (int)this->field_004B,(int)(short)this->field_0475,
                                      (int)(short)this->field_0477,(int)(short)this->field_0479);
                if (0 < iVar10) {
                  sub_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                               (int)(short)this->field_0479);
                  uVar6 = this->field_00B7;
                  this->field_00B7 = 0;
                  iVar10 = thunk_FUN_004601f0(this,0);
                  if (iVar10 == -1) {
                    return -1;
                  }
                  this->field_00B7 = uVar6;
                  goto cf_common_exit_00472CB0;
                }
              }
              else if (iVar10 != 3) goto cf_common_exit_00472CB0;
              this->field_0836 = 1;
              this->field_082E = 0;
              goto cf_common_exit_00472CB0;
            }
          }
          return -1;
        }
        uVar6 = this->field_00B7;
        this->field_00B7 = 0;
        iVar10 = sub_0045FF50(this,2);
        this->field_00B7 = uVar6;
        if (iVar10 == -1) {
          return -1;
        }
        if ((iVar10 == 0) || (iVar10 == 3)) {
          this->field_082E = 0;
        }
        if ((this->field_082E != 1) || (iVar10 = GetDefenceTarget(this,CASE_1), iVar10 != 0))
        goto cf_common_exit_00472CB0;
        pSVar7 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,(uint)(byte)this->field_0x487,
                            CONCAT22(extraout_var_09,*(undefined2 *)&this->field_048B),
                            this->field_0483);
        bVar3 = thunk_FUN_00483300((int *)this,extraout_EDX_03);
        iVar10 = CONCAT31(extraout_var_02,bVar3);
        switch(iVar10) {
        case 0:
        case 10:
          thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
          local_64.field_000A = this->field_0043;
          local_64._8_2_ = this->field_0041;
          local_64._12_2_ = this->field_0045;
          local_10 = 0;
          if (this->field_0x2b2 != '\0') {
            puVar13 = (ushort *)&this->field_0x2a8;
            do {
              if (*(int *)&this->field_0x7a2 < 1) break;
              puVar8 = (undefined4 *)
                       thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar13 + -1),puVar13[1],
                                          this->field_006C);
              uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
              local_64.field_000E = this->field_0041 + (short)*puVar8;
              local_64._16_2_ = this->field_0043 - uStack_32;
              local_64.field_0012 = *(short *)(puVar8 + 1) + this->field_0045;
              uStack_32 = *puVar13;
              local_34 = 0;
              puVar8 = (undefined4 *)
                       thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,this->field_006C);
              local_34 = (short)*puVar8;
              uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
              local_30 = *(undefined2 *)(puVar8 + 1);
              local_64._20_2_ = local_34 + (short)local_14;
              local_64.field_0016 = (short)local_18 - uStack_32;
              local_64._0_4_ = *(undefined4 *)&this->field_0x24;
              local_64._24_2_ = (short)local_1c;
              local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
              if (iVar10 == 10) {
                local_64._4_4_ = 0xa1;
              }
              else {
                local_64._4_4_ = this->field_079A;
              }
              local_64.field_001A = this->field_006C;
              local_64._28_4_ = this->field_0018;
              local_64._32_2_ = this->field_0032;
              thunk_FUN_00645880(&local_64);
              if (iVar10 == 10) {
                this->field_072A = 0;
              }
              else {
                this->field_07AA = 0;
                *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
              }
              local_10 = local_10 + 1;
              puVar13 = puVar13 + 3;
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
      iVar10 = thunk_FUN_00483f10((int)this);
      if (iVar10 == 1) {
        sVar4 = this->field_0469;
        this->field_0469 = -sVar4;
        iVar10 = (*this->vtable->vfunc_18)
                           (CONCAT22(extraout_var_06,this->field_0047),this->field_0049,
                            -sVar4 + this->field_004B);
        if (iVar10 == 1) {
          this->field_082E = 3;
          sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                       (int)(short)this->field_0469 + (int)this->field_004B);
          uVar6 = this->field_00B7;
          this->field_00B7 = 0;
          iVar10 = sub_0045FF50(this,0);
          this->field_00B7 = uVar6;
          if (iVar10 == -1) {
            return -1;
          }
          if ((iVar10 != 0) && (iVar10 != 3)) {
            return 2;
          }
          this->field_0469 = 0;
          this->field_082E = 0;
          return 2;
        }
        this->field_0469 = -this->field_0469;
      }
      if ((this->field_082E != 2) || (iVar10 = GetDefenceTarget(this,CASE_2), iVar10 != 0))
      goto cf_common_exit_00472CB0;
      pSVar7 = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,(uint)(byte)this->field_0x487,
                          CONCAT22(extraout_var_08,*(undefined2 *)&this->field_048B),
                          this->field_0483);
      bVar3 = thunk_FUN_00483300((int *)this,extraout_EDX_02);
      iVar10 = CONCAT31(extraout_var_01,bVar3);
      switch(iVar10) {
      case 0:
      case 10:
        thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
        local_64.field_000A = this->field_0043;
        local_64._8_2_ = this->field_0041;
        local_64._12_2_ = this->field_0045;
        local_10 = 0;
        if (this->field_0x2b2 != '\0') {
          puVar13 = (ushort *)&this->field_0x2a8;
          do {
            if (*(int *)&this->field_0x7a2 < 1) break;
            puVar8 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar13 + -1),puVar13[1],
                                        this->field_006C);
            uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
            local_64.field_000E = this->field_0041 + (short)*puVar8;
            local_64._16_2_ = this->field_0043 - uStack_32;
            local_64.field_0012 = *(short *)(puVar8 + 1) + this->field_0045;
            uStack_32 = *puVar13;
            local_34 = 0;
            puVar8 = (undefined4 *)
                     thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,this->field_006C);
            local_34 = (short)*puVar8;
            uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
            local_30 = *(undefined2 *)(puVar8 + 1);
            local_64._20_2_ = local_34 + (short)local_14;
            local_64.field_0016 = (short)local_18 - uStack_32;
            local_64._0_4_ = *(undefined4 *)&this->field_0x24;
            local_64._24_2_ = (short)local_1c;
            local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
            if (iVar10 == 10) {
              local_64._4_4_ = 0xa1;
            }
            else {
              local_64._4_4_ = this->field_079A;
            }
            local_64.field_001A = this->field_006C;
            local_64._28_4_ = this->field_0018;
            local_64._32_2_ = this->field_0032;
            thunk_FUN_00645880(&local_64);
            if (iVar10 == 10) {
              this->field_072A = 0;
            }
            else {
              this->field_07AA = 0;
              *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
            }
            local_10 = local_10 + 1;
            puVar13 = puVar13 + 3;
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
    iVar10 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
  }
  uVar12 = uVar12 & 0x80000001;
  bVar14 = uVar12 == 0;
  if ((int)uVar12 < 0) {
    bVar14 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar14) && (DAT_007fa134 != 0)) {
    dVar1 = PTR_007fa130->count;
    local_34 = (short)dVar1;
    uStack_32 = (ushort)(dVar1 >> 0x10);
    if ((dVar1 != 0) && (uVar12 = 0, iVar10 = DAT_007fa134, dVar1 != 0)) {
      while (0 < iVar10) {
        DArrayGetElement(PTR_007fa130,uVar12,&local_20);
        if (local_20 != (STTorpC *)0x0) {
          iVar10 = iVar10 + -1;
          STFishC::sub_004162B0
                    ((STFishC *)local_20,(undefined2 *)((int)&local_10 + 2),&local_c,&local_a);
          local_2c[0] = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,
                                     (int)this->field_004B,(int)local_10._2_2_,(int)local_c,
                                     (int)local_a);
          if ((local_2c[0] <= (int)this->field_080C / 0xc9 + 1) &&
             (iVar5 = STTorpC::IsDangerous(local_20,this->field_0018,&local_24), iVar5 != 2)) {
            if (iVar5 == 0) {
              iVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004603B0::
                      thunk_FUN_004838e0((AnonReceiver_004603B0 *)this,(int)local_20);
              if (iVar5 == 1) {
                STTorpC::SetDangerous(local_20,this->field_0018,&local_24);
LAB_00471cbd:
                iVar5 = thunk_FUN_00483e30(this,(AnonShape_00482DB0_070D50BF *)local_20);
                if (iVar5 == 1) {
                  STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
                  this->field_046B = local_20;
                  this->field_046F = local_20->field_026E;
                  uVar6 = *(undefined4 *)&local_20->field_0x18;
                  this->field_0471 = uVar6;
                  sVar4 = this->field_004B;
                  uVar6 = CONCAT22((short)((uint)uVar6 >> 0x10),sVar4);
                  if (sVar4 == 0) {
                    pSVar11 = this->vtable;
                    this->field_0469 = 1;
                    uVar9 = extraout_var_03;
                    uVar15 = 1;
LAB_00471ec9:
                    iVar10 = (*pSVar11->vfunc_18)
                                       (CONCAT22(uVar9,this->field_0047),
                                        CONCAT22((short)((uint)uVar6 >> 0x10),this->field_0049),
                                        uVar15);
                    if (iVar10 != 1) break;
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)(short)this->field_0469 + (int)this->field_004B);
                    uVar6 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar10 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar6;
                  }
                  else if (sVar4 == 4) {
                    this->field_0469 = 0xffff;
                    iVar10 = (*this->vtable->vfunc_18)
                                       (CONCAT22(extraout_var_07,this->field_0047),
                                        CONCAT22(extraout_var_03,this->field_0049),3);
                    if (iVar10 != 1) break;
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)(short)this->field_0469 + (int)this->field_004B);
                    uVar6 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar10 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar6;
                  }
                  else {
                    iVar5 = this->field_001C * 0x41c64e6d;
                    uVar12 = iVar5 + 0x3039;
                    this->field_001C = uVar12;
                    this->field_0469 = (ushort)(uVar12 >> 0x10) & 1;
                    iVar10 = (-(uint)((uVar12 & 0x10000) != 0) & 2) - 1;
                    sVar4 = (short)iVar10;
                    this->field_0469 = sVar4;
                    uVar9 = (undefined2)((uint)iVar10 >> 0x10);
                    iVar10 = (*this->vtable->vfunc_18)
                                       (CONCAT22(uVar9,this->field_0047),
                                        CONCAT22((short)((uint)iVar5 >> 0x10),this->field_0049),
                                        CONCAT22(uVar9,sVar4 + this->field_004B));
                    if (iVar10 != 1) {
                      sVar4 = this->field_0469;
                      pSVar11 = this->vtable;
                      this->field_0469 = -sVar4;
                      uVar6 = CONCAT22((short)((uint)iVar10 >> 0x10),-sVar4 + this->field_004B);
                      uVar9 = extraout_var_04;
                      uVar15 = uVar6;
                      goto LAB_00471ec9;
                    }
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)(short)this->field_0469 + (int)this->field_004B);
                    uVar6 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar10 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar6;
                  }
                  if (iVar10 == -1) {
                    return -1;
                  }
                  if ((iVar10 == 0) || (iVar10 == 3)) {
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
            else if (iVar5 == 1) goto LAB_00471cbd;
          }
        }
        uVar12 = uVar12 + 1;
        if (CONCAT22(uStack_32,local_34) <= uVar12) break;
      }
    }
  }
  if (this->field_082E != 0) goto switchD_00471fe0_caseD_2;
  if (this->field_0836 == 2) {
    this->field_047F = 0xffffffff;
    iVar10 = GetDefenceTarget(this,CASE_0);
    uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar12;
    this->field_047F = (uVar12 >> 0x10) % 0x15;
  }
  else {
    iVar10 = GetDefenceTarget(this,CASE_0);
  }
  iVar5 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                       (int)(short)this->field_0475,(int)(short)this->field_0477,
                       (int)(short)this->field_0479);
  if (iVar10 != 0) {
    if (iVar5 < 1) goto switchD_00471fe0_caseD_2;
    this->field_082E = 5;
    sub_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                 (int)(short)this->field_0479);
    uVar6 = this->field_00B7;
    this->field_00B7 = 0;
    iVar10 = thunk_FUN_004601f0(this,0);
    if (iVar10 == -1) {
      return -1;
    }
    goto LAB_0047233a;
  }
  if (5 < iVar5) {
    this->field_082E = 5;
    sub_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                 (int)(short)this->field_0479);
    uVar6 = this->field_00B7;
    this->field_00B7 = 0;
    goto LAB_004720a6;
  }
  pSVar7 = STAllPlayersC::GetObjPtr
                     (g_sTAllPlayers_007FA174,
                      CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_0x487),
                      CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)&this->field_048B),
                      this->field_0483);
  bVar3 = thunk_FUN_00483300((int *)this,extraout_EDX);
  iVar10 = CONCAT31(extraout_var,bVar3);
  switch(iVar10) {
  case 0:
  case 10:
    thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
    local_64.field_000A = this->field_0043;
    local_64._8_2_ = this->field_0041;
    local_64._12_2_ = this->field_0045;
    local_10 = 0;
    if (this->field_0x2b2 != '\0') {
      puVar13 = (ushort *)&this->field_0x2a8;
      do {
        if (*(int *)&this->field_0x7a2 < 1) break;
        puVar8 = (undefined4 *)
                 thunk_FUN_0041dc40(local_2c,*(undefined4 *)(puVar13 + -1),puVar13[1],
                                    this->field_006C);
        uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
        local_64.field_000E = this->field_0041 + (short)*puVar8;
        local_64._16_2_ = this->field_0043 - uStack_32;
        local_64.field_0012 = *(short *)(puVar8 + 1) + this->field_0045;
        uStack_32 = *puVar13;
        local_34 = 0;
        puVar8 = (undefined4 *)
                 thunk_FUN_0041dc40(local_3c,(uint)uStack_32 << 0x10,0,this->field_006C);
        local_34 = (short)*puVar8;
        uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
        local_30 = *(undefined2 *)(puVar8 + 1);
        local_64._20_2_ = local_34 + (short)local_14;
        local_64.field_0016 = (short)local_18 - uStack_32;
        local_64._0_4_ = *(undefined4 *)&this->field_0x24;
        local_64._24_2_ = (short)local_1c;
        local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
        if (iVar10 == 10) {
          local_64._4_4_ = 0xa1;
        }
        else {
          local_64._4_4_ = this->field_079A;
        }
        local_64.field_001A = this->field_006C;
        local_64._28_4_ = this->field_0018;
        local_64._32_2_ = this->field_0032;
        thunk_FUN_00645880(&local_64);
        if (iVar10 == 10) {
          this->field_072A = 0;
        }
        else {
          this->field_07AA = 0;
          *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
        }
        local_10 = local_10 + 1;
        puVar13 = puVar13 + 3;
      } while (local_10 < (byte)this->field_0x2b2);
    }
    break;
  case 1:
    iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2c5e,0,-1,&DAT_007a4ccc,
                                s_STBoatC__Guard_NOT_ZONE_A_007aad48);
    if (iVar10 == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2c5f);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    iVar10 = (*pcVar2)();
    return iVar10;
  case 5:
    this->field_082E = 4;
    thunk_FUN_004162f0(pSVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                       (undefined2 *)&local_1c);
    goto LAB_0047207e;
  case 6:
  case 7:
  case 8:
    thunk_FUN_004162f0(pSVar7,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
    *(undefined2 *)&this->field_0x800 = local_6;
    *(undefined2 *)&this->field_0x802 = local_8;
    *(undefined2 *)&this->field_0x804 = param_1._2_2_;
    iVar10 = thunk_FUN_00484020(this,iVar10,(short *)&local_14,(short *)&local_18,(short *)&local_1c
                               );
    if (iVar10 == 0) {
      if (300 < (short)this->field_0814) {
        this->field_0814 = this->field_0814 + -0xc9;
      }
      break;
    }
    this->field_082E = 4;
LAB_0047207e:
    sub_00481520(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
    uVar6 = this->field_00B7;
    this->field_00B7 = 0;
LAB_004720a6:
    iVar10 = thunk_FUN_004601f0(this,0);
    if (iVar10 == -1) {
      return -1;
    }
LAB_0047233a:
    this->field_00B7 = uVar6;
    break;
  case 9:
    thunk_FUN_00416270(pSVar7,(undefined2 *)&local_14,&local_18,&local_1c);
    sVar4 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,local_1c
                      );
    uVar12 = sub_004176C0(this,sVar4);
    sub_00417910(this,(short)uVar12);
  }
switchD_00471fe0_caseD_2:
  if ((this->field_082E == 0) && (this->field_048B == 0xffff)) {
    if ((this->field_0475 != this->field_0047) ||
       ((this->field_0477 != this->field_0049 || (this->field_0479 != this->field_004B)))) {
      iVar10 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                            (int)(short)this->field_0475,(int)(short)this->field_0477,
                            (int)(short)this->field_0479);
      if ((iVar10 != -4) && (iVar10 < 8)) {
        this->field_082E = 4;
        sub_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                     (int)(short)this->field_0479);
        uVar6 = this->field_00B7;
        this->field_00B7 = 0;
        iVar10 = thunk_FUN_004601f0(this,0);
        if (iVar10 != -1) {
          this->field_00B7 = uVar6;
          iVar10 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
        }
        return -1;
      }
      this->field_0475 = this->field_005B;
      this->field_0477 = this->field_005D;
      this->field_0479 = this->field_005F;
    }
  }
  iVar10 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
}

