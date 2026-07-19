
/* WARNING: Type propagation algorithm not settling */

void __thiscall
STAllPlayersC::CmdToPlsObj
          (STAllPlayersC *this,undefined1 *param_1,undefined4 param_2,undefined1 *param_3)

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
  void *this_00;
  uint *puVar12;
  STGroupC *pSVar13;
  uint *puVar14;
  STGroupBoatC *this_01;
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
  undefined4 in_EDX;
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
  STAllPlayersC *pSStack_20;
  uint uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined2 auStack_10 [2];
  uint *puStack_c;
  undefined4 *puStack_8;
  
  uVar19 = CONCAT31((int3)((uint)in_EDX >> 8),param_1[8]);
  sVar22 = *(short *)(param_1 + 10);
  uVar21 = CONCAT22((short)((uint)this >> 0x10),sVar22);
  puStack_8 = (undefined4 *)0x0;
  uVar11 = *(uint *)(param_1 + 10) >> 0x10;
  puVar16 = *(undefined4 **)(&DAT_007f4e21 + (uint)(byte)param_1[8] * 0xa62);
  uStack_38 = uVar21;
  puStack_30 = puVar16;
  pSStack_20 = this;
  if (uVar11 != 0) {
    if (uVar11 != 1) {
      if (uVar11 != 2) {
        return;
      }
      if (sVar22 == -1) {
        return;
      }
      this_00 = (void *)GetObjPtr(DAT_007fa174,uVar19,uVar21,3);
      if (this_00 == (void *)0x0) {
        return;
      }
      if (param_1[0xe] != '\x15') {
        if (param_1[0xe] != '*') {
          return;
        }
        thunk_FUN_006270e0(this_00,0x2a,param_1);
        return;
      }
      iStack_24 = 4 - (uint)**(byte **)(param_1 + 0x17);
      thunk_FUN_006270e0(this_00,0x15,(undefined1 *)&iStack_24);
      return;
    }
    if (sVar22 == -1) {
      return;
    }
    puStack_8 = (undefined4 *)GetObjPtr(DAT_007fa174,uVar19,uVar21,1);
    if (puStack_8 == (undefined4 *)0x0) {
      return;
    }
    uStack_7c = 0x4401;
    switch(param_1[0xe]) {
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
      puStack_68 = *(ushort **)(param_1 + 0x17);
      uVar2 = puStack_68[2];
      uVar3 = *puStack_68;
      puStack_34 = (uint *)(uint)uVar3;
      uVar4 = puStack_68[4];
      puStack_2c = (uint *)(uint)uVar4;
      puStack_6c = (uint *)(int)(short)uVar2;
      puStack_30 = (uint *)(int)(short)uVar4;
      iVar20 = (int)(short)uVar3;
      if ((*(short *)(DAT_007fb280 +
                     ((int)DAT_007fb27e * (int)puStack_30 + iVar20 +
                     (int)DAT_007fb278 * (int)puStack_6c) * 2) != 0) &&
         ((((((((short)uVar3 < 0 || (DAT_007fb240 <= (short)uVar3)) || ((short)uVar2 < 0)) ||
             ((DAT_007fb242 <= (short)uVar2 || ((short)uVar4 < 0)))) ||
            (DAT_007fb244 <= (short)uVar4)) ||
           (*(int *)(DAT_007fb248 +
                    ((int)DAT_007fb240 * (int)puStack_6c +
                    iVar20 + (int)DAT_007fb246 * (int)puStack_30) * 8) == 0)) &&
          (uStack_28 = (uint)puStack_2c, (short)uVar4 < 5)))) {
        while( true ) {
          sVar22 = (short)uStack_28;
          if (*(short *)(DAT_007fb280 +
                        ((int)DAT_007fb27e * (int)sVar22 + iVar20 +
                        (int)DAT_007fb278 * (int)puStack_6c) * 2) == 0) break;
          if (((((-1 < (short)uVar3) && ((short)uVar3 < DAT_007fb240)) &&
               ((-1 < (short)uVar2 &&
                ((((short)uVar2 < DAT_007fb242 && (-1 < sVar22)) && (sVar22 < DAT_007fb244)))))) &&
              (*(int *)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar22 +
                       iVar20 + (int)DAT_007fb240 * (int)(short)uVar2) * 8) != 0)) ||
             (uStack_28 = uStack_28 + 1, 4 < (short)uStack_28)) goto switchD_0043702c_caseD_8;
        }
        *(int *)(puStack_68 + 4) = (int)sVar22;
      }
