
/* WARNING: Type propagation algorithm not settling */

void __fastcall thunk_FUN_00436f20(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

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
  int iVar13;
  uint *puVar14;
  int *this_00;
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
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  uint uVar20;
  uint extraout_EDX_03;
  undefined4 extraout_EDX_04;
  short sVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  undefined1 uVar24;
  undefined4 uStack_1fc;
  int iStack_1f6;
  undefined4 auStack_1b8 [17];
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined2 uStack_170;
  undefined4 uStack_16e;
  uint uStack_16a;
  undefined1 uStack_166;
  undefined2 uStack_157;
  uint uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  uint *puStack_148;
  undefined4 uStack_138;
  uint *puStack_134;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined4 uStack_11e;
  uint auStack_118 [2];
  uint *puStack_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined2 uStack_104;
  undefined2 uStack_102;
  int iStack_100;
  undefined4 uStack_fc;
  uint *puStack_f8;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  int iStack_e8;
  undefined1 uStack_e4;
  undefined2 uStack_e3;
  undefined4 uStack_e1;
  uint *puStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  uint *puStack_cc;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  ushort uStack_b0;
  ushort uStack_ae;
  ushort uStack_ac;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  short sStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined1 auStack_8c [16];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint *puStack_74;
  uint *puStack_6c;
  ushort *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  short sStack_58;
  short sStack_56;
  short sStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 auStack_48 [4];
  int *piStack_40;
  int iStack_3c;
  uint uStack_38;
  uint *puStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  uint uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined2 auStack_10 [2];
  uint *puStack_c;
  undefined4 *puStack_8;
  
  uVar19 = CONCAT31((int3)((uint)param_2 >> 8),param_3[8]);
  sVar21 = *(short *)(param_3 + 10);
  uVar20 = CONCAT22((short)((uint)param_1 >> 0x10),sVar21);
  puStack_8 = (undefined4 *)0x0;
  uVar11 = *(uint *)(param_3 + 10) >> 0x10;
  puVar16 = *(undefined4 **)(&DAT_007f4e21 + (uint)(byte)param_3[8] * 0xa62);
  uStack_38 = uVar20;
  puStack_30 = puVar16;
  uStack_20 = param_1;
  if (uVar11 != 0) {
    if (uVar11 != 1) {
      if (uVar11 != 2) {
        return;
      }
      if (sVar21 == -1) {
        return;
      }
      this = (void *)thunk_FUN_0042b620(uVar19,uVar20,3);
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
      iStack_24 = 4 - (uint)**(byte **)(param_3 + 0x17);
      thunk_FUN_006270e0(this,0x15,(undefined1 *)&iStack_24);
      return;
    }
    if (sVar21 == -1) {
      return;
    }
    puStack_8 = (undefined4 *)thunk_FUN_0042b620(uVar19,uVar20,1);
    if (puStack_8 == (undefined4 *)0x0) {
      return;
    }
    uStack_7c = 0x4401;
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
      puStack_68 = *(ushort **)(param_3 + 0x17);
      uVar2 = puStack_68[2];
      uVar3 = *puStack_68;
      puStack_34 = (uint *)(uint)uVar3;
      uVar4 = puStack_68[4];
      puStack_2c = (uint *)(uint)uVar4;
      puStack_6c = (uint *)(int)(short)uVar2;
      puStack_30 = (uint *)(int)(short)uVar4;
      iVar13 = (int)(short)uVar3;
      if ((*(short *)(DAT_007fb280 +
                     ((int)DAT_007fb27e * (int)puStack_30 + iVar13 +
                     (int)DAT_007fb278 * (int)puStack_6c) * 2) != 0) &&
         ((((((((short)uVar3 < 0 || (DAT_007fb240 <= (short)uVar3)) || ((short)uVar2 < 0)) ||
             ((DAT_007fb242 <= (short)uVar2 || ((short)uVar4 < 0)))) ||
            (DAT_007fb244 <= (short)uVar4)) ||
           (*(int *)(DAT_007fb248 +
                    ((int)DAT_007fb240 * (int)puStack_6c +
                    iVar13 + (int)DAT_007fb246 * (int)puStack_30) * 8) == 0)) &&
          (uStack_28 = (uint)puStack_2c, (short)uVar4 < 5)))) {
        while( true ) {
          sVar21 = (short)uStack_28;
          if (*(short *)(DAT_007fb280 +
                        ((int)DAT_007fb27e * (int)sVar21 + iVar13 +
                        (int)DAT_007fb278 * (int)puStack_6c) * 2) == 0) break;
          if (((((-1 < (short)uVar3) && ((short)uVar3 < DAT_007fb240)) &&
               ((-1 < (short)uVar2 &&
                ((((short)uVar2 < DAT_007fb242 && (-1 < sVar21)) && (sVar21 < DAT_007fb244)))))) &&
              (*(int *)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar21 +
                       iVar13 + (int)DAT_007fb240 * (int)(short)uVar2) * 8) != 0)) ||
             (uStack_28 = uStack_28 + 1, 4 < (short)uStack_28)) goto switchD_0043702c_caseD_8;
        }
        *(int *)(puStack_68 + 4) = (int)sVar21;
      }
