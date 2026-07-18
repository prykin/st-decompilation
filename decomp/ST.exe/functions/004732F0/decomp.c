
int __thiscall FUN_004732f0(void *this,int param_1)

{
  short *psVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined2 extraout_var_00;
  void *pvVar10;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int iVar11;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined4 extraout_ECX;
  undefined2 uVar13;
  uint uVar12;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined8 uVar14;
  longlong lVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  byte bVar23;
  undefined4 local_40 [2];
  undefined4 local_38;
  short local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  short local_8;
  short local_6;
  
  uVar3 = 0;
  local_c = (int *)0x0;
  if ((param_1 == 0) || (pvVar10 = this, param_1 == 1)) {
    puVar7 = (undefined4 *)((int)this + 0x2cc);
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    if (*(int *)((int)this + 0x7ca) != 0) {
      return 0;
    }
    sVar16 = *(short *)((int)this + 0x3ba);
    sVar17 = *(short *)((int)this + 0x3bc);
    sVar18 = *(short *)((int)this + 0x3be);
    param_1 = *(int *)((int)this + 0x3c0);
    psVar1 = (short *)((int)this + 0x588);
    *(short *)((int)this + 0x58a) = sVar17;
    *psVar1 = sVar16;
    *(short *)((int)this + 0x58c) = sVar18;
    *(int *)((int)this + 0x58e) = param_1;
    if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar17 < 0)) ||
        ((DAT_007fb242 <= sVar17 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) {
      local_c = (int *)0x0;
    }
    else {
      local_c = *(int **)(DAT_007fb248 +
                         ((int)sVar17 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar18 +
                         (int)sVar16) * 8);
    }
    if ((local_c == (int *)0x0) || (local_c[6] != param_1)) {
      iVar9 = FUN_006e62d0(DAT_00802a38,param_1,(int *)&local_c);
      if (iVar9 == -4) {
        return 0;
      }
      thunk_FUN_004162f0(local_c,psVar1,(undefined2 *)((int)this + 0x58a),
                         (undefined2 *)((int)this + 0x58c));
    }
    iVar9 = (**(code **)(*local_c + 0xf8))();
    if (iVar9 == 0) {
      return 0;
    }
    iVar9 = (**(code **)(*local_c + 0xa4))();
    if (iVar9 == 1) {
      return 0;
    }
    iVar9 = thunk_FUN_004919c0(*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                               *(short *)((int)this + 0x5f),*psVar1,*(short *)((int)this + 0x58a),
                               *(short *)((int)this + 0x58c),&local_6,&local_8,
                               (undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                               (short *)&local_14,(undefined2 *)&local_10);
    if (iVar9 == -2) {
      return 0;
    }
    thunk_FUN_00492390(this);
    pvVar10 = (void *)CONCAT22(extraout_var_00,param_1._2_2_);
    if (((*(short *)((int)this + 0x5b) != local_6) || (*(short *)((int)this + 0x5d) != local_8)) ||
       (*(short *)((int)this + 0x5f) != param_1._2_2_)) {
      *(undefined4 *)((int)this + 0x596) = 0;
      sVar16 = param_1._2_2_;
      if (iVar9 == -1) {
        local_6 = (short)local_18;
        local_8 = (short)local_14;
        sVar16 = (short)local_10;
      }
      thunk_FUN_00481520(this,(int)local_6,(int)local_8,(int)sVar16);
      thunk_FUN_00460260(this,0);
      goto LAB_0047405d;
    }
    *(undefined4 *)((int)this + 0x596) = 1;
    uVar3 = extraout_var_08;
  }
  uVar13 = (undefined2)((uint)pvVar10 >> 0x10);
  if (*(int *)((int)this + 0x596) == 0) {
    iVar9 = thunk_FUN_00460260(this,2);
    uVar3 = extraout_var_09;
    uVar13 = extraout_var_01;
    switch(iVar9) {
    case 0:
    case 1:
    case 3:
      thunk_FUN_004602b0(this);
      sVar16 = *(short *)((int)this + 0x588);
      sVar17 = *(short *)((int)this + 0x58c);
      sVar18 = *(short *)((int)this + 0x58a);
      if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
          ((sVar18 < 0 || ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))))) || (DAT_007fb244 <= sVar17))
      {
        local_c = (int *)0x0;
      }
      else {
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                           (int)sVar16) * 8);
      }
      if ((((local_c == (int *)0x0) || (local_c[6] != *(int *)((int)this + 0x58e))) &&
          (iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x58e),(int *)&local_c),
          iVar9 == -4)) ||
         ((iVar9 = (**(code **)(*local_c + 0xa4))(), iVar9 == 1 ||
          (iVar9 = (**(code **)(*local_c + 0xc0))(), iVar9 == 1)))) goto LAB_004743a5;
      thunk_FUN_004162f0(local_c,(undefined2 *)((int)this + 0x588),(short *)((int)this + 0x58a),
                         (short *)((int)this + 0x58c));
      iVar9 = thunk_FUN_004919c0(*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                                 *(short *)((int)this + 0x5f),*(short *)((int)this + 0x588),
                                 *(short *)((int)this + 0x58a),*(short *)((int)this + 0x58c),
                                 &local_6,&local_8,(undefined2 *)((int)&param_1 + 2),
                                 (short *)&local_18,(short *)&local_14,(undefined2 *)&local_10);
      if (iVar9 == -2) goto LAB_004743a5;
      if (((*(short *)((int)this + 0x5b) != local_6) || (*(short *)((int)this + 0x5d) != local_8))
         || (*(short *)((int)this + 0x5f) != param_1._2_2_)) {
        if (iVar9 == -1) {
          iVar5 = (int)(short)local_10;
          iVar9 = (int)(short)local_14;
          iVar11 = (int)(short)local_18;
        }
        else {
          iVar5 = (int)param_1._2_2_;
          iVar9 = (int)local_8;
          iVar11 = (int)local_6;
        }
        goto LAB_004736e2;
      }
      *(undefined4 *)((int)this + 0x596) = 1;
      *(undefined4 *)((int)this + 0x592) = 0;
      uVar3 = extraout_var_10;
      uVar13 = extraout_var_02;
      break;
    case 2:
      goto switchD_004734db_caseD_2;
    case -1:
      iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e03,0,0,&DAT_007a4ccc);
      if (iVar9 != 0) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
      FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x2e03);
      return 0xffff;
    }
  }
  iVar9 = *(int *)((int)this + 0x596);
  if (iVar9 == 1) {
    iVar9 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar9 != 0) {
      return -1;
    }
    uVar13 = 0;
    iVar9 = *(int *)((int)this + 0x592) % 0x28;
    if (iVar9 == 0) {
      sVar16 = *(short *)((int)this + 0x588);
      sVar17 = *(short *)((int)this + 0x58c);
      sVar18 = *(short *)((int)this + 0x58a);
      if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
          ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
        local_c = (int *)0x0;
      }
      else {
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                           (int)sVar16) * 8);
      }
      if (((local_c == (int *)0x0) || (local_c[6] != *(int *)((int)this + 0x58e))) &&
         (iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x58e),(int *)&local_c),
         iVar9 == -4)) {
        return 0;
      }
      iVar9 = (**(code **)(*local_c + 0xa4))();
      if ((iVar9 == 1) || (iVar9 = (**(code **)(*local_c + 0xc0))(), iVar9 == 1)) {
LAB_004743a5:
        thunk_FUN_00492420(this);
        return 0;
      }
      thunk_FUN_004162f0(local_c,(undefined2 *)((int)this + 0x588),(short *)((int)this + 0x58a),
                         (short *)((int)this + 0x58c));
      iVar9 = thunk_FUN_004919c0(*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                                 *(short *)((int)this + 0x5f),*(short *)((int)this + 0x588),
                                 *(short *)((int)this + 0x58a),*(short *)((int)this + 0x58c),
                                 &local_6,&local_8,(undefined2 *)((int)&param_1 + 2),
                                 (short *)&local_18,(short *)&local_14,(undefined2 *)&local_10);
      if (iVar9 == -2) goto LAB_004743a5;
      if (((*(short *)((int)this + 0x5b) != local_6) || (*(short *)((int)this + 0x5d) != local_8))
         || (*(short *)((int)this + 0x5f) != param_1._2_2_)) {
        *(undefined4 *)((int)this + 0x596) = 0;
        if (iVar9 == -1) {
          iVar5 = (int)(short)local_10;
          iVar9 = (int)(short)local_14;
          iVar11 = (int)(short)local_18;
        }
        else {
          iVar5 = (int)param_1._2_2_;
          iVar9 = (int)local_8;
          iVar11 = (int)local_6;
        }
LAB_004736e2:
        thunk_FUN_00481520(this,iVar11,iVar9,iVar5);
        thunk_FUN_00460260(this,0);
        return 2;
      }
      uVar14 = (**(code **)(*local_c + 0xa8))(*(undefined4 *)((int)this + 0x18));
      iVar9 = (int)((ulonglong)uVar14 >> 0x20);
      uVar13 = extraout_var_03;
      if ((int)uVar14 == 1) {
        *(undefined4 *)((int)this + 0x596) = 2;
        iVar5 = *local_c;
        iVar9 = local_18 * 0xc9 + 100;
        uVar3 = (undefined2)((uint)(local_18 * 0x19) >> 0x10);
        uVar4 = (**(code **)(*(int *)this + 0x10))
                          (CONCAT22(uVar3,*(undefined2 *)((int)this + 0x41)),
                           CONCAT22((short)((uint)iVar9 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                           CONCAT22(uVar3,*(undefined2 *)((int)this + 0x45)),iVar9,
                           local_14 * 0xc9 + 100,local_10 * 200 + 100);
        (**(code **)(iVar5 + 0xb0))
                  (*(undefined4 *)((int)this + 0x18),local_18,local_14,local_10,uVar4);
        return 2;
      }
    }
    uVar3 = (undefined2)((uint)iVar9 >> 0x10);
    iVar9 = *(int *)((int)this + 0x596);
    if (iVar9 == 1) {
      *(int *)((int)this + 0x592) = *(int *)((int)this + 0x592) + 1;
      return 2;
    }
  }
  if (iVar9 == 2) {
    sVar16 = *(short *)((int)this + 0x588);
    sVar17 = *(short *)((int)this + 0x58c);
    sVar18 = *(short *)((int)this + 0x58a);
    if (((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
        ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
      local_c = (int *)0x0;
    }
    else {
      local_c = *(int **)(DAT_007fb248 +
                         ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                         (int)sVar16) * 8);
    }
    if (((local_c == (int *)0x0) || (local_c[6] != *(int *)((int)this + 0x58e))) &&
       (iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x58e),(int *)&local_c), iVar9 == -4)
       ) {
      return 0;
    }
    iVar9 = (**(code **)(*local_c + 0xa4))();
    if ((iVar9 == 1) || (iVar9 = (**(code **)(*local_c + 0xc0))(), iVar9 == 1)) {
      thunk_FUN_00492420(this);
      iVar9 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar9 != 0);
    }
