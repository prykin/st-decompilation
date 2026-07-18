
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00436f20(STAllPlayersC *param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined2 *puVar9;
  code *pcVar10;
  uint uVar11;
  void *this;
  uint *puVar12;
  STGroupC *pSVar13;
  uint *puVar14;
  STGroupBoatC *this_00;
  int *piVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  undefined4 extraout_ECX_06;
  uint uVar19;
  int iVar20;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  uint uVar21;
  uint extraout_EDX_03;
  undefined4 extraout_EDX_04;
  short sVar22;
  int unaff_EDI;
  undefined4 *puVar23;
  undefined4 uVar24;
  undefined1 uVar25;
  undefined4 local_1fc;
  int local_1f6;
  undefined4 local_1b8 [17];
  undefined2 local_174;
  undefined2 local_172;
  undefined2 local_170;
  undefined4 local_16e;
  uint local_16a;
  undefined1 local_166;
  undefined2 local_157;
  uint local_154;
  undefined4 local_150;
  uint local_14c;
  uint *local_148;
  undefined4 local_138;
  uint *local_134;
  undefined2 local_124;
  undefined2 local_122;
  undefined2 local_120;
  undefined4 local_11e;
  uint local_118 [2];
  uint *local_110;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  undefined2 local_106;
  undefined2 local_104;
  undefined2 local_102;
  int local_100;
  undefined4 local_fc;
  uint *local_f8;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  int local_e8;
  undefined1 local_e4;
  undefined2 local_e3;
  undefined4 local_e1;
  uint *local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  uint *local_cc;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  ushort local_b0;
  ushort local_ae;
  ushort local_ac;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  short local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined1 local_8c [16];
  undefined4 local_7c;
  undefined4 local_78;
  uint *local_74;
  uint *local_6c;
  ushort *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  short local_58;
  short local_56;
  short local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48 [4];
  int *local_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint local_28;
  int local_24;
  STAllPlayersC *local_20;
  uint local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined4 local_14;
  undefined2 local_10 [2];
  uint *local_c;
  undefined4 *local_8;
  
  uVar19 = CONCAT31((int3)((uint)param_2 >> 8),param_3[8]);
  sVar22 = *(short *)(param_3 + 10);
  uVar21 = CONCAT22((short)((uint)param_1 >> 0x10),sVar22);
  local_8 = (undefined4 *)0x0;
  uVar11 = *(uint *)(param_3 + 10) >> 0x10;
  puVar16 = *(undefined4 **)(&DAT_007f4e21 + (uint)(byte)param_3[8] * 0xa62);
  local_38 = uVar21;
  local_30 = puVar16;
  local_20 = param_1;
  if (uVar11 != 0) {
    if (uVar11 != 1) {
      if (uVar11 != 2) {
        return;
      }
      if (sVar22 == -1) {
        return;
      }
      this = (void *)thunk_FUN_0042b620(uVar19,uVar21,3);
      if (this == (void *)0x0) {
        return;
      }
      if (param_3[0xe] != '\x15') {
        if (param_3[0xe] != '*') {
          return;
        }
        thunk_FUN_006270e0(this,0x2a,param_3);
        return;
      }
      local_24 = 4 - (uint)**(byte **)(param_3 + 0x17);
      thunk_FUN_006270e0(this,0x15,(undefined1 *)&local_24);
      return;
    }
    if (sVar22 == -1) {
      return;
    }
    local_8 = (undefined4 *)thunk_FUN_0042b620(uVar19,uVar21,1);
    if (local_8 == (undefined4 *)0x0) {
      return;
    }
    local_7c = 0x4401;
    switch(param_3[0xe]) {
    case 8:
    case 9:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x27:
    case 0x28:
    case 0x2a:
      goto switchD_0043702c_caseD_8;
    default:
      return;
    case 0x14:
      local_68 = *(ushort **)(param_3 + 0x17);
      uVar2 = local_68[2];
      uVar3 = *local_68;
      local_34 = (uint *)(uint)uVar3;
      uVar4 = local_68[4];
      local_2c = (uint *)(uint)uVar4;
      local_6c = (uint *)(int)(short)uVar2;
      local_30 = (uint *)(int)(short)uVar4;
      iVar20 = (int)(short)uVar3;
      if ((*(short *)(DAT_007fb280 +
                     ((int)DAT_007fb27e * (int)local_30 + iVar20 + (int)DAT_007fb278 * (int)local_6c
                     ) * 2) != 0) &&
         ((((((((short)uVar3 < 0 || (DAT_007fb240 <= (short)uVar3)) || ((short)uVar2 < 0)) ||
             ((DAT_007fb242 <= (short)uVar2 || ((short)uVar4 < 0)))) ||
            (DAT_007fb244 <= (short)uVar4)) ||
           (*(int *)(DAT_007fb248 +
                    ((int)DAT_007fb240 * (int)local_6c + iVar20 + (int)DAT_007fb246 * (int)local_30)
                    * 8) == 0)) && (local_28 = (uint)local_2c, (short)uVar4 < 5)))) {
        while( true ) {
          sVar22 = (short)local_28;
          if (*(short *)(DAT_007fb280 +
                        ((int)DAT_007fb27e * (int)sVar22 + iVar20 +
                        (int)DAT_007fb278 * (int)local_6c) * 2) == 0) break;
          if (((((-1 < (short)uVar3) && ((short)uVar3 < DAT_007fb240)) &&
               ((-1 < (short)uVar2 &&
                ((((short)uVar2 < DAT_007fb242 && (-1 < sVar22)) && (sVar22 < DAT_007fb244)))))) &&
              (*(int *)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar22 +
                       iVar20 + (int)DAT_007fb240 * (int)(short)uVar2) * 8) != 0)) ||
             (local_28 = local_28 + 1, 4 < (short)local_28)) goto switchD_0043702c_caseD_8;
        }
        *(int *)(local_68 + 4) = (int)sVar22;
      }
switchD_0043702c_caseD_8:
      local_78 = param_3;
      (**(code **)*local_8)(local_8c);
      return;
    case 0x29:
      if (**(char **)(param_3 + 0x17) == '\0') {
        if (puVar16 == (undefined4 *)0x0) {
          return;
        }
        puVar12 = FUN_006ae290((uint *)0x0,1,2,1);
        FUN_006ae1c0(puVar12,&local_38);
        local_78 = (undefined1 *)((uint)local_78._2_2_ << 0x10);
      }
      else {
        if (puVar16 == (undefined4 *)0x0) {
          return;
        }
        puVar12 = FUN_006ae290((uint *)0x0,1,2,1);
        FUN_006ae1c0(puVar12,&local_38);
        local_78 = (undefined1 *)CONCAT22(local_78._2_2_,1);
      }
      local_7c = 0x5d98;
      local_74 = puVar12;
      (**(code **)*puVar16)(local_8c);
      FUN_006ae110((byte *)puVar12);
      return;
    }
  }
  if (sVar22 == -1) {
    return;
  }
  local_1c = uVar21;
  if (param_3[0xe] == '\x17') {
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 0x11:
      if (*(int *)(param_3 + 0x13) == 0) {
        pSVar13 = (STGroupC *)thunk_FUN_0042b760(uVar19,uVar21);
        if (pSVar13 == (STGroupC *)0x0) {
          return;
        }
        local_c = STGroupC::GetGroupContent(pSVar13,unaff_EDI);
        uVar21 = extraout_ECX_04;
      }
      else {
        iVar20 = *(int *)(param_3 + 0xf);
        local_c = FUN_006ae290((uint *)0x0,0,2,1);
        sVar22 = 0;
        uVar21 = extraout_ECX_03;
        if (0 < (short)(*(uint *)(param_3 + 0x13) >> 1)) {
          do {
            FUN_006ae1c0(local_c,(undefined4 *)(puVar7 + sVar22 * 2 + iVar20));
            sVar22 = sVar22 + 1;
            uVar21 = *(uint *)(param_3 + 0x13) >> 1;
          } while (sVar22 < (short)uVar21);
        }
      }
      puVar12 = local_c;
      thunk_FUN_0044cdb0(CONCAT31((int3)(uVar21 >> 8),param_3[8]),(int)local_c,
                         *(int *)(*(int *)(param_3 + 0x17) + 0x1d));
      FUN_006ae110((byte *)puVar12);
      return;
    case 0x15:
      if (*(int *)(param_3 + 0x13) == 0) {
        pSVar13 = (STGroupC *)thunk_FUN_0042b760(uVar19,uVar21);
        if (pSVar13 == (STGroupC *)0x0) {
          return;
        }
        puVar12 = STGroupC::GetGroupContent(pSVar13,unaff_EDI);
        uVar18 = extraout_ECX_01;
      }
      else {
        iVar20 = *(int *)(param_3 + 0xf);
        puVar12 = FUN_006ae290((uint *)0x0,0,2,1);
        sVar22 = 0;
        uVar18 = extraout_ECX;
        if (0 < (short)(*(uint *)(param_3 + 0x13) >> 1)) {
          do {
            FUN_006ae1c0(puVar12,(undefined4 *)(puVar7 + sVar22 * 2 + iVar20));
            sVar22 = sVar22 + 1;
            uVar18 = extraout_ECX_00;
          } while (sVar22 < (short)(*(uint *)(param_3 + 0x13) >> 1));
        }
      }
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar18 >> 8),param_3[8]),(int)puVar12,1);
      thunk_FUN_0044cd20(CONCAT31((int3)((uint)extraout_EDX >> 8),param_3[8]),(int)puVar12,0);
      FUN_006ae110((byte *)puVar12);
      return;
    case 0x16:
      if (*(int *)(param_3 + 0x13) == 0) {
        pSVar13 = (STGroupC *)thunk_FUN_0042b760(uVar19,uVar21);
        if (pSVar13 == (STGroupC *)0x0) {
          return;
        }
        local_c = STGroupC::GetGroupContent(pSVar13,unaff_EDI);
        uVar18 = extraout_EDX_02;
      }
      else {
        iVar20 = *(int *)(param_3 + 0xf);
        local_c = FUN_006ae290((uint *)0x0,0,2,1);
        sVar22 = 0;
        uVar18 = extraout_EDX_00;
        if (0 < (short)(*(uint *)(param_3 + 0x13) >> 1)) {
          do {
            FUN_006ae1c0(local_c,(undefined4 *)(puVar7 + sVar22 * 2 + iVar20));
            sVar22 = sVar22 + 1;
            uVar18 = extraout_EDX_01;
          } while (sVar22 < (short)(*(uint *)(param_3 + 0x13) >> 1));
        }
      }
      puVar12 = local_c;
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar18 >> 8),param_3[8]),(int)local_c,0);
      FUN_006ae110((byte *)puVar12);
      return;
    case 0x17:
      if (*(int *)(param_3 + 0x13) == 0) {
        pSVar13 = (STGroupC *)thunk_FUN_0042b760(uVar19,uVar21);
        if (pSVar13 == (STGroupC *)0x0) {
          return;
        }
        puVar12 = STGroupC::GetGroupContent(pSVar13,unaff_EDI);
      }
      else {
        iVar20 = *(int *)(param_3 + 0xf);
        puVar12 = FUN_006ae290((uint *)0x0,0,2,1);
        sVar22 = 0;
        if (0 < (short)(*(uint *)(param_3 + 0x13) >> 1)) {
          do {
            FUN_006ae1c0(puVar12,(undefined4 *)(puVar7 + sVar22 * 2 + iVar20));
            sVar22 = sVar22 + 1;
          } while (sVar22 < (short)(*(uint *)(param_3 + 0x13) >> 1));
        }
      }
      if (*(int *)(*(int *)(param_3 + 0x17) + 0x1d) != 0) {
        thunk_FUN_0044cd20(CONCAT31((int3)((uint)*(int *)(param_3 + 0x17) >> 8),param_3[8]),
                           (int)puVar12,0);
        FUN_006ae110((byte *)puVar12);
        return;
      }
      thunk_FUN_0044cd20((uint)(byte)param_3[8],(int)puVar12,1);
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),param_3[8]),(int)puVar12,0);
      FUN_006ae110((byte *)puVar12);
      return;
    }
  }
  pSVar13 = (STGroupC *)0x0;
  if (*(int *)(param_3 + 0x13) != 0) {
    iVar20 = *(int *)(param_3 + 0x17);
    iVar17 = *(int *)(param_3 + 0xf);
    local_c = FUN_006ae290((uint *)0x0,0,2,1);
    sVar22 = 0;
    uVar21 = *(uint *)(param_3 + 0x13) >> 1;
    if (0 < (short)uVar21) {
      do {
        FUN_006ae1c0(local_c,(undefined4 *)(iVar20 + iVar17 + sVar22 * 2));
        sVar22 = sVar22 + 1;
        uVar21 = extraout_EDX_03;
      } while (sVar22 < (short)(*(uint *)(param_3 + 0x13) >> 1));
    }
    puVar12 = local_c;
    STAllPlayersC::AddObjsToGroup
              (local_20,CONCAT31((int3)(uVar21 >> 8),param_3[8]),0xfffe,(int)local_c,
               (undefined2 *)&local_1c);
    pSVar13 = (STGroupC *)FUN_006ae110((byte *)puVar12);
    uVar21 = extraout_ECX_05;
  }
  puVar12 = local_30;
  if (((local_30 != (undefined4 *)0x0) &&
      (pSVar13 = (STGroupC *)thunk_FUN_0042b760(CONCAT31((int3)(uVar21 >> 8),param_3[8]),local_1c),
      pSVar13 != (STGroupC *)0x0)) && (*(int *)(pSVar13 + 0x1c) != 0)) {
    if ((param_3[0xe] == ')') && (**(char **)(param_3 + 0x17) == '\x01')) {
      return;
    }
    puVar14 = STGroupC::GetGroupContent(pSVar13,unaff_EDI);
    STAllPlayersC::AddObjsToGroup
              (local_20,CONCAT31((int3)((uint)extraout_ECX_06 >> 8),param_3[8]),0xfffe,(int)puVar14,
               (undefined2 *)&local_1c);
    pSVar13 = (STGroupC *)FUN_006ae110((byte *)puVar14);
  }
  this_00 = (STGroupBoatC *)
            thunk_FUN_0042b760(CONCAT31((int3)((uint)pSVar13 >> 8),param_3[8]),local_1c);
  if (this_00 == (STGroupBoatC *)0x0) {
    return;
  }
  thunk_FUN_004a85b0((int)this_00);
  switch(param_3[0xe]) {
  case 10:
    goto switchD_004375b6_caseD_a;
  case 0x14:
    iVar20 = STGroupBoatC::IsAgAtt(this_00,unaff_EDI);
    if (iVar20 != 0) {
      puVar12 = FUN_006ae290((uint *)0x0,1,6,1);
      local_14._0_2_ = **(undefined2 **)(param_3 + 0x17);
      local_14._2_2_ = (*(undefined2 **)(param_3 + 0x17))[2];
      thunk_FUN_0049a500(this_00,(undefined2 *)0x0,(undefined2 *)0x0,local_10);
      FUN_006ae1c0(puVar12,&local_14);
      local_d8 = 1;
      local_dc = puVar12;
      (**(code **)(*(int *)this_00 + 8))(6,&local_dc);
      FUN_006ae110((byte *)puVar12);
      return;
    }
    local_4c = **(undefined2 **)(param_3 + 0x17);
    local_4a = (*(undefined2 **)(param_3 + 0x17))[2];
    thunk_FUN_0049a500(this_00,(undefined2 *)0x0,(undefined2 *)0x0,local_48);
    (**(code **)(*(int *)this_00 + 8))(1,&local_4c);
    return;
  case 0x15:
    local_24 = 4 - (uint)**(byte **)(param_3 + 0x17);
    (**(code **)(*(int *)this_00 + 8))(7,&local_24);
    return;
  case 0x16:
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 0:
    case 5:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 1),(int *)&local_8);
      if (local_8 == (undefined4 *)0x0) {
        return;
      }
      puVar12 = FUN_006ae290((uint *)0x0,1,4,1);
      local_18 = *(undefined1 *)(local_8 + 9);
      local_16 = *(undefined2 *)((int)local_8 + 0x32);
      uVar21 = local_8[8];
      if (uVar21 < 0x1af) {
        if (uVar21 == 0x1ae) {
          local_17 = 3;
          goto LAB_00437842;
        }
        if (uVar21 != 0x14) {
          return;
        }
      }
      else {
        if (uVar21 < 1000) {
          return;
        }
        if (0x3e9 < uVar21) {
          return;
        }
      }
      local_17 = 1;