switchD_0043702c_caseD_8:
      uStack_78 = param_1;
      (**(code **)*puStack_8)(auStack_8c);
      return;
    case 0x29:
      if (**(char **)(param_1 + 0x17) == '\0') {
        if (puVar16 == (undefined4 *)0x0) {
          return;
        }
        puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar12,&uStack_38);
        uStack_78 = (undefined1 *)((uint)uStack_78._2_2_ << 0x10);
      }
      else {
        if (puVar16 == (undefined4 *)0x0) {
          return;
        }
        puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar12,&uStack_38);
        uStack_78 = (undefined1 *)CONCAT22(uStack_78._2_2_,1);
      }
      uStack_7c = 0x5d98;
      puStack_74 = puVar12;
      (**(code **)*puVar16)(auStack_8c);
      FUN_006ae110((byte *)puVar12);
      return;
    }
  }
  if (sVar22 == -1) {
    return;
  }
  uStack_1c = uVar21;
  if (param_1[0xe] == '\x17') {
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 0x11:
      if (*(int *)(param_1 + 0x13) == 0) {
        pSVar13 = (STGroupC *)thunk_FUN_0042b760(uVar19,uVar21);
        if (pSVar13 == (STGroupC *)0x0) {
          return;
        }
        puStack_c = STGroupC::GetGroupContent(pSVar13,unaff_EDI);
        uVar21 = extraout_ECX_04;
      }
      else {
        iVar20 = *(int *)(param_1 + 0xf);
        puStack_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar22 = 0;
        uVar21 = extraout_ECX_03;
        if (0 < (short)(*(uint *)(param_1 + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0(puStack_c,(undefined4 *)(puVar7 + sVar22 * 2 + iVar20));
            sVar22 = sVar22 + 1;
            uVar21 = *(uint *)(param_1 + 0x13) >> 1;
          } while (sVar22 < (short)uVar21);
        }
      }
      puVar12 = puStack_c;
      thunk_FUN_0044cdb0(CONCAT31((int3)(uVar21 >> 8),param_1[8]),(int)puStack_c,
                         *(int *)(*(int *)(param_1 + 0x17) + 0x1d));
      FUN_006ae110((byte *)puVar12);
      return;
    case 0x15:
      if (*(int *)(param_1 + 0x13) == 0) {
        pSVar13 = (STGroupC *)thunk_FUN_0042b760(uVar19,uVar21);
        if (pSVar13 == (STGroupC *)0x0) {
          return;
        }
        puVar12 = STGroupC::GetGroupContent(pSVar13,unaff_EDI);
        uVar18 = extraout_ECX_01;
      }
      else {
        iVar20 = *(int *)(param_1 + 0xf);
        puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar22 = 0;
        uVar18 = extraout_ECX;
        if (0 < (short)(*(uint *)(param_1 + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0(puVar12,(undefined4 *)(puVar7 + sVar22 * 2 + iVar20));
            sVar22 = sVar22 + 1;
            uVar18 = extraout_ECX_00;
          } while (sVar22 < (short)(*(uint *)(param_1 + 0x13) >> 1));
        }
      }
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar18 >> 8),param_1[8]),(int)puVar12,1);
      thunk_FUN_0044cd20(CONCAT31((int3)((uint)extraout_EDX >> 8),param_1[8]),(int)puVar12,0);
      FUN_006ae110((byte *)puVar12);
      return;
    case 0x16:
      if (*(int *)(param_1 + 0x13) == 0) {
        pSVar13 = (STGroupC *)thunk_FUN_0042b760(uVar19,uVar21);
        if (pSVar13 == (STGroupC *)0x0) {
          return;
        }
        puStack_c = STGroupC::GetGroupContent(pSVar13,unaff_EDI);
        uVar18 = extraout_EDX_02;
      }
      else {
        iVar20 = *(int *)(param_1 + 0xf);
        puStack_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar22 = 0;
        uVar18 = extraout_EDX_00;
        if (0 < (short)(*(uint *)(param_1 + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0(puStack_c,(undefined4 *)(puVar7 + sVar22 * 2 + iVar20));
            sVar22 = sVar22 + 1;
            uVar18 = extraout_EDX_01;
          } while (sVar22 < (short)(*(uint *)(param_1 + 0x13) >> 1));
        }
      }
      puVar12 = puStack_c;
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar18 >> 8),param_1[8]),(int)puStack_c,0);
      FUN_006ae110((byte *)puVar12);
      return;
    case 0x17:
      if (*(int *)(param_1 + 0x13) == 0) {
        pSVar13 = (STGroupC *)thunk_FUN_0042b760(uVar19,uVar21);
        if (pSVar13 == (STGroupC *)0x0) {
          return;
        }
        puVar12 = STGroupC::GetGroupContent(pSVar13,unaff_EDI);
      }
      else {
        iVar20 = *(int *)(param_1 + 0xf);
        puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar22 = 0;
        if (0 < (short)(*(uint *)(param_1 + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0(puVar12,(undefined4 *)(puVar7 + sVar22 * 2 + iVar20));
            sVar22 = sVar22 + 1;
          } while (sVar22 < (short)(*(uint *)(param_1 + 0x13) >> 1));
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x17) + 0x1d) != 0) {
        thunk_FUN_0044cd20(CONCAT31((int3)((uint)*(int *)(param_1 + 0x17) >> 8),param_1[8]),
                           (int)puVar12,0);
        FUN_006ae110((byte *)puVar12);
        return;
      }
      thunk_FUN_0044cd20((uint)(byte)param_1[8],(int)puVar12,1);
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),param_1[8]),(int)puVar12,0);
      FUN_006ae110((byte *)puVar12);
      return;
    }
  }
  pSVar13 = (STGroupC *)0x0;
  if (*(int *)(param_1 + 0x13) != 0) {
    iVar20 = *(int *)(param_1 + 0x17);
    iVar17 = *(int *)(param_1 + 0xf);
    puStack_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    sVar22 = 0;
    uVar21 = *(uint *)(param_1 + 0x13) >> 1;
    if (0 < (short)uVar21) {
      do {
        Library::DKW::TBL::FUN_006ae1c0(puStack_c,(undefined4 *)(iVar20 + iVar17 + sVar22 * 2));
        sVar22 = sVar22 + 1;
        uVar21 = extraout_EDX_03;
      } while (sVar22 < (short)(*(uint *)(param_1 + 0x13) >> 1));
    }
    puVar12 = puStack_c;
    AddObjsToGroup(pSStack_20,CONCAT31((int3)(uVar21 >> 8),param_1[8]),0xfffe,(int)puStack_c,
                   (undefined2 *)&uStack_1c);
    pSVar13 = (STGroupC *)FUN_006ae110((byte *)puVar12);
    uVar21 = extraout_ECX_05;
  }
  puVar12 = puStack_30;
  if (((puStack_30 != (undefined4 *)0x0) &&
      (pSVar13 = (STGroupC *)thunk_FUN_0042b760(CONCAT31((int3)(uVar21 >> 8),param_1[8]),uStack_1c),
      pSVar13 != (STGroupC *)0x0)) && (*(int *)(pSVar13 + 0x1c) != 0)) {
    if ((param_1[0xe] == ')') && (**(char **)(param_1 + 0x17) == '\x01')) {
      return;
    }
    puVar14 = STGroupC::GetGroupContent(pSVar13,unaff_EDI);
    AddObjsToGroup(pSStack_20,CONCAT31((int3)((uint)extraout_ECX_06 >> 8),param_1[8]),0xfffe,
                   (int)puVar14,(undefined2 *)&uStack_1c);
    pSVar13 = (STGroupC *)FUN_006ae110((byte *)puVar14);
  }
  this_01 = (STGroupBoatC *)
            thunk_FUN_0042b760(CONCAT31((int3)((uint)pSVar13 >> 8),param_1[8]),uStack_1c);
  if (this_01 == (STGroupBoatC *)0x0) {
    return;
  }
  STGroupBoatC::StartReceiveOrderSound(this_01,unaff_EDI);
  switch(param_1[0xe]) {
  case 10:
    goto switchD_004375b6_caseD_a;
  case 0x14:
    iVar20 = STGroupBoatC::IsAgAtt(this_01,unaff_EDI);
    if (iVar20 != 0) {
      puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
      uStack_14._0_2_ = **(undefined2 **)(param_1 + 0x17);
      uStack_14._2_2_ = (*(undefined2 **)(param_1 + 0x17))[2];
      thunk_FUN_0049a500(this_01,(undefined2 *)0x0,(undefined2 *)0x0,auStack_10);
      Library::DKW::TBL::FUN_006ae1c0(puVar12,&uStack_14);
      uStack_d8 = 1;
      puStack_dc = puVar12;
      (**(code **)(*(int *)this_01 + 8))(6,&puStack_dc);
      FUN_006ae110((byte *)puVar12);
      return;
    }
    uStack_4c = **(undefined2 **)(param_1 + 0x17);
    uStack_4a = (*(undefined2 **)(param_1 + 0x17))[2];
    thunk_FUN_0049a500(this_01,(undefined2 *)0x0,(undefined2 *)0x0,auStack_48);
    (**(code **)(*(int *)this_01 + 8))(1,&uStack_4c);
    return;
  case 0x15:
    iStack_24 = 4 - (uint)**(byte **)(param_1 + 0x17);
    (**(code **)(*(int *)this_01 + 8))(7,&iStack_24);
    return;
  case 0x16:
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 0:
    case 5:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 1),(int *)&puStack_8);
      if (puStack_8 == (undefined4 *)0x0) {
        return;
      }
      puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
      uStack_18 = *(undefined1 *)(puStack_8 + 9);
      uStack_16 = *(undefined2 *)((int)puStack_8 + 0x32);
      uVar21 = puStack_8[8];
      if (uVar21 < 0x1af) {
        if (uVar21 == 0x1ae) {
          uStack_17 = 3;
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
      uStack_17 = 1;
LAB_00437842:
      Library::DKW::TBL::FUN_006ae1c0(puVar12,(undefined4 *)&uStack_18);
      uStack_14c = (uint)(**(char **)(param_1 + 0x17) != '\0');
      uStack_150 = 0;
      puStack_148 = puVar12;
      (**(code **)(*(int *)this_01 + 8))(2,&uStack_150);
      FUN_006ae110((byte *)puVar12);
      return;
    case 1:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 1),(int *)&puStack_8);
      if (puStack_8 != (undefined4 *)0x0) {
        uStack_e4 = *(undefined1 *)(puStack_8 + 9);
        uStack_e3 = *(undefined2 *)((int)puStack_8 + 0x32);
        uStack_e1 = puStack_8[6];
        (**(code **)(*(int *)this_01 + 8))(0xf,&uStack_e4);
        return;
      }
      break;
    case 2:
      uStack_b0 = (ushort)(byte)puVar7[5];
      uStack_ae = (ushort)(byte)puVar7[6];
      uStack_ac = (ushort)(byte)puVar7[7];
      (**(code **)(*(int *)this_01 + 8))(0xe,&uStack_b0);
      return;
    }
    break;
  case 0x17:
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 1:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 0x1d),(int *)&puStack_8);
      if (puStack_8 != (undefined4 *)0x0) {
        puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar12,(undefined4 *)((int)puStack_8 + 0x32));
        uStack_138 = 0;
        puStack_134 = puVar12;
        (**(code **)(*(int *)this_01 + 8))(5,&uStack_138);
        FUN_006ae110((byte *)puVar12);
        return;
      }
      break;
    case 2:
      puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
      uStack_14._0_2_ = *(undefined2 *)(*(int *)(param_1 + 0x17) + 1);
      uStack_14._2_2_ = *(undefined2 *)(*(int *)(param_1 + 0x17) + 5);
      thunk_FUN_0049a500(this_01,(undefined2 *)0x0,(undefined2 *)0x0,auStack_10);
      Library::DKW::TBL::FUN_006ae1c0(puVar12,&uStack_14);
      thunk_FUN_0049a500(this_01,(undefined2 *)&uStack_14,(undefined2 *)((int)&uStack_14 + 2),
                         (undefined2 *)0x0);
      Library::DKW::TBL::FUN_006ae1c0(puVar12,&uStack_14);
      uStack_d8 = 0;
      puStack_dc = puVar12;
      (**(code **)(*(int *)this_01 + 8))(6,&puStack_dc);
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
        puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar12,(undefined4 *)(iVar20 + 0x32));
        uStack_d0 = 0;
        puStack_cc = puVar12;
        (**(code **)(*(int *)this_01 + 8))(4,&uStack_d0);
        FUN_006ae110((byte *)puVar12);
        return;
      }
      break;
    case 10:
      uStack_d0 = 1;
      puStack_cc = (uint *)0x0;
      (**(code **)(*(int *)this_01 + 8))(4,&uStack_d0);
      return;
    case 0x10:
      uStack_b8 = *(undefined2 *)(puVar7 + 1);
      uStack_b6 = *(undefined2 *)(puVar7 + 5);
      uStack_b4 = *(undefined2 *)(puVar7 + 9);
      (**(code **)(*(int *)this_01 + 8))(0x14,&uStack_b8);
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
        uStack_98 = 0;
        uStack_94 = *(undefined2 *)(puVar7 + 1);
        uStack_92 = *(undefined2 *)(puVar7 + 5);
        uStack_90 = *(undefined2 *)(puVar7 + 9);
        (**(code **)(*(int *)this_01 + 8))(0x11,&uStack_98);
        return;
      }
      break;
    case 0x14:
      uStack_98 = 1;
      uStack_90 = 0;
      uStack_92 = 0;
      uStack_94 = 0;
      (**(code **)(*(int *)this_01 + 8))(0x11,&uStack_98);
      return;
    case 0x18:
      uStack_a8 = *(undefined2 *)(puVar7 + 1);
      uStack_a6 = *(undefined2 *)(puVar7 + 5);
      uStack_a4 = *(undefined2 *)(puVar7 + 9);
      (**(code **)(*(int *)this_01 + 8))(0x13,&uStack_a8);
      return;
    }
    break;
  case 0x18:
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 1:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_01;
      uVar25 = puVar7[0x11];
      uVar24 = 1;
      break;
    case 2:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_01;
      uVar25 = puVar7[0x11];
      uVar24 = 2;
      break;
    case 3:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_01;
      uVar25 = puVar7[0x11];
      uVar24 = 4;
      break;
    case 4:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_01;
      uVar25 = puVar7[0x11];
      uVar24 = 5;
      break;
    case 5:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_01;
      uVar25 = puVar7[0x11];
      uVar24 = 3;
      break;
    case 6:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_01;
      uVar25 = puVar7[0x11];
      uVar24 = 0xfffffffd;
      break;
    case 7:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      iVar20 = *(int *)this_01;
      uVar25 = puVar7[0x11];
      uVar24 = 0xfffffffe;
      break;
    case 8:
      (**(code **)(*(int *)this_01 + 0x18))(this_01,0,0,0);
      thunk_FUN_0043fc50(0x11,0);
      goto switchD_004384bc_default;
    case 9:
      iVar20 = *(int *)this_01;
      uVar18 = (**(code **)(iVar20 + 0x24))();
      iVar17 = (**(code **)(*(int *)this_01 + 0x20))(uVar18);
      (**(code **)(iVar20 + 0x18))(this_01,0xffffffff,iVar17 + 1);
      goto switchD_004384bc_default;
    case 10:
      iVar20 = *(int *)this_01;
      uVar18 = (**(code **)(iVar20 + 0x24))();
      iVar17 = (**(code **)(*(int *)this_01 + 0x20))(uVar18);
      (**(code **)(iVar20 + 0x18))(this_01,0xffffffff,iVar17 + -1);
      goto switchD_004384bc_default;
    case 0xb:
      iVar20 = *(int *)this_01;
      iVar17 = (**(code **)(iVar20 + 0x24))();
      uVar18 = (**(code **)(*(int *)this_01 + 0x20))(iVar17 + 0x2d);
      (**(code **)(iVar20 + 0x18))(this_01,0xffffffff,uVar18);
      goto switchD_004384bc_default;
    case 0xc:
      iVar20 = *(int *)this_01;
      iVar17 = (**(code **)(iVar20 + 0x24))();
      uVar18 = (**(code **)(*(int *)this_01 + 0x20))(iVar17 + -0x2d);
      (**(code **)(iVar20 + 0x18))(this_01,0xffffffff,uVar18);
    default:
      goto switchD_004384bc_default;
    }
    (**(code **)(iVar20 + 0x18))(this_01,uVar24,uVar25,uVar18);
