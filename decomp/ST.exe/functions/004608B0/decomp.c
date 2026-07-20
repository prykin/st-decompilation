
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Defence */

int __thiscall STBoatC::Defence(STBoatC *this,int param_1)

{
  STBoatC_field_045DState SVar1;
  dword dVar2;
  undefined4 uVar3;
  code *pcVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  undefined3 extraout_var;
  undefined4 *puVar11;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar12;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined2 extraout_var_08;
  undefined4 extraout_EDX_03;
  undefined2 extraout_var_09;
  undefined4 extraout_EDX_04;
  uint uVar13;
  ushort *puVar14;
  bool bVar15;
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
    puVar11 = &this->field_02CC;
    for (iVar12 = 0x17; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    this->field_02C4 = 0;
    this->field_0475 = this->field_0047;
    this->field_0477 = this->field_0049;
    this->field_0479 = this->field_004B;
    this->field_047B = 0;
    *(undefined4 *)&this->field_0x487 = 0xffffffff;
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
    iVar12 = this->field_0836 + -1;
    this->field_0836 = iVar12;
    if (1 < iVar12) {
      iVar12 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
    }
    this->field_082E = 0;
  }
  uVar13 = this->field_0836 + 1;
  this->field_0836 = uVar13;
  iVar12 = this->field_082E;
  if (iVar12 != 0) {
    if (iVar12 == 1) {
      uVar3 = this->field_00B7;
      this->field_00B7 = 0;
      iVar12 = sub_0045FF50(this,2);
      this->field_00B7 = uVar3;
      if (iVar12 == -1) {
        return -1;
      }
      if (iVar12 == 0) {
        this->field_047F = 0xffffffff;
        this->field_082E = 2;
      }
      else if (iVar12 == 3) {
        this->field_0469 = 0;
        this->field_082E = 0;
      }
      if (this->field_082E != 1) {
        return 2;
      }
      iVar12 = GetDefenceTarget(this,CASE_1);
      if (iVar12 != 0) {
        return 2;
      }
      pvVar10 = (void *)STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,
                                   CONCAT31((int3)((uint)extraout_EDX_01 >> 8),this->field_0x487),
                                   CONCAT22(extraout_var_05,*(undefined2 *)&this->field_048B),
                                   this->field_0483);
      bVar5 = thunk_FUN_00483300((int *)this,extraout_EDX_02);
      iVar12 = CONCAT31(extraout_var_00,bVar5);
      switch(iVar12) {
      case 0:
      case 10:
        thunk_FUN_00416270(pvVar10,(undefined2 *)&local_14,&local_18,&local_1c);
        local_64.field_000A = this->field_0043;
        local_64._8_2_ = this->field_0041;
        local_64._12_2_ = this->field_0045;
        local_10 = 0;
        if (this->field_0x2b2 == '\0') {
          return 2;
        }
        puVar14 = (ushort *)&this->field_0x2a8;
        do {
          if (*(int *)&this->field_0x7a2 < 1) {
            return 2;
          }
          puVar11 = (undefined4 *)
                    thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar14 + -1),puVar14[1],
                                       this->field_006C);
          uStack_32 = (ushort)((uint)*puVar11 >> 0x10);
          local_64.field_000E = (short)*puVar11 + this->field_0041;
          local_64._16_2_ = this->field_0043 - uStack_32;
          local_64.field_0012 = this->field_0045 + *(short *)(puVar11 + 1);
          uStack_32 = *puVar14;
          local_34 = 0;
          puVar11 = (undefined4 *)
                    thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,this->field_006C);
          local_34 = (short)*puVar11;
          uStack_32 = (ushort)((uint)*puVar11 >> 0x10);
          local_30 = *(undefined2 *)(puVar11 + 1);
          local_64._20_2_ = local_34 + (short)local_14;
          local_64.field_0016 = (short)local_18 - uStack_32;
          local_64._0_4_ = *(undefined4 *)&this->field_0x24;
          local_64._24_2_ = (short)local_1c;
          local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
          if (iVar12 == 10) {
            local_64._4_4_ = 0xa1;
          }
          else {
            local_64._4_4_ = this->field_079A;
          }
          local_64.field_001A = this->field_006C;
          local_64._28_4_ = this->field_0018;
          local_64._32_2_ = this->field_0032;
          thunk_FUN_00645880(&local_64);
          if (iVar12 == 10) {
            this->field_072A = 0;
          }
          else {
            this->field_07AA = 0;
            *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
          }
          local_10 = local_10 + 1;
          puVar14 = puVar14 + 3;
        } while (local_10 < (byte)this->field_0x2b2);
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
        thunk_FUN_00416270(pvVar10,(undefined2 *)&local_14,&local_18,&local_1c);
        sVar6 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                           local_1c);
        uVar13 = sub_004176C0(this,sVar6);
        sub_00417910(this,(short)uVar13);
        return 2;
      }
    }
    if (iVar12 == 2) {
      iVar12 = thunk_FUN_00483f10((int)this);
      if (iVar12 == 1) {
        sVar6 = this->field_0469;
        this->field_0469 = -sVar6;
        iVar12 = (*this->vtable->vfunc_18)
                           (CONCAT22(extraout_var_06,this->field_0047),this->field_0049,
                            -sVar6 + this->field_004B);
        if (iVar12 == 1) {
          this->field_082E = 3;
          sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                       (int)(short)this->field_0469 + (int)this->field_004B);
          uVar3 = this->field_00B7;
          this->field_00B7 = 0;
          iVar12 = sub_0045FF50(this,0);
          this->field_00B7 = uVar3;
          if (iVar12 == -1) {
            return -1;
          }
          if ((iVar12 != 0) && (iVar12 != 3)) {
            return 2;
          }
          this->field_0469 = 0;
          this->field_082E = 0;
          return 2;
        }
        this->field_0469 = -this->field_0469;
      }
      if ((this->field_082E == 2) && (iVar12 = GetDefenceTarget(this,CASE_2), iVar12 == 0)) {
        pvVar10 = (void *)STAllPlayersC::GetObjPtr
                                    (g_sTAllPlayers_007FA174,(uint)(byte)this->field_0x487,
                                     CONCAT22(extraout_var_08,*(undefined2 *)&this->field_048B),
                                     this->field_0483);
        bVar5 = thunk_FUN_00483300((int *)this,extraout_EDX_03);
        iVar12 = CONCAT31(extraout_var_01,bVar5);
        switch(iVar12) {
        case 0:
        case 10:
          thunk_FUN_00416270(pvVar10,(undefined2 *)&local_14,&local_18,&local_1c);
          local_64.field_000A = this->field_0043;
          local_64._8_2_ = this->field_0041;
          local_64._12_2_ = this->field_0045;
          local_10 = 0;
          if (this->field_0x2b2 != '\0') {
            puVar14 = (ushort *)&this->field_0x2a8;
            do {
              if (*(int *)&this->field_0x7a2 < 1) break;
              puVar11 = (undefined4 *)
                        thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar14 + -1),puVar14[1],
                                           this->field_006C);
              uStack_32 = (ushort)((uint)*puVar11 >> 0x10);
              local_64.field_000E = (short)*puVar11 + this->field_0041;
              local_64._16_2_ = this->field_0043 - uStack_32;
              local_64.field_0012 = this->field_0045 + *(short *)(puVar11 + 1);
              uStack_32 = *puVar14;
              local_34 = 0;
              puVar11 = (undefined4 *)
                        thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,this->field_006C);
              local_34 = (short)*puVar11;
              uStack_32 = (ushort)((uint)*puVar11 >> 0x10);
              local_30 = *(undefined2 *)(puVar11 + 1);
              local_64._20_2_ = local_34 + (short)local_14;
              local_64.field_0016 = (short)local_18 - uStack_32;
              local_64._0_4_ = *(undefined4 *)&this->field_0x24;
              local_64._24_2_ = (short)local_1c;
              local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
              if (iVar12 == 10) {
                local_64._4_4_ = 0xa1;
              }
              else {
                local_64._4_4_ = this->field_079A;
              }
              local_64.field_001A = this->field_006C;
              local_64._28_4_ = this->field_0018;
              local_64._32_2_ = this->field_0032;
              thunk_FUN_00645880(&local_64);
              if (iVar12 == 10) {
                this->field_072A = 0;
              }
              else {
                this->field_07AA = 0;
                *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
              }
              local_10 = local_10 + 1;
              puVar14 = puVar14 + 3;
            } while (local_10 < (byte)this->field_0x2b2);
          }
          break;
        case 1:
        case 5:
        case 6:
        case 7:
        case 8:
          this->field_047F = 0xffffffff;
          break;
        case 9:
          thunk_FUN_00416270(pvVar10,(undefined2 *)&local_14,&local_18,&local_1c);
          sVar6 = (*this->vtable->vfunc_10)
                            (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                             local_1c);
          uVar13 = sub_004176C0(this,sVar6);
          sub_00417910(this,(short)uVar13);
        }
      }
    }
    else {
      if (iVar12 == 3) {
        uVar3 = this->field_00B7;
        this->field_00B7 = 0;
        iVar12 = sub_0045FF50(this,2);
        this->field_00B7 = uVar3;
        if (iVar12 == -1) {
          return -1;
        }
        if ((iVar12 == 0) || (iVar12 == 3)) {
          this->field_0469 = 0;
          this->field_082E = 0;
        }
        if ((this->field_082E == 3) && (iVar12 = GetDefenceTarget(this,CASE_3), iVar12 == 0)) {
          pvVar10 = (void *)STAllPlayersC::GetObjPtr
                                      (g_sTAllPlayers_007FA174,(uint)(byte)this->field_0x487,
                                       CONCAT22(extraout_var_09,*(undefined2 *)&this->field_048B),
                                       this->field_0483);
          bVar5 = thunk_FUN_00483300((int *)this,extraout_EDX_04);
          iVar12 = CONCAT31(extraout_var_02,bVar5);
          switch(iVar12) {
          case 0:
          case 10:
            thunk_FUN_00416270(pvVar10,(undefined2 *)&local_14,&local_18,&local_1c);
            local_64.field_000A = this->field_0043;
            local_64._8_2_ = this->field_0041;
            local_64._12_2_ = this->field_0045;
            local_10 = 0;
            if (this->field_0x2b2 != '\0') {
              puVar14 = (ushort *)&this->field_0x2a8;
              while (0 < *(int *)&this->field_0x7a2) {
                puVar11 = (undefined4 *)
                          thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar14 + -1),puVar14[1],
                                             this->field_006C);
                uStack_32 = (ushort)((uint)*puVar11 >> 0x10);
                local_64.field_000E = (short)*puVar11 + this->field_0041;
                local_64._16_2_ = this->field_0043 - uStack_32;
                local_64.field_0012 = this->field_0045 + *(short *)(puVar11 + 1);
                uStack_32 = *puVar14;
                local_34 = 0;
                puVar11 = (undefined4 *)
                          thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,this->field_006C);
                local_34 = (short)*puVar11;
                uStack_32 = (ushort)((uint)*puVar11 >> 0x10);
                local_30 = *(undefined2 *)(puVar11 + 1);
                local_64._20_2_ = local_34 + (short)local_14;
                local_64.field_0016 = (short)local_18 - uStack_32;
                local_64._0_4_ = *(undefined4 *)&this->field_0x24;
                local_64._24_2_ = (short)local_1c;
                local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
                if (iVar12 == 10) {
                  local_64._4_4_ = 0xa1;
                }
                else {
                  local_64._4_4_ = this->field_079A;
                }
                local_64.field_001A = this->field_006C;
                local_64._28_4_ = this->field_0018;
                local_64._32_2_ = this->field_0032;
                thunk_FUN_00645880(&local_64);
                if (iVar12 == 10) {
                  this->field_072A = 0;
                }
                else {
                  this->field_07AA = 0;
                  *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
                }
                local_10 = local_10 + 1;
                puVar14 = puVar14 + 3;
                if ((byte)this->field_0x2b2 <= local_10) {
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
            this->field_047F = 0xffffffff;
            return 2;
          case 9:
            thunk_FUN_00416270(pvVar10,(undefined2 *)&local_14,&local_18,&local_1c);
            sVar6 = (*this->vtable->vfunc_10)
                              (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                               local_1c);
            uVar13 = sub_004176C0(this,sVar6);
            sub_00417910(this,(short)uVar13);
            return 2;
          }
        }
        return 2;
      }
      if (iVar12 != 4) {
        iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1808,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__Defence___incorrect_ent_007aa0f4);
        if (iVar12 == 0) {
          return 2;
        }
        pcVar4 = (code *)swi(3);
        iVar12 = (*pcVar4)();
        return iVar12;
      }
      uVar3 = this->field_00B7;
      this->field_00B7 = 0;
      iVar12 = thunk_FUN_004601f0(this,2);
      this->field_00B7 = uVar3;
      if (iVar12 == -1) {
        return -1;
      }
      if ((iVar12 == 0) || (iVar12 == 3)) {
        this->field_0836 = 1;
        this->field_082E = 0;
      }
    }
