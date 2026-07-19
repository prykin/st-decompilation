
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CmdToPlsObj */

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
  int iVar8;
  char *pcVar9;
  undefined2 *puVar10;
  code *pcVar11;
  uint uVar12;
  void *this_00;
  uint *puVar13;
  STGroupC *pSVar14;
  uint *puVar15;
  STGroupBoatC *this_01;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  undefined4 extraout_ECX_06;
  STGroupBoatCVTable *pSVar19;
  undefined4 in_EDX;
  uint uVar20;
  int iVar21;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  uint uVar22;
  uint extraout_EDX_03;
  undefined4 extraout_EDX_04;
  short sVar23;
  int unaff_EDI;
  undefined4 *puVar24;
  undefined4 uVar25;
  undefined1 uVar26;
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
  
  uVar20 = CONCAT31((int3)((uint)in_EDX >> 8),param_1[8]);
  sVar23 = *(short *)(param_1 + 10);
  uVar22 = CONCAT22((short)((uint)this >> 0x10),sVar23);
  local_8 = (undefined4 *)0x0;
  uVar12 = *(uint *)(param_1 + 10) >> 0x10;
  puVar17 = *(undefined4 **)(&DAT_007f4e21 + (uint)(byte)param_1[8] * 0xa62);
  local_38 = uVar22;
  local_30 = puVar17;
  local_20 = this;
  if (uVar12 != 0) {
    if (uVar12 != 1) {
      if (uVar12 != 2) {
        return;
      }
      if (sVar23 == -1) {
        return;
      }
      this_00 = (void *)GetObjPtr(DAT_007fa174,uVar20,uVar22,CASE_3);
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
      local_24 = 4 - (uint)**(byte **)(param_1 + 0x17);
      thunk_FUN_006270e0(this_00,0x15,(undefined1 *)&local_24);
      return;
    }
    if (sVar23 == -1) {
      return;
    }
    local_8 = (undefined4 *)GetObjPtr(DAT_007fa174,uVar20,uVar22,CASE_1);
    if (local_8 == (undefined4 *)0x0) {
      return;
    }
    local_7c = 0x4401;
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
      goto cf_common_exit_00437191;
    default:
      return;
    case 0x14:
      local_68 = *(ushort **)(param_1 + 0x17);
      uVar2 = local_68[2];
      uVar3 = *local_68;
      local_34 = (uint *)(uint)uVar3;
      uVar4 = local_68[4];
      local_2c = (uint *)(uint)uVar4;
      local_6c = (uint *)(int)(short)uVar2;
      local_30 = (uint *)(int)(short)uVar4;
      iVar21 = (int)(short)uVar3;
      if ((*(short *)(DAT_007fb280 +
                     ((int)DAT_007fb27e * (int)local_30 + iVar21 + (int)DAT_007fb278 * (int)local_6c
                     ) * 2) != 0) &&
         ((((((((short)uVar3 < 0 || (DAT_007fb240 <= (short)uVar3)) || ((short)uVar2 < 0)) ||
             ((DAT_007fb242 <= (short)uVar2 || ((short)uVar4 < 0)))) ||
            (DAT_007fb244 <= (short)uVar4)) ||
           (*(int *)(DAT_007fb248 +
                    ((int)DAT_007fb240 * (int)local_6c + iVar21 + (int)DAT_007fb246 * (int)local_30)
                    * 8) == 0)) && (local_28 = (uint)local_2c, (short)uVar4 < 5)))) {
        while( true ) {
          sVar23 = (short)local_28;
          if (*(short *)(DAT_007fb280 +
                        ((int)DAT_007fb27e * (int)sVar23 + iVar21 +
                        (int)DAT_007fb278 * (int)local_6c) * 2) == 0) break;
          if (((((-1 < (short)uVar3) && ((short)uVar3 < DAT_007fb240)) &&
               ((-1 < (short)uVar2 &&
                ((((short)uVar2 < DAT_007fb242 && (-1 < sVar23)) && (sVar23 < DAT_007fb244)))))) &&
              (*(int *)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar23 +
                       iVar21 + (int)DAT_007fb240 * (int)(short)uVar2) * 8) != 0)) ||
             (local_28 = local_28 + 1, 4 < (short)local_28)) goto cf_common_exit_00437191;
        }
        *(int *)(local_68 + 4) = (int)sVar23;
      }