switchD_004384bc_default:
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uStack_4c = *(undefined2 *)(puVar7 + 1);
      uStack_4a = *(undefined2 *)(puVar7 + 5);
      thunk_FUN_0049a500(this_01,(undefined2 *)0x0,(undefined2 *)0x0,auStack_48);
      (**(code **)(*(int *)this_01 + 8))(1,&uStack_4c);
      return;
    case 8:
switchD_004375b6_caseD_a:
      (**(code **)(*(int *)this_01 + 8))(3,0);
      return;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      thunk_FUN_0049a500(this_01,&uStack_4c,&uStack_4a,auStack_48);
      (**(code **)(*(int *)this_01 + 8))(1,&uStack_4c);
      return;
    }
    break;
  case 0x19:
    puVar9 = *(undefined2 **)(param_1 + 0x17);
    uStack_124 = *puVar9;
    uStack_122 = puVar9[2];
    uStack_120 = puVar9[4];
    uStack_11e = 0xffffffff;
    (**(code **)(*(int *)this_01 + 8))(0xd,&uStack_124);
    return;
  case 0x1a:
    pcVar8 = *(char **)(param_1 + 0x17);
    if (*pcVar8 == '\x01') {
      uStack_5c = 2;
      sStack_58 = 0;
      sStack_56 = 0;
      sStack_54 = 0;
      uStack_52 = *(undefined2 *)(pcVar8 + 1);
      uStack_50 = *(undefined2 *)(pcVar8 + 5);
      uStack_4e = *(undefined2 *)(pcVar8 + 9);
      (**(code **)(*(int *)this_01 + 8))(0x10,&uStack_5c);
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
        iVar20 = (**(code **)(*piVar15 + 0x2c))();
        if (iVar20 == 0x37) {
          uStack_5c = 0;
          uStack_52 = 0;
          uStack_50 = 0;
          uStack_4e = 0;
        }
        else {
          iVar20 = (**(code **)(*piVar15 + 0x2c))();
          if (iVar20 != 0x6c) {
            return;
          }
          iVar20 = thunk_FUN_004e9960(piVar15,(undefined4 *)&uStack_52,(undefined4 *)&uStack_50,
                                      (undefined4 *)&uStack_4e);
          if (iVar20 != 1) {
            return;
          }
          uStack_5c = 1;
        }
        (**(code **)(*(int *)this_01 + 8))(0x10,&uStack_5c);
        return;
      }
    }
    break;
  case 0x1f:
    pcVar8 = *(char **)(param_1 + 0x17);
    sStack_a0 = *(short *)(pcVar8 + 1);
    sVar22 = *(short *)(pcVar8 + 5);
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
    if (sVar22 < 0) {
      return;
    }
    if (DAT_007fb244 <= sVar22) {
      return;
    }
    piVar15 = *(int **)(DAT_007fb248 +
                       ((int)sVar5 * (int)DAT_007fb240 + (int)sVar22 * (int)DAT_007fb246 +
                       (int)sStack_a0) * 8);
    if (piVar15 == (int *)0x0) {
      return;
    }
    if (*pcVar8 == '\x03') {
      uStack_9e = *(undefined2 *)(pcVar8 + 3);
      uStack_9c = *(undefined2 *)(pcVar8 + 5);
      (**(code **)(*(int *)this_01 + 8))(0x12,&sStack_a0);
      return;
    }
    if (*pcVar8 == '\x01') {
      puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      puStack_c = puVar12;
      Library::DKW::TBL::FUN_006ae1c0(puVar12,(undefined4 *)((int)piVar15 + 0x32));
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
      (**(code **)(*(int *)this_01 + 8))(8,auStack_118 + 1);
      FUN_006ae110((byte *)puStack_c);
      return;
    }
    puStack_c = STGroupC::GetGroupContent((STGroupC *)this_01,unaff_EDI);
    uVar21 = puStack_c[3];
    uStack_154 = uVar21;
    puStack_6c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    puStack_34 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    puStack_2c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    puStack_30 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    iStack_3c = 0;
    puStack_68 = (ushort *)0x0;
    iStack_d4 = 0;
    uStack_28 = 0;
    if ((int)uVar21 < 1) {
LAB_00437e03:
      iVar20 = *(int *)(param_1 + 0x17);
      uStack_c0 = *(undefined2 *)(iVar20 + 1);
      uStack_be = *(undefined2 *)(iVar20 + 3);
      uStack_bc = *(undefined2 *)(iVar20 + 5);
      (**(code **)(*(int *)this_01 + 8))(10,&uStack_c0);
      puVar12 = puStack_30;
    }
    else {
      uVar21 = 0;
      do {
        FUN_006acc70((int)puStack_c,uVar21,auStack_118);
        piVar15 = (int *)GetObjPtr(DAT_007fa174,
                                   CONCAT31((int3)((uint)extraout_EDX_04 >> 8),this_01[0x24]),
                                   auStack_118[0],1);
        iVar20 = (**(code **)(*piVar15 + 0x2c))();
        if ((((iVar20 == 8) || (iVar20 = (**(code **)(*piVar15 + 0x2c))(), iVar20 == 0x14)) ||
            (iVar20 = (**(code **)(*piVar15 + 0x2c))(), iVar20 == 0x1a)) &&
           (iVar20 = thunk_FUN_0045ff10((int)piVar15), iVar20 == 0xc)) {
          puVar16 = (undefined4 *)thunk_FUN_0048dc90(piVar15,auStack_1b8);
          puVar23 = &uStack_1fc;
          for (iVar20 = 0x10; iVar20 != 0; iVar20 = iVar20 + -1) {
            *puVar23 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar23 = puVar23 + 1;
          }
          *(undefined2 *)puVar23 = *(undefined2 *)puVar16;
          iVar20 = FUN_006e62d0(DAT_00802a38,iStack_1f6,(int *)&piStack_40);
          if ((iVar20 == 0) && (iVar20 = (**(code **)(*piStack_40 + 0x88))(&iStack_e8), 0 < iVar20))
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
                iVar20 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x14ca,0,0,
                                            &DAT_007a4ccc,
                                            s_STAllPlayersC__CmdToPlsObj__CMDT_007a73e0);
                if (iVar20 != 0) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                goto LAB_00437c45;
              }
              iStack_3c = iStack_3c + 1;
              puVar12 = puStack_2c;
            }
            Library::DKW::TBL::FUN_006ae1c0(puVar12,(undefined4 *)((int)piStack_40 + 0x32));
          }
        }