switchD_0043702c_caseD_8:
      uStack_78 = param_3;
      (**(code **)*puStack_8)(auStack_8c);
      return;
    case 0x29:
      if (**(char **)(param_3 + 0x17) == '\0') {
        if (puVar16 == (undefined4 *)0x0) {
          return;
        }
        puVar12 = FUN_006ae290((uint *)0x0,1,2,1);
        FUN_006ae1c0(puVar12,&uStack_38);
        uStack_78 = (undefined1 *)((uint)uStack_78._2_2_ << 0x10);
      }
      else {
        if (puVar16 == (undefined4 *)0x0) {
          return;
        }
        puVar12 = FUN_006ae290((uint *)0x0,1,2,1);
        FUN_006ae1c0(puVar12,&uStack_38);
        uStack_78 = (undefined1 *)CONCAT22(uStack_78._2_2_,1);
      }
      uStack_7c = 0x5d98;
      puStack_74 = puVar12;
      (**(code **)*puVar16)(auStack_8c);
      FUN_006ae110((byte *)puVar12);
      return;
    }
  }
  if (sVar21 == -1) {
    return;
  }
  uStack_1c = uVar20;
  if (param_3[0xe] == '\x17') {
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 0x11:
      if (*(int *)(param_3 + 0x13) == 0) {
        iVar13 = thunk_FUN_0042b760(uVar19,uVar20);
        if (iVar13 == 0) {
          return;
        }
        puStack_c = thunk_FUN_004233e0(iVar13);
        uVar20 = extraout_ECX_04;
      }
      else {
        iVar13 = *(int *)(param_3 + 0xf);
        puStack_c = FUN_006ae290((uint *)0x0,0,2,1);
        sVar21 = 0;
        uVar20 = extraout_ECX_03;
        if (0 < (short)(*(uint *)(param_3 + 0x13) >> 1)) {
          do {
            FUN_006ae1c0(puStack_c,(undefined4 *)(puVar7 + sVar21 * 2 + iVar13));
            sVar21 = sVar21 + 1;
            uVar20 = *(uint *)(param_3 + 0x13) >> 1;
          } while (sVar21 < (short)uVar20);
        }
      }
      puVar12 = puStack_c;
      thunk_FUN_0044cdb0(CONCAT31((int3)(uVar20 >> 8),param_3[8]),(int)puStack_c,
                         *(int *)(*(int *)(param_3 + 0x17) + 0x1d));
      FUN_006ae110((byte *)puVar12);
      return;
    case 0x15:
      if (*(int *)(param_3 + 0x13) == 0) {
        iVar13 = thunk_FUN_0042b760(uVar19,uVar20);
        if (iVar13 == 0) {
          return;
        }
        puVar12 = thunk_FUN_004233e0(iVar13);
        uVar18 = extraout_ECX_01;
      }
      else {
        iVar13 = *(int *)(param_3 + 0xf);
        puVar12 = FUN_006ae290((uint *)0x0,0,2,1);
        sVar21 = 0;
        uVar18 = extraout_ECX;
        if (0 < (short)(*(uint *)(param_3 + 0x13) >> 1)) {
          do {
            FUN_006ae1c0(puVar12,(undefined4 *)(puVar7 + sVar21 * 2 + iVar13));
            sVar21 = sVar21 + 1;
            uVar18 = extraout_ECX_00;
          } while (sVar21 < (short)(*(uint *)(param_3 + 0x13) >> 1));
        }
      }
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar18 >> 8),param_3[8]),(int)puVar12,1);
      thunk_FUN_0044cd20(CONCAT31((int3)((uint)extraout_EDX >> 8),param_3[8]),(int)puVar12,0);
      FUN_006ae110((byte *)puVar12);
      return;
    case 0x16:
      if (*(int *)(param_3 + 0x13) == 0) {
        iVar13 = thunk_FUN_0042b760(uVar19,uVar20);
        if (iVar13 == 0) {
          return;
        }
        puStack_c = thunk_FUN_004233e0(iVar13);
        uVar18 = extraout_EDX_02;
      }
      else {
        iVar13 = *(int *)(param_3 + 0xf);
        puStack_c = FUN_006ae290((uint *)0x0,0,2,1);
        sVar21 = 0;
        uVar18 = extraout_EDX_00;
        if (0 < (short)(*(uint *)(param_3 + 0x13) >> 1)) {
          do {
            FUN_006ae1c0(puStack_c,(undefined4 *)(puVar7 + sVar21 * 2 + iVar13));
            sVar21 = sVar21 + 1;
            uVar18 = extraout_EDX_01;
          } while (sVar21 < (short)(*(uint *)(param_3 + 0x13) >> 1));
        }
      }
      puVar12 = puStack_c;
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar18 >> 8),param_3[8]),(int)puStack_c,0);
      FUN_006ae110((byte *)puVar12);
      return;
    case 0x17:
      if (*(int *)(param_3 + 0x13) == 0) {
        iVar13 = thunk_FUN_0042b760(uVar19,uVar20);
        if (iVar13 == 0) {
          return;
        }
        puVar12 = thunk_FUN_004233e0(iVar13);
      }
      else {
        iVar13 = *(int *)(param_3 + 0xf);
        puVar12 = FUN_006ae290((uint *)0x0,0,2,1);
        sVar21 = 0;
        if (0 < (short)(*(uint *)(param_3 + 0x13) >> 1)) {
          do {
            FUN_006ae1c0(puVar12,(undefined4 *)(puVar7 + sVar21 * 2 + iVar13));
            sVar21 = sVar21 + 1;
          } while (sVar21 < (short)(*(uint *)(param_3 + 0x13) >> 1));
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
  iVar13 = 0;
  if (*(int *)(param_3 + 0x13) != 0) {
    iVar13 = *(int *)(param_3 + 0x17);
    iVar17 = *(int *)(param_3 + 0xf);
    puStack_c = FUN_006ae290((uint *)0x0,0,2,1);
    sVar21 = 0;
    uVar20 = *(uint *)(param_3 + 0x13) >> 1;
    if (0 < (short)uVar20) {
      do {
        FUN_006ae1c0(puStack_c,(undefined4 *)(iVar13 + iVar17 + sVar21 * 2));
        sVar21 = sVar21 + 1;
        uVar20 = extraout_EDX_03;
      } while (sVar21 < (short)(*(uint *)(param_3 + 0x13) >> 1));
    }
    puVar12 = puStack_c;
    thunk_FUN_0042b7d0(CONCAT31((int3)(uVar20 >> 8),param_3[8]),0xfffe,(int)puStack_c,
                       (undefined2 *)&uStack_1c);
    iVar13 = FUN_006ae110((byte *)puVar12);
    uVar20 = extraout_ECX_05;
  }
  puVar12 = puStack_30;
  if (((puStack_30 != (undefined4 *)0x0) &&
      (iVar13 = thunk_FUN_0042b760(CONCAT31((int3)(uVar20 >> 8),param_3[8]),uStack_1c), iVar13 != 0)
      ) && (*(int *)(iVar13 + 0x1c) != 0)) {
    if ((param_3[0xe] == ')') && (**(char **)(param_3 + 0x17) == '\x01')) {
      return;
    }
    puVar14 = thunk_FUN_004233e0(iVar13);
    thunk_FUN_0042b7d0(CONCAT31((int3)((uint)extraout_ECX_06 >> 8),param_3[8]),0xfffe,(int)puVar14,
                       (undefined2 *)&uStack_1c);
    iVar13 = FUN_006ae110((byte *)puVar14);
  }
  this_00 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)iVar13 >> 8),param_3[8]),uStack_1c);
  if (this_00 == (int *)0x0) {
    return;
  }
  thunk_FUN_004a85b0((int)this_00);
  switch(param_3[0xe]) {
  case 10:
    goto switchD_004375b6_caseD_a;
  case 0x14:
    iVar13 = thunk_FUN_004a87a0((int)this_00);
    if (iVar13 != 0) {
      puVar12 = FUN_006ae290((uint *)0x0,1,6,1);
      uStack_14._0_2_ = **(undefined2 **)(param_3 + 0x17);
      uStack_14._2_2_ = (*(undefined2 **)(param_3 + 0x17))[2];
      thunk_FUN_0049a500(this_00,(undefined2 *)0x0,(undefined2 *)0x0,auStack_10);
      FUN_006ae1c0(puVar12,&uStack_14);
      uStack_d8 = 1;
      puStack_dc = puVar12;
      (**(code **)(*this_00 + 8))(6,&puStack_dc);
      FUN_006ae110((byte *)puVar12);
      return;
    }
    uStack_4c = **(undefined2 **)(param_3 + 0x17);
    uStack_4a = (*(undefined2 **)(param_3 + 0x17))[2];
    thunk_FUN_0049a500(this_00,(undefined2 *)0x0,(undefined2 *)0x0,auStack_48);
    (**(code **)(*this_00 + 8))(1,&uStack_4c);
    return;
  case 0x15:
    iStack_24 = 4 - (uint)**(byte **)(param_3 + 0x17);
    (**(code **)(*this_00 + 8))(7,&iStack_24);
    return;
  case 0x16:
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 0:
    case 5:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 1),(int *)&puStack_8);
      if (puStack_8 == (undefined4 *)0x0) {
        return;
      }
      puVar12 = FUN_006ae290((uint *)0x0,1,4,1);
      uStack_18 = *(undefined1 *)(puStack_8 + 9);
      uStack_16 = *(undefined2 *)((int)puStack_8 + 0x32);
      uVar20 = puStack_8[8];
      if (uVar20 < 0x1af) {
        if (uVar20 == 0x1ae) {
          uStack_17 = 3;
          goto LAB_00437842;
        }
        if (uVar20 != 0x14) {
          return;
        }
      }
      else {
        if (uVar20 < 1000) {
          return;
        }
        if (0x3e9 < uVar20) {
          return;
        }
      }
      uStack_17 = 1;