cf_common_exit_00437191:
      local_78 = param_1;
      (**(code **)*local_8)(local_8c);
      return;
    case 0x29:
      if (**(char **)(param_1 + 0x17) == '\0') {
        if (puVar17 == (undefined4 *)0x0) {
          return;
        }
        puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar13,&local_38);
        local_78 = (undefined1 *)((uint)local_78._2_2_ << 0x10);
      }
      else {
        if (puVar17 == (undefined4 *)0x0) {
          return;
        }
        puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar13,&local_38);
        local_78 = (undefined1 *)CONCAT22(local_78._2_2_,1);
      }
      local_7c = 0x5d98;
      local_74 = puVar13;
      (**(code **)*puVar17)(local_8c);
      FUN_006ae110((byte *)puVar13);
      return;
    }
  }
  if (sVar23 == -1) {
    return;
  }
  local_1c = uVar22;
  if (param_1[0xe] == '\x17') {
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 0x11:
      if (*(int *)(param_1 + 0x13) == 0) {
        pSVar14 = (STGroupC *)thunk_FUN_0042b760(uVar20,uVar22);
        if (pSVar14 == (STGroupC *)0x0) {
          return;
        }
        local_c = STGroupC::GetGroupContent(pSVar14,unaff_EDI);
        uVar22 = extraout_ECX_04;
      }
      else {
        iVar21 = *(int *)(param_1 + 0xf);
        local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar23 = 0;
        uVar22 = extraout_ECX_03;
        if (0 < (short)(*(uint *)(param_1 + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0(local_c,(undefined4 *)(puVar7 + sVar23 * 2 + iVar21));
            sVar23 = sVar23 + 1;
            uVar22 = *(uint *)(param_1 + 0x13) >> 1;
          } while (sVar23 < (short)uVar22);
        }
      }
      puVar13 = local_c;
      thunk_FUN_0044cdb0(CONCAT31((int3)(uVar22 >> 8),param_1[8]),(int)local_c,
                         *(int *)(*(int *)(param_1 + 0x17) + 0x1d));
      FUN_006ae110((byte *)puVar13);
      return;
    case 0x15:
      if (*(int *)(param_1 + 0x13) == 0) {
        pSVar14 = (STGroupC *)thunk_FUN_0042b760(uVar20,uVar22);
        if (pSVar14 == (STGroupC *)0x0) {
          return;
        }
        puVar13 = STGroupC::GetGroupContent(pSVar14,unaff_EDI);
        uVar18 = extraout_ECX_01;
      }
      else {
        iVar21 = *(int *)(param_1 + 0xf);
        puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar23 = 0;
        uVar18 = extraout_ECX;
        if (0 < (short)(*(uint *)(param_1 + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0(puVar13,(undefined4 *)(puVar7 + sVar23 * 2 + iVar21));
            sVar23 = sVar23 + 1;
            uVar18 = extraout_ECX_00;
          } while (sVar23 < (short)(*(uint *)(param_1 + 0x13) >> 1));
        }
      }
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar18 >> 8),param_1[8]),(int)puVar13,1);
      thunk_FUN_0044cd20(CONCAT31((int3)((uint)extraout_EDX >> 8),param_1[8]),(int)puVar13,0);
      FUN_006ae110((byte *)puVar13);
      return;
    case 0x16:
      if (*(int *)(param_1 + 0x13) == 0) {
        pSVar14 = (STGroupC *)thunk_FUN_0042b760(uVar20,uVar22);
        if (pSVar14 == (STGroupC *)0x0) {
          return;
        }
        local_c = STGroupC::GetGroupContent(pSVar14,unaff_EDI);
        uVar18 = extraout_EDX_02;
      }
      else {
        iVar21 = *(int *)(param_1 + 0xf);
        local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar23 = 0;
        uVar18 = extraout_EDX_00;
        if (0 < (short)(*(uint *)(param_1 + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0(local_c,(undefined4 *)(puVar7 + sVar23 * 2 + iVar21));
            sVar23 = sVar23 + 1;
            uVar18 = extraout_EDX_01;
          } while (sVar23 < (short)(*(uint *)(param_1 + 0x13) >> 1));
        }
      }
      puVar13 = local_c;
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar18 >> 8),param_1[8]),(int)local_c,0);
      FUN_006ae110((byte *)puVar13);
      return;
    case 0x17:
      if (*(int *)(param_1 + 0x13) == 0) {
        pSVar14 = (STGroupC *)thunk_FUN_0042b760(uVar20,uVar22);
        if (pSVar14 == (STGroupC *)0x0) {
          return;
        }
        puVar13 = STGroupC::GetGroupContent(pSVar14,unaff_EDI);
      }
      else {
        iVar21 = *(int *)(param_1 + 0xf);
        puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar23 = 0;
        if (0 < (short)(*(uint *)(param_1 + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0(puVar13,(undefined4 *)(puVar7 + sVar23 * 2 + iVar21));
            sVar23 = sVar23 + 1;
          } while (sVar23 < (short)(*(uint *)(param_1 + 0x13) >> 1));
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x17) + 0x1d) != 0) {
        thunk_FUN_0044cd20(CONCAT31((int3)((uint)*(int *)(param_1 + 0x17) >> 8),param_1[8]),
                           (int)puVar13,0);
        FUN_006ae110((byte *)puVar13);
        return;
      }
      thunk_FUN_0044cd20((uint)(byte)param_1[8],(int)puVar13,1);
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),param_1[8]),(int)puVar13,0);
      FUN_006ae110((byte *)puVar13);
      return;
    }
  }
  pSVar14 = (STGroupC *)0x0;
  if (*(int *)(param_1 + 0x13) != 0) {
    iVar21 = *(int *)(param_1 + 0x17);
    iVar8 = *(int *)(param_1 + 0xf);
    local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    sVar23 = 0;
    uVar22 = *(uint *)(param_1 + 0x13) >> 1;
    if (0 < (short)uVar22) {
      do {
        Library::DKW::TBL::FUN_006ae1c0(local_c,(undefined4 *)(iVar21 + iVar8 + sVar23 * 2));
        sVar23 = sVar23 + 1;
        uVar22 = extraout_EDX_03;
      } while (sVar23 < (short)(*(uint *)(param_1 + 0x13) >> 1));
    }
    puVar13 = local_c;
    AddObjsToGroup(local_20,CONCAT31((int3)(uVar22 >> 8),param_1[8]),0xfffe,(int)local_c,
                   (undefined2 *)&local_1c);
    pSVar14 = (STGroupC *)FUN_006ae110((byte *)puVar13);
    uVar22 = extraout_ECX_05;
  }
  puVar13 = local_30;
  if (((local_30 != (undefined4 *)0x0) &&
      (pSVar14 = (STGroupC *)thunk_FUN_0042b760(CONCAT31((int3)(uVar22 >> 8),param_1[8]),local_1c),
      pSVar14 != (STGroupC *)0x0)) && (pSVar14->field_001C != 0)) {
    if ((param_1[0xe] == ')') && (**(char **)(param_1 + 0x17) == '\x01')) {
      return;
    }
    puVar15 = STGroupC::GetGroupContent(pSVar14,unaff_EDI);
    AddObjsToGroup(local_20,CONCAT31((int3)((uint)extraout_ECX_06 >> 8),param_1[8]),0xfffe,
                   (int)puVar15,(undefined2 *)&local_1c);
    pSVar14 = (STGroupC *)FUN_006ae110((byte *)puVar15);
  }
  this_01 = (STGroupBoatC *)
            thunk_FUN_0042b760(CONCAT31((int3)((uint)pSVar14 >> 8),param_1[8]),local_1c);
  if (this_01 == (STGroupBoatC *)0x0) {
    return;
  }
  STGroupBoatC::StartReceiveOrderSound(this_01,unaff_EDI);
  switch(param_1[0xe]) {
  case 10:
    goto cf_common_exit_0043824D;
  case 0x14:
    iVar21 = STGroupBoatC::IsAgAtt(this_01,unaff_EDI);
    if (iVar21 != 0) {
      puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
      local_14._0_2_ = **(undefined2 **)(param_1 + 0x17);
      local_14._2_2_ = (*(undefined2 **)(param_1 + 0x17))[2];
      thunk_FUN_0049a500(this_01,(undefined2 *)0x0,(undefined2 *)0x0,local_10);
      Library::DKW::TBL::FUN_006ae1c0(puVar13,&local_14);
      local_d8 = 1;
      local_dc = puVar13;
      (*this_01->vtable->vfunc_08)(6,&local_dc);
      FUN_006ae110((byte *)puVar13);
      return;
    }
    local_4c = **(undefined2 **)(param_1 + 0x17);
    local_4a = (*(undefined2 **)(param_1 + 0x17))[2];
    thunk_FUN_0049a500(this_01,(undefined2 *)0x0,(undefined2 *)0x0,local_48);
    (*this_01->vtable->vfunc_08)(1,&local_4c);
    return;
  case 0x15:
    local_24 = 4 - (uint)**(byte **)(param_1 + 0x17);
    (*this_01->vtable->vfunc_08)(7,&local_24);
    return;
  case 0x16:
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 0:
    case 5:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 1),(int *)&local_8);
      if (local_8 == (undefined4 *)0x0) {
        return;
      }
      puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
      local_18 = *(undefined1 *)(local_8 + 9);
      local_16 = *(undefined2 *)((int)local_8 + 0x32);
      uVar22 = local_8[8];
      if (uVar22 < 0x1af) {
        if (uVar22 == 0x1ae) {
          local_17 = 3;
          goto LAB_00437842;
        }
        if (uVar22 != 0x14) {
          return;
        }
      }
      else {
        if (uVar22 < 1000) {
          return;
        }
        if (0x3e9 < uVar22) {
          return;
        }
      }
      local_17 = 1;
