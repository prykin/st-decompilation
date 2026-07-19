
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp:65535
   STBoatC::LoadObj */

int __thiscall STBoatC::LoadObj(STBoatC *this,int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined2 extraout_var_00;
  STBoatC *pSVar9;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int iVar10;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined4 extraout_ECX;
  undefined2 uVar12;
  uint uVar11;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined8 uVar13;
  longlong lVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  byte bVar22;
  undefined4 local_40 [2];
  undefined4 local_38;
  short local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  STBoatC *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  short local_8;
  short local_6;
  
  uVar2 = 0;
  local_c = (int *)0x0;
  if ((param_1 == 0) || (pSVar9 = this, param_1 == 1)) {
    pSVar9 = this + 0x2cc;
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pSVar9 = 0;
      pSVar9 = pSVar9 + 4;
    }
    *(undefined4 *)(this + 0x2c4) = 0;
    if (*(int *)(this + 0x7ca) != 0) {
      return 0;
    }
    sVar15 = *(short *)(this + 0x3ba);
    sVar16 = *(short *)(this + 0x3bc);
    sVar17 = *(short *)(this + 0x3be);
    param_1 = *(int *)(this + 0x3c0);
    pSVar9 = this + 0x588;
    *(short *)(this + 0x58a) = sVar16;
    *(short *)pSVar9 = sVar15;
    *(short *)(this + 0x58c) = sVar17;
    *(int *)(this + 0x58e) = param_1;
    if (((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar16 < 0)) ||
        ((DAT_007fb242 <= sVar16 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
      local_c = (int *)0x0;
    }
    else {
      local_c = *(int **)(DAT_007fb248 +
                         ((int)sVar16 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar17 +
                         (int)sVar15) * 8);
    }
    if ((local_c == (int *)0x0) || (local_c[6] != param_1)) {
      iVar8 = FUN_006e62d0(DAT_00802a38,param_1,(int *)&local_c);
      if (iVar8 == -4) {
        return 0;
      }
      thunk_FUN_004162f0(local_c,(undefined2 *)pSVar9,(undefined2 *)(this + 0x58a),
                         (undefined2 *)(this + 0x58c));
    }
    iVar8 = (**(code **)(*local_c + 0xf8))();
    if (iVar8 == 0) {
      return 0;
    }
    iVar8 = (**(code **)(*local_c + 0xa4))();
    if (iVar8 == 1) {
      return 0;
    }
    iVar8 = GetCellForLoading(this,*(short *)(this + 0x5b),*(short *)(this + 0x5d),
                              *(short *)(this + 0x5f),*(short *)pSVar9,*(short *)(this + 0x58a),
                              *(short *)(this + 0x58c),&local_6,&local_8,
                              (undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                              (short *)&local_14,(undefined2 *)&local_10);
    if (iVar8 == -2) {
      return 0;
    }
    thunk_FUN_00492390((int *)this);
    pSVar9 = (STBoatC *)CONCAT22(extraout_var_00,param_1._2_2_);
    if (((*(short *)(this + 0x5b) != local_6) || (*(short *)(this + 0x5d) != local_8)) ||
       (*(short *)(this + 0x5f) != param_1._2_2_)) {
      *(undefined4 *)(this + 0x596) = 0;
      sVar15 = param_1._2_2_;
      if (iVar8 == -1) {
        local_6 = (short)local_18;
        local_8 = (short)local_14;
        sVar15 = (short)local_10;
      }
      thunk_FUN_00481520(this,(int)local_6,(int)local_8,(int)sVar15);
      thunk_FUN_00460260(this,0);
      goto LAB_0047405d;
    }
    *(undefined4 *)(this + 0x596) = 1;
    uVar2 = extraout_var_08;
  }
  uVar12 = (undefined2)((uint)pSVar9 >> 0x10);
  if (*(int *)(this + 0x596) == 0) {
    iVar8 = thunk_FUN_00460260(this,2);
    uVar2 = extraout_var_09;
    uVar12 = extraout_var_01;
    switch(iVar8) {
    case 0:
    case 1:
    case 3:
      thunk_FUN_004602b0((int *)this);
      sVar15 = *(short *)(this + 0x588);
      sVar16 = *(short *)(this + 0x58c);
      sVar17 = *(short *)(this + 0x58a);
      if ((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
          ((sVar17 < 0 || ((DAT_007fb242 <= sVar17 || (sVar16 < 0)))))) || (DAT_007fb244 <= sVar16))
      {
        local_c = (int *)0x0;
      }
      else {
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar16 * (int)DAT_007fb246 + (int)sVar17 * (int)DAT_007fb240 +
                           (int)sVar15) * 8);
      }
      if ((((local_c == (int *)0x0) || (local_c[6] != *(int *)(this + 0x58e))) &&
          (iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x58e),(int *)&local_c), iVar8 == -4))
         || ((iVar8 = (**(code **)(*local_c + 0xa4))(), iVar8 == 1 ||
             (iVar8 = (**(code **)(*local_c + 0xc0))(), iVar8 == 1)))) goto LAB_004743a5;
      thunk_FUN_004162f0(local_c,(undefined2 *)(this + 0x588),(undefined2 *)(this + 0x58a),
                         (undefined2 *)(this + 0x58c));
      iVar8 = GetCellForLoading(this,*(short *)(this + 0x5b),*(short *)(this + 0x5d),
                                *(short *)(this + 0x5f),*(short *)(this + 0x588),
                                *(short *)(this + 0x58a),*(short *)(this + 0x58c),&local_6,&local_8,
                                (undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                                (short *)&local_14,(undefined2 *)&local_10);
      if (iVar8 == -2) goto LAB_004743a5;
      if (((*(short *)(this + 0x5b) != local_6) || (*(short *)(this + 0x5d) != local_8)) ||
         (*(short *)(this + 0x5f) != param_1._2_2_)) {
        if (iVar8 == -1) {
          iVar4 = (int)(short)local_10;
          iVar8 = (int)(short)local_14;
          iVar10 = (int)(short)local_18;
        }
        else {
          iVar4 = (int)param_1._2_2_;
          iVar8 = (int)local_8;
          iVar10 = (int)local_6;
        }
        goto LAB_004736e2;
      }
      *(undefined4 *)(this + 0x596) = 1;
      *(undefined4 *)(this + 0x592) = 0;
      uVar2 = extraout_var_10;
      uVar12 = extraout_var_02;
      break;
    case 2:
      goto switchD_004734db_caseD_2;
    case -1:
      iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e03,0,0,&DAT_007a4ccc,
                                 s_STBoatC__LoadObj__LOADOBJ_MOVE_007aae48);
      if (iVar8 != 0) {
        pcVar1 = (code *)swi(3);
        iVar8 = (*pcVar1)();
        return iVar8;
      }
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e03);
      return 0xffff;
    }
  }
  iVar8 = *(int *)(this + 0x596);
  if (iVar8 == 1) {
    iVar8 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar8 != 0) {
      return -1;
    }
    uVar12 = 0;
    iVar8 = *(int *)(this + 0x592) % 0x28;
    if (iVar8 == 0) {
      sVar15 = *(short *)(this + 0x588);
      sVar16 = *(short *)(this + 0x58c);
      sVar17 = *(short *)(this + 0x58a);
      if (((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar17 < 0)) ||
          ((DAT_007fb242 <= sVar17 || (sVar16 < 0)))) || (DAT_007fb244 <= sVar16)) {
        local_c = (int *)0x0;
      }
      else {
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar16 * (int)DAT_007fb246 + (int)sVar17 * (int)DAT_007fb240 +
                           (int)sVar15) * 8);
      }
      if (((local_c == (int *)0x0) || (local_c[6] != *(int *)(this + 0x58e))) &&
         (iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x58e),(int *)&local_c), iVar8 == -4)) {
        return 0;
      }
      iVar8 = (**(code **)(*local_c + 0xa4))();
      if ((iVar8 == 1) || (iVar8 = (**(code **)(*local_c + 0xc0))(), iVar8 == 1)) {
LAB_004743a5:
        thunk_FUN_00492420((int *)this);
        return 0;
      }
      thunk_FUN_004162f0(local_c,(undefined2 *)(this + 0x588),(undefined2 *)(this + 0x58a),
                         (undefined2 *)(this + 0x58c));
      iVar8 = GetCellForLoading(this,*(short *)(this + 0x5b),*(short *)(this + 0x5d),
                                *(short *)(this + 0x5f),*(short *)(this + 0x588),
                                *(short *)(this + 0x58a),*(short *)(this + 0x58c),&local_6,&local_8,
                                (undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                                (short *)&local_14,(undefined2 *)&local_10);
      if (iVar8 == -2) goto LAB_004743a5;
      if (((*(short *)(this + 0x5b) != local_6) || (*(short *)(this + 0x5d) != local_8)) ||
         (*(short *)(this + 0x5f) != param_1._2_2_)) {
        *(undefined4 *)(this + 0x596) = 0;
        if (iVar8 == -1) {
          iVar4 = (int)(short)local_10;
          iVar8 = (int)(short)local_14;
          iVar10 = (int)(short)local_18;
        }
        else {
          iVar4 = (int)param_1._2_2_;
          iVar8 = (int)local_8;
          iVar10 = (int)local_6;
        }
LAB_004736e2:
        thunk_FUN_00481520(this,iVar10,iVar8,iVar4);
        thunk_FUN_00460260(this,0);
        return 2;
      }
      uVar13 = (**(code **)(*local_c + 0xa8))(*(undefined4 *)(this + 0x18));
      iVar8 = (int)((ulonglong)uVar13 >> 0x20);
      uVar12 = extraout_var_03;
      if ((int)uVar13 == 1) {
        *(undefined4 *)(this + 0x596) = 2;
        iVar4 = *local_c;
        iVar8 = local_18 * 0xc9 + 100;
        uVar2 = (undefined2)((uint)(local_18 * 0x19) >> 0x10);
        uVar3 = (**(code **)(*(int *)this + 0x10))
                          (CONCAT22(uVar2,*(undefined2 *)(this + 0x41)),
                           CONCAT22((short)((uint)iVar8 >> 0x10),*(undefined2 *)(this + 0x43)),
                           CONCAT22(uVar2,*(undefined2 *)(this + 0x45)),iVar8,local_14 * 0xc9 + 100,
                           local_10 * 200 + 100);
        (**(code **)(iVar4 + 0xb0))(*(undefined4 *)(this + 0x18),local_18,local_14,local_10,uVar3);
        return 2;
      }
    }
    uVar2 = (undefined2)((uint)iVar8 >> 0x10);
    iVar8 = *(int *)(this + 0x596);
    if (iVar8 == 1) {
      *(int *)(this + 0x592) = *(int *)(this + 0x592) + 1;
      return 2;
    }
  }
  if (iVar8 == 2) {
    sVar15 = *(short *)(this + 0x588);
    sVar16 = *(short *)(this + 0x58c);
    sVar17 = *(short *)(this + 0x58a);
    if (((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar17 < 0)) ||
        ((DAT_007fb242 <= sVar17 || (sVar16 < 0)))) || (DAT_007fb244 <= sVar16)) {
      local_c = (int *)0x0;
    }
    else {
      local_c = *(int **)(DAT_007fb248 +
                         ((int)sVar16 * (int)DAT_007fb246 + (int)sVar17 * (int)DAT_007fb240 +
                         (int)sVar15) * 8);
    }
    if (((local_c == (int *)0x0) || (local_c[6] != *(int *)(this + 0x58e))) &&
       (iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x58e),(int *)&local_c), iVar8 == -4)) {
      return 0;
    }
    iVar8 = (**(code **)(*local_c + 0xa4))();
    if ((iVar8 == 1) || (iVar8 = (**(code **)(*local_c + 0xc0))(), iVar8 == 1)) {
      thunk_FUN_00492420((int *)this);
      iVar8 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar8 != 0);
    }