LAB_0047405d:
    iVar9 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
  }
  if (iVar9 == 3) {
    if (*(int *)((int)this + 0x59a) == 0) {
      sVar16 = *(short *)((int)this + 0x588);
      sVar17 = *(short *)((int)this + 0x58c);
      sVar18 = *(short *)((int)this + 0x58a);
      if ((((sVar16 < 0) || (DAT_007fb240 <= sVar16)) ||
          ((sVar18 < 0 || ((DAT_007fb242 <= sVar18 || (sVar17 < 0)))))) || (DAT_007fb244 <= sVar17))
      {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(DAT_007fb248 +
                        ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                        (int)sVar16) * 8);
      }
      FUN_006ea3e0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x1ed),
                   *(int *)(iVar9 + 0x1ed));
      iVar9 = CONCAT22(extraout_var,*(short *)((int)this + 0x58c) * 200) + 100;
      iVar11 = CONCAT22(extraout_var_04,*(short *)((int)this + 0x58a) * 0xc9) + 100;
      iVar5 = CONCAT22((short)((uint)iVar9 >> 0x10),*(short *)((int)this + 0x588) * 0xc9) + 100;
      uVar3 = (undefined2)((uint)iVar11 >> 0x10);
      uVar3 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar3,*(undefined2 *)((int)this + 0x41)),
                         CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                         CONCAT22(uVar3,*(undefined2 *)((int)this + 0x45)),iVar5,iVar11,iVar9);
      *(undefined2 *)((int)this + 0x59e) = uVar3;
      *(undefined4 *)((int)this + 0x59a) = 1;
      uVar3 = extraout_var_11;
      uVar13 = extraout_var_05;
    }
    if (*(int *)((int)this + 0x59a) == 1) {
      uVar6 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x59e));
      uVar6 = thunk_FUN_00417910(this,(short)uVar6);
      if (uVar6 == 0xffffffff) {
        iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e7d,0,0,&DAT_007a4ccc);
        if (iVar9 != 0) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        return -1;
      }
      uVar3 = extraout_var_12;
      uVar13 = extraout_var_06;
      if (uVar6 == 0) {
        *(undefined4 *)((int)this + 0x59a) = 2;
        goto LAB_00473b6c;
      }
    }
    if (*(int *)((int)this + 0x59a) == 2) {
      thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                         *(short *)((int)this + 0x45),*(short *)((int)this + 0x588) * 0xc9 + 100,
                         *(short *)((int)this + 0x58a) * 0xc9 + 100,
                         *(short *)((int)this + 0x58c) * 200 + 100,*(byte *)((int)this + 0x61));
      *(undefined4 *)((int)this + 0x59a) = 3;
      uVar3 = extraout_var_13;
      uVar13 = extraout_var_07;
    }
    if (*(int *)((int)this + 0x59a) == 3) {
      local_24 = thunk_FUN_00415ed0(this,&local_2c,&local_28);
      uVar6 = CONCAT31((int3)((uint)extraout_ECX >> 8),*(char *)((int)this + 0x2bf));
      local_1c = 0;
      uVar3 = extraout_var_14;
      if (*(char *)((int)this + 0x2bf) != '\0') {
        local_20 = (undefined4 *)((int)this + 0x2b3);
        do {
          puVar7 = (undefined4 *)
                   thunk_FUN_0041dc40(local_40,*local_20,*(undefined2 *)(local_20 + 1),
                                      *(short *)((int)this + 0x6c));
          local_38 = *puVar7;
          local_34 = *(short *)(puVar7 + 1);
          if (DAT_0080732c == 1) {
            bVar23 = 0;
            sVar22 = 0;
            iVar11 = -1;
            uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            sVar21 = 0;
            *(uint *)((int)this + 0x1c) = uVar6;
            sVar20 = 0;
            sVar19 = 0;
            uVar8 = uVar6 * 0x41c64e6d + 0x3039;
            sVar18 = 0;
            *(uint *)((int)this + 0x1c) = uVar8;
            local_30 = uVar8 * 0x41c64e6d + 0x3039;
            sVar17 = 0;
            *(uint *)((int)this + 0x1c) = local_30;
            sVar16 = 0;
            lVar15 = __ftol();
            iVar9 = (int)(short)lVar15 + (uVar6 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45) +
                    -3 + (int)local_34;
            iVar5 = ((uVar8 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) - (int)local_38._2_2_;
            uVar6 = local_30;
          }
          else {
            uVar8 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            bVar23 = 0;
            *(uint *)((int)this + 0x1c) = uVar8;
            uVar12 = uVar8 * 0x41c64e6d + 0x3039;
            sVar22 = 0;
            *(uint *)((int)this + 0x1c) = uVar12;
            uVar6 = uVar12 * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar6;
            iVar11 = -1;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            iVar9 = (uVar8 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45) + -3 + (int)local_34;
            local_38._2_2_ = (short)((uint)local_38 >> 0x10);
            iVar5 = ((uVar12 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) - (int)local_38._2_2_
            ;
          }
          thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                             (uVar6 >> 0x10) % 7 + (int)*(short *)((int)this + 0x41) + -3 +
                             (int)(short)local_38,iVar5 + -3,iVar9,sVar16,sVar17,sVar18,sVar19,
                             sVar20,sVar21,iVar11,sVar22,bVar23);
          uVar6 = (uint)*(byte *)((int)this + 0x2bf);
          local_1c = local_1c + 1;
          local_20 = (undefined4 *)((int)local_20 + 6);
          uVar3 = extraout_var_15;
        } while (local_1c < (int)uVar6);
      }
      uVar13 = (undefined2)(uVar6 >> 0x10);
      if (local_24 == -1) {
        iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ea3,0,0,&DAT_007a4ccc);
        if (iVar9 != 0) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        return -1;
      }
      if (local_24 == 0) {
        *(undefined4 *)((int)this + 0x59a) = 4;
      }
    }
    if ((*(int *)((int)this + 0x59a) == 4) && (*(short *)((int)this + 0x6e) == 0x2f)) {
      sVar16 = *(short *)((int)this + 0x588);
      sVar17 = *(short *)((int)this + 0x58c);
      sVar18 = *(short *)((int)this + 0x58a);
      if (((sVar16 < 0) || (((DAT_007fb240 <= sVar16 || (sVar18 < 0)) || (DAT_007fb242 <= sVar18))))
         || ((sVar17 < 0 || (DAT_007fb244 <= sVar17)))) {
        local_c = (int *)0x0;
      }
      else {
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                           (int)sVar16) * 8);
      }
      if (((local_c != (int *)0x0) && (local_c[6] == *(int *)((int)this + 0x58e))) &&
         ((iVar9 = (**(code **)(*local_c + 0xa4))(), iVar9 != 1 &&
          (iVar9 = (**(code **)(*local_c + 0xc0))(), iVar9 != 1)))) {
        (**(code **)(*local_c + 0xb4))();
        *(undefined4 *)((int)this + 0x7ca) = *(undefined4 *)((int)this + 0x58e);
        *(undefined4 *)((int)this + 0x7ce) = 0;
        thunk_FUN_0041c5a0(this);
        thunk_FUN_00495ff0(*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                           *(short *)((int)this + 0x5f),0,(int)this);
        thunk_FUN_00495ec0(*(short *)((int)this + 0x588),*(short *)((int)this + 0x58a),
                           *(short *)((int)this + 0x58c),0,(int)this);
        thunk_FUN_0041c3f0(this,*(undefined **)((int)this + 0x70a));
        iVar9 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar9 != 0);
      }
      thunk_FUN_00492420(this);
      local_30 = *(uint *)((int)DAT_00802a38 + 0xe4);
      thunk_FUN_0045ef00(this,3,&local_30);