LAB_00437842:
      Library::DKW::TBL::FUN_006ae1c0(puVar13,(undefined4 *)&local_18);
      local_14c = (uint)(**(char **)(param_1 + 0x17) != '\0');
      local_150 = 0;
      local_148 = puVar13;
      (*this_01->vtable->vfunc_08)(2,&local_150);
      FUN_006ae110((byte *)puVar13);
      return;
    case 1:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 1),(int *)&local_8);
      if (local_8 != (undefined4 *)0x0) {
        local_e4 = *(undefined1 *)(local_8 + 9);
        local_e3 = *(undefined2 *)((int)local_8 + 0x32);
        local_e1 = local_8[6];
        (*this_01->vtable->vfunc_08)(0xf,&local_e4);
        return;
      }
      break;
    case 2:
      local_b0 = (ushort)(byte)puVar7[5];
      local_ae = (ushort)(byte)puVar7[6];
      local_ac = (ushort)(byte)puVar7[7];
      (*this_01->vtable->vfunc_08)(0xe,&local_b0);
      return;
    }
    break;
  case 0x17:
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 1:
      FUN_006e62d0(DAT_00802a38,*(int *)(puVar7 + 0x1d),(int *)&local_8);
      if (local_8 != (undefined4 *)0x0) {
        puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar13,(undefined4 *)((int)local_8 + 0x32));
        local_138 = 0;
        local_134 = puVar13;
        (*this_01->vtable->vfunc_08)(5,&local_138);
        FUN_006ae110((byte *)puVar13);
        return;
      }
      break;
    case 2:
      puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
      local_14._0_2_ = *(undefined2 *)(*(int *)(param_1 + 0x17) + 1);
      local_14._2_2_ = *(undefined2 *)(*(int *)(param_1 + 0x17) + 5);
      thunk_FUN_0049a500(this_01,(undefined2 *)0x0,(undefined2 *)0x0,local_10);
      Library::DKW::TBL::FUN_006ae1c0(puVar13,&local_14);
      thunk_FUN_0049a500(this_01,(undefined2 *)&local_14,(undefined2 *)((int)&local_14 + 2),
                         (undefined2 *)0x0);
      Library::DKW::TBL::FUN_006ae1c0(puVar13,&local_14);
      local_d8 = 0;
      local_dc = puVar13;
      (*this_01->vtable->vfunc_08)(6,&local_dc);
      FUN_006ae110((byte *)puVar13);
      return;
    case 3:
      sVar23 = *(short *)(puVar7 + 9);
      sVar5 = *(short *)(puVar7 + 5);
      sVar6 = *(short *)(puVar7 + 1);
      if (((-1 < sVar6) && (sVar6 < DAT_007fb240)) &&
         ((((-1 < sVar5 && ((sVar5 < DAT_007fb242 && (-1 < sVar23)))) && (sVar23 < DAT_007fb244)) &&
          (iVar21 = *(int *)(DAT_007fb248 +
                            ((int)sVar23 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                            (int)sVar6) * 8), iVar21 != 0)))) {
        puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar13,(undefined4 *)(iVar21 + 0x32));
        local_d0 = 0;
        local_cc = puVar13;
        (*this_01->vtable->vfunc_08)(4,&local_d0);
        FUN_006ae110((byte *)puVar13);
        return;
      }
      break;
    case 10:
      local_d0 = 1;
      local_cc = (uint *)0x0;
      (*this_01->vtable->vfunc_08)(4,&local_d0);
      return;
    case 0x10:
      local_b8 = *(undefined2 *)(puVar7 + 1);
      local_b6 = *(undefined2 *)(puVar7 + 5);
      local_b4 = *(undefined2 *)(puVar7 + 9);
      (*this_01->vtable->vfunc_08)(0x14,&local_b8);
      return;
    case 0x13:
      sVar23 = *(short *)(puVar7 + 1);
      sVar5 = *(short *)(puVar7 + 9);
      sVar6 = *(short *)(puVar7 + 5);
      if ((((-1 < sVar23) && (sVar23 < DAT_007fb240)) &&
          ((-1 < sVar6 && (((sVar6 < DAT_007fb242 && (-1 < sVar5)) && (sVar5 < DAT_007fb244)))))) &&
         (*(int *)(DAT_007fb248 +
                  ((int)sVar5 * (int)DAT_007fb246 + (int)sVar6 * (int)DAT_007fb240 + (int)sVar23) *
                  8) != 0)) {
        local_98 = 0;
        local_94 = *(undefined2 *)(puVar7 + 1);
        local_92 = *(undefined2 *)(puVar7 + 5);
        local_90 = *(undefined2 *)(puVar7 + 9);
        (*this_01->vtable->vfunc_08)(0x11,&local_98);
        return;
      }
      break;
    case 0x14:
      local_98 = 1;
      local_90 = 0;
      local_92 = 0;
      local_94 = 0;
      (*this_01->vtable->vfunc_08)(0x11,&local_98);
      return;
    case 0x18:
      local_a8 = *(undefined2 *)(puVar7 + 1);
      local_a6 = *(undefined2 *)(puVar7 + 5);
      local_a4 = *(undefined2 *)(puVar7 + 9);
      (*this_01->vtable->vfunc_08)(0x13,&local_a8);
      return;
    }
    break;
  case 0x18:
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 1:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      pSVar19 = this_01->vtable;
      uVar26 = puVar7[0x11];
      uVar25 = 1;
      break;
    case 2:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      pSVar19 = this_01->vtable;
      uVar26 = puVar7[0x11];
      uVar25 = 2;
      break;
    case 3:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      pSVar19 = this_01->vtable;
      uVar26 = puVar7[0x11];
      uVar25 = 4;
      break;
    case 4:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      pSVar19 = this_01->vtable;
      uVar26 = puVar7[0x11];
      uVar25 = 5;
      break;
    case 5:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      pSVar19 = this_01->vtable;
      uVar26 = puVar7[0x11];
      uVar25 = 3;
      break;
    case 6:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      pSVar19 = this_01->vtable;
      uVar26 = puVar7[0x11];
      uVar25 = 0xfffffffd;
      break;
    case 7:
      uVar18 = *(undefined4 *)(puVar7 + 0xd);
      pSVar19 = this_01->vtable;
      uVar26 = puVar7[0x11];
      uVar25 = 0xfffffffe;
      break;
    case 8:
      (*this_01->vtable->vfunc_18)(this_01,0,0,0);
      thunk_FUN_0043fc50(CASE_11,0);
      goto switchD_004384bc_default;
    case 9:
      pSVar19 = this_01->vtable;
      uVar18 = (*pSVar19->vfunc_24)();
      iVar21 = (*this_01->vtable->vfunc_20)(uVar18);
      (*pSVar19->vfunc_18)(this_01,0xffffffff,iVar21 + 1);
      goto switchD_004384bc_default;
    case 10:
      pSVar19 = this_01->vtable;
      uVar18 = (*pSVar19->vfunc_24)();
      iVar21 = (*this_01->vtable->vfunc_20)(uVar18);
      (*pSVar19->vfunc_18)(this_01,0xffffffff,iVar21 + -1);
      goto switchD_004384bc_default;
    case 0xb:
      pSVar19 = this_01->vtable;
      iVar21 = (*pSVar19->vfunc_24)();
      uVar18 = (*this_01->vtable->vfunc_20)(iVar21 + 0x2d);
      (*pSVar19->vfunc_18)(this_01,0xffffffff,uVar18);
      goto switchD_004384bc_default;
    case 0xc:
      pSVar19 = this_01->vtable;
      iVar21 = (*pSVar19->vfunc_24)();
      uVar18 = (*this_01->vtable->vfunc_20)(iVar21 + -0x2d);
      (*pSVar19->vfunc_18)(this_01,0xffffffff,uVar18);
    default:
      goto switchD_004384bc_default;
    }
    (*pSVar19->vfunc_18)(this_01,uVar25,uVar26,uVar18);