LAB_00437842:
      FUN_006ae1c0(puVar12,(undefined4 *)&uStack_18);
      uStack_14c = (uint)(**(char **)(param_3 + 0x17) != '\0');
      uStack_150 = 0;
      puStack_148 = puVar12;
      (**(code **)(*this_00 + 8))(2,&uStack_150);
      FUN_006ae110((byte *)puVar12);
      return;
    case 1:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 1),(int *)&puStack_8);
      if (puStack_8 != (undefined4 *)0x0) {
        uStack_e4 = *(undefined1 *)(puStack_8 + 9);
        uStack_e3 = *(undefined2 *)((int)puStack_8 + 0x32);
        uStack_e1 = puStack_8[6];
        (**(code **)(*this_00 + 8))(0xf,&uStack_e4);
        return;
      }
      break;
    case 2:
      uStack_b0 = (ushort)(byte)puVar7[5];
      uStack_ae = (ushort)(byte)puVar7[6];
      uStack_ac = (ushort)(byte)puVar7[7];
      (**(code **)(*this_00 + 8))(0xe,&uStack_b0);
      return;
    }
    break;
  case 0x17:
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 1:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 0x1d),(int *)&puStack_8);
      if (puStack_8 != (undefined4 *)0x0) {
        puVar12 = FUN_006ae290((uint *)0x0,1,2,1);
        FUN_006ae1c0(puVar12,(undefined4 *)((int)puStack_8 + 0x32));
        uStack_138 = 0;
        puStack_134 = puVar12;
        (**(code **)(*this_00 + 8))(5,&uStack_138);
        FUN_006ae110((byte *)puVar12);
        return;
      }
      break;
    case 2:
      puVar12 = FUN_006ae290((uint *)0x0,1,6,1);
      uStack_14._0_2_ = *(undefined2 *)(*(int *)(param_3 + 0x17) + 1);
      uStack_14._2_2_ = *(undefined2 *)(*(int *)(param_3 + 0x17) + 5);
      thunk_FUN_0049a500(this_00,(undefined2 *)0x0,(undefined2 *)0x0,auStack_10);
      FUN_006ae1c0(puVar12,&uStack_14);
      thunk_FUN_0049a500(this_00,(undefined2 *)&uStack_14,(undefined2 *)((int)&uStack_14 + 2),
                         (undefined2 *)0x0);
      FUN_006ae1c0(puVar12,&uStack_14);
      uStack_d8 = 0;
      puStack_dc = puVar12;
      (**(code **)(*this_00 + 8))(6,&puStack_dc);
      FUN_006ae110((byte *)puVar12);
      return;
    case 3:
      sVar21 = *(short *)(puVar7 + 9);
      sVar5 = *(short *)(puVar7 + 5);
      sVar6 = *(short *)(puVar7 + 1);
      if (((-1 < sVar6) && (sVar6 < DAT_007fb240)) &&
         ((((-1 < sVar5 && ((sVar5 < DAT_007fb242 && (-1 < sVar21)))) && (sVar21 < DAT_007fb244)) &&
          (iVar13 = *(int *)(DAT_007fb248 +
                            ((int)sVar21 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                            (int)sVar6) * 8), iVar13 != 0)))) {
        puVar12 = FUN_006ae290((uint *)0x0,1,2,1);
        FUN_006ae1c0(puVar12,(undefined4 *)(iVar13 + 0x32));
        uStack_d0 = 0;
        puStack_cc = puVar12;
        (**(code **)(*this_00 + 8))(4,&uStack_d0);
        FUN_006ae110((byte *)puVar12);
        return;
      }
      break;
    case 10:
      uStack_d0 = 1;
      puStack_cc = (uint *)0x0;
      (**(code **)(*this_00 + 8))(4,&uStack_d0);
      return;
    case 0x10:
      uStack_b8 = *(undefined2 *)(puVar7 + 1);
      uStack_b6 = *(undefined2 *)(puVar7 + 5);
      uStack_b4 = *(undefined2 *)(puVar7 + 9);
      (**(code **)(*this_00 + 8))(0x14,&uStack_b8);
      return;
    case 0x13:
      sVar21 = *(short *)(puVar7 + 1);
      sVar5 = *(short *)(puVar7 + 9);
      sVar6 = *(short *)(puVar7 + 5);
      if ((((-1 < sVar21) && (sVar21 < DAT_007fb240)) &&
          ((-1 < sVar6 && (((sVar6 < DAT_007fb242 && (-1 < sVar5)) && (sVar5 < DAT_007fb244)))))) &&
         (*(int *)(DAT_007fb248 +
                  ((int)sVar5 * (int)DAT_007fb246 + (int)sVar6 * (int)DAT_007fb240 + (int)sVar21) *
                  8) != 0)) {
        uStack_98 = 0;
        uStack_94 = *(undefined2 *)(puVar7 + 1);
        uStack_92 = *(undefined2 *)(puVar7 + 5);
        uStack_90 = *(undefined2 *)(puVar7 + 9);
        (**(code **)(*this_00 + 8))(0x11,&uStack_98);
        return;
      }
      break;
    case 0x14:
      uStack_98 = 1;
      uStack_90 = 0;
      uStack_92 = 0;
      uStack_94 = 0;
      (**(code **)(*this_00 + 8))(0x11,&uStack_98);
      return;
    case 0x18:
      uStack_a8 = *(undefined2 *)(puVar7 + 1);
      uStack_a6 = *(undefined2 *)(puVar7 + 5);
      uStack_a4 = *(undefined2 *)(puVar7 + 9);
      (**(code **)(*this_00 + 8))(0x13,&uStack_a8);
      return;
    }
    break;
  case 0x18:
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 1:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar13 = *this_00;
      uVar24 = puVar7[0x11];
      uVar23 = 1;
      break;
    case 2:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar13 = *this_00;
      uVar24 = puVar7[0x11];
      uVar23 = 2;
      break;
    case 3:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar13 = *this_00;
      uVar24 = puVar7[0x11];
      uVar23 = 4;
      break;
    case 4:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar13 = *this_00;
      uVar24 = puVar7[0x11];
      uVar23 = 5;
      break;
    case 5:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar13 = *this_00;
      uVar24 = puVar7[0x11];
      uVar23 = 3;
      break;
    case 6:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar13 = *this_00;
      uVar24 = puVar7[0x11];
      uVar23 = 0xfffffffd;
      break;
    case 7:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar13 = *this_00;
      uVar24 = puVar7[0x11];
      uVar23 = 0xfffffffe;
      break;
    case 8:
      (**(code **)(*this_00 + 0x18))(this_00,0,0,0);
      thunk_FUN_0043fc50(0x11,0);
      goto switchD_004384bc_default;
    case 9:
      iVar13 = *this_00;
      uVar18 = (**(code **)(iVar13 + 0x24))();
      iVar17 = (**(code **)(*this_00 + 0x20))(uVar18);
      (**(code **)(iVar13 + 0x18))(this_00,0xffffffff,iVar17 + 1);
      goto switchD_004384bc_default;
    case 10:
      iVar13 = *this_00;
      uVar18 = (**(code **)(iVar13 + 0x24))();
      iVar17 = (**(code **)(*this_00 + 0x20))(uVar18);
      (**(code **)(iVar13 + 0x18))(this_00,0xffffffff,iVar17 + -1);
      goto switchD_004384bc_default;
    case 0xb:
      iVar13 = *this_00;
      iVar17 = (**(code **)(iVar13 + 0x24))();
      uVar18 = (**(code **)(*this_00 + 0x20))(iVar17 + 0x2d);
      (**(code **)(iVar13 + 0x18))(this_00,0xffffffff,uVar18);
      goto switchD_004384bc_default;
    case 0xc:
      iVar13 = *this_00;
      iVar17 = (**(code **)(iVar13 + 0x24))();
      uVar18 = (**(code **)(*this_00 + 0x20))(iVar17 + -0x2d);
      (**(code **)(iVar13 + 0x18))(this_00,0xffffffff,uVar18);
    default:
      goto switchD_004384bc_default;
    }
    (**(code **)(iVar13 + 0x18))(this_00,uVar23,uVar24,uVar18);
