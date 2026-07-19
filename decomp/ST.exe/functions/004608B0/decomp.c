
int __thiscall FUN_004608b0(void *this,int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined3 extraout_var;
  undefined4 *puVar8;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar9;
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
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  bool bVar13;
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
    puVar8 = (undefined4 *)((int)this + 0x2cc);
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    *(undefined2 *)((int)this + 0x475) = *(undefined2 *)((int)this + 0x47);
    *(undefined2 *)((int)this + 0x477) = *(undefined2 *)((int)this + 0x49);
    *(undefined2 *)((int)this + 0x479) = *(undefined2 *)((int)this + 0x4b);
    *(undefined4 *)((int)this + 0x47b) = 0;
    *(undefined4 *)((int)this + 0x487) = 0xffffffff;
    *(undefined4 *)((int)this + 0x48b) = 0xffff;
    *(undefined4 *)((int)this + 0x82e) = 0xffffffff;
    iVar9 = *(int *)((int)this + 0x45d);
    if ((((iVar9 == 6) || (iVar9 == 0xc)) || (iVar9 == 0xd)) || (iVar9 == 4)) {
      *(undefined4 *)((int)this + 0x836) = 2;
    }
    else {
      *(undefined4 *)((int)this + 0x836) = 4;
    }
    *(short *)((int)this + 0x814) = *(short *)((int)this + 0x816) * 0xc9;
  }
  if (*(int *)((int)this + 0x82e) == -1) {
    iVar9 = *(int *)((int)this + 0x836) + -1;
    *(int *)((int)this + 0x836) = iVar9;
    if (1 < iVar9) {
      iVar9 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
    }
    *(undefined4 *)((int)this + 0x82e) = 0;
  }
  uVar10 = *(int *)((int)this + 0x836) + 1;
  *(uint *)((int)this + 0x836) = uVar10;
  iVar9 = *(int *)((int)this + 0x82e);
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      uVar1 = *(undefined4 *)((int)this + 0xb7);
      *(undefined4 *)((int)this + 0xb7) = 0;
      iVar9 = thunk_FUN_0045ff50(this,2);
      *(undefined4 *)((int)this + 0xb7) = uVar1;
      if (iVar9 == -1) {
        return -1;
      }
      if (iVar9 == 0) {
        *(undefined4 *)((int)this + 0x47f) = 0xffffffff;
        *(undefined4 *)((int)this + 0x82e) = 2;
      }
      else if (iVar9 == 3) {
        *(undefined2 *)((int)this + 0x469) = 0;
        *(undefined4 *)((int)this + 0x82e) = 0;
      }
      if (*(int *)((int)this + 0x82e) != 1) {
        return 2;
      }
      iVar9 = thunk_FUN_004899a0(this,1);
      if (iVar9 != 0) {
        return 2;
      }
      pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                                                   *(undefined1 *)((int)this + 0x487)),
                                          CONCAT22(extraout_var_05,
                                                   *(undefined2 *)((int)this + 0x48b)),
                                          *(undefined4 *)((int)this + 0x483));
      bVar3 = thunk_FUN_00483300(this,extraout_EDX_02);
      iVar9 = CONCAT31(extraout_var_00,bVar3);
      switch(iVar9) {
      case 0:
      case 10:
        thunk_FUN_00416270(pvVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                           (undefined2 *)&local_1c);
        local_5a = *(undefined2 *)((int)this + 0x43);
        local_5c = *(undefined2 *)((int)this + 0x41);
        local_58 = *(undefined2 *)((int)this + 0x45);
        local_10 = 0;
        if (*(char *)((int)this + 0x2b2) == '\0') {
          return 2;
        }
        puVar12 = (ushort *)((int)this + 0x2a8);
        do {
          if (*(int *)((int)this + 0x7a2) < 1) {
            return 2;
          }
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar12 + -1),puVar12[1],
                                      *(short *)((int)this + 0x6c));
          uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
          local_56 = (short)*puVar8 + *(short *)((int)this + 0x41);
          local_54 = *(short *)((int)this + 0x43) - uStack_32;
          local_52 = *(short *)((int)this + 0x45) + *(short *)(puVar8 + 1);
          uStack_32 = *puVar12;
          local_34 = 0;
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,
                                      *(short *)((int)this + 0x6c));
          local_34 = (short)*puVar8;
          uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
          local_30 = *(undefined2 *)(puVar8 + 1);
          local_50 = local_34 + (short)local_14;
          local_4e = (short)local_18 - uStack_32;
          local_64 = *(int *)((int)this + 0x24);
          local_4c = (short)local_1c;
          local_42 = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
          if (iVar9 == 10) {
            local_60 = 0xa1;
          }
          else {
            local_60 = *(undefined4 *)((int)this + 0x79a);
          }
          local_4a = *(undefined2 *)((int)this + 0x6c);
          local_48 = *(undefined4 *)((int)this + 0x18);
          local_44 = *(undefined2 *)((int)this + 0x32);
          thunk_FUN_00645880(&local_64);
          if (iVar9 == 10) {
            *(undefined4 *)((int)this + 0x72a) = 0;
          }
          else {
            *(undefined4 *)((int)this + 0x7aa) = 0;
            *(int *)((int)this + 0x7a2) = *(int *)((int)this + 0x7a2) + -1;
          }
          local_10 = local_10 + 1;
          puVar12 = puVar12 + 3;
        } while (local_10 < *(byte *)((int)this + 0x2b2));
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
        thunk_FUN_00416270(pvVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                           (undefined2 *)&local_1c);
        sVar4 = (**(code **)(*(int *)this + 0x10))
                          (*(undefined2 *)((int)this + 0x41),*(undefined2 *)((int)this + 0x43),
                           *(undefined2 *)((int)this + 0x45),local_14,local_18,local_1c);
        uVar10 = thunk_FUN_004176c0(this,sVar4);
        thunk_FUN_00417910(this,(short)uVar10);
        return 2;
      }
    }
    if (iVar9 == 2) {
      iVar9 = thunk_FUN_00483f10((int)this);
      if (iVar9 == 1) {
        sVar4 = *(short *)((int)this + 0x469);
        *(short *)((int)this + 0x469) = -sVar4;
        iVar9 = (**(code **)(*(int *)this + 0x18))
                          (CONCAT22(extraout_var_06,*(undefined2 *)((int)this + 0x47)),
                           *(undefined2 *)((int)this + 0x49),-sVar4 + *(short *)((int)this + 0x4b));
        if (iVar9 == 1) {
          *(undefined4 *)((int)this + 0x82e) = 3;
          thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x47),
                             (int)*(short *)((int)this + 0x49),
                             (int)*(short *)((int)this + 0x469) + (int)*(short *)((int)this + 0x4b))
          ;
          uVar1 = *(undefined4 *)((int)this + 0xb7);
          *(undefined4 *)((int)this + 0xb7) = 0;
          iVar9 = thunk_FUN_0045ff50(this,0);
          *(undefined4 *)((int)this + 0xb7) = uVar1;
          if (iVar9 == -1) {
            return -1;
          }
          if ((iVar9 != 0) && (iVar9 != 3)) {
            return 2;
          }
          *(undefined2 *)((int)this + 0x469) = 0;
          *(undefined4 *)((int)this + 0x82e) = 0;
          return 2;
        }
        *(short *)((int)this + 0x469) = -*(short *)((int)this + 0x469);
      }
      if ((*(int *)((int)this + 0x82e) == 2) && (iVar9 = thunk_FUN_004899a0(this,2), iVar9 == 0)) {
        pvVar7 = (void *)thunk_FUN_0042b620((uint)*(byte *)((int)this + 0x487),
                                            CONCAT22(extraout_var_08,
                                                     *(undefined2 *)((int)this + 0x48b)),
                                            *(undefined4 *)((int)this + 0x483));
        bVar3 = thunk_FUN_00483300(this,extraout_EDX_03);
        iVar9 = CONCAT31(extraout_var_01,bVar3);
        switch(iVar9) {
        case 0:
        case 10:
          thunk_FUN_00416270(pvVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                             (undefined2 *)&local_1c);
          local_5a = *(undefined2 *)((int)this + 0x43);
          local_5c = *(undefined2 *)((int)this + 0x41);
          local_58 = *(undefined2 *)((int)this + 0x45);
          local_10 = 0;
          if (*(char *)((int)this + 0x2b2) != '\0') {
            puVar12 = (ushort *)((int)this + 0x2a8);
            do {
              if (*(int *)((int)this + 0x7a2) < 1) break;
              puVar8 = (undefined4 *)
                       thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar12 + -1),puVar12[1],
                                          *(short *)((int)this + 0x6c));
              uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
              local_56 = (short)*puVar8 + *(short *)((int)this + 0x41);
              local_54 = *(short *)((int)this + 0x43) - uStack_32;
              local_52 = *(short *)((int)this + 0x45) + *(short *)(puVar8 + 1);
              uStack_32 = *puVar12;
              local_34 = 0;
              puVar8 = (undefined4 *)
                       thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,
                                          *(short *)((int)this + 0x6c));
              local_34 = (short)*puVar8;
              uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
              local_30 = *(undefined2 *)(puVar8 + 1);
              local_50 = local_34 + (short)local_14;
              local_4e = (short)local_18 - uStack_32;
              local_64 = *(int *)((int)this + 0x24);
              local_4c = (short)local_1c;
              local_42 = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
              if (iVar9 == 10) {
                local_60 = 0xa1;
              }
              else {
                local_60 = *(undefined4 *)((int)this + 0x79a);
              }
              local_4a = *(undefined2 *)((int)this + 0x6c);
              local_48 = *(undefined4 *)((int)this + 0x18);
              local_44 = *(undefined2 *)((int)this + 0x32);
              thunk_FUN_00645880(&local_64);
              if (iVar9 == 10) {
                *(undefined4 *)((int)this + 0x72a) = 0;
              }
              else {
                *(undefined4 *)((int)this + 0x7aa) = 0;
                *(int *)((int)this + 0x7a2) = *(int *)((int)this + 0x7a2) + -1;
              }
              local_10 = local_10 + 1;
              puVar12 = puVar12 + 3;
            } while (local_10 < *(byte *)((int)this + 0x2b2));
          }
          break;
        case 1:
        case 5:
        case 6:
        case 7:
        case 8:
          *(undefined4 *)((int)this + 0x47f) = 0xffffffff;
          break;
        case 9:
          thunk_FUN_00416270(pvVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                             (undefined2 *)&local_1c);
          sVar4 = (**(code **)(*(int *)this + 0x10))
                            (*(undefined2 *)((int)this + 0x41),*(undefined2 *)((int)this + 0x43),
                             *(undefined2 *)((int)this + 0x45),local_14,local_18,local_1c);
          uVar10 = thunk_FUN_004176c0(this,sVar4);
          thunk_FUN_00417910(this,(short)uVar10);
        }
      }
    }
    else {
      if (iVar9 == 3) {
        uVar1 = *(undefined4 *)((int)this + 0xb7);
        *(undefined4 *)((int)this + 0xb7) = 0;
        iVar9 = thunk_FUN_0045ff50(this,2);
        *(undefined4 *)((int)this + 0xb7) = uVar1;
        if (iVar9 == -1) {
          return -1;
        }
        if ((iVar9 == 0) || (iVar9 == 3)) {
          *(undefined2 *)((int)this + 0x469) = 0;
          *(undefined4 *)((int)this + 0x82e) = 0;
        }
        if ((*(int *)((int)this + 0x82e) == 3) && (iVar9 = thunk_FUN_004899a0(this,3), iVar9 == 0))
        {
          pvVar7 = (void *)thunk_FUN_0042b620((uint)*(byte *)((int)this + 0x487),
                                              CONCAT22(extraout_var_09,
                                                       *(undefined2 *)((int)this + 0x48b)),
                                              *(undefined4 *)((int)this + 0x483));
          bVar3 = thunk_FUN_00483300(this,extraout_EDX_04);
          iVar9 = CONCAT31(extraout_var_02,bVar3);
          switch(iVar9) {
          case 0:
          case 10:
            thunk_FUN_00416270(pvVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                               (undefined2 *)&local_1c);
            local_5a = *(undefined2 *)((int)this + 0x43);
            local_5c = *(undefined2 *)((int)this + 0x41);
            local_58 = *(undefined2 *)((int)this + 0x45);
            local_10 = 0;
            if (*(char *)((int)this + 0x2b2) != '\0') {
              puVar12 = (ushort *)((int)this + 0x2a8);
              while (0 < *(int *)((int)this + 0x7a2)) {
                puVar8 = (undefined4 *)
                         thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar12 + -1),puVar12[1],
                                            *(short *)((int)this + 0x6c));
                uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
                local_56 = (short)*puVar8 + *(short *)((int)this + 0x41);
                local_54 = *(short *)((int)this + 0x43) - uStack_32;
                local_52 = *(short *)((int)this + 0x45) + *(short *)(puVar8 + 1);
                uStack_32 = *puVar12;
                local_34 = 0;
                puVar8 = (undefined4 *)
                         thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,
                                            *(short *)((int)this + 0x6c));
                local_34 = (short)*puVar8;
                uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
                local_30 = *(undefined2 *)(puVar8 + 1);
                local_50 = local_34 + (short)local_14;
                local_4e = (short)local_18 - uStack_32;
                local_64 = *(int *)((int)this + 0x24);
                local_4c = (short)local_1c;
                local_42 = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
                if (iVar9 == 10) {
                  local_60 = 0xa1;
                }
                else {
                  local_60 = *(undefined4 *)((int)this + 0x79a);
                }
                local_4a = *(undefined2 *)((int)this + 0x6c);
                local_48 = *(undefined4 *)((int)this + 0x18);
                local_44 = *(undefined2 *)((int)this + 0x32);
                thunk_FUN_00645880(&local_64);
                if (iVar9 == 10) {
                  *(undefined4 *)((int)this + 0x72a) = 0;
                }
                else {
                  *(undefined4 *)((int)this + 0x7aa) = 0;
                  *(int *)((int)this + 0x7a2) = *(int *)((int)this + 0x7a2) + -1;
                }
                local_10 = local_10 + 1;
                puVar12 = puVar12 + 3;
                if (*(byte *)((int)this + 0x2b2) <= local_10) {
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
            *(undefined4 *)((int)this + 0x47f) = 0xffffffff;
            return 2;
          case 9:
            thunk_FUN_00416270(pvVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                               (undefined2 *)&local_1c);
            sVar4 = (**(code **)(*(int *)this + 0x10))
                              (*(undefined2 *)((int)this + 0x41),*(undefined2 *)((int)this + 0x43),
                               *(undefined2 *)((int)this + 0x45),local_14,local_18,local_1c);
            uVar10 = thunk_FUN_004176c0(this,sVar4);
            thunk_FUN_00417910(this,(short)uVar10);
            return 2;
          }
        }
        return 2;
      }
      if (iVar9 != 4) {
        iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1808,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Defence___incorrect_ent_007aa0f4);
        if (iVar9 == 0) {
          return 2;
        }
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
      uVar1 = *(undefined4 *)((int)this + 0xb7);
      *(undefined4 *)((int)this + 0xb7) = 0;
      iVar9 = thunk_FUN_004601f0(this,2);
      *(undefined4 *)((int)this + 0xb7) = uVar1;
      if (iVar9 == -1) {
        return -1;
      }
      if ((iVar9 == 0) || (iVar9 == 3)) {
        *(undefined4 *)((int)this + 0x836) = 1;
        *(undefined4 *)((int)this + 0x82e) = 0;
      }
    }