switchD_004384bc_default:
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      local_4c = *(undefined2 *)(puVar7 + 1);
      local_4a = *(undefined2 *)(puVar7 + 5);
      thunk_FUN_0049a500(this_01,(undefined2 *)0x0,(undefined2 *)0x0,local_48);
      (*this_01->vtable->vfunc_08)(1,&local_4c);
      return;
    case 8:
cf_common_exit_0043824D:
      (*this_01->vtable->vfunc_08)(3,0);
      return;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      thunk_FUN_0049a500(this_01,&local_4c,&local_4a,local_48);
      (*this_01->vtable->vfunc_08)(1,&local_4c);
      return;
    }
    break;
  case 0x19:
    puVar10 = *(undefined2 **)(param_1 + 0x17);
    local_124 = *puVar10;
    local_122 = puVar10[2];
    local_120 = puVar10[4];
    local_11e = 0xffffffff;
    (*this_01->vtable->vfunc_08)(0xd,&local_124);
    return;
  case 0x1a:
    pcVar9 = *(char **)(param_1 + 0x17);
    if (*pcVar9 == '\x01') {
      local_5c = 2;
      local_58 = 0;
      local_56 = 0;
      local_54 = 0;
      local_52 = *(undefined2 *)(pcVar9 + 1);
      local_50 = *(undefined2 *)(pcVar9 + 5);
      local_4e = *(undefined2 *)(pcVar9 + 9);
      (*this_01->vtable->vfunc_08)(0x10,&local_5c);
      return;
    }
    if (*pcVar9 == '\x02') {
      local_58 = *(short *)(pcVar9 + 1);
      local_56 = *(short *)(pcVar9 + 5);
      local_54 = *(short *)(pcVar9 + 9);
      if ((((-1 < local_58) && (local_58 < DAT_007fb240)) &&
          ((-1 < local_56 &&
           (((local_56 < DAT_007fb242 && (-1 < local_54)) && (local_54 < DAT_007fb244)))))) &&
         ((piVar16 = *(int **)(DAT_007fb248 +
                              ((int)local_54 * (int)DAT_007fb246 + (int)local_56 * (int)DAT_007fb240
                              + (int)local_58) * 8), piVar16 != (int *)0x0 && (piVar16[8] == 1000)))
         ) {
        iVar21 = (**(code **)(*piVar16 + 0x2c))();
        if (iVar21 == 0x37) {
          local_5c = 0;
          local_52 = 0;
          local_50 = 0;
          local_4e = 0;
        }
        else {
          iVar21 = (**(code **)(*piVar16 + 0x2c))();
          if (iVar21 != 0x6c) {
            return;
          }
          iVar21 = thunk_FUN_004e9960(piVar16,(undefined4 *)&local_52,(undefined4 *)&local_50,
                                      (undefined4 *)&local_4e);
          if (iVar21 != 1) {
            return;
          }
          local_5c = 1;
        }
        (*this_01->vtable->vfunc_08)(0x10,&local_5c);
        return;
      }
    }
    break;
  case 0x1f:
    pcVar9 = *(char **)(param_1 + 0x17);
    local_a0 = *(short *)(pcVar9 + 1);
    sVar23 = *(short *)(pcVar9 + 5);
    sVar5 = *(short *)(pcVar9 + 3);
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
    if (sVar23 < 0) {
      return;
    }
    if (DAT_007fb244 <= sVar23) {
      return;
    }
    piVar16 = *(int **)(DAT_007fb248 +
                       ((int)sVar5 * (int)DAT_007fb240 + (int)sVar23 * (int)DAT_007fb246 +
                       (int)local_a0) * 8);
    if (piVar16 == (int *)0x0) {
      return;
    }
    if (*pcVar9 == '\x03') {
      local_9e = *(undefined2 *)(pcVar9 + 3);
      local_9c = *(undefined2 *)(pcVar9 + 5);
      (*this_01->vtable->vfunc_08)(0x12,&local_a0);
      return;
    }
    if (*pcVar9 == '\x01') {
      puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      local_c = puVar13;
      Library::DKW::TBL::FUN_006ae1c0(puVar13,(undefined4 *)((int)piVar16 + 0x32));
      local_118[1] = 0;
      local_102 = 0xffff;
      local_104 = 0xffff;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_110 = puVar13;
      local_100 = (**(code **)(*piVar16 + 0x2c))();
      local_fc = 1;
      local_f8 = (uint *)0x0;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      (*this_01->vtable->vfunc_08)(8,local_118 + 1);
      FUN_006ae110((byte *)local_c);
      return;
    }
    local_c = STGroupC::GetGroupContent((STGroupC *)this_01,unaff_EDI);
    uVar22 = local_c[3];
    local_154 = uVar22;
    local_6c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_34 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_2c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_30 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_3c = 0;
    local_68 = (ushort *)0x0;
    local_d4 = 0;
    local_28 = 0;
    if ((int)uVar22 < 1) {
cf_common_exit_00437E03:
      iVar21 = *(int *)(param_1 + 0x17);
      local_c0 = *(undefined2 *)(iVar21 + 1);
      local_be = *(undefined2 *)(iVar21 + 3);
      local_bc = *(undefined2 *)(iVar21 + 5);
      (*this_01->vtable->vfunc_08)(10,&local_c0);
      puVar13 = local_30;
    }
    else {
      uVar22 = 0;
      do {
        FUN_006acc70((int)local_c,uVar22,local_118);
        piVar16 = (int *)GetObjPtr(DAT_007fa174,
                                   CONCAT31((int3)((uint)extraout_EDX_04 >> 8),this_01->field_0024),
                                   local_118[0],CASE_1);
        iVar21 = (**(code **)(*piVar16 + 0x2c))();
        if ((((iVar21 == 8) || (iVar21 = (**(code **)(*piVar16 + 0x2c))(), iVar21 == 0x14)) ||
            (iVar21 = (**(code **)(*piVar16 + 0x2c))(), iVar21 == 0x1a)) &&
           (iVar21 = thunk_FUN_0045ff10((int)piVar16), iVar21 == 0xc)) {
          puVar17 = (undefined4 *)thunk_FUN_0048dc90(piVar16,local_1b8);
          puVar24 = &local_1fc;
          for (iVar21 = 0x10; iVar21 != 0; iVar21 = iVar21 + -1) {
            *puVar24 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar24 = puVar24 + 1;
          }
          *(undefined2 *)puVar24 = *(undefined2 *)puVar17;
          iVar21 = FUN_006e62d0(DAT_00802a38,local_1f6,(int *)&local_40);
          if ((iVar21 == 0) && (iVar21 = (**(code **)(*local_40 + 0x88))(&local_e8), 0 < iVar21)) {
            if (local_e8 == 0xdc) {
              local_d4 = local_d4 + 1;
              puVar13 = local_6c;
            }
            else if (local_e8 == 0xdd) {
              local_68 = (ushort *)((int)local_68 + 1);
              puVar13 = local_34;
            }
            else {
              if (local_e8 != 0xde) {
                iVar21 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x14ca,0,0,
                                            &DAT_007a4ccc,
                                            s_STAllPlayersC__CmdToPlsObj__CMDT_007a73e0);
                if (iVar21 != 0) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                goto LAB_00437c45;
              }
              local_3c = local_3c + 1;
              puVar13 = local_2c;
            }
            Library::DKW::TBL::FUN_006ae1c0(puVar13,(undefined4 *)((int)local_40 + 0x32));
          }
        }
LAB_00437c45:
        local_28 = local_28 + 1;
        uVar22 = (uint)(short)local_28;
      } while ((int)uVar22 < (int)local_154);
      if ((((int)local_68 < local_d4) && (local_3c < local_d4)) && (0 < local_d4)) {
        iVar21 = 0;
      }
      else {
        if (local_3c < (int)local_68) {
          if ((local_d4 <= (int)local_68) && (0 < (int)local_68)) {
            iVar21 = 1;
            goto LAB_00437cb5;
          }
          if (local_3c < (int)local_68) goto cf_common_exit_00437E03;
        }
        if ((local_3c < local_d4) || (local_3c < 1)) goto cf_common_exit_00437E03;
        iVar21 = 2;
      }
