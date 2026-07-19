
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Guard */

int __thiscall STBoatC::Guard(STBoatC *this,int param_1)

{
  code *pcVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  undefined2 uVar7;
  void *pvVar5;
  undefined3 extraout_var;
  undefined4 *puVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar8;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined4 extraout_ECX;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  STBoatCVTable *pSVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined2 extraout_var_08;
  undefined4 extraout_EDX_02;
  undefined2 extraout_var_09;
  undefined4 extraout_EDX_03;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  bool bVar13;
  undefined4 uVar14;
  int local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined2 local_44;
  int local_42;
  undefined4 local_3c [2];
  short local_34;
  ushort uStack_32;
  undefined2 local_30;
  int local_2c [2];
  uint local_24;
  STTorpC *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar6 = &this->field_02CC;
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    this->field_02C4 = 0;
    thunk_FUN_00490cd0(this,this->field_03A6,this->field_03AA,this->field_03AE,this->field_03B2);
    this->field_047B = 0;
    *(undefined4 *)&this->field_0x487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_082E = 0xffffffff;
    this->field_0836 = 2;
    this->field_0814 = this->field_0816 * 0xc9;
  }
  if (this->field_082E == -1) {
    iVar8 = this->field_0836 + -1;
    this->field_0836 = iVar8;
    if (1 < iVar8) {
      iVar8 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
    }
    this->field_082E = 0;
  }
  uVar10 = this->field_0836 + 1;
  this->field_0836 = uVar10;
  iVar8 = this->field_082E;
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      uVar4 = this->field_00B7;
      this->field_00B7 = 0;
      iVar8 = thunk_FUN_0045ff50(this,2);
      this->field_00B7 = uVar4;
      if (iVar8 == -1) {
        return -1;
      }
      if (iVar8 == 0) {
        this->field_047F = 0xffffffff;
        this->field_082E = 2;
      }
      else if (iVar8 == 3) {
        this->field_082E = 0;
      }
      if ((this->field_082E != 1) || (iVar8 = GetDefenceTarget(this,CASE_1), iVar8 != 0))
      goto switchD_0047251b_caseD_2;
      pvVar5 = (void *)STAllPlayersC::GetObjPtr
                                 (DAT_007fa174,
                                  CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this->field_0x487),
                                  CONCAT22(extraout_var_05,*(undefined2 *)&this->field_048B),
                                  this->field_0483);
      bVar2 = thunk_FUN_00483300((int *)this,extraout_EDX_01);
      iVar8 = CONCAT31(extraout_var_00,bVar2);
      switch(iVar8) {
      case 0:
      case 10:
        thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                           (undefined2 *)&local_1c);
        local_5a = this->field_0043;
        local_5c = this->field_0041;
        local_58 = this->field_0045;
        local_10 = 0;
        if (this->field_0x2b2 != '\0') {
          puVar12 = (ushort *)&this->field_0x2a8;
          do {
            if (*(int *)&this->field_0x7a2 < 1) break;
            puVar6 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar12 + -1),puVar12[1],
                                        *(short *)&this->field_0x6c);
            uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
            local_56 = this->field_0041 + (short)*puVar6;
            local_54 = this->field_0043 - uStack_32;
            local_52 = *(short *)(puVar6 + 1) + this->field_0045;
            uStack_32 = *puVar12;
            local_34 = 0;
            puVar6 = (undefined4 *)
                     thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,
                                        *(short *)&this->field_0x6c);
            local_34 = (short)*puVar6;
            uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
            local_30 = *(undefined2 *)(puVar6 + 1);
            local_50 = local_34 + (short)local_14;
            local_4e = (short)local_18 - uStack_32;
            local_64 = *(int *)&this->field_0x24;
            local_4c = (short)local_1c;
            local_42 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
            if (iVar8 == 10) {
              local_60 = 0xa1;
            }
            else {
              local_60 = this->field_079A;
            }
            local_4a = *(undefined2 *)&this->field_0x6c;
            local_48 = this->field_0018;
            local_44 = this->field_0032;
            thunk_FUN_00645880(&local_64);
            if (iVar8 == 10) {
              *(undefined4 *)&this->field_0x72a = 0;
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
switchD_0047251b_caseD_1:
        this->field_047F = 0xffffffff;
        break;
      case 9:
LAB_00472a3a:
        thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                           (undefined2 *)&local_1c);
        sVar3 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,
                           local_1c);
        uVar10 = thunk_FUN_004176c0(this,sVar3);
        thunk_FUN_00417910(this,(short)uVar10);
      }
    }
    else {
      if (iVar8 != 2) {
        if (iVar8 != 3) {
          if (iVar8 == 4) {
            uVar4 = this->field_00B7;
            this->field_00B7 = 0;
            iVar8 = thunk_FUN_004601f0(this,2);
            this->field_00B7 = uVar4;
            if (iVar8 != -1) {
              if ((iVar8 == 0) || (iVar8 == 3)) {
                this->field_0836 = 1;
                this->field_082E = 0;
              }
              iVar8 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
            }
          }
          else {
            if (iVar8 != 5) {
              iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2dbf,0,0,
                                         &DAT_007a4ccc,s_STBoatC__Guard___incorrect_entry_007aad20);
              if (iVar8 == 0) {
                return 2;
              }
              pcVar1 = (code *)swi(3);
              iVar8 = (*pcVar1)();
              return iVar8;
            }
            uVar4 = this->field_00B7;
            this->field_00B7 = 0;
            iVar8 = thunk_FUN_004601f0(this,2);
            this->field_00B7 = uVar4;
            if (iVar8 != -1) {
              if (iVar8 == 0) {
                iVar8 = FUN_006aadd0((int)(short)this->field_0047,(int)(short)this->field_0049,
                                     (int)(short)this->field_004B,(int)(short)this->field_0475,
                                     (int)(short)this->field_0477,(int)(short)this->field_0479);
                if (0 < iVar8) {
                  thunk_FUN_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                                     (int)(short)this->field_0479);
                  uVar4 = this->field_00B7;
                  this->field_00B7 = 0;
                  iVar8 = thunk_FUN_004601f0(this,0);
                  if (iVar8 == -1) {
                    return -1;
                  }
                  this->field_00B7 = uVar4;
                  goto switchD_0047251b_caseD_2;
                }
              }
              else if (iVar8 != 3) goto switchD_0047251b_caseD_2;
              this->field_0836 = 1;
              this->field_082E = 0;
              goto switchD_0047251b_caseD_2;
            }
          }
          return -1;
        }
        uVar4 = this->field_00B7;
        this->field_00B7 = 0;
        iVar8 = thunk_FUN_0045ff50(this,2);
        this->field_00B7 = uVar4;
        if (iVar8 == -1) {
          return -1;
        }
        if ((iVar8 == 0) || (iVar8 == 3)) {
          this->field_082E = 0;
        }
        if ((this->field_082E != 1) || (iVar8 = GetDefenceTarget(this,CASE_1), iVar8 != 0))
        goto switchD_0047251b_caseD_2;
        pvVar5 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,(uint)(byte)this->field_0x487,
                                    CONCAT22(extraout_var_09,*(undefined2 *)&this->field_048B),
                                    this->field_0483);
        bVar2 = thunk_FUN_00483300((int *)this,extraout_EDX_03);
        iVar8 = CONCAT31(extraout_var_02,bVar2);
        switch(iVar8) {
        case 0:
        case 10:
          thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                             (undefined2 *)&local_1c);
          local_5a = this->field_0043;
          local_5c = this->field_0041;
          local_58 = this->field_0045;
          local_10 = 0;
          if (this->field_0x2b2 != '\0') {
            puVar12 = (ushort *)&this->field_0x2a8;
            do {
              if (*(int *)&this->field_0x7a2 < 1) break;
              puVar6 = (undefined4 *)
                       thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar12 + -1),puVar12[1],
                                          *(short *)&this->field_0x6c);
              uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
              local_56 = this->field_0041 + (short)*puVar6;
              local_54 = this->field_0043 - uStack_32;
              local_52 = *(short *)(puVar6 + 1) + this->field_0045;
              uStack_32 = *puVar12;
              local_34 = 0;
              puVar6 = (undefined4 *)
                       thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,
                                          *(short *)&this->field_0x6c);
              local_34 = (short)*puVar6;
              uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
              local_30 = *(undefined2 *)(puVar6 + 1);
              local_50 = local_34 + (short)local_14;
              local_4e = (short)local_18 - uStack_32;
              local_64 = *(int *)&this->field_0x24;
              local_4c = (short)local_1c;
              local_42 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
              if (iVar8 == 10) {
                local_60 = 0xa1;
              }
              else {
                local_60 = this->field_079A;
              }
              local_4a = *(undefined2 *)&this->field_0x6c;
              local_48 = this->field_0018;
              local_44 = this->field_0032;
              thunk_FUN_00645880(&local_64);
              if (iVar8 == 10) {
                *(undefined4 *)&this->field_0x72a = 0;
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
          goto switchD_0047251b_caseD_1;
        case 9:
          goto switchD_004727e9_caseD_9;
        }
        goto switchD_0047251b_caseD_2;
      }
      iVar8 = thunk_FUN_00483f10((int)this);
      if (iVar8 == 1) {
        sVar3 = *(short *)&this->field_0x469;
        *(short *)&this->field_0x469 = -sVar3;
        iVar8 = (*this->vtable->vfunc_18)
                          (CONCAT22(extraout_var_06,this->field_0047),this->field_0049,
                           -sVar3 + this->field_004B);
        if (iVar8 == 1) {
          this->field_082E = 3;
          thunk_FUN_00481520(this,(int)(short)this->field_0047,(int)(short)this->field_0049,
                             (int)*(short *)&this->field_0x469 + (int)(short)this->field_004B);
          uVar4 = this->field_00B7;
          this->field_00B7 = 0;
          iVar8 = thunk_FUN_0045ff50(this,0);
          this->field_00B7 = uVar4;
          if (iVar8 == -1) {
            return -1;
          }
          if ((iVar8 != 0) && (iVar8 != 3)) {
            return 2;
          }
          *(undefined2 *)&this->field_0x469 = 0;
          this->field_082E = 0;
          return 2;
        }
        *(short *)&this->field_0x469 = -*(short *)&this->field_0x469;
      }
      if ((this->field_082E != 2) || (iVar8 = GetDefenceTarget(this,CASE_2), iVar8 != 0))
      goto switchD_0047251b_caseD_2;
      pvVar5 = (void *)STAllPlayersC::GetObjPtr
                                 (DAT_007fa174,(uint)(byte)this->field_0x487,
                                  CONCAT22(extraout_var_08,*(undefined2 *)&this->field_048B),
                                  this->field_0483);
      bVar2 = thunk_FUN_00483300((int *)this,extraout_EDX_02);
      iVar8 = CONCAT31(extraout_var_01,bVar2);
      switch(iVar8) {
      case 0:
      case 10:
        thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                           (undefined2 *)&local_1c);
        local_5a = this->field_0043;
        local_5c = this->field_0041;
        local_58 = this->field_0045;
        local_10 = 0;
        if (this->field_0x2b2 != '\0') {
          puVar12 = (ushort *)&this->field_0x2a8;
          do {
            if (*(int *)&this->field_0x7a2 < 1) break;
            puVar6 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar12 + -1),puVar12[1],
                                        *(short *)&this->field_0x6c);
            uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
            local_56 = this->field_0041 + (short)*puVar6;
            local_54 = this->field_0043 - uStack_32;
            local_52 = *(short *)(puVar6 + 1) + this->field_0045;
            uStack_32 = *puVar12;
            local_34 = 0;
            puVar6 = (undefined4 *)
                     thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,
                                        *(short *)&this->field_0x6c);
            local_34 = (short)*puVar6;
            uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
            local_30 = *(undefined2 *)(puVar6 + 1);
            local_50 = local_34 + (short)local_14;
            local_4e = (short)local_18 - uStack_32;
            local_64 = *(int *)&this->field_0x24;
            local_4c = (short)local_1c;
            local_42 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
            if (iVar8 == 10) {
              local_60 = 0xa1;
            }
            else {
              local_60 = this->field_079A;
            }
            local_4a = *(undefined2 *)&this->field_0x6c;
            local_48 = this->field_0018;
            local_44 = this->field_0032;
            thunk_FUN_00645880(&local_64);
            if (iVar8 == 10) {
              *(undefined4 *)&this->field_0x72a = 0;
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
        goto switchD_0047251b_caseD_1;
      case 9:
switchD_004727e9_caseD_9:
        goto LAB_00472a3a;
      }
    }