LAB_00437842:
      FUN_006ae1c0(puVar12,(undefined4 *)&local_18);
      local_14c = (uint)(**(char **)(param_3 + 0x17) != '\0');
      local_150 = 0;
      local_148 = puVar12;
      (**(code **)(*(int *)this_00 + 8))(2,&local_150);
      FUN_006ae110((byte *)puVar12);
      return;
    case 1:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 1),(int *)&local_8);
      if (local_8 != (undefined4 *)0x0) {
        local_e4 = *(undefined1 *)(local_8 + 9);
        local_e3 = *(undefined2 *)((int)local_8 + 0x32);
        local_e1 = local_8[6];
        (**(code **)(*(int *)this_00 + 8))(0xf,&local_e4);
        return;
      }
      break;
    case 2:
      local_b0 = (ushort)(byte)puVar7[5];
      local_ae = (ushort)(byte)puVar7[6];
      local_ac = (ushort)(byte)puVar7[7];
      (**(code **)(*(int *)this_00 + 8))(0xe,&local_b0);
      return;
    }
    break;
  case 0x17:
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 1:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 0x1d),(int *)&local_8);
      if (local_8 != (undefined4 *)0x0) {
        puVar12 = FUN_006ae290((uint *)0x0,1,2,1);
        FUN_006ae1c0(puVar12,(undefined4 *)((int)local_8 + 0x32));
        local_138 = 0;
        local_134 = puVar12;
        (**(code **)(*(int *)this_00 + 8))(5,&local_138);
        FUN_006ae110((byte *)puVar12);
        return;
      }
      break;
    case 2:
      puVar12 = FUN_006ae290((uint *)0x0,1,6,1);
      local_14._0_2_ = *(undefined2 *)(*(int *)(param_3 + 0x17) + 1);
      local_14._2_2_ = *(undefined2 *)(*(int *)(param_3 + 0x17) + 5);
      thunk_FUN_0049a500(this_00,(undefined2 *)0x0,(undefined2 *)0x0,local_10);
      FUN_006ae1c0(puVar12,&local_14);
      thunk_FUN_0049a500(this_00,(undefined2 *)&local_14,(undefined2 *)((int)&local_14 + 2),
                         (undefined2 *)0x0);
      FUN_006ae1c0(puVar12,&local_14);
      local_d8 = 0;
      local_dc = puVar12;
      (**(code **)(*(int *)this_00 + 8))(6,&local_dc);
      FUN_006ae110((byte *)puVar12);
      return;
    case 3:
      sVar22 = *(short *)(puVar7 + 9);
      sVar5 = *(short *)(puVar7 + 5);
      sVar6 = *(short *)(puVar7 + 1);
      if (((-1 < sVar6) && (sVar6 < DAT_007fb240)) &&
         ((((-1 < sVar5 && ((sVar5 < DAT_007fb242 && (-1 < sVar22)))) && (sVar22 < DAT_007fb244)) &&
          (iVar20 = *(int *)(DAT_007fb248 +
                            ((int)sVar22 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                            (int)sVar6) * 8), iVar20 != 0)))) {
        puVar12 = FUN_006ae290((uint *)0x0,1,2,1);
        FUN_006ae1c0(puVar12,(undefined4 *)(iVar20 + 0x32));
        local_d0 = 0;
        local_cc = puVar12;
        (**(code **)(*(int *)this_00 + 8))(4,&local_d0);
        FUN_006ae110((byte *)puVar12);
        return;
      }
      break;
    case 10:
      local_d0 = 1;
      local_cc = (uint *)0x0;
      (**(code **)(*(int *)this_00 + 8))(4,&local_d0);
      return;
    case 0x10:
      local_b8 = *(undefined2 *)(puVar7 + 1);
      local_b6 = *(undefined2 *)(puVar7 + 5);
      local_b4 = *(undefined2 *)(puVar7 + 9);
      (**(code **)(*(int *)this_00 + 8))(0x14,&local_b8);
      return;
    case 0x13:
      sVar22 = *(short *)(puVar7 + 1);
      sVar5 = *(short *)(puVar7 + 9);
      sVar6 = *(short *)(puVar7 + 5);
      if ((((-1 < sVar22) && (sVar22 < DAT_007fb240)) &&
          ((-1 < sVar6 && (((sVar6 < DAT_007fb242 && (-1 < sVar5)) && (sVar5 < DAT_007fb244)))))) &&
         (*(int *)(DAT_007fb248 +
                  ((int)sVar5 * (int)DAT_007fb246 + (int)sVar6 * (int)DAT_007fb240 + (int)sVar22) *
                  8) != 0)) {
        local_98 = 0;
        local_94 = *(undefined2 *)(puVar7 + 1);
        local_92 = *(undefined2 *)(puVar7 + 5);
        local_90 = *(undefined2 *)(puVar7 + 9);
        (**(code **)(*(int *)this_00 + 8))(0x11,&local_98);
        return;
      }
      break;
    case 0x14:
      local_98 = 1;
      local_90 = 0;
      local_92 = 0;
      local_94 = 0;
      (**(code **)(*(int *)this_00 + 8))(0x11,&local_98);
      return;
    case 0x18:
      local_a8 = *(undefined2 *)(puVar7 + 1);
      local_a6 = *(undefined2 *)(puVar7 + 5);
      local_a4 = *(undefined2 *)(puVar7 + 9);
      (**(code **)(*(int *)this_00 + 8))(0x13,&local_a8);
      return;
    }
    break;
  case 0x18:
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 1:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_00;
      uVar25 = puVar7[0x11];
      uVar24 = 1;
      break;
    case 2:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_00;
      uVar25 = puVar7[0x11];
      uVar24 = 2;
      break;
    case 3:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_00;
      uVar25 = puVar7[0x11];
      uVar24 = 4;
      break;
    case 4:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_00;
      uVar25 = puVar7[0x11];
      uVar24 = 5;
      break;
    case 5:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_00;
      uVar25 = puVar7[0x11];
      uVar24 = 3;
      break;
    case 6:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_00;
      uVar25 = puVar7[0x11];
      uVar24 = 0xfffffffd;
      break;
    case 7:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_00;
      uVar25 = puVar7[0x11];
      uVar24 = 0xfffffffe;
      break;
    case 8:
      (**(code **)(*(int *)this_00 + 0x18))(this_00,0,0,0);
      thunk_FUN_0043fc50(0x11,0);
      goto switchD_004384bc_default;
    case 9:
      iVar20 = *(int *)this_00;
      uVar18 = (**(code **)(iVar20 + 0x24))();
      iVar17 = (**(code **)(*(int *)this_00 + 0x20))(uVar18);
      (**(code **)(iVar20 + 0x18))(this_00,0xffffffff,iVar17 + 1);
      goto switchD_004384bc_default;
    case 10:
      iVar20 = *(int *)this_00;
      uVar18 = (**(code **)(iVar20 + 0x24))();
      iVar17 = (**(code **)(*(int *)this_00 + 0x20))(uVar18);
      (**(code **)(iVar20 + 0x18))(this_00,0xffffffff,iVar17 + -1);
      goto switchD_004384bc_default;
    case 0xb:
      iVar20 = *(int *)this_00;
      iVar17 = (**(code **)(iVar20 + 0x24))();
      uVar18 = (**(code **)(*(int *)this_00 + 0x20))(iVar17 + 0x2d);
      (**(code **)(iVar20 + 0x18))(this_00,0xffffffff,uVar18);
      goto switchD_004384bc_default;
    case 0xc:
      iVar20 = *(int *)this_00;
      iVar17 = (**(code **)(iVar20 + 0x24))();
      uVar18 = (**(code **)(*(int *)this_00 + 0x20))(iVar17 + -0x2d);
      (**(code **)(iVar20 + 0x18))(this_00,0xffffffff,uVar18);
    default:
      goto switchD_004384bc_default;
    }
    (**(code **)(iVar20 + 0x18))(this_00,uVar24,uVar25,uVar18);