LAB_00437c45:
        uStack_28 = uStack_28 + 1;
        uVar21 = (uint)(short)uStack_28;
      } while ((int)uVar21 < (int)uStack_154);
      if ((((int)puStack_68 < iStack_d4) && (iStack_3c < iStack_d4)) && (0 < iStack_d4)) {
        iVar20 = 0;
      }
      else {
        if (iStack_3c < (int)puStack_68) {
          if ((iStack_d4 <= (int)puStack_68) && (0 < (int)puStack_68)) {
            iVar20 = 1;
            goto LAB_00437cb5;
          }
          if (iStack_3c < (int)puStack_68) goto LAB_00437e03;
        }
        if ((iStack_3c < iStack_d4) || (iStack_3c < 1)) goto LAB_00437e03;
        iVar20 = 2;
      }
LAB_00437cb5:
      auStack_118[1] = 0;
      if (iVar20 == 0) {
        iStack_100 = 0x38;
        puStack_110 = puStack_6c;
      }
      else if (iVar20 == 1) {
        puStack_110 = puStack_34;
        iVar20 = thunk_FUN_004406c0((char)this_01[0x24]);
        iStack_100 = (-(uint)((char)iVar20 != '\x03') & 0xffffffdb) + 0x5e;
      }
      else if (iVar20 == 2) {
        iStack_100 = 0x4f;
        puStack_110 = puStack_2c;
      }
      puVar12 = puStack_30;
      uStack_102 = 0xffff;
      uStack_104 = 0xffff;
      iVar20 = *(int *)(param_1 + 0x17);
      uStack_106 = 0xffff;
      uStack_108 = 0xffff;
      uStack_10a = 0xffff;
      uStack_10c = 0xffff;
      uStack_fc = 0;
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
      Library::DKW::TBL::FUN_006ae1c0(puStack_30,(undefined4 *)(iVar20 + 0x32));
      puStack_f8 = puVar12;
      uStack_ea = 0xffff;
      uStack_ec = 0xffff;
      uStack_ee = 0xffff;
      uStack_f0 = 0xffff;
      uStack_f2 = 0xffff;
      uStack_f4 = 0xffff;
      (**(code **)(*(int *)this_01 + 8))(8,auStack_118 + 1);
    }
    FUN_006ae110((byte *)puStack_c);
    FUN_006ae110((byte *)puStack_6c);
    FUN_006ae110((byte *)puStack_34);
    FUN_006ae110((byte *)puStack_2c);
    FUN_006ae110((byte *)puVar12);
    return;
  case 0x21:
    pcVar8 = *(char **)(param_1 + 0x17);
    cVar1 = *pcVar8;
    if (cVar1 == '\x01') {
      uStack_64 = *(undefined4 *)(pcVar8 + 1);
      (**(code **)(*(int *)this_01 + 8))(0x15,&uStack_64);
      return;
    }
    if (cVar1 == '\x03') {
      uStack_c4 = 0xffff;
      uStack_c6 = 0xffff;
      uStack_c8 = 0xffff;
      (**(code **)(*(int *)this_01 + 8))(0xc,&uStack_c8);
      return;
    }
    if (cVar1 == '\x04') {
      uStack_60 = *(undefined4 *)(pcVar8 + 1);
      (**(code **)(*(int *)this_01 + 8))(0xb,&uStack_60);
      return;
    }
    break;
  case 0x23:
    puVar16 = *(undefined4 **)(param_1 + 0x17);
    uStack_174 = *(undefined2 *)(puVar16 + 1);
    uStack_172 = *(undefined2 *)(puVar16 + 2);
    uStack_170 = *(undefined2 *)(puVar16 + 3);
    uStack_16e = *puVar16;
    uStack_16a = (uint)(byte)param_1[8];
    uStack_166 = 0;
    uStack_157 = 0xffff;
    (**(code **)(*(int *)this_01 + 8))(9,&uStack_174);
    return;
  case 0x28:
    if (**(char **)(param_1 + 0x17) == '\0') {
      STGroupBoatC::GenSwitch(this_01,0);
    }
    else if (**(char **)(param_1 + 0x17) == '\x01') {
      STGroupBoatC::GenSwitch(this_01,1);
      return;
    }
    break;
  case 0x29:
    if (**(char **)(param_1 + 0x17) != '\0') {
      if (puVar12 == (undefined4 *)0x0) {
        return;
      }
      uStack_7c = 0x5d98;
      uStack_78 = (undefined1 *)CONCAT22(uStack_78._2_2_,1);
      puStack_74 = *(uint **)(this_01 + 0x29);
      (**(code **)*puVar12)(auStack_8c);
      return;
    }
    goto switchD_004375b6_caseD_a;
  case 0x31:
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 1:
    case 2:
      uStack_14c = (uint)(puVar7[3] != '\x01');
      sVar22 = 0;
      uStack_150 = 0;
      puStack_148 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      if (*(short *)(puVar7 + 1) != 0) {
        iVar20 = 0;
        do {
          Library::DKW::TBL::FUN_006ae1c0(puStack_148,(undefined4 *)(puVar7 + iVar20 * 4 + 4));
          sVar22 = sVar22 + 1;
          iVar20 = (int)sVar22;
        } while (iVar20 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      (**(code **)(*(int *)this_01 + 8))(2,&uStack_150);
      FUN_006ae110((byte *)puStack_148);
      return;
    case 3:
      sVar22 = 0;
      uStack_138 = 0;
      puStack_134 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
      if (*(short *)(puVar7 + 1) != 0) {
        iVar20 = 0;
        do {
          Library::DKW::TBL::FUN_006ae1c0(puStack_134,(undefined4 *)(puVar7 + iVar20 * 2 + 4));
          sVar22 = sVar22 + 1;
          iVar20 = (int)sVar22;
        } while (iVar20 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      (**(code **)(*(int *)this_01 + 8))(5,&uStack_138);
      FUN_006ae110((byte *)puStack_134);
      return;
    case 4:
      break;
    default:
      iVar20 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1427,0,0,&DAT_007a4ccc,
                                  s_STAllPlayersC__CmdToPlsObj_CMDTY_007a742c);
      if (iVar20 != 0) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  return;
}