switchD_004384bc_default:
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uStack_4c = *(undefined2 *)(puVar7 + 1);
      uStack_4a = *(undefined2 *)(puVar7 + 5);
      thunk_FUN_0049a500(this_00,(undefined2 *)0x0,(undefined2 *)0x0,auStack_48);
      (**(code **)(*this_00 + 8))(1,&uStack_4c);
      return;
    case 8:
switchD_004375b6_caseD_a:
      (**(code **)(*this_00 + 8))(3,0);
      return;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      thunk_FUN_0049a500(this_00,&uStack_4c,&uStack_4a,auStack_48);
      (**(code **)(*this_00 + 8))(1,&uStack_4c);
      return;
    }
    break;
  case 0x19:
    puVar9 = *(undefined2 **)(param_3 + 0x17);
    uStack_124 = *puVar9;
    uStack_122 = puVar9[2];
    uStack_120 = puVar9[4];
    uStack_11e = 0xffffffff;
    (**(code **)(*this_00 + 8))(0xd,&uStack_124);
    return;
  case 0x1a:
    pcVar8 = *(char **)(param_3 + 0x17);
    if (*pcVar8 == '\x01') {
      uStack_5c = 2;
      sStack_58 = 0;
      sStack_56 = 0;
      sStack_54 = 0;
      uStack_52 = *(undefined2 *)(pcVar8 + 1);
      uStack_50 = *(undefined2 *)(pcVar8 + 5);
      uStack_4e = *(undefined2 *)(pcVar8 + 9);
      (**(code **)(*this_00 + 8))(0x10,&uStack_5c);
      return;
    }
    if (*pcVar8 == '\x02') {
      sStack_58 = *(short *)(pcVar8 + 1);
      sStack_56 = *(short *)(pcVar8 + 5);
      sStack_54 = *(short *)(pcVar8 + 9);
      if ((((-1 < sStack_58) && (sStack_58 < DAT_007fb240)) &&
          ((-1 < sStack_56 &&
           (((sStack_56 < DAT_007fb242 && (-1 < sStack_54)) && (sStack_54 < DAT_007fb244)))))) &&
         ((piVar15 = *(int **)(DAT_007fb248 +
                              ((int)sStack_54 * (int)DAT_007fb246 +
                               (int)sStack_56 * (int)DAT_007fb240 + (int)sStack_58) * 8),
          piVar15 != (int *)0x0 && (piVar15[8] == 1000)))) {
        iVar13 = (**(code **)(*piVar15 + 0x2c))();
        if (iVar13 == 0x37) {
          uStack_5c = 0;
          uStack_52 = 0;
          uStack_50 = 0;
          uStack_4e = 0;
        }
        else {
          iVar13 = (**(code **)(*piVar15 + 0x2c))();
          if (iVar13 != 0x6c) {
            return;
          }
          iVar13 = thunk_FUN_004e9960(piVar15,(undefined4 *)&uStack_52,(undefined4 *)&uStack_50,
                                      (undefined4 *)&uStack_4e);
          if (iVar13 != 1) {
            return;
          }
          uStack_5c = 1;
        }
        (**(code **)(*this_00 + 8))(0x10,&uStack_5c);
        return;
      }
    }
    break;
  case 0x1f:
    pcVar8 = *(char **)(param_3 + 0x17);
    sStack_a0 = *(short *)(pcVar8 + 1);
    sVar21 = *(short *)(pcVar8 + 5);
    sVar5 = *(short *)(pcVar8 + 3);
    if (sStack_a0 < 0) {
      return;
    }
    if (DAT_007fb240 <= sStack_a0) {
      return;
    }
    if (sVar5 < 0) {
      return;
    }
    if (DAT_007fb242 <= sVar5) {
      return;
    }
    if (sVar21 < 0) {
      return;
    }
    if (DAT_007fb244 <= sVar21) {
      return;
    }
    piVar15 = *(int **)(DAT_007fb248 +
                       ((int)sVar5 * (int)DAT_007fb240 + (int)sVar21 * (int)DAT_007fb246 +
                       (int)sStack_a0) * 8);
    if (piVar15 == (int *)0x0) {
      return;
    }
    if (*pcVar8 == '\x03') {
      uStack_9e = *(undefined2 *)(pcVar8 + 3);
      uStack_9c = *(undefined2 *)(pcVar8 + 5);
      (**(code **)(*this_00 + 8))(0x12,&sStack_a0);
      return;
    }
    if (*pcVar8 == '\x01') {
      puVar12 = FUN_006ae290((uint *)0x0,1,2,1);
      puStack_c = puVar12;
      FUN_006ae1c0(puVar12,(undefined4 *)((int)piVar15 + 0x32));
      auStack_118[1] = 0;
      uStack_102 = 0xffff;
      uStack_104 = 0xffff;
      uStack_106 = 0xffff;
      uStack_108 = 0xffff;
      uStack_10a = 0xffff;
      uStack_10c = 0xffff;
      puStack_110 = puVar12;
      iStack_100 = (**(code **)(*piVar15 + 0x2c))();
      uStack_fc = 1;
      puStack_f8 = (uint *)0x0;
      uStack_ea = 0xffff;
      uStack_ec = 0xffff;
      uStack_ee = 0xffff;
      uStack_f0 = 0xffff;
      uStack_f2 = 0xffff;
      uStack_f4 = 0xffff;
      (**(code **)(*this_00 + 8))(8,auStack_118 + 1);
      FUN_006ae110((byte *)puStack_c);
      return;
    }
    puStack_c = thunk_FUN_004233e0((int)this_00);
    uVar20 = puStack_c[3];
    uStack_154 = uVar20;
    puStack_6c = FUN_006ae290((uint *)0x0,0,2,1);
    puStack_34 = FUN_006ae290((uint *)0x0,0,2,1);
    puStack_2c = FUN_006ae290((uint *)0x0,0,2,1);
    puStack_30 = FUN_006ae290((uint *)0x0,0,2,1);
    iStack_3c = 0;
    puStack_68 = (ushort *)0x0;
    iStack_d4 = 0;
    uStack_28 = 0;
    if ((int)uVar20 < 1) {
LAB_00437e03:
      iVar13 = *(int *)(param_3 + 0x17);
      uStack_c0 = *(undefined2 *)(iVar13 + 1);
      uStack_be = *(undefined2 *)(iVar13 + 3);
      uStack_bc = *(undefined2 *)(iVar13 + 5);
      (**(code **)(*this_00 + 8))(10,&uStack_c0);
      puVar12 = puStack_30;
    }
    else {
      uVar20 = 0;
      do {
        FUN_006acc70((int)puStack_c,uVar20,auStack_118);
        piVar15 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_04 >> 8),
                                                     (char)this_00[9]),auStack_118[0],1);
        iVar13 = (**(code **)(*piVar15 + 0x2c))();
        if ((((iVar13 == 8) || (iVar13 = (**(code **)(*piVar15 + 0x2c))(), iVar13 == 0x14)) ||
            (iVar13 = (**(code **)(*piVar15 + 0x2c))(), iVar13 == 0x1a)) &&
           (iVar13 = thunk_FUN_0045ff10((int)piVar15), iVar13 == 0xc)) {
          puVar16 = (undefined4 *)thunk_FUN_0048dc90(piVar15,auStack_1b8);
          puVar22 = &uStack_1fc;
          for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
            *puVar22 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar22 = puVar22 + 1;
          }
          *(undefined2 *)puVar22 = *(undefined2 *)puVar16;
          iVar13 = FUN_006e62d0(DAT_00802a38,iStack_1f6,(int *)&piStack_40);
          if ((iVar13 == 0) && (iVar13 = (**(code **)(*piStack_40 + 0x88))(&iStack_e8), 0 < iVar13))
          {
            if (iStack_e8 == 0xdc) {
              iStack_d4 = iStack_d4 + 1;
              puVar12 = puStack_6c;
            }
            else if (iStack_e8 == 0xdd) {
              puStack_68 = (ushort *)((int)puStack_68 + 1);
              puVar12 = puStack_34;
            }
            else {
              if (iStack_e8 != 0xde) {
                iVar13 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x14ca,0,0,
                                      &DAT_007a4ccc);
                if (iVar13 != 0) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                goto LAB_00437c45;
              }
              iStack_3c = iStack_3c + 1;
              puVar12 = puStack_2c;
            }
            FUN_006ae1c0(puVar12,(undefined4 *)((int)piStack_40 + 0x32));
          }
        }