switchD_0046166b_caseD_2:
    iVar12 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
  }
  if (0 < (int)this->field_073A) goto switchD_0046166b_caseD_2;
  uVar13 = uVar13 & 0x80000001;
  bVar15 = uVar13 == 0;
  if ((int)uVar13 < 0) {
    bVar15 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar15) && (DAT_007fa134 != 0)) {
    dVar2 = PTR_007fa130->count;
    local_34 = (short)dVar2;
    uStack_32 = (ushort)(dVar2 >> 0x10);
    if ((dVar2 != 0) && (uVar13 = 0, iVar12 = DAT_007fa134, dVar2 != 0)) {
      do {
        if (iVar12 < 1) break;
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa130,uVar13,&local_20);
        if (local_20 != (STTorpC *)0x0) {
          iVar12 = iVar12 + -1;
          STFishC::sub_004162B0
                    ((STFishC *)local_20,(undefined2 *)((int)&local_10 + 2),&local_c,&local_a);
          local_2c[0] = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,
                                     (int)this->field_004B,(int)local_10._2_2_,(int)local_c,
                                     (int)local_a);
          if ((local_2c[0] <= (int)this->field_080C / 0xc9 + 1) &&
             (iVar7 = STTorpC::IsDangerous(local_20,this->field_0018,&local_24), iVar7 != 2)) {
            if (iVar7 == 0) {
              iVar7 = thunk_FUN_004838e0(this,(int)local_20);
              if (iVar7 == 1) {
                STTorpC::SetDangerous(local_20,this->field_0018,&local_24);
LAB_00460adb:
                iVar7 = thunk_FUN_00483e30(this,(AnonShape_00483E30_F0F8D504 *)local_20);
                if (iVar7 == 1) {
                  STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
                  this->field_046B = local_20;
                  this->field_046F = local_20->field_026E;
                  uVar3 = *(undefined4 *)&local_20->field_0x18;
                  this->field_0471 = uVar3;
                  if (this->field_004B == 0) {
                    this->field_0469 = 1;
                    iVar12 = (*this->vtable->vfunc_18)
                                       (CONCAT22(extraout_var_03,this->field_0047),
                                        CONCAT22((short)((uint)uVar3 >> 0x10),this->field_0049),1);
                    if (iVar12 != 1) {
LAB_00460d94:
                      this->field_0469 = 0;
                      break;
                    }
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)(short)this->field_0469 + (int)this->field_004B);
                    uVar3 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar12 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar3;
                    if (iVar12 == -1) {
                      return -1;
                    }
                    if (iVar12 != 0) {
                      if (iVar12 == 3) {
                        this->field_0469 = 0;
                        this->field_082E = 0;
                      }
                      break;
                    }
                  }
                  else if (this->field_004B == 4) {
                    this->field_0469 = 0xffff;
                    iVar12 = (*this->vtable->vfunc_18)
                                       (CONCAT22(extraout_var_07,this->field_0047),
                                        CONCAT22(extraout_var_03,this->field_0049),3);
                    if (iVar12 != 1) goto LAB_00460d94;
                    this->field_082E = 1;
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)(short)this->field_0469 + (int)this->field_004B);
                    uVar3 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar12 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar3;
                    if (iVar12 == -1) {
                      return -1;
                    }
                    if (iVar12 != 0) {
                      if (iVar12 == 3) {
                        this->field_0469 = 0;
                        this->field_082E = 0;
                      }
                      break;
                    }
                  }
                  else {
                    iVar12 = this->field_001C * 0x41c64e6d;
                    uVar13 = iVar12 + 0x3039;
                    this->field_001C = uVar13;
                    this->field_0469 = (ushort)(uVar13 >> 0x10) & 1;
                    if ((uVar13 & 0x10000) == 0) {
                      this->field_0469 = 0xffff;
                    }
                    iVar12 = (*this->vtable->vfunc_18)
                                       (this->field_0047,
                                        CONCAT22((short)((uint)iVar12 >> 0x10),this->field_0049),
                                        this->field_0469 + this->field_004B);
                    if (iVar12 == 1) {
                      this->field_082E = 1;
                      sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                   (int)(short)this->field_0469 + (int)this->field_004B);
                      uVar3 = this->field_00B7;
                      this->field_00B7 = 0;
                      iVar12 = sub_0045FF50(this,0);
                      this->field_00B7 = uVar3;
                    }
                    else {
                      sVar6 = this->field_0469;
                      this->field_0469 = -sVar6;
                      iVar12 = (*this->vtable->vfunc_18)
                                         (CONCAT22(extraout_var_04,this->field_0047),
                                          this->field_0049,-sVar6 + this->field_004B);
                      if (iVar12 != 1) goto LAB_00460d94;
                      this->field_082E = 1;
                      sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                   (int)(short)this->field_0469 + (int)this->field_004B);
                      uVar3 = this->field_00B7;
                      this->field_00B7 = 0;
                      iVar12 = sub_0045FF50(this,0);
                      this->field_00B7 = uVar3;
                    }
                    if (iVar12 == -1) {
                      return -1;
                    }
                    if ((iVar12 != 0) && (iVar12 != 3)) break;
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
            else if (iVar7 == 1) goto LAB_00460adb;
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < CONCAT22(uStack_32,local_34));
    }
  }
  if (this->field_082E != 0) goto LAB_00461264;
  if (this->field_0836 == 2) {
    this->field_047F = 0xffffffff;
    uVar13 = GetDefenceTarget(this,CASE_0);
    uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar8;
    uVar8 = uVar8 >> 0x10;
    uVar9 = uVar8 / 0x15;
    uVar8 = uVar8 % 0x15;
    this->field_047F = uVar8;
  }
  else {
    uVar9 = GetDefenceTarget(this,CASE_0);
    uVar13 = uVar9;
    uVar8 = extraout_EDX;
  }
  if (uVar13 == 0) {
    pvVar10 = (void *)STAllPlayersC::GetObjPtr
                                (g_sTAllPlayers_007FA174,
                                 CONCAT31((int3)(uVar9 >> 8),this->field_0x487),
                                 CONCAT22((short)(uVar8 >> 0x10),*(undefined2 *)&this->field_048B),
                                 this->field_0483);
    bVar5 = thunk_FUN_00483300((int *)this,extraout_EDX_00);
    iVar12 = CONCAT31(extraout_var,bVar5);
    switch(iVar12) {
    case 0:
    case 10:
      thunk_FUN_00416270(pvVar10,(undefined2 *)&local_14,&local_18,&local_1c);
      local_64.field_000A = this->field_0043;
      local_64._8_2_ = this->field_0041;
      local_64._12_2_ = this->field_0045;
      local_10 = 0;
      if (this->field_0x2b2 != '\0') {
        puVar14 = (ushort *)&this->field_0x2a8;
        do {
          if (*(int *)&this->field_0x7a2 < 1) break;
          puVar11 = (undefined4 *)
                    thunk_FUN_0041dc40(local_2c,*(undefined4 *)(puVar14 + -1),puVar14[1],
                                       this->field_006C);
          uStack_32 = (ushort)((uint)*puVar11 >> 0x10);
          local_64.field_000E = (short)*puVar11 + this->field_0041;
          local_64._16_2_ = this->field_0043 - uStack_32;
          local_64.field_0012 = this->field_0045 + *(short *)(puVar11 + 1);
          uStack_32 = *puVar14;
          local_34 = 0;
          puVar11 = (undefined4 *)
                    thunk_FUN_0041dc40(local_3c,(uint)uStack_32 << 0x10,0,this->field_006C);
          local_34 = (short)*puVar11;
          uStack_32 = (ushort)((uint)*puVar11 >> 0x10);
          local_30 = *(undefined2 *)(puVar11 + 1);
          local_64._20_2_ = local_34 + (short)local_14;
          local_64.field_0016 = (short)local_18 - uStack_32;
          local_64._0_4_ = *(undefined4 *)&this->field_0x24;
          local_64._24_2_ = (short)local_1c;
          local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
          if (iVar12 == 10) {
            local_64._4_4_ = 0xa1;
          }
          else {
            local_64._4_4_ = this->field_079A;
          }
          local_64.field_001A = this->field_006C;
          local_64._28_4_ = this->field_0018;
          local_64._32_2_ = this->field_0032;
          thunk_FUN_00645880(&local_64);
          if (iVar12 == 10) {
            this->field_072A = 0;
          }
          else {
            this->field_07AA = 0;
            *(int *)&this->field_0x7a2 = *(int *)&this->field_0x7a2 + -1;
          }
          local_10 = local_10 + 1;
          puVar14 = puVar14 + 3;
        } while (local_10 < (byte)this->field_0x2b2);
      }
      break;
    case 1:
      iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x16e0,0,-1,&DAT_007a4ccc,
                                  s_STBoatC__Defence_NOT_ZONE_A_007aa120);
      if (iVar12 == 0) {
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x16e1);
        return 0xffff;
      }
      pcVar4 = (code *)swi(3);
      iVar12 = (*pcVar4)();
      return iVar12;
    case 5:
      this->field_082E = 4;
      thunk_FUN_004162f0(pvVar10,(undefined2 *)&local_14,(undefined2 *)&local_18,
                         (undefined2 *)&local_1c);