switchD_004734db_caseD_2:
      return 2;
    }
    if (*(int *)((int)this + 0x59a) == 5) {
      iVar9 = CONCAT22(uVar13,*(short *)((int)this + 0x5f) * 200) + 100;
      iVar11 = CONCAT22(uVar3,*(short *)((int)this + 0x5d) * 0xc9) + 100;
      iVar5 = CONCAT22((short)((uint)iVar9 >> 0x10),*(short *)((int)this + 0x5b) * 0xc9) + 100;
      uVar3 = (undefined2)((uint)iVar11 >> 0x10);
      uVar3 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar3,*(undefined2 *)((int)this + 0x41)),
                         CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                         CONCAT22(uVar3,*(undefined2 *)((int)this + 0x45)),iVar5,iVar11,iVar9);
      *(undefined2 *)((int)this + 0x59e) = uVar3;
      *(undefined4 *)((int)this + 0x59a) = 6;
    }
    if (*(int *)((int)this + 0x59a) == 6) {
      uVar6 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x59e));
      uVar6 = thunk_FUN_00417910(this,(short)uVar6);
      if (uVar6 == 0xffffffff) {
        iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ed4,0,0,&DAT_007a4ccc);
        if (iVar9 != 0) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        return -1;
      }
      if (uVar6 == 0) {
        *(undefined4 *)((int)this + 0x59a) = 7;
        goto LAB_0047405d;
      }
    }
    if (*(int *)((int)this + 0x59a) == 7) {
      thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                         *(short *)((int)this + 0x45),*(short *)((int)this + 0x5b) * 0xc9 + 100,
                         *(short *)((int)this + 0x5d) * 0xc9 + 100,
                         *(short *)((int)this + 0x5f) * 200 + 100,*(byte *)((int)this + 0x61));
      *(undefined4 *)((int)this + 0x59a) = 8;
    }
    if (*(int *)((int)this + 0x59a) == 8) {
      local_24 = thunk_FUN_00415ed0(this,&local_28,&local_2c);
      local_1c = 0;
      if (*(char *)((int)this + 0x2bf) != '\0') {
        local_20 = (undefined4 *)((int)this + 0x2b3);
        do {
          puVar7 = (undefined4 *)
                   thunk_FUN_0041dc40(local_40,*local_20,*(undefined2 *)(local_20 + 1),
                                      *(short *)((int)this + 0x6c));
          local_38 = *puVar7;
          local_34 = *(short *)(puVar7 + 1);
          if (DAT_0080732c == 1) {
            bVar23 = 0;
            sVar22 = 0;
            uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            iVar11 = -1;
            *(uint *)((int)this + 0x1c) = uVar6;
            sVar21 = 0;
            sVar20 = 0;
            uVar8 = uVar6 * 0x41c64e6d + 0x3039;
            sVar19 = 0;
            *(uint *)((int)this + 0x1c) = uVar8;
            sVar18 = 0;
            sVar17 = 0;
            local_30 = uVar8 * 0x41c64e6d + 0x3039;
            sVar16 = 0;
            *(uint *)((int)this + 0x1c) = local_30;
            lVar15 = __ftol();
            iVar9 = (int)(short)lVar15 + (uVar6 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45) +
                    -3 + (int)local_34;
            iVar5 = ((uVar8 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) - (int)local_38._2_2_;
            uVar6 = local_30;
          }
          else {
            uVar8 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar8;
            uVar12 = uVar8 * 0x41c64e6d + 0x3039;
            bVar23 = 0;
            *(uint *)((int)this + 0x1c) = uVar12;
            uVar6 = uVar12 * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar6;
            sVar22 = 0;
            iVar11 = -1;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            iVar9 = (uVar8 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45) + -3 + (int)local_34;
            local_38._2_2_ = (short)((uint)local_38 >> 0x10);
            iVar5 = ((uVar12 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) - (int)local_38._2_2_
            ;
          }
          thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                             (uVar6 >> 0x10) % 7 + (int)*(short *)((int)this + 0x41) + -3 +
                             (int)(short)local_38,iVar5 + -3,iVar9,sVar16,sVar17,sVar18,sVar19,
                             sVar20,sVar21,iVar11,sVar22,bVar23);
          local_1c = local_1c + 1;
          local_20 = (undefined4 *)((int)local_20 + 6);
        } while (local_1c < (int)(uint)*(byte *)((int)this + 0x2bf));
      }
      if (local_24 == -1) {
        iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2efa,0,0,&DAT_007a4ccc);
        if (iVar9 != 0) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        return -1;
      }
      if (local_24 == 0) {
        FUN_006ea2f0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x1ed));
        iVar9 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar9 != 0);
      }
    }
    if (*(int *)((int)this + 0x59a) == 9) {
      iVar9 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar9 != 0);
    }
  }
LAB_00473b6c:
  iVar9 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
}