switchD_004384bc_default:
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      local_4c = *(undefined2 *)(puVar7 + 1);
      local_4a = *(undefined2 *)(puVar7 + 5);
      thunk_FUN_0049a500(this_00,(undefined2 *)0x0,(undefined2 *)0x0,local_48);
      (**(code **)(*(int *)this_00 + 8))(1,&local_4c);
      return;
    case 8:
switchD_004375b6_caseD_a:
      (**(code **)(*(int *)this_00 + 8))(3,0);
      return;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      thunk_FUN_0049a500(this_00,&local_4c,&local_4a,local_48);
      (**(code **)(*(int *)this_00 + 8))(1,&local_4c);
      return;
    }
    break;
  case 0x19:
    puVar9 = *(undefined2 **)(param_3 + 0x17);
    local_124 = *puVar9;
    local_122 = puVar9[2];
    local_120 = puVar9[4];
    local_11e = 0xffffffff;
    (**(code **)(*(int *)this_00 + 8))(0xd,&local_124);
    return;
  case 0x1a:
    pcVar8 = *(char **)(param_3 + 0x17);
    if (*pcVar8 == '\x01') {
      local_5c = 2;
      local_58 = 0;
      local_56 = 0;
      local_54 = 0;
      local_52 = *(undefined2 *)(pcVar8 + 1);
      local_50 = *(undefined2 *)(pcVar8 + 5);
      local_4e = *(undefined2 *)(pcVar8 + 9);
      (**(code **)(*(int *)this_00 + 8))(0x10,&local_5c);
      return;
    }
    if (*pcVar8 == '\x02') {
      local_58 = *(short *)(pcVar8 + 1);
      local_56 = *(short *)(pcVar8 + 5);
      local_54 = *(short *)(pcVar8 + 9);
      if ((((-1 < local_58) && (local_58 < DAT_007fb240)) &&
          ((-1 < local_56 &&
           (((local_56 < DAT_007fb242 && (-1 < local_54)) && (local_54 < DAT_007fb244)))))) &&
         ((piVar15 = *(int **)(DAT_007fb248 +
                              ((int)local_54 * (int)DAT_007fb246 + (int)local_56 * (int)DAT_007fb240
                              + (int)local_58) * 8), piVar15 != (int *)0x0 && (piVar15[8] == 1000)))
         ) {
        iVar20 = (**(code **)(*piVar15 + 0x2c))();
        if (iVar20 == 0x37) {
          local_5c = 0;
          local_52 = 0;
          local_50 = 0;
          local_4e = 0;
        }
        else {
          iVar20 = (**(code **)(*piVar15 + 0x2c))();
          if (iVar20 != 0x6c) {
            return;
          }
          iVar20 = thunk_FUN_004e9960(piVar15,(undefined4 *)&local_52,(undefined4 *)&local_50,
                                      (undefined4 *)&local_4e);
          if (iVar20 != 1) {
            return;
          }
          local_5c = 1;
        }
        (**(code **)(*(int *)this_00 + 8))(0x10,&local_5c);
        return;
      }
    }
    break;
  case 0x1f:
    pcVar8 = *(char **)(param_3 + 0x17);
    local_a0 = *(short *)(pcVar8 + 1);
    sVar22 = *(short *)(pcVar8 + 5);
    sVar5 = *(short *)(pcVar8 + 3);
    if (local_a0 < 0) {
      return;
    }
    if (DAT_007fb240 <= local_a0) {
      return;
    }
    if (sVar5 < 0) {
      return;
    }
    if (DAT_007fb242 <= sVar5) {
      return;
    }
    if (sVar22 < 0) {
      return;
    }
    if (DAT_007fb244 <= sVar22) {
      return;
    }
    piVar15 = *(int **)(DAT_007fb248 +
                       ((int)sVar5 * (int)DAT_007fb240 + (int)sVar22 * (int)DAT_007fb246 +
                       (int)local_a0) * 8);
    if (piVar15 == (int *)0x0) {
      return;
    }
    if (*pcVar8 == '\x03') {
      local_9e = *(undefined2 *)(pcVar8 + 3);
      local_9c = *(undefined2 *)(pcVar8 + 5);
      (**(code **)(*(int *)this_00 + 8))(0x12,&local_a0);
      return;
    }
    if (*pcVar8 == '\x01') {
      puVar12 = FUN_006ae290((uint *)0x0,1,2,1);
      local_c = puVar12;
      FUN_006ae1c0(puVar12,(undefined4 *)((int)piVar15 + 0x32));
      local_118[1] = 0;
      local_102 = 0xffff;
      local_104 = 0xffff;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_110 = puVar12;
      local_100 = (**(code **)(*piVar15 + 0x2c))();
      local_fc = 1;
      local_f8 = (uint *)0x0;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      (**(code **)(*(int *)this_00 + 8))(8,local_118 + 1);
      FUN_006ae110((byte *)local_c);
      return;
    }
    local_c = STGroupC::GetGroupContent((STGroupC *)this_00,unaff_EDI);
    uVar21 = local_c[3];
    local_154 = uVar21;
    local_6c = FUN_006ae290((uint *)0x0,0,2,1);
    local_34 = FUN_006ae290((uint *)0x0,0,2,1);
    local_2c = FUN_006ae290((uint *)0x0,0,2,1);
    local_30 = FUN_006ae290((uint *)0x0,0,2,1);
    local_3c = 0;
    local_68 = (ushort *)0x0;
    local_d4 = 0;
    local_28 = 0;
    if ((int)uVar21 < 1) {
LAB_00437e03:
      iVar20 = *(int *)(param_3 + 0x17);
      local_c0 = *(undefined2 *)(iVar20 + 1);
      local_be = *(undefined2 *)(iVar20 + 3);
      local_bc = *(undefined2 *)(iVar20 + 5);
      (**(code **)(*(int *)this_00 + 8))(10,&local_c0);
      puVar12 = local_30;
    }
    else {
      uVar21 = 0;
      do {
        FUN_006acc70((int)local_c,uVar21,local_118);
        piVar15 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_04 >> 8),
                                                     this_00[0x24]),local_118[0],1);
        iVar20 = (**(code **)(*piVar15 + 0x2c))();
        if ((((iVar20 == 8) || (iVar20 = (**(code **)(*piVar15 + 0x2c))(), iVar20 == 0x14)) ||
            (iVar20 = (**(code **)(*piVar15 + 0x2c))(), iVar20 == 0x1a)) &&
           (iVar20 = thunk_FUN_0045ff10((int)piVar15), iVar20 == 0xc)) {
          puVar16 = (undefined4 *)thunk_FUN_0048dc90(piVar15,local_1b8);
          puVar23 = &local_1fc;
          for (iVar20 = 0x10; iVar20 != 0; iVar20 = iVar20 + -1) {
            *puVar23 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar23 = puVar23 + 1;
          }
          *(undefined2 *)puVar23 = *(undefined2 *)puVar16;
          iVar20 = FUN_006e62d0(DAT_00802a38,local_1f6,(int *)&local_40);
          if ((iVar20 == 0) && (iVar20 = (**(code **)(*local_40 + 0x88))(&local_e8), 0 < iVar20)) {
            if (local_e8 == 0xdc) {
              local_d4 = local_d4 + 1;
              puVar12 = local_6c;
            }
            else if (local_e8 == 0xdd) {
              local_68 = (ushort *)((int)local_68 + 1);
              puVar12 = local_34;
            }
            else {
              if (local_e8 != 0xde) {
                iVar20 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x14ca,0,0,
                                      &DAT_007a4ccc);
                if (iVar20 != 0) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                goto LAB_00437c45;
              }
              local_3c = local_3c + 1;
              puVar12 = local_2c;
            }
            FUN_006ae1c0(puVar12,(undefined4 *)((int)local_40 + 0x32));
          }
        }