switchD_0046166b_caseD_2:
    iVar9 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
  }
  if (0 < *(int *)((int)this + 0x73a)) goto switchD_0046166b_caseD_2;
  uVar10 = uVar10 & 0x80000001;
  bVar13 = uVar10 == 0;
  if ((int)uVar10 < 0) {
    bVar13 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar13) && (DAT_007fa134 != 0)) {
    iVar9 = *(int *)(DAT_007fa130 + 0xc);
    local_34 = (short)iVar9;
    uStack_32 = (ushort)((uint)iVar9 >> 0x10);
    if ((iVar9 != 0) && (uVar10 = 0, iVar11 = DAT_007fa134, iVar9 != 0)) {
      do {
        if (iVar11 < 1) break;
        FUN_006acc70(DAT_007fa130,uVar10,&local_20);
        if (local_20 != (STTorpC *)0x0) {
          iVar11 = iVar11 + -1;
          thunk_FUN_004162b0(local_20,(undefined2 *)((int)&local_10 + 2),&local_c,&local_a);
          local_2c[0] = FUN_006aadd0((int)*(short *)((int)this + 0x47),
                                     (int)*(short *)((int)this + 0x49),
                                     (int)*(short *)((int)this + 0x4b),(int)local_10._2_2_,
                                     (int)local_c,(int)local_a);
          if ((local_2c[0] <= *(int *)((int)this + 0x80c) / 0xc9 + 1) &&
             (iVar9 = STTorpC::IsDangerous(local_20,*(int *)((int)this + 0x18),&local_24),
             iVar9 != 2)) {
            if (iVar9 == 0) {
              iVar9 = thunk_FUN_004838e0(this,(int)local_20);
              if (iVar9 == 1) {
                STTorpC::SetDangerous(local_20,*(undefined4 *)((int)this + 0x18),&local_24);
LAB_00460adb:
                iVar9 = thunk_FUN_00483e30(this,(int)local_20);
                if (iVar9 == 1) {
                  STTorpC::ClearDangerous(local_20,*(int *)((int)this + 0x18),local_24);
                  *(STTorpC **)((int)this + 0x46b) = local_20;
                  *(undefined2 *)((int)this + 0x46f) = *(undefined2 *)(local_20 + 0x26e);
                  uVar1 = *(undefined4 *)(local_20 + 0x18);
                  *(undefined4 *)((int)this + 0x471) = uVar1;
                  if (*(short *)((int)this + 0x4b) == 0) {
                    *(undefined2 *)((int)this + 0x469) = 1;
                    iVar9 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(extraout_var_03,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22((short)((uint)uVar1 >> 0x10),
                                                *(undefined2 *)((int)this + 0x49)),1);
                    if (iVar9 != 1) {
LAB_00460d94:
                      *(undefined2 *)((int)this + 0x469) = 0;
                      break;
                    }
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x47),
                                       (int)*(short *)((int)this + 0x49),
                                       (int)*(short *)((int)this + 0x469) +
                                       (int)*(short *)((int)this + 0x4b));
                    uVar1 = *(undefined4 *)((int)this + 0xb7);
                    *(undefined4 *)((int)this + 0xb7) = 0;
                    iVar9 = thunk_FUN_0045ff50(this,0);
                    *(undefined4 *)((int)this + 0xb7) = uVar1;
                    if (iVar9 == -1) {
                      return -1;
                    }
                    if (iVar9 != 0) {
                      if (iVar9 == 3) {
                        *(undefined2 *)((int)this + 0x469) = 0;
                        *(undefined4 *)((int)this + 0x82e) = 0;
                      }
                      break;
                    }
                  }
                  else if (*(short *)((int)this + 0x4b) == 4) {
                    *(undefined2 *)((int)this + 0x469) = 0xffff;
                    iVar9 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(extraout_var_07,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22(extraout_var_03,*(undefined2 *)((int)this + 0x49)),3
                                      );
                    if (iVar9 != 1) goto LAB_00460d94;
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x47),
                                       (int)*(short *)((int)this + 0x49),
                                       (int)*(short *)((int)this + 0x469) +
                                       (int)*(short *)((int)this + 0x4b));
                    uVar1 = *(undefined4 *)((int)this + 0xb7);
                    *(undefined4 *)((int)this + 0xb7) = 0;
                    iVar9 = thunk_FUN_0045ff50(this,0);
                    *(undefined4 *)((int)this + 0xb7) = uVar1;
                    if (iVar9 == -1) {
                      return -1;
                    }
                    if (iVar9 != 0) {
                      if (iVar9 == 3) {
                        *(undefined2 *)((int)this + 0x469) = 0;
                        *(undefined4 *)((int)this + 0x82e) = 0;
                      }
                      break;
                    }
                  }
                  else {
                    iVar9 = *(int *)((int)this + 0x1c) * 0x41c64e6d;
                    uVar10 = iVar9 + 0x3039;
                    *(uint *)((int)this + 0x1c) = uVar10;
                    *(ushort *)((int)this + 0x469) = (ushort)(uVar10 >> 0x10) & 1;
                    if ((uVar10 & 0x10000) == 0) {
                      *(undefined2 *)((int)this + 0x469) = 0xffff;
                    }
                    iVar9 = (**(code **)(*(int *)this + 0x18))
                                      (*(undefined2 *)((int)this + 0x47),
                                       CONCAT22((short)((uint)iVar9 >> 0x10),
                                                *(undefined2 *)((int)this + 0x49)),
                                       *(short *)((int)this + 0x469) + *(short *)((int)this + 0x4b))
                    ;
                    if (iVar9 == 1) {
                      *(undefined4 *)((int)this + 0x82e) = 1;
                      thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x47),
                                         (int)*(short *)((int)this + 0x49),
                                         (int)*(short *)((int)this + 0x469) +
                                         (int)*(short *)((int)this + 0x4b));
                      uVar1 = *(undefined4 *)((int)this + 0xb7);
                      *(undefined4 *)((int)this + 0xb7) = 0;
                      iVar9 = thunk_FUN_0045ff50(this,0);
                      *(undefined4 *)((int)this + 0xb7) = uVar1;
                    }
                    else {
                      sVar4 = *(short *)((int)this + 0x469);
                      *(short *)((int)this + 0x469) = -sVar4;
                      iVar9 = (**(code **)(*(int *)this + 0x18))
                                        (CONCAT22(extraout_var_04,*(undefined2 *)((int)this + 0x47))
                                         ,*(undefined2 *)((int)this + 0x49),
                                         -sVar4 + *(short *)((int)this + 0x4b));
                      if (iVar9 != 1) goto LAB_00460d94;
                      *(undefined4 *)((int)this + 0x82e) = 1;
                      thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x47),
                                         (int)*(short *)((int)this + 0x49),
                                         (int)*(short *)((int)this + 0x469) +
                                         (int)*(short *)((int)this + 0x4b));
                      uVar1 = *(undefined4 *)((int)this + 0xb7);
                      *(undefined4 *)((int)this + 0xb7) = 0;
                      iVar9 = thunk_FUN_0045ff50(this,0);
                      *(undefined4 *)((int)this + 0xb7) = uVar1;
                    }
                    if (iVar9 == -1) {
                      return -1;
                    }
                    if ((iVar9 != 0) && (iVar9 != 3)) break;
                  }
                  *(undefined2 *)((int)this + 0x469) = 0;
                  *(undefined4 *)((int)this + 0x82e) = 0;
                  break;
                }
              }
              else {
                STTorpC::ClearDangerous(local_20,*(int *)((int)this + 0x18),local_24);
              }
            }
            else if (iVar9 == 1) goto LAB_00460adb;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < CONCAT22(uStack_32,local_34));
    }
  }
  if (*(int *)((int)this + 0x82e) != 0) goto LAB_00461264;
  if (*(int *)((int)this + 0x836) == 2) {
    *(undefined4 *)((int)this + 0x47f) = 0xffffffff;
    uVar10 = thunk_FUN_004899a0(this,0);
    uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    uVar5 = uVar5 >> 0x10;
    uVar6 = uVar5 / 0x15;
    uVar5 = uVar5 % 0x15;
    *(uint *)((int)this + 0x47f) = uVar5;
  }
  else {
    uVar6 = thunk_FUN_004899a0(this,0);
    uVar10 = uVar6;
    uVar5 = extraout_EDX;
  }
  if (uVar10 == 0) {
    pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar6 >> 8),
                                                 *(undefined1 *)((int)this + 0x487)),
                                        CONCAT22((short)(uVar5 >> 0x10),
                                                 *(undefined2 *)((int)this + 0x48b)),
                                        *(undefined4 *)((int)this + 0x483));
    bVar3 = thunk_FUN_00483300(this,extraout_EDX_00);
    iVar9 = CONCAT31(extraout_var,bVar3);
    switch(iVar9) {
    case 0:
    case 10:
      thunk_FUN_00416270(pvVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                         (undefined2 *)&local_1c);
      local_5a = *(undefined2 *)((int)this + 0x43);
      local_5c = *(undefined2 *)((int)this + 0x41);
      local_58 = *(undefined2 *)((int)this + 0x45);
      local_10 = 0;
      if (*(char *)((int)this + 0x2b2) != '\0') {
        puVar12 = (ushort *)((int)this + 0x2a8);
        do {
          if (*(int *)((int)this + 0x7a2) < 1) break;
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(local_2c,*(undefined4 *)(puVar12 + -1),puVar12[1],
                                      *(short *)((int)this + 0x6c));
          uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
          local_56 = (short)*puVar8 + *(short *)((int)this + 0x41);
          local_54 = *(short *)((int)this + 0x43) - uStack_32;
          local_52 = *(short *)((int)this + 0x45) + *(short *)(puVar8 + 1);
          uStack_32 = *puVar12;
          local_34 = 0;
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(local_3c,(uint)uStack_32 << 0x10,0,
                                      *(short *)((int)this + 0x6c));
          local_34 = (short)*puVar8;
          uStack_32 = (ushort)((uint)*puVar8 >> 0x10);
          local_30 = *(undefined2 *)(puVar8 + 1);
          local_50 = local_34 + (short)local_14;
          local_4e = (short)local_18 - uStack_32;
          local_64 = *(int *)((int)this + 0x24);
          local_4c = (short)local_1c;
          local_42 = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
          if (iVar9 == 10) {
            local_60 = 0xa1;
          }
          else {
            local_60 = *(undefined4 *)((int)this + 0x79a);
          }
          local_4a = *(undefined2 *)((int)this + 0x6c);
          local_48 = *(undefined4 *)((int)this + 0x18);
          local_44 = *(undefined2 *)((int)this + 0x32);
          thunk_FUN_00645880(&local_64);
          if (iVar9 == 10) {
            *(undefined4 *)((int)this + 0x72a) = 0;
          }
          else {
            *(undefined4 *)((int)this + 0x7aa) = 0;
            *(int *)((int)this + 0x7a2) = *(int *)((int)this + 0x7a2) + -1;
          }
          local_10 = local_10 + 1;
          puVar12 = puVar12 + 3;
        } while (local_10 < *(byte *)((int)this + 0x2b2));
      }
      break;
    case 1:
      iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x16e0,0,-1,&DAT_007a4ccc,
                                 s_STBoatC__Defence_NOT_ZONE_A_007aa120);
      if (iVar9 == 0) {
        RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x16e1);
        return 0xffff;
      }
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    case 5:
      *(undefined4 *)((int)this + 0x82e) = 4;
      thunk_FUN_004162f0(pvVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                         (undefined2 *)&local_1c);