switchD_0047251b_caseD_2:
    iVar8 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
  }
  uVar10 = uVar10 & 0x80000001;
  bVar13 = uVar10 == 0;
  if ((int)uVar10 < 0) {
    bVar13 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar13) && (DAT_007fa134 != 0)) {
    iVar8 = *(int *)(DAT_007fa130 + 0xc);
    local_34 = (short)iVar8;
    uStack_32 = (ushort)((uint)iVar8 >> 0x10);
    if ((iVar8 != 0) && (uVar10 = 0, iVar11 = DAT_007fa134, iVar8 != 0)) {
      while (0 < iVar11) {
        FUN_006acc70(DAT_007fa130,uVar10,&local_20);
        if (local_20 != (STTorpC *)0x0) {
          iVar11 = iVar11 + -1;
          thunk_FUN_004162b0(local_20,(undefined2 *)((int)&local_10 + 2),&local_c,&local_a);
          local_2c[0] = FUN_006aadd0((int)(short)this->field_0047,(int)(short)this->field_0049,
                                     (int)(short)this->field_004B,(int)local_10._2_2_,(int)local_c,
                                     (int)local_a);
          if ((local_2c[0] <= (int)this->field_080C / 0xc9 + 1) &&
             (iVar8 = STTorpC::IsDangerous(local_20,this->field_0018,&local_24), iVar8 != 2)) {
            if (iVar8 == 0) {
              iVar8 = thunk_FUN_004838e0(this,(int)local_20);
              if (iVar8 == 1) {
                STTorpC::SetDangerous(local_20,this->field_0018,&local_24);
LAB_00471cbd:
                iVar8 = thunk_FUN_00483e30(this,(int)local_20);
                if (iVar8 == 1) {
                  STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
                  *(STTorpC **)&this->field_0x46b = local_20;
                  *(undefined2 *)&this->field_0x46f = *(undefined2 *)(local_20 + 0x26e);
                  uVar4 = *(undefined4 *)(local_20 + 0x18);
                  *(undefined4 *)&this->field_0x471 = uVar4;
                  sVar3 = this->field_004B;
                  uVar4 = CONCAT22((short)((uint)uVar4 >> 0x10),sVar3);
                  if (sVar3 == 0) {
                    pSVar9 = this->vtable;
                    *(undefined2 *)&this->field_0x469 = 1;
                    uVar7 = extraout_var_03;
                    uVar14 = 1;
LAB_00471ec9:
                    iVar8 = (*pSVar9->vfunc_18)(CONCAT22(uVar7,this->field_0047),
                                                CONCAT22((short)((uint)uVar4 >> 0x10),
                                                         this->field_0049),uVar14);
                    if (iVar8 != 1) break;
                    this->field_082E = 1;
                    thunk_FUN_00481520(this,(int)(short)this->field_0047,
                                       (int)(short)this->field_0049,
                                       (int)*(short *)&this->field_0x469 +
                                       (int)(short)this->field_004B);
                    uVar4 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar8 = thunk_FUN_0045ff50(this,0);
                    this->field_00B7 = uVar4;
                  }
                  else if (sVar3 == 4) {
                    *(undefined2 *)&this->field_0x469 = 0xffff;
                    iVar8 = (*this->vtable->vfunc_18)
                                      (CONCAT22(extraout_var_07,this->field_0047),
                                       CONCAT22(extraout_var_03,this->field_0049),3);
                    if (iVar8 != 1) break;
                    this->field_082E = 1;
                    thunk_FUN_00481520(this,(int)(short)this->field_0047,
                                       (int)(short)this->field_0049,
                                       (int)*(short *)&this->field_0x469 +
                                       (int)(short)this->field_004B);
                    uVar4 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar8 = thunk_FUN_0045ff50(this,0);
                    this->field_00B7 = uVar4;
                  }
                  else {
                    iVar11 = *(int *)&this->field_0x1c * 0x41c64e6d;
                    uVar10 = iVar11 + 0x3039;
                    *(uint *)&this->field_0x1c = uVar10;
                    *(ushort *)&this->field_0x469 = (ushort)(uVar10 >> 0x10) & 1;
                    iVar8 = (-(uint)((uVar10 & 0x10000) != 0) & 2) - 1;
                    sVar3 = (short)iVar8;
                    *(short *)&this->field_0x469 = sVar3;
                    uVar7 = (undefined2)((uint)iVar8 >> 0x10);
                    iVar8 = (*this->vtable->vfunc_18)
                                      (CONCAT22(uVar7,this->field_0047),
                                       CONCAT22((short)((uint)iVar11 >> 0x10),this->field_0049),
                                       CONCAT22(uVar7,sVar3 + this->field_004B));
                    if (iVar8 != 1) {
                      sVar3 = *(short *)&this->field_0x469;
                      pSVar9 = this->vtable;
                      *(short *)&this->field_0x469 = -sVar3;
                      uVar4 = CONCAT22((short)((uint)iVar8 >> 0x10),-sVar3 + this->field_004B);
                      uVar7 = extraout_var_04;
                      uVar14 = uVar4;
                      goto LAB_00471ec9;
                    }
                    this->field_082E = 1;
                    thunk_FUN_00481520(this,(int)(short)this->field_0047,
                                       (int)(short)this->field_0049,
                                       (int)*(short *)&this->field_0x469 +
                                       (int)(short)this->field_004B);
                    uVar4 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar8 = thunk_FUN_0045ff50(this,0);
                    this->field_00B7 = uVar4;
                  }
                  if (iVar8 == -1) {
                    return -1;
                  }
                  if ((iVar8 == 0) || (iVar8 == 3)) {
                    *(undefined2 *)&this->field_0x469 = 0;
                    this->field_082E = 0;
                  }
                  break;
                }
              }
              else {
                STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
              }
            }
            else if (iVar8 == 1) goto LAB_00471cbd;
          }
        }
        uVar10 = uVar10 + 1;
        if (CONCAT22(uStack_32,local_34) <= uVar10) break;
      }
    }
  }
  if (this->field_082E != 0) goto switchD_00471fe0_caseD_2;
  if (this->field_0836 == 2) {
    this->field_047F = 0xffffffff;
    iVar8 = GetDefenceTarget(this,CASE_0);
    uVar10 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this->field_0x1c = uVar10;
    this->field_047F = (uVar10 >> 0x10) % 0x15;
  }
  else {
    iVar8 = GetDefenceTarget(this,CASE_0);
  }
  iVar11 = FUN_006aadd0((int)(short)this->field_0047,(int)(short)this->field_0049,
                        (int)(short)this->field_004B,(int)(short)this->field_0475,
                        (int)(short)this->field_0477,(int)(short)this->field_0479);
  if (iVar8 != 0) {
    if (iVar11 < 1) goto switchD_00471fe0_caseD_2;
    this->field_082E = 5;
    thunk_FUN_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                       (int)(short)this->field_0479);
    uVar4 = this->field_00B7;
    this->field_00B7 = 0;
    iVar8 = thunk_FUN_004601f0(this,0);
    if (iVar8 == -1) {
      return -1;
    }
    goto LAB_0047233a;
  }
  if (5 < iVar11) {
    this->field_082E = 5;
    thunk_FUN_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                       (int)(short)this->field_0479);
    uVar4 = this->field_00B7;
    this->field_00B7 = 0;
    goto LAB_004720a6;
  }
  pvVar5 = (void *)STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_0x487),
                              CONCAT22((short)((uint)iVar11 >> 0x10),
                                       *(undefined2 *)&this->field_048B),this->field_0483);
  bVar2 = thunk_FUN_00483300((int *)this,extraout_EDX);
  iVar8 = CONCAT31(extraout_var,bVar2);
  switch(iVar8) {
  case 0:
  case 10:
    thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                       (undefined2 *)&local_1c);
    local_5a = this->field_0043;
    local_5c = this->field_0041;
    local_58 = this->field_0045;
    local_10 = 0;
    if (this->field_0x2b2 != '\0') {
      puVar12 = (ushort *)&this->field_0x2a8;
      do {
        if (*(int *)&this->field_0x7a2 < 1) break;
        puVar6 = (undefined4 *)
                 thunk_FUN_0041dc40(local_2c,*(undefined4 *)(puVar12 + -1),puVar12[1],
                                    *(short *)&this->field_0x6c);
        uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
        local_56 = this->field_0041 + (short)*puVar6;
        local_54 = this->field_0043 - uStack_32;
        local_52 = *(short *)(puVar6 + 1) + this->field_0045;
        uStack_32 = *puVar12;
        local_34 = 0;
        puVar6 = (undefined4 *)
                 thunk_FUN_0041dc40(local_3c,(uint)uStack_32 << 0x10,0,*(short *)&this->field_0x6c);
        local_34 = (short)*puVar6;
        uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
        local_30 = *(undefined2 *)(puVar6 + 1);
        local_50 = local_34 + (short)local_14;
        local_4e = (short)local_18 - uStack_32;
        local_64 = *(int *)&this->field_0x24;
        local_4c = (short)local_1c;
        local_42 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
        if (iVar8 == 10) {
          local_60 = 0xa1;
        }
        else {
          local_60 = this->field_079A;
        }
        local_4a = *(undefined2 *)&this->field_0x6c;
        local_48 = this->field_0018;
        local_44 = this->field_0032;
        thunk_FUN_00645880(&local_64);
        if (iVar8 == 10) {
          *(undefined4 *)&this->field_0x72a = 0;
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
    iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2c5e,0,-1,&DAT_007a4ccc,
                               s_STBoatC__Guard_NOT_ZONE_A_007aad48);
    if (iVar8 == 0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2c5f);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    iVar8 = (*pcVar1)();
    return iVar8;
  case 5:
    this->field_082E = 4;
    thunk_FUN_004162f0(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                       (undefined2 *)&local_1c);
    goto LAB_0047207e;
  case 6:
  case 7:
  case 8:
    thunk_FUN_004162f0(pvVar5,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
    *(undefined2 *)&this->field_0x800 = local_6;
    *(undefined2 *)&this->field_0x802 = local_8;
    *(undefined2 *)&this->field_0x804 = param_1._2_2_;
    iVar8 = thunk_FUN_00484020(this,iVar8,(short *)&local_14,(short *)&local_18,(short *)&local_1c);
    if (iVar8 == 0) {
      if (300 < (short)this->field_0814) {
        this->field_0814 = this->field_0814 + -0xc9;
      }
      break;
    }
    this->field_082E = 4;
LAB_0047207e:
    thunk_FUN_00481520(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
    uVar4 = this->field_00B7;
    this->field_00B7 = 0;
LAB_004720a6:
    iVar8 = thunk_FUN_004601f0(this,0);
    if (iVar8 == -1) {
      return -1;
    }
LAB_0047233a:
    this->field_00B7 = uVar4;
    break;
  case 9:
    thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                       (undefined2 *)&local_1c);
    sVar3 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,this->field_0045,local_14,local_18,local_1c
                      );
    uVar10 = thunk_FUN_004176c0(this,sVar3);
    thunk_FUN_00417910(this,(short)uVar10);
  }
switchD_00471fe0_caseD_2:
  if ((this->field_082E == 0) && (this->field_048B == 0xffff)) {
    if ((this->field_0475 != this->field_0047) ||
       ((this->field_0477 != this->field_0049 || (this->field_0479 != this->field_004B)))) {
      iVar8 = FUN_006aadd0((int)(short)this->field_0047,(int)(short)this->field_0049,
                           (int)(short)this->field_004B,(int)(short)this->field_0475,
                           (int)(short)this->field_0477,(int)(short)this->field_0479);
      if ((iVar8 != -4) && (iVar8 < 8)) {
        this->field_082E = 4;
        thunk_FUN_00481520(this,(int)(short)this->field_0475,(int)(short)this->field_0477,
                           (int)(short)this->field_0479);
        uVar4 = this->field_00B7;
        this->field_00B7 = 0;
        iVar8 = thunk_FUN_004601f0(this,0);
        if (iVar8 != -1) {
          this->field_00B7 = uVar4;
          iVar8 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
        }
        return -1;
      }
      this->field_0475 = this->field_005B;
      this->field_0477 = this->field_005D;
      this->field_0479 = this->field_005F;
    }
  }
  iVar8 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
}