LAB_00437cb5:
      local_118[1] = 0;
      if (iVar21 == 0) {
        local_100 = 0x38;
        local_110 = local_6c;
      }
      else if (iVar21 == 1) {
        local_110 = local_34;
        iVar21 = thunk_FUN_004406c0(this_01->field_0024);
        local_100 = (-(uint)((char)iVar21 != '\x03') & 0xffffffdb) + 0x5e;
      }
      else if (iVar21 == 2) {
        local_100 = 0x4f;
        local_110 = local_2c;
      }
      puVar13 = local_30;
      local_102 = 0xffff;
      local_104 = 0xffff;
      iVar21 = *(int *)(param_1 + 0x17);
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_fc = 0;
      sVar23 = *(short *)(iVar21 + 5);
      sVar5 = *(short *)(iVar21 + 3);
      sVar6 = *(short *)(iVar21 + 1);
      if (((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
          ((DAT_007fb242 <= sVar5 || (sVar23 < 0)))) || (DAT_007fb244 <= sVar23)) {
        iVar21 = 0;
      }
      else {
        iVar21 = *(int *)(DAT_007fb248 +
                         ((int)sVar23 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                         (int)sVar6) * 8);
      }
      Library::DKW::TBL::FUN_006ae1c0(local_30,(undefined4 *)(iVar21 + 0x32));
      local_f8 = puVar13;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      (*this_01->vtable->vfunc_08)(8,local_118 + 1);
    }
    FUN_006ae110((byte *)local_c);
    FUN_006ae110((byte *)local_6c);
    FUN_006ae110((byte *)local_34);
    FUN_006ae110((byte *)local_2c);
    FUN_006ae110((byte *)puVar13);
    return;
  case 0x21:
    pcVar9 = *(char **)(param_1 + 0x17);
    cVar1 = *pcVar9;
    if (cVar1 == '\x01') {
      local_64 = *(undefined4 *)(pcVar9 + 1);
      (*this_01->vtable->vfunc_08)(0x15,&local_64);
      return;
    }
    if (cVar1 == '\x03') {
      local_c4 = 0xffff;
      local_c6 = 0xffff;
      local_c8 = 0xffff;
      (*this_01->vtable->vfunc_08)(0xc,&local_c8);
      return;
    }
    if (cVar1 == '\x04') {
      local_60 = *(undefined4 *)(pcVar9 + 1);
      (*this_01->vtable->vfunc_08)(0xb,&local_60);
      return;
    }
    break;
  case 0x23:
    puVar17 = *(undefined4 **)(param_1 + 0x17);
    local_174 = *(undefined2 *)(puVar17 + 1);
    local_172 = *(undefined2 *)(puVar17 + 2);
    local_170 = *(undefined2 *)(puVar17 + 3);
    local_16e = *puVar17;
    local_16a = (uint)(byte)param_1[8];
    local_166 = 0;
    local_157 = 0xffff;
    (*this_01->vtable->vfunc_08)(9,&local_174);
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
      if (puVar13 == (undefined4 *)0x0) {
        return;
      }
      local_7c = 0x5d98;
      local_78 = (undefined1 *)CONCAT22(local_78._2_2_,1);
      local_74 = (uint *)this_01->field_0029;
      (**(code **)*puVar13)(local_8c);
      return;
    }
    goto cf_common_exit_0043824D;
  case 0x31:
    puVar7 = *(undefined1 **)(param_1 + 0x17);
    switch(*puVar7) {
    case 1:
    case 2:
      local_14c = (uint)(puVar7[3] != '\x01');
      sVar23 = 0;
      local_150 = 0;
      local_148 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      if (*(short *)(puVar7 + 1) != 0) {
        iVar21 = 0;
        do {
          Library::DKW::TBL::FUN_006ae1c0(local_148,(undefined4 *)(puVar7 + iVar21 * 4 + 4));
          sVar23 = sVar23 + 1;
          iVar21 = (int)sVar23;
        } while (iVar21 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      (*this_01->vtable->vfunc_08)(2,&local_150);
      FUN_006ae110((byte *)local_148);
      return;
    case 3:
      sVar23 = 0;
      local_138 = 0;
      local_134 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
      if (*(short *)(puVar7 + 1) != 0) {
        iVar21 = 0;
        do {
          Library::DKW::TBL::FUN_006ae1c0(local_134,(undefined4 *)(puVar7 + iVar21 * 2 + 4));
          sVar23 = sVar23 + 1;
          iVar21 = (int)sVar23;
        } while (iVar21 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      (*this_01->vtable->vfunc_08)(5,&local_138);
      FUN_006ae110((byte *)local_134);
      return;
    case 4:
      break;
    default:
      iVar21 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1427,0,0,&DAT_007a4ccc,
                                  s_STAllPlayersC__CmdToPlsObj_CMDTY_007a742c);
      if (iVar21 != 0) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  return;
}