LAB_00460fac:
      thunk_FUN_00481520(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
      uVar1 = *(undefined4 *)((int)this + 0xb7);
      *(undefined4 *)((int)this + 0xb7) = 0;
      iVar9 = thunk_FUN_004601f0(this,0);
      if (iVar9 == -1) {
        return -1;
      }
      *(undefined4 *)((int)this + 0xb7) = uVar1;
      break;
    case 6:
    case 7:
    case 8:
      thunk_FUN_004162f0(pvVar7,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
      *(undefined2 *)((int)this + 0x800) = local_6;
      *(undefined2 *)((int)this + 0x802) = local_8;
      *(undefined2 *)((int)this + 0x804) = param_1._2_2_;
      iVar9 = thunk_FUN_00484020(this,iVar9,(short *)&local_14,(short *)&local_18,(short *)&local_1c
                                );
      if (iVar9 != 0) {
        *(undefined4 *)((int)this + 0x82e) = 4;
        goto LAB_00460fac;
      }
      if (300 < *(short *)((int)this + 0x814)) {
        *(short *)((int)this + 0x814) = *(short *)((int)this + 0x814) + -0xc9;
      }
      break;
    case 9:
      thunk_FUN_00416270(pvVar7,(undefined2 *)&local_14,(undefined2 *)&local_18,
                         (undefined2 *)&local_1c);
      sVar4 = (**(code **)(*(int *)this + 0x10))
                        (*(undefined2 *)((int)this + 0x41),*(undefined2 *)((int)this + 0x43),
                         *(undefined2 *)((int)this + 0x45),local_14,local_18,local_1c);
      uVar10 = thunk_FUN_004176c0(this,sVar4);
      thunk_FUN_00417910(this,(short)uVar10);
    }
  }
  if ((*(int *)((int)this + 0x82e) == 0) && (*(int *)((int)this + 0x48b) == 0xffff)) {
    if ((*(short *)((int)this + 0x475) != *(short *)((int)this + 0x47)) ||
       ((*(short *)((int)this + 0x477) != *(short *)((int)this + 0x49) ||
        (*(short *)((int)this + 0x479) != *(short *)((int)this + 0x4b))))) {
      iVar9 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                           (int)*(short *)((int)this + 0x4b),(int)*(short *)((int)this + 0x475),
                           (int)*(short *)((int)this + 0x477),(int)*(short *)((int)this + 0x479));
      if ((iVar9 != -4) && (iVar9 < 8)) {
        *(undefined4 *)((int)this + 0x82e) = 4;
        thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x475),
                           (int)*(short *)((int)this + 0x477),(int)*(short *)((int)this + 0x479));
        uVar1 = *(undefined4 *)((int)this + 0xb7);
        *(undefined4 *)((int)this + 0xb7) = 0;
        iVar9 = thunk_FUN_004601f0(this,0);
        if (iVar9 == -1) {
          return -1;
        }
        *(undefined4 *)((int)this + 0xb7) = uVar1;
        iVar9 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
      }
      *(undefined2 *)((int)this + 0x475) = *(undefined2 *)((int)this + 0x5b);
      *(undefined2 *)((int)this + 0x477) = *(undefined2 *)((int)this + 0x5d);
      *(undefined2 *)((int)this + 0x479) = *(undefined2 *)((int)this + 0x5f);
    }
  }
LAB_00461264:
  iVar9 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
}