LAB_00437c45:
        local_28 = local_28 + 1;
        uVar21 = (uint)(short)local_28;
      } while ((int)uVar21 < (int)local_154);
      if ((((int)local_68 < local_d4) && (local_3c < local_d4)) && (0 < local_d4)) {
        iVar20 = 0;
      }
      else {
        if (local_3c < (int)local_68) {
          if ((local_d4 <= (int)local_68) && (0 < (int)local_68)) {
            iVar20 = 1;
            goto LAB_00437cb5;
          }
          if (local_3c < (int)local_68) goto LAB_00437e03;
        }
        if ((local_3c < local_d4) || (local_3c < 1)) goto LAB_00437e03;
        iVar20 = 2;
      }
LAB_00437cb5:
      local_118[1] = 0;
      if (iVar20 == 0) {
        local_100 = 0x38;
        local_110 = local_6c;
      }
      else if (iVar20 == 1) {
        local_110 = local_34;
        iVar20 = thunk_FUN_004406c0((char)this_00[0x24]);
        local_100 = (-(uint)((char)iVar20 != '\x03') & 0xffffffdb) + 0x5e;
      }
      else if (iVar20 == 2) {
        local_100 = 0x4f;
        local_110 = local_2c;
      }
      puVar12 = local_30;
      local_102 = 0xffff;
      local_104 = 0xffff;
      iVar20 = *(int *)(param_3 + 0x17);
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_fc = 0;
      sVar22 = *(short *)(iVar20 + 5);
      sVar5 = *(short *)(iVar20 + 3);
      sVar6 = *(short *)(iVar20 + 1);
      if (((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
          ((DAT_007fb242 <= sVar5 || (sVar22 < 0)))) || (DAT_007fb244 <= sVar22)) {
        iVar20 = 0;
      }
      else {
        iVar20 = *(int *)(DAT_007fb248 +
                         ((int)sVar22 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                         (int)sVar6) * 8);
      }
      FUN_006ae1c0(local_30,(undefined4 *)(iVar20 + 0x32));
      local_f8 = puVar12;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      (**(code **)(*(int *)this_00 + 8))(8,local_118 + 1);
    }
    FUN_006ae110((byte *)local_c);
    FUN_006ae110((byte *)local_6c);
    FUN_006ae110((byte *)local_34);
    FUN_006ae110((byte *)local_2c);
    FUN_006ae110((byte *)puVar12);
    return;
  case 0x21:
    pcVar8 = *(char **)(param_3 + 0x17);
    cVar1 = *pcVar8;
    if (cVar1 == '\x01') {
      local_64 = *(undefined4 *)(pcVar8 + 1);
      (**(code **)(*(int *)this_00 + 8))(0x15,&local_64);
      return;
    }
    if (cVar1 == '\x03') {
      local_c4 = 0xffff;
      local_c6 = 0xffff;
      local_c8 = 0xffff;
      (**(code **)(*(int *)this_00 + 8))(0xc,&local_c8);
      return;
    }
    if (cVar1 == '\x04') {
      local_60 = *(undefined4 *)(pcVar8 + 1);
      (**(code **)(*(int *)this_00 + 8))(0xb,&local_60);
      return;
    }
    break;
  case 0x23:
    puVar16 = *(undefined4 **)(param_3 + 0x17);
    local_174 = *(undefined2 *)(puVar16 + 1);
    local_172 = *(undefined2 *)(puVar16 + 2);
    local_170 = *(undefined2 *)(puVar16 + 3);
    local_16e = *puVar16;
    local_16a = (uint)(byte)param_3[8];
    local_166 = 0;
    local_157 = 0xffff;
    (**(code **)(*(int *)this_00 + 8))(9,&local_174);
    return;
  case 0x28:
    if (**(char **)(param_3 + 0x17) == '\0') {
      thunk_FUN_004a8690(this_00,0);
    }
    else if (**(char **)(param_3 + 0x17) == '\x01') {
      thunk_FUN_004a8690(this_00,1);
      return;
    }
    break;
  case 0x29:
    if (**(char **)(param_3 + 0x17) != '\0') {
      if (puVar12 == (undefined4 *)0x0) {
        return;
      }
      local_7c = 0x5d98;
      local_78 = (undefined1 *)CONCAT22(local_78._2_2_,1);
      local_74 = *(uint **)(this_00 + 0x29);
      (**(code **)*puVar12)(local_8c);
      return;
    }
    goto switchD_004375b6_caseD_a;
  case 0x31:
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 1:
    case 2:
      local_14c = (uint)(puVar7[3] != '\x01');
      sVar22 = 0;
      local_150 = 0;
      local_148 = FUN_006ae290((uint *)0x0,0,4,1);
      if (*(short *)(puVar7 + 1) != 0) {
        iVar20 = 0;
        do {
          FUN_006ae1c0(local_148,(undefined4 *)(puVar7 + iVar20 * 4 + 4));
          sVar22 = sVar22 + 1;
          iVar20 = (int)sVar22;
        } while (iVar20 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      (**(code **)(*(int *)this_00 + 8))(2,&local_150);
      FUN_006ae110((byte *)local_148);
      return;
    case 3:
      sVar22 = 0;
      local_138 = 0;
      local_134 = FUN_006ae290((uint *)0x0,0,2,1);
      if (*(short *)(puVar7 + 1) != 0) {
        iVar20 = 0;
        do {
          FUN_006ae1c0(local_134,(undefined4 *)(puVar7 + iVar20 * 2 + 4));
          sVar22 = sVar22 + 1;
          iVar20 = (int)sVar22;
        } while (iVar20 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      (**(code **)(*(int *)this_00 + 8))(5,&local_138);
      FUN_006ae110((byte *)local_134);
      return;
    case 4:
      break;
    default:
      iVar20 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1427,0,0,&DAT_007a4ccc);
      if (iVar20 != 0) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  return;
}