LAB_0047405d:
    iVar8 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
  }
  if (iVar8 == 3) {
    if (*(int *)(this + 0x59a) == 0) {
      sVar15 = *(short *)(this + 0x588);
      sVar16 = *(short *)(this + 0x58c);
      sVar17 = *(short *)(this + 0x58a);
      if ((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
          ((sVar17 < 0 || ((DAT_007fb242 <= sVar17 || (sVar16 < 0)))))) || (DAT_007fb244 <= sVar16))
      {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(DAT_007fb248 +
                        ((int)sVar16 * (int)DAT_007fb246 + (int)sVar17 * (int)DAT_007fb240 +
                        (int)sVar15) * 8);
      }
      FUN_006ea3e0(*(void **)(this + 0x211),*(uint *)(this + 0x1ed),*(int *)(iVar8 + 0x1ed));
      iVar8 = CONCAT22(extraout_var,*(short *)(this + 0x58c) * 200) + 100;
      iVar10 = CONCAT22(extraout_var_04,*(short *)(this + 0x58a) * 0xc9) + 100;
      iVar4 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)(this + 0x588) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar10 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)(this + 0x45)),iVar4,iVar10,iVar8);
      *(undefined2 *)(this + 0x59e) = uVar2;
      *(undefined4 *)(this + 0x59a) = 1;
      uVar2 = extraout_var_11;
      uVar12 = extraout_var_05;
    }
    if (*(int *)(this + 0x59a) == 1) {
      uVar5 = thunk_FUN_004176c0(this,*(short *)(this + 0x59e));
      uVar5 = thunk_FUN_00417910(this,(short)uVar5);
      if (uVar5 == 0xffffffff) {
        iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e7d,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aae10);
        if (iVar8 != 0) {
          pcVar1 = (code *)swi(3);
          iVar8 = (*pcVar1)();
          return iVar8;
        }
        return -1;
      }
      uVar2 = extraout_var_12;
      uVar12 = extraout_var_06;
      if (uVar5 == 0) {
        *(undefined4 *)(this + 0x59a) = 2;
        goto LAB_00473b6c;
      }
    }
    if (*(int *)(this + 0x59a) == 2) {
      thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                         *(short *)(this + 0x45),*(short *)(this + 0x588) * 0xc9 + 100,
                         *(short *)(this + 0x58a) * 0xc9 + 100,*(short *)(this + 0x58c) * 200 + 100,
                         (byte)this[0x61]);
      *(undefined4 *)(this + 0x59a) = 3;
      uVar2 = extraout_var_13;
      uVar12 = extraout_var_07;
    }
    if (*(int *)(this + 0x59a) == 3) {
      local_24 = thunk_FUN_00415ed0(this,&local_2c,&local_28);
      uVar5 = CONCAT31((int3)((uint)extraout_ECX >> 8),this[0x2bf]);
      local_1c = 0;
      uVar2 = extraout_var_14;
      if (this[0x2bf] != (STBoatC)0x0) {
        local_20 = this + 0x2b3;
        do {
          puVar6 = (undefined4 *)
                   thunk_FUN_0041dc40(local_40,*(undefined4 *)local_20,*(undefined2 *)(local_20 + 4)
                                      ,*(short *)(this + 0x6c));
          local_38 = *puVar6;
          local_34 = *(short *)(puVar6 + 1);
          if (DAT_0080732c == 1) {
            bVar22 = 0;
            sVar21 = 0;
            iVar10 = -1;
            uVar5 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
            sVar20 = 0;
            *(uint *)(this + 0x1c) = uVar5;
            sVar19 = 0;
            sVar18 = 0;
            uVar7 = uVar5 * 0x41c64e6d + 0x3039;
            sVar17 = 0;
            *(uint *)(this + 0x1c) = uVar7;
            local_30 = uVar7 * 0x41c64e6d + 0x3039;
            sVar16 = 0;
            *(uint *)(this + 0x1c) = local_30;
            sVar15 = 0;
            lVar14 = Library::MSVCRT::__ftol();
            iVar8 = (int)(short)lVar14 + (uVar5 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 +
                    (int)local_34;
            iVar4 = ((uVar7 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_38._2_2_;
            uVar5 = local_30;
          }
          else {
            uVar7 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
            bVar22 = 0;
            *(uint *)(this + 0x1c) = uVar7;
            uVar11 = uVar7 * 0x41c64e6d + 0x3039;
            sVar21 = 0;
            *(uint *)(this + 0x1c) = uVar11;
            uVar5 = uVar11 * 0x41c64e6d + 0x3039;
            *(uint *)(this + 0x1c) = uVar5;
            iVar10 = -1;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            sVar15 = 0;
            iVar8 = (uVar7 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 + (int)local_34;
            local_38._2_2_ = (short)((uint)local_38 >> 0x10);
            iVar4 = ((uVar11 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_38._2_2_;
          }
          TraksClassTy::TraksCreate
                    (DAT_00802a7c,1,2,7,
                     (uVar5 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 + (int)(short)local_38,
                     iVar4 + -3,iVar8,sVar15,sVar16,sVar17,sVar18,sVar19,sVar20,iVar10,sVar21,bVar22
                    );
          uVar5 = (uint)(byte)this[0x2bf];
          local_1c = local_1c + 1;
          local_20 = local_20 + 6;
          uVar2 = extraout_var_15;
        } while (local_1c < (int)uVar5);
      }
      uVar12 = (undefined2)(uVar5 >> 0x10);
      if (local_24 == -1) {
        iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ea3,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aadd8);
        if (iVar8 != 0) {
          pcVar1 = (code *)swi(3);
          iVar8 = (*pcVar1)();
          return iVar8;
        }
        return -1;
      }
      if (local_24 == 0) {
        *(undefined4 *)(this + 0x59a) = 4;
      }
    }
    if ((*(int *)(this + 0x59a) == 4) && (*(short *)(this + 0x6e) == 0x2f)) {
      sVar15 = *(short *)(this + 0x588);
      sVar16 = *(short *)(this + 0x58c);
      sVar17 = *(short *)(this + 0x58a);
      if (((sVar15 < 0) || (((DAT_007fb240 <= sVar15 || (sVar17 < 0)) || (DAT_007fb242 <= sVar17))))
         || ((sVar16 < 0 || (DAT_007fb244 <= sVar16)))) {
        local_c = (int *)0x0;
      }
      else {
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar16 * (int)DAT_007fb246 + (int)sVar17 * (int)DAT_007fb240 +
                           (int)sVar15) * 8);
      }
      if (((local_c != (int *)0x0) && (local_c[6] == *(int *)(this + 0x58e))) &&
         ((iVar8 = (**(code **)(*local_c + 0xa4))(), iVar8 != 1 &&
          (iVar8 = (**(code **)(*local_c + 0xc0))(), iVar8 != 1)))) {
        (**(code **)(*local_c + 0xb4))();
        *(undefined4 *)(this + 0x7ca) = *(undefined4 *)(this + 0x58e);
        *(undefined4 *)(this + 0x7ce) = 0;
        thunk_FUN_0041c5a0((int *)this);
        thunk_FUN_00495ff0(*(short *)(this + 0x5b),*(short *)(this + 0x5d),*(short *)(this + 0x5f),0
                           ,(int)this);
        DumpClassC::WritePtr
                  (*(short *)(this + 0x588),*(short *)(this + 0x58a),*(short *)(this + 0x58c),0,
                   (int)this);
        thunk_FUN_0041c3f0(this,*(undefined **)(this + 0x70a));
        iVar8 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar8 != 0);
      }
      thunk_FUN_00492420((int *)this);
      local_30 = *(uint *)((int)DAT_00802a38 + 0xe4);
      CmdToObj(this,3,&local_30);
switchD_004734db_caseD_2:
      return 2;
    }
    if (*(int *)(this + 0x59a) == 5) {
      iVar8 = CONCAT22(uVar12,*(short *)(this + 0x5f) * 200) + 100;
      iVar10 = CONCAT22(uVar2,*(short *)(this + 0x5d) * 0xc9) + 100;
      iVar4 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)(this + 0x5b) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar10 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)(this + 0x45)),iVar4,iVar10,iVar8);
      *(undefined2 *)(this + 0x59e) = uVar2;
      *(undefined4 *)(this + 0x59a) = 6;
    }
    if (*(int *)(this + 0x59a) == 6) {
      uVar5 = thunk_FUN_004176c0(this,*(short *)(this + 0x59e));
      uVar5 = thunk_FUN_00417910(this,(short)uVar5);
      if (uVar5 == 0xffffffff) {
        iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ed4,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aada0);
        if (iVar8 != 0) {
          pcVar1 = (code *)swi(3);
          iVar8 = (*pcVar1)();
          return iVar8;
        }
        return -1;
      }
      if (uVar5 == 0) {
        *(undefined4 *)(this + 0x59a) = 7;
        goto LAB_0047405d;
      }
    }
    if (*(int *)(this + 0x59a) == 7) {
      thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                         *(short *)(this + 0x45),*(short *)(this + 0x5b) * 0xc9 + 100,
                         *(short *)(this + 0x5d) * 0xc9 + 100,*(short *)(this + 0x5f) * 200 + 100,
                         (byte)this[0x61]);
      *(undefined4 *)(this + 0x59a) = 8;
    }
    if (*(int *)(this + 0x59a) == 8) {
      local_24 = thunk_FUN_00415ed0(this,&local_28,&local_2c);
      local_1c = 0;
      if (this[0x2bf] != (STBoatC)0x0) {
        local_20 = this + 0x2b3;
        do {
          puVar6 = (undefined4 *)
                   thunk_FUN_0041dc40(local_40,*(undefined4 *)local_20,*(undefined2 *)(local_20 + 4)
                                      ,*(short *)(this + 0x6c));
          local_38 = *puVar6;
          local_34 = *(short *)(puVar6 + 1);
          if (DAT_0080732c == 1) {
            bVar22 = 0;
            sVar21 = 0;
            uVar5 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
            iVar10 = -1;
            *(uint *)(this + 0x1c) = uVar5;
            sVar20 = 0;
            sVar19 = 0;
            uVar7 = uVar5 * 0x41c64e6d + 0x3039;
            sVar18 = 0;
            *(uint *)(this + 0x1c) = uVar7;
            sVar17 = 0;
            sVar16 = 0;
            local_30 = uVar7 * 0x41c64e6d + 0x3039;
            sVar15 = 0;
            *(uint *)(this + 0x1c) = local_30;
            lVar14 = Library::MSVCRT::__ftol();
            iVar8 = (int)(short)lVar14 + (uVar5 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 +
                    (int)local_34;
            iVar4 = ((uVar7 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_38._2_2_;
            uVar5 = local_30;
          }
          else {
            uVar7 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)(this + 0x1c) = uVar7;
            uVar11 = uVar7 * 0x41c64e6d + 0x3039;
            bVar22 = 0;
            *(uint *)(this + 0x1c) = uVar11;
            uVar5 = uVar11 * 0x41c64e6d + 0x3039;
            *(uint *)(this + 0x1c) = uVar5;
            sVar21 = 0;
            iVar10 = -1;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            sVar15 = 0;
            iVar8 = (uVar7 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 + (int)local_34;
            local_38._2_2_ = (short)((uint)local_38 >> 0x10);
            iVar4 = ((uVar11 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_38._2_2_;
          }
          TraksClassTy::TraksCreate
                    (DAT_00802a7c,1,2,7,
                     (uVar5 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 + (int)(short)local_38,
                     iVar4 + -3,iVar8,sVar15,sVar16,sVar17,sVar18,sVar19,sVar20,iVar10,sVar21,bVar22
                    );
          local_1c = local_1c + 1;
          local_20 = local_20 + 6;
        } while (local_1c < (int)(uint)(byte)this[0x2bf]);
      }
      if (local_24 == -1) {
        iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2efa,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aad68);
        if (iVar8 != 0) {
          pcVar1 = (code *)swi(3);
          iVar8 = (*pcVar1)();
          return iVar8;
        }
        return -1;
      }
      if (local_24 == 0) {
        FUN_006ea2f0(*(void **)(this + 0x211),*(uint *)(this + 0x1ed));
        iVar8 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar8 != 0);
      }
    }
    if (*(int *)(this + 0x59a) == 9) {
      iVar8 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar8 != 0);
    }
  }
LAB_00473b6c:
  iVar8 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
}