LAB_00460fac:
      sub_00481520(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
      uVar3 = this->field_00B7;
      this->field_00B7 = 0;
      iVar12 = thunk_FUN_004601f0(this,0);
      if (iVar12 == -1) {
        return -1;
      }
      this->field_00B7 = uVar3;
      break;
    case 6:
    case 7:
    case 8:
      thunk_FUN_004162f0(pvVar10,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
      *(undefined2 *)&this->field_0x800 = local_6;
      *(undefined2 *)&this->field_0x802 = local_8;
      *(undefined2 *)&this->field_0x804 = param_1._2_2_;
      iVar12 = thunk_FUN_00484020(this,iVar12,(short *)&local_14,(short *)&local_18,
                                  (short *)&local_1c);
      if (iVar12 != 0) {
        this->field_082E = 4;
        goto LAB_00460fac;
      }
      if (300 < (short)this->field_0814) {
        this->field_0814 = this->field_0814 + -0xc9;
      }
      break;
    case 9:
      thunk_FUN_00416270(pvVar10,(undefined2 *)&local_14,&local_18,&local_1c);
      sVar6 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                         local_1c);
      uVar13 = sub_004176C0(this,sVar6);
      sub_00417910(this,(short)uVar13);
    }
  }
  if ((this->field_082E == 0) && (this->field_048B == 0xffff)) {
    if ((this->field_0475 != this->field_0047) ||
       ((this->field_0477 != this->field_0049 || (this->field_0479 != this->field_004B)))) {
      iVar12 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                            (int)(short)this->field_0475,(int)(short)this->field_0477,
                            (int)(short)this->field_0479);
      if ((iVar12 != -4) && (iVar12 < 8)) {
        this->field_082E = 4;
        sub_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                     (int)(short)this->field_0479);
        uVar3 = this->field_00B7;
        this->field_00B7 = 0;
        iVar12 = thunk_FUN_004601f0(this,0);
        if (iVar12 == -1) {
          return -1;
        }
        this->field_00B7 = uVar3;
        iVar12 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
      }
      this->field_0475 = this->field_005B;
      this->field_0477 = this->field_005D;
      this->field_0479 = this->field_005F;
    }
  }
LAB_00461264:
  iVar12 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
}

