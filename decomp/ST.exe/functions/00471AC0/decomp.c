
int __thiscall FUN_00471ac0(void *this,int param_1)

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
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined2 extraout_var_08;
  undefined4 extraout_EDX_02;
  undefined2 extraout_var_09;
  undefined4 extraout_EDX_03;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  bool bVar12;
  undefined4 uVar13;
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
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar6 = (undefined4 *)((int)this + 0x2cc);
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    thunk_FUN_00490cd0(this,*(undefined4 *)((int)this + 0x3a6),*(undefined4 *)((int)this + 0x3aa),
                       *(int *)((int)this + 0x3ae),*(int *)((int)this + 0x3b2));
    *(undefined4 *)((int)this + 0x47b) = 0;
    *(undefined4 *)((int)this + 0x487) = 0xffffffff;
    *(undefined4 *)((int)this + 0x48b) = 0xffff;
    *(undefined4 *)((int)this + 0x82e) = 0xffffffff;
    *(undefined4 *)((int)this + 0x836) = 2;
    *(short *)((int)this + 0x814) = *(short *)((int)this + 0x816) * 0xc9;
  }
  if (*(int *)((int)this + 0x82e) == -1) {
    iVar8 = *(int *)((int)this + 0x836) + -1;
    *(int *)((int)this + 0x836) = iVar8;
    if (1 < iVar8) {
      iVar8 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
    }
    *(undefined4 *)((int)this + 0x82e) = 0;
  }
  uVar9 = *(int *)((int)this + 0x836) + 1;
  *(uint *)((int)this + 0x836) = uVar9;
  iVar8 = *(int *)((int)this + 0x82e);
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      uVar4 = *(undefined4 *)((int)this + 0xb7);
      *(undefined4 *)((int)this + 0xb7) = 0;
      iVar8 = thunk_FUN_0045ff50(this,2);
      *(undefined4 *)((int)this + 0xb7) = uVar4;
      if (iVar8 == -1) {
        return -1;
      }
      if (iVar8 == 0) {
        *(undefined4 *)((int)this + 0x47f) = 0xffffffff;
        *(undefined4 *)((int)this + 0x82e) = 2;
      }
      else if (iVar8 == 3) {
        *(undefined4 *)((int)this + 0x82e) = 0;
      }
      if ((*(int *)((int)this + 0x82e) != 1) || (iVar8 = thunk_FUN_004899a0(this,1), iVar8 != 0))
      goto switchD_0047251b_caseD_2;
      pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                   *(undefined1 *)((int)this + 0x487)),
                                          CONCAT22(extraout_var_05,
                                                   *(undefined2 *)((int)this + 0x48b)),
                                          *(undefined4 *)((int)this + 0x483));
      bVar2 = thunk_FUN_00483300(this,extraout_EDX_01);
      iVar8 = CONCAT31(extraout_var_00,bVar2);
      switch(iVar8) {
      case 0:
      case 10:
        thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                           (undefined2 *)&local_1c);
        local_5a = *(undefined2 *)((int)this + 0x43);
        local_5c = *(undefined2 *)((int)this + 0x41);
        local_58 = *(undefined2 *)((int)this + 0x45);
        local_10 = 0;
        if (*(char *)((int)this + 0x2b2) != '\0') {
          puVar11 = (ushort *)((int)this + 0x2a8);
          do {
            if (*(int *)((int)this + 0x7a2) < 1) break;
            puVar6 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar11 + -1),puVar11[1],
                                        *(short *)((int)this + 0x6c));
            uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
            local_56 = *(short *)((int)this + 0x41) + (short)*puVar6;
            local_54 = *(short *)((int)this + 0x43) - uStack_32;
            local_52 = *(short *)(puVar6 + 1) + *(short *)((int)this + 0x45);
            uStack_32 = *puVar11;
            local_34 = 0;
            puVar6 = (undefined4 *)
                     thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,
                                        *(short *)((int)this + 0x6c));
            local_34 = (short)*puVar6;
            uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
            local_30 = *(undefined2 *)(puVar6 + 1);
            local_50 = local_34 + (short)local_14;
            local_4e = (short)local_18 - uStack_32;
            local_64 = *(int *)((int)this + 0x24);
            local_4c = (short)local_1c;
            local_42 = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
            if (iVar8 == 10) {
              local_60 = 0xa1;
            }
            else {
              local_60 = *(undefined4 *)((int)this + 0x79a);
            }
            local_4a = *(undefined2 *)((int)this + 0x6c);
            local_48 = *(undefined4 *)((int)this + 0x18);
            local_44 = *(undefined2 *)((int)this + 0x32);
            thunk_FUN_00645880(&local_64);
            if (iVar8 == 10) {
              *(undefined4 *)((int)this + 0x72a) = 0;
            }
            else {
              *(undefined4 *)((int)this + 0x7aa) = 0;
              *(int *)((int)this + 0x7a2) = *(int *)((int)this + 0x7a2) + -1;
            }
            local_10 = local_10 + 1;
            puVar11 = puVar11 + 3;
          } while (local_10 < *(byte *)((int)this + 0x2b2));
        }
        break;
      case 1:
      case 5:
      case 6:
      case 7:
      case 8:
switchD_0047251b_caseD_1:
        *(undefined4 *)((int)this + 0x47f) = 0xffffffff;
        break;
      case 9:
LAB_00472a3a:
        thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                           (undefined2 *)&local_1c);
        sVar3 = (**(code **)(*(int *)this + 0x10))
                          (*(undefined2 *)((int)this + 0x41),*(undefined2 *)((int)this + 0x43),
                           *(undefined2 *)((int)this + 0x45),local_14,local_18,local_1c);
        uVar9 = thunk_FUN_004176c0(this,sVar3);
        thunk_FUN_00417910(this,(short)uVar9);
      }
    }
    else {
      if (iVar8 != 2) {
        if (iVar8 != 3) {
          if (iVar8 == 4) {
            uVar4 = *(undefined4 *)((int)this + 0xb7);
            *(undefined4 *)((int)this + 0xb7) = 0;
            iVar8 = thunk_FUN_004601f0(this,2);
            *(undefined4 *)((int)this + 0xb7) = uVar4;
            if (iVar8 != -1) {
              if ((iVar8 == 0) || (iVar8 == 3)) {
                *(undefined4 *)((int)this + 0x836) = 1;
                *(undefined4 *)((int)this + 0x82e) = 0;
              }
              iVar8 = (**(code **)(*(int *)this + 0xd8))();
              return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
            }
          }
          else {
            if (iVar8 != 5) {
              iVar8 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2dbf,0,0,&DAT_007a4ccc)
              ;
              if (iVar8 == 0) {
                return 2;
              }
              pcVar1 = (code *)swi(3);
              iVar8 = (*pcVar1)();
              return iVar8;
            }
            uVar4 = *(undefined4 *)((int)this + 0xb7);
            *(undefined4 *)((int)this + 0xb7) = 0;
            iVar8 = thunk_FUN_004601f0(this,2);
            *(undefined4 *)((int)this + 0xb7) = uVar4;
            if (iVar8 != -1) {
              if (iVar8 == 0) {
                iVar8 = FUN_006aadd0((int)*(short *)((int)this + 0x47),
                                     (int)*(short *)((int)this + 0x49),
                                     (int)*(short *)((int)this + 0x4b),
                                     (int)*(short *)((int)this + 0x475),
                                     (int)*(short *)((int)this + 0x477),
                                     (int)*(short *)((int)this + 0x479));
                if (0 < iVar8) {
                  thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x475),
                                     (int)*(short *)((int)this + 0x477),
                                     (int)*(short *)((int)this + 0x479));
                  uVar4 = *(undefined4 *)((int)this + 0xb7);
                  *(undefined4 *)((int)this + 0xb7) = 0;
                  iVar8 = thunk_FUN_004601f0(this,0);
                  if (iVar8 == -1) {
                    return -1;
                  }
                  *(undefined4 *)((int)this + 0xb7) = uVar4;
                  goto switchD_0047251b_caseD_2;
                }
              }
              else if (iVar8 != 3) goto switchD_0047251b_caseD_2;
              *(undefined4 *)((int)this + 0x836) = 1;
              *(undefined4 *)((int)this + 0x82e) = 0;
              goto switchD_0047251b_caseD_2;
            }
          }
          return -1;
        }
        uVar4 = *(undefined4 *)((int)this + 0xb7);
        *(undefined4 *)((int)this + 0xb7) = 0;
        iVar8 = thunk_FUN_0045ff50(this,2);
        *(undefined4 *)((int)this + 0xb7) = uVar4;
        if (iVar8 == -1) {
          return -1;
        }
        if ((iVar8 == 0) || (iVar8 == 3)) {
          *(undefined4 *)((int)this + 0x82e) = 0;
        }
        if ((*(int *)((int)this + 0x82e) != 1) || (iVar8 = thunk_FUN_004899a0(this,1), iVar8 != 0))
        goto switchD_0047251b_caseD_2;
        pvVar5 = (void *)thunk_FUN_0042b620((uint)*(byte *)((int)this + 0x487),
                                            CONCAT22(extraout_var_09,
                                                     *(undefined2 *)((int)this + 0x48b)),
                                            *(undefined4 *)((int)this + 0x483));
        bVar2 = thunk_FUN_00483300(this,extraout_EDX_03);
        iVar8 = CONCAT31(extraout_var_02,bVar2);
        switch(iVar8) {
        case 0:
        case 10:
          thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                             (undefined2 *)&local_1c);
          local_5a = *(undefined2 *)((int)this + 0x43);
          local_5c = *(undefined2 *)((int)this + 0x41);
          local_58 = *(undefined2 *)((int)this + 0x45);
          local_10 = 0;
          if (*(char *)((int)this + 0x2b2) != '\0') {
            puVar11 = (ushort *)((int)this + 0x2a8);
            do {
              if (*(int *)((int)this + 0x7a2) < 1) break;
              puVar6 = (undefined4 *)
                       thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar11 + -1),puVar11[1],
                                          *(short *)((int)this + 0x6c));
              uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
              local_56 = *(short *)((int)this + 0x41) + (short)*puVar6;
              local_54 = *(short *)((int)this + 0x43) - uStack_32;
              local_52 = *(short *)(puVar6 + 1) + *(short *)((int)this + 0x45);
              uStack_32 = *puVar11;
              local_34 = 0;
              puVar6 = (undefined4 *)
                       thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,
                                          *(short *)((int)this + 0x6c));
              local_34 = (short)*puVar6;
              uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
              local_30 = *(undefined2 *)(puVar6 + 1);
              local_50 = local_34 + (short)local_14;
              local_4e = (short)local_18 - uStack_32;
              local_64 = *(int *)((int)this + 0x24);
              local_4c = (short)local_1c;
              local_42 = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
              if (iVar8 == 10) {
                local_60 = 0xa1;
              }
              else {
                local_60 = *(undefined4 *)((int)this + 0x79a);
              }
              local_4a = *(undefined2 *)((int)this + 0x6c);
              local_48 = *(undefined4 *)((int)this + 0x18);
              local_44 = *(undefined2 *)((int)this + 0x32);
              thunk_FUN_00645880(&local_64);
              if (iVar8 == 10) {
                *(undefined4 *)((int)this + 0x72a) = 0;
              }
              else {
                *(undefined4 *)((int)this + 0x7aa) = 0;
                *(int *)((int)this + 0x7a2) = *(int *)((int)this + 0x7a2) + -1;
              }
              local_10 = local_10 + 1;
              puVar11 = puVar11 + 3;
            } while (local_10 < *(byte *)((int)this + 0x2b2));
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
        sVar3 = *(short *)((int)this + 0x469);
        *(short *)((int)this + 0x469) = -sVar3;
        iVar8 = (**(code **)(*(int *)this + 0x18))
                          (CONCAT22(extraout_var_06,*(undefined2 *)((int)this + 0x47)),
                           *(undefined2 *)((int)this + 0x49),-sVar3 + *(short *)((int)this + 0x4b));
        if (iVar8 == 1) {
          *(undefined4 *)((int)this + 0x82e) = 3;
          thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x47),
                             (int)*(short *)((int)this + 0x49),
                             (int)*(short *)((int)this + 0x469) + (int)*(short *)((int)this + 0x4b))
          ;
          uVar4 = *(undefined4 *)((int)this + 0xb7);
          *(undefined4 *)((int)this + 0xb7) = 0;
          iVar8 = thunk_FUN_0045ff50(this,0);
          *(undefined4 *)((int)this + 0xb7) = uVar4;
          if (iVar8 == -1) {
            return -1;
          }
          if ((iVar8 != 0) && (iVar8 != 3)) {
            return 2;
          }
          *(undefined2 *)((int)this + 0x469) = 0;
          *(undefined4 *)((int)this + 0x82e) = 0;
          return 2;
        }
        *(short *)((int)this + 0x469) = -*(short *)((int)this + 0x469);
      }
      if ((*(int *)((int)this + 0x82e) != 2) || (iVar8 = thunk_FUN_004899a0(this,2), iVar8 != 0))
      goto switchD_0047251b_caseD_2;
      pvVar5 = (void *)thunk_FUN_0042b620((uint)*(byte *)((int)this + 0x487),
                                          CONCAT22(extraout_var_08,
                                                   *(undefined2 *)((int)this + 0x48b)),
                                          *(undefined4 *)((int)this + 0x483));
      bVar2 = thunk_FUN_00483300(this,extraout_EDX_02);
      iVar8 = CONCAT31(extraout_var_01,bVar2);
      switch(iVar8) {
      case 0:
      case 10:
        thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                           (undefined2 *)&local_1c);
        local_5a = *(undefined2 *)((int)this + 0x43);
        local_5c = *(undefined2 *)((int)this + 0x41);
        local_58 = *(undefined2 *)((int)this + 0x45);
        local_10 = 0;
        if (*(char *)((int)this + 0x2b2) != '\0') {
          puVar11 = (ushort *)((int)this + 0x2a8);
          do {
            if (*(int *)((int)this + 0x7a2) < 1) break;
            puVar6 = (undefined4 *)
                     thunk_FUN_0041dc40(local_3c,*(undefined4 *)(puVar11 + -1),puVar11[1],
                                        *(short *)((int)this + 0x6c));
            uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
            local_56 = *(short *)((int)this + 0x41) + (short)*puVar6;
            local_54 = *(short *)((int)this + 0x43) - uStack_32;
            local_52 = *(short *)(puVar6 + 1) + *(short *)((int)this + 0x45);
            uStack_32 = *puVar11;
            local_34 = 0;
            puVar6 = (undefined4 *)
                     thunk_FUN_0041dc40(local_2c,(uint)uStack_32 << 0x10,0,
                                        *(short *)((int)this + 0x6c));
            local_34 = (short)*puVar6;
            uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
            local_30 = *(undefined2 *)(puVar6 + 1);
            local_50 = local_34 + (short)local_14;
            local_4e = (short)local_18 - uStack_32;
            local_64 = *(int *)((int)this + 0x24);
            local_4c = (short)local_1c;
            local_42 = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
            if (iVar8 == 10) {
              local_60 = 0xa1;
            }
            else {
              local_60 = *(undefined4 *)((int)this + 0x79a);
            }
            local_4a = *(undefined2 *)((int)this + 0x6c);
            local_48 = *(undefined4 *)((int)this + 0x18);
            local_44 = *(undefined2 *)((int)this + 0x32);
            thunk_FUN_00645880(&local_64);
            if (iVar8 == 10) {
              *(undefined4 *)((int)this + 0x72a) = 0;
            }
            else {
              *(undefined4 *)((int)this + 0x7aa) = 0;
              *(int *)((int)this + 0x7a2) = *(int *)((int)this + 0x7a2) + -1;
            }
            local_10 = local_10 + 1;
            puVar11 = puVar11 + 3;
          } while (local_10 < *(byte *)((int)this + 0x2b2));
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
    iVar8 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
  }
  uVar9 = uVar9 & 0x80000001;
  bVar12 = uVar9 == 0;
  if ((int)uVar9 < 0) {
    bVar12 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar12) && (DAT_007fa134 != 0)) {
    iVar8 = *(int *)(DAT_007fa130 + 0xc);
    local_34 = (short)iVar8;
    uStack_32 = (ushort)((uint)iVar8 >> 0x10);
    if ((iVar8 != 0) && (uVar9 = 0, iVar10 = DAT_007fa134, iVar8 != 0)) {
      while (0 < iVar10) {
        FUN_006acc70(DAT_007fa130,uVar9,&local_20);
        if (local_20 != (void *)0x0) {
          iVar10 = iVar10 + -1;
          thunk_FUN_004162b0(local_20,(undefined2 *)((int)&local_10 + 2),&local_c,&local_a);
          local_2c[0] = FUN_006aadd0((int)*(short *)((int)this + 0x47),
                                     (int)*(short *)((int)this + 0x49),
                                     (int)*(short *)((int)this + 0x4b),(int)local_10._2_2_,
                                     (int)local_c,(int)local_a);
          if ((local_2c[0] <= *(int *)((int)this + 0x80c) / 0xc9 + 1) &&
             (iVar8 = thunk_FUN_00645020(local_20,*(int *)((int)this + 0x18),&local_24), iVar8 != 2)
             ) {
            if (iVar8 == 0) {
              iVar8 = thunk_FUN_004838e0(this,(int)local_20);
              if (iVar8 == 1) {
                thunk_FUN_006451b0(*(undefined4 *)((int)this + 0x18),&local_24);
LAB_00471cbd:
                iVar8 = thunk_FUN_00483e30(this,(int)local_20);
                if (iVar8 == 1) {
                  thunk_FUN_006452a0(*(int *)((int)this + 0x18),local_24);
                  *(void **)((int)this + 0x46b) = local_20;
                  *(undefined2 *)((int)this + 0x46f) = *(undefined2 *)((int)local_20 + 0x26e);
                  uVar4 = *(undefined4 *)((int)local_20 + 0x18);
                  *(undefined4 *)((int)this + 0x471) = uVar4;
                  sVar3 = *(short *)((int)this + 0x4b);
                  uVar4 = CONCAT22((short)((uint)uVar4 >> 0x10),sVar3);
                  if (sVar3 == 0) {
                    iVar10 = *(int *)this;
                    *(undefined2 *)((int)this + 0x469) = 1;
                    uVar7 = extraout_var_03;
                    uVar13 = 1;
LAB_00471ec9:
                    iVar8 = (**(code **)(iVar10 + 0x18))
                                      (CONCAT22(uVar7,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22((short)((uint)uVar4 >> 0x10),
                                                *(undefined2 *)((int)this + 0x49)),uVar13);
                    if (iVar8 != 1) break;
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x47),
                                       (int)*(short *)((int)this + 0x49),
                                       (int)*(short *)((int)this + 0x469) +
                                       (int)*(short *)((int)this + 0x4b));
                    uVar4 = *(undefined4 *)((int)this + 0xb7);
                    *(undefined4 *)((int)this + 0xb7) = 0;
                    iVar8 = thunk_FUN_0045ff50(this,0);
                    *(undefined4 *)((int)this + 0xb7) = uVar4;
                  }
                  else if (sVar3 == 4) {
                    *(undefined2 *)((int)this + 0x469) = 0xffff;
                    iVar8 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(extraout_var_07,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22(extraout_var_03,*(undefined2 *)((int)this + 0x49)),3
                                      );
                    if (iVar8 != 1) break;
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x47),
                                       (int)*(short *)((int)this + 0x49),
                                       (int)*(short *)((int)this + 0x469) +
                                       (int)*(short *)((int)this + 0x4b));
                    uVar4 = *(undefined4 *)((int)this + 0xb7);
                    *(undefined4 *)((int)this + 0xb7) = 0;
                    iVar8 = thunk_FUN_0045ff50(this,0);
                    *(undefined4 *)((int)this + 0xb7) = uVar4;
                  }
                  else {
                    iVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d;
                    uVar9 = iVar10 + 0x3039;
                    *(uint *)((int)this + 0x1c) = uVar9;
                    *(ushort *)((int)this + 0x469) = (ushort)(uVar9 >> 0x10) & 1;
                    iVar8 = (-(uint)((uVar9 & 0x10000) != 0) & 2) - 1;
                    sVar3 = (short)iVar8;
                    *(short *)((int)this + 0x469) = sVar3;
                    uVar7 = (undefined2)((uint)iVar8 >> 0x10);
                    iVar8 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(uVar7,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22((short)((uint)iVar10 >> 0x10),
                                                *(undefined2 *)((int)this + 0x49)),
                                       CONCAT22(uVar7,sVar3 + *(short *)((int)this + 0x4b)));
                    if (iVar8 != 1) {
                      sVar3 = *(short *)((int)this + 0x469);
                      iVar10 = *(int *)this;
                      *(short *)((int)this + 0x469) = -sVar3;
                      uVar4 = CONCAT22((short)((uint)iVar8 >> 0x10),
                                       -sVar3 + *(short *)((int)this + 0x4b));
                      uVar7 = extraout_var_04;
                      uVar13 = uVar4;
                      goto LAB_00471ec9;
                    }
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x47),
                                       (int)*(short *)((int)this + 0x49),
                                       (int)*(short *)((int)this + 0x469) +
                                       (int)*(short *)((int)this + 0x4b));
                    uVar4 = *(undefined4 *)((int)this + 0xb7);
                    *(undefined4 *)((int)this + 0xb7) = 0;
                    iVar8 = thunk_FUN_0045ff50(this,0);
                    *(undefined4 *)((int)this + 0xb7) = uVar4;
                  }
                  if (iVar8 == -1) {
                    return -1;
                  }
                  if ((iVar8 == 0) || (iVar8 == 3)) {
                    *(undefined2 *)((int)this + 0x469) = 0;
                    *(undefined4 *)((int)this + 0x82e) = 0;
                  }
                  break;
                }
              }
              else {
                thunk_FUN_006452a0(*(int *)((int)this + 0x18),local_24);
              }
            }
            else if (iVar8 == 1) goto LAB_00471cbd;
          }
        }
        uVar9 = uVar9 + 1;
        if (CONCAT22(uStack_32,local_34) <= uVar9) break;
      }
    }
  }
  if (*(int *)((int)this + 0x82e) != 0) goto switchD_00471fe0_caseD_2;
  if (*(int *)((int)this + 0x836) == 2) {
    *(undefined4 *)((int)this + 0x47f) = 0xffffffff;
    iVar8 = thunk_FUN_004899a0(this,0);
    uVar9 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar9;
    *(uint *)((int)this + 0x47f) = (uVar9 >> 0x10) % 0x15;
  }
  else {
    iVar8 = thunk_FUN_004899a0(this,0);
  }
  iVar10 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                        (int)*(short *)((int)this + 0x4b),(int)*(short *)((int)this + 0x475),
                        (int)*(short *)((int)this + 0x477),(int)*(short *)((int)this + 0x479));
  if (iVar8 != 0) {
    if (iVar10 < 1) goto switchD_00471fe0_caseD_2;
    *(undefined4 *)((int)this + 0x82e) = 5;
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x475),(int)*(short *)((int)this + 0x477),
                       (int)*(short *)((int)this + 0x479));
    uVar4 = *(undefined4 *)((int)this + 0xb7);
    *(undefined4 *)((int)this + 0xb7) = 0;
    iVar8 = thunk_FUN_004601f0(this,0);
    if (iVar8 == -1) {
      return -1;
    }
    goto LAB_0047233a;
  }
  if (5 < iVar10) {
    *(undefined4 *)((int)this + 0x82e) = 5;
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x475),(int)*(short *)((int)this + 0x477),
                       (int)*(short *)((int)this + 0x479));
    uVar4 = *(undefined4 *)((int)this + 0xb7);
    *(undefined4 *)((int)this + 0xb7) = 0;
    goto LAB_004720a6;
  }
  pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                               *(undefined1 *)((int)this + 0x487)),
                                      CONCAT22((short)((uint)iVar10 >> 0x10),
                                               *(undefined2 *)((int)this + 0x48b)),
                                      *(undefined4 *)((int)this + 0x483));
  bVar2 = thunk_FUN_00483300(this,extraout_EDX);
  iVar8 = CONCAT31(extraout_var,bVar2);
  switch(iVar8) {
  case 0:
  case 10:
    thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                       (undefined2 *)&local_1c);
    local_5a = *(undefined2 *)((int)this + 0x43);
    local_5c = *(undefined2 *)((int)this + 0x41);
    local_58 = *(undefined2 *)((int)this + 0x45);
    local_10 = 0;
    if (*(char *)((int)this + 0x2b2) != '\0') {
      puVar11 = (ushort *)((int)this + 0x2a8);
      do {
        if (*(int *)((int)this + 0x7a2) < 1) break;
        puVar6 = (undefined4 *)
                 thunk_FUN_0041dc40(local_2c,*(undefined4 *)(puVar11 + -1),puVar11[1],
                                    *(short *)((int)this + 0x6c));
        uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
        local_56 = *(short *)((int)this + 0x41) + (short)*puVar6;
        local_54 = *(short *)((int)this + 0x43) - uStack_32;
        local_52 = *(short *)(puVar6 + 1) + *(short *)((int)this + 0x45);
        uStack_32 = *puVar11;
        local_34 = 0;
        puVar6 = (undefined4 *)
                 thunk_FUN_0041dc40(local_3c,(uint)uStack_32 << 0x10,0,*(short *)((int)this + 0x6c))
        ;
        local_34 = (short)*puVar6;
        uStack_32 = (ushort)((uint)*puVar6 >> 0x10);
        local_30 = *(undefined2 *)(puVar6 + 1);
        local_50 = local_34 + (short)local_14;
        local_4e = (short)local_18 - uStack_32;
        local_64 = *(int *)((int)this + 0x24);
        local_4c = (short)local_1c;
        local_42 = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
        if (iVar8 == 10) {
          local_60 = 0xa1;
        }
        else {
          local_60 = *(undefined4 *)((int)this + 0x79a);
        }
        local_4a = *(undefined2 *)((int)this + 0x6c);
        local_48 = *(undefined4 *)((int)this + 0x18);
        local_44 = *(undefined2 *)((int)this + 0x32);
        thunk_FUN_00645880(&local_64);
        if (iVar8 == 10) {
          *(undefined4 *)((int)this + 0x72a) = 0;
        }
        else {
          *(undefined4 *)((int)this + 0x7aa) = 0;
          *(int *)((int)this + 0x7a2) = *(int *)((int)this + 0x7a2) + -1;
        }
        local_10 = local_10 + 1;
        puVar11 = puVar11 + 3;
      } while (local_10 < *(byte *)((int)this + 0x2b2));
    }
    break;
  case 1:
    iVar8 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2c5e,0,-1,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7a9d3c,0x2c5f);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    iVar8 = (*pcVar1)();
    return iVar8;
  case 5:
    *(undefined4 *)((int)this + 0x82e) = 4;
    thunk_FUN_004162f0(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                       (undefined2 *)&local_1c);
    goto LAB_0047207e;
  case 6:
  case 7:
  case 8:
    thunk_FUN_004162f0(pvVar5,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
    *(undefined2 *)((int)this + 0x800) = local_6;
    *(undefined2 *)((int)this + 0x802) = local_8;
    *(undefined2 *)((int)this + 0x804) = param_1._2_2_;
    iVar8 = thunk_FUN_00484020(this,iVar8,(short *)&local_14,(short *)&local_18,(short *)&local_1c);
    if (iVar8 == 0) {
      if (300 < *(short *)((int)this + 0x814)) {
        *(short *)((int)this + 0x814) = *(short *)((int)this + 0x814) + -0xc9;
      }
      break;
    }
    *(undefined4 *)((int)this + 0x82e) = 4;
LAB_0047207e:
    thunk_FUN_00481520(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
    uVar4 = *(undefined4 *)((int)this + 0xb7);
    *(undefined4 *)((int)this + 0xb7) = 0;
LAB_004720a6:
    iVar8 = thunk_FUN_004601f0(this,0);
    if (iVar8 == -1) {
      return -1;
    }
LAB_0047233a:
    *(undefined4 *)((int)this + 0xb7) = uVar4;
    break;
  case 9:
    thunk_FUN_00416270(pvVar5,(undefined2 *)&local_14,(undefined2 *)&local_18,
                       (undefined2 *)&local_1c);
    sVar3 = (**(code **)(*(int *)this + 0x10))
                      (*(undefined2 *)((int)this + 0x41),*(undefined2 *)((int)this + 0x43),
                       *(undefined2 *)((int)this + 0x45),local_14,local_18,local_1c);
    uVar9 = thunk_FUN_004176c0(this,sVar3);
    thunk_FUN_00417910(this,(short)uVar9);
  }
switchD_00471fe0_caseD_2:
  if ((*(int *)((int)this + 0x82e) == 0) && (*(int *)((int)this + 0x48b) == 0xffff)) {
    if ((*(short *)((int)this + 0x475) != *(short *)((int)this + 0x47)) ||
       ((*(short *)((int)this + 0x477) != *(short *)((int)this + 0x49) ||
        (*(short *)((int)this + 0x479) != *(short *)((int)this + 0x4b))))) {
      iVar8 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                           (int)*(short *)((int)this + 0x4b),(int)*(short *)((int)this + 0x475),
                           (int)*(short *)((int)this + 0x477),(int)*(short *)((int)this + 0x479));
      if ((iVar8 != -4) && (iVar8 < 8)) {
        *(undefined4 *)((int)this + 0x82e) = 4;
        thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x475),
                           (int)*(short *)((int)this + 0x477),(int)*(short *)((int)this + 0x479));
        uVar4 = *(undefined4 *)((int)this + 0xb7);
        *(undefined4 *)((int)this + 0xb7) = 0;
        iVar8 = thunk_FUN_004601f0(this,0);
        if (iVar8 != -1) {
          *(undefined4 *)((int)this + 0xb7) = uVar4;
          iVar8 = (**(code **)(*(int *)this + 0xd8))();
          return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
        }
        return -1;
      }
      *(undefined2 *)((int)this + 0x475) = *(undefined2 *)((int)this + 0x5b);
      *(undefined2 *)((int)this + 0x477) = *(undefined2 *)((int)this + 0x5d);
      *(undefined2 *)((int)this + 0x479) = *(undefined2 *)((int)this + 0x5f);
    }
  }
  iVar8 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
}