LAB_00437c45:
        uStack_28 = uStack_28 + 1;
        uVar20 = (uint)(short)uStack_28;
      } while ((int)uVar20 < (int)uStack_154);
      if ((((int)puStack_68 < iStack_d4) && (iStack_3c < iStack_d4)) && (0 < iStack_d4)) {
        iVar13 = 0;
      }
      else {
        if (iStack_3c < (int)puStack_68) {
          if ((iStack_d4 <= (int)puStack_68) && (0 < (int)puStack_68)) {
            iVar13 = 1;
            goto LAB_00437cb5;
          }
          if (iStack_3c < (int)puStack_68) goto LAB_00437e03;
        }
        if ((iStack_3c < iStack_d4) || (iStack_3c < 1)) goto LAB_00437e03;
        iVar13 = 2;
      }
LAB_00437cb5:
      auStack_118[1] = 0;
      if (iVar13 == 0) {
        iStack_100 = 0x38;
        puStack_110 = puStack_6c;
      }
      else if (iVar13 == 1) {
        puStack_110 = puStack_34;
        iVar13 = thunk_FUN_004406c0((char)this_00[9]);
        iStack_100 = (-(uint)((char)iVar13 != '\x03') & 0xffffffdb) + 0x5e;
      }
      else if (iVar13 == 2) {
        iStack_100 = 0x4f;
        puStack_110 = puStack_2c;
      }
      puVar12 = puStack_30;
      uStack_102 = 0xffff;
      uStack_104 = 0xffff;
      iVar13 = *(int *)(param_3 + 0x17);
      uStack_106 = 0xffff;
      uStack_108 = 0xffff;
      uStack_10a = 0xffff;
      uStack_10c = 0xffff;
      uStack_fc = 0;
      sVar21 = *(short *)(iVar13 + 5);
      sVar5 = *(short *)(iVar13 + 3);
      sVar6 = *(short *)(iVar13 + 1);
      if (((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
          ((DAT_007fb242 <= sVar5 || (sVar21 < 0)))) || (DAT_007fb244 <= sVar21)) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(DAT_007fb248 +
                         ((int)sVar21 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                         (int)sVar6) * 8);
      }
      FUN_006ae1c0(puStack_30,(undefined4 *)(iVar13 + 0x32));
      puStack_f8 = puVar12;
      uStack_ea = 0xffff;
      uStack_ec = 0xffff;
      uStack_ee = 0xffff;
      uStack_f0 = 0xffff;
      uStack_f2 = 0xffff;
      uStack_f4 = 0xffff;
      (**(code **)(*this_00 + 8))(8,auStack_118 + 1);
    }
    FUN_006ae110((byte *)puStack_c);
    FUN_006ae110((byte *)puStack_6c);
    FUN_006ae110((byte *)puStack_34);
    FUN_006ae110((byte *)puStack_2c);
    FUN_006ae110((byte *)puVar12);
    return;
  case 0x21:
    pcVar8 = *(char **)(param_3 + 0x17);
    cVar1 = *pcVar8;
    if (cVar1 == '\x01') {
      uStack_64 = *(undefined4 *)(pcVar8 + 1);
      (**(code **)(*this_00 + 8))(0x15,&uStack_64);
      return;
    }
    if (cVar1 == '\x03') {
      uStack_c4 = 0xffff;
      uStack_c6 = 0xffff;
      uStack_c8 = 0xffff;
      (**(code **)(*this_00 + 8))(0xc,&uStack_c8);
      return;
    }
    if (cVar1 == '\x04') {
      uStack_60 = *(undefined4 *)(pcVar8 + 1);
      (**(code **)(*this_00 + 8))(0xb,&uStack_60);
      return;
    }
    break;
  case 0x23:
    puVar16 = *(undefined4 **)(param_3 + 0x17);
    uStack_174 = *(undefined2 *)(puVar16 + 1);
    uStack_172 = *(undefined2 *)(puVar16 + 2);
    uStack_170 = *(undefined2 *)(puVar16 + 3);
    uStack_16e = *puVar16;
    uStack_16a = (uint)(byte)param_3[8];
    uStack_166 = 0;
    uStack_157 = 0xffff;
    (**(code **)(*this_00 + 8))(9,&uStack_174);
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
      uStack_7c = 0x5d98;
      uStack_78 = (undefined1 *)CONCAT22(uStack_78._2_2_,1);
      puStack_74 = *(uint **)((int)this_00 + 0x29);
      (**(code **)*puVar12)(auStack_8c);
      return;
    }
    goto switchD_004375b6_caseD_a;
  case 0x31:
    puVar7 = *(undefined1 **)(param_3 + 0x17);
    switch(*puVar7) {
    case 1:
    case 2:
      uStack_14c = (uint)(puVar7[3] != '\x01');
      sVar21 = 0;
      uStack_150 = 0;
      puStack_148 = FUN_006ae290((uint *)0x0,0,4,1);
      if (*(short *)(puVar7 + 1) != 0) {
        iVar13 = 0;
        do {
          FUN_006ae1c0(puStack_148,(undefined4 *)(puVar7 + iVar13 * 4 + 4));
          sVar21 = sVar21 + 1;
          iVar13 = (int)sVar21;
        } while (iVar13 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      (**(code **)(*this_00 + 8))(2,&uStack_150);
      FUN_006ae110((byte *)puStack_148);
      return;
    case 3:
      sVar21 = 0;
      uStack_138 = 0;
      puStack_134 = FUN_006ae290((uint *)0x0,0,2,1);
      if (*(short *)(puVar7 + 1) != 0) {
        iVar13 = 0;
        do {
          FUN_006ae1c0(puStack_134,(undefined4 *)(puVar7 + iVar13 * 2 + 4));
          sVar21 = sVar21 + 1;
          iVar13 = (int)sVar21;
        } while (iVar13 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      (**(code **)(*this_00 + 8))(5,&uStack_138);
      FUN_006ae110((byte *)puStack_134);
      return;
    case 4:
      break;
    default:
      iVar13 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1427,0,0,&DAT_007a4ccc);
      if (iVar13 != 0) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  return;
}

