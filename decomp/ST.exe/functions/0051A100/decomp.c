
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ObjProc */

void __thiscall HelpPanelTy::ObjProc(HelpPanelTy *this,int param_1,uint param_2,char param_3)

{
  Global_sub_00528060_param_1Enum *pGVar1;
  HelpPanelTy_field_01A1State HVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  char cVar4;
  ushort uVar5;
  int iVar6;
  UINT UVar7;
  uint *extraout_EAX;
  uint *extraout_EAX_00;
  uint uVar8;
  uint *extraout_EAX_01;
  uint *extraout_EAX_02;
  uint *extraout_EAX_03;
  uint *extraout_EAX_04;
  int iVar9;
  int iVar10;
  uint *extraout_EAX_05;
  uint *extraout_EAX_06;
  byte *pbVar11;
  uint *extraout_EAX_07;
  uint *extraout_EAX_08;
  uint *extraout_EAX_09;
  uint *extraout_EAX_10;
  uint *extraout_EAX_11;
  uint *extraout_EAX_12;
  uint *extraout_EAX_13;
  uint *extraout_EAX_14;
  uint *extraout_EAX_15;
  uint *extraout_EAX_16;
  uint *extraout_EAX_17;
  uint *extraout_EAX_18;
  uint *extraout_EAX_19;
  uint *extraout_EAX_20;
  uint *extraout_EAX_21;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar12;
  HINSTANCE module;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  InternalExceptionFrame local_a0;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  uint local_4b;
  undefined4 local_47;
  HelpPanelTy *local_40;
  Global_sub_00528060_param_1Enum *local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  int local_27;
  uint local_23;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  char local_9;
  uint local_8;
  
  local_8 = 0;
  local_9 = '\0';
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    local_40 = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_40;
    if (iVar6 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_40->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == (CASE_8|CASE_2))) {
          local_40->field_01A2 = HVar2;
          local_40->field_01AB = local_40->field_01A3;
        }
        else {
          local_40->field_01A2 = 0;
          local_40->field_01AB = 0;
        }
        local_40->field_01A1 = CASE_2;
        local_40->field_01A3 = param_1;
        local_40->field_01A7 = param_2;
        local_40->field_01AF = 0x32;
        local_40->field_01B1 = 5;
        if (local_40->field_0178 != 0) {
          local_40->field_0028 = 0x4202;
          *(undefined2 *)&local_40->field_0x2c = 0;
          local_40->field_002E = 2;
          *(undefined4 *)&local_40->field_0x30 = local_40->field_0178;
          if (PTR_00802a30 != (CursorClassTy *)0x0) {
            (*(code *)**(undefined4 **)PTR_00802a30)(&local_40->field_0x18);
          }
        }
      }
      bVar13 = (byte)param_2;
      UVar7 = thunk_FUN_00523410(param_1,bVar13,0);
      DrawTitle(this_00,0x55fa,param_2,UVar7);
      DrawObj(this_00,(int *)&local_8,param_1,bVar13,this_00->field_0240);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar6 = -1;
      LoadResourceString(0x564a,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX,iVar6,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      UVar7 = 0;
      iVar6 = FUN_006b0fd0(0x8014a0);
      if (iVar6 == 0) {
        iVar6 = FUN_006b0fd0(0x800f90);
        if (iVar6 == 0) {
          iVar6 = FUN_006b0fd0(0x801360);
          if (iVar6 == 0) {
            iVar6 = FUN_006b0fd0(0x800f80);
            if (iVar6 != 0) {
              UVar7 = 0x3a9d;
            }
          }
          else {
            UVar7 = 0x3aa8;
          }
        }
        else {
          UVar7 = 0x3a9c;
        }
      }
      else {
        UVar7 = 0x3a9b;
      }
      if (UVar7 != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 3;
        iVar14 = -1;
        iVar6 = -3;
        LoadResourceString(0x5654,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_00,iVar6,iVar14,uVar15);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar6 = 1;
        LoadResourceString(UVar7,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_01,iVar6,iVar14,uVar8);
        local_8 = local_8 + 0xf;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar6 = -3;
      LoadResourceString(0x5656,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_02,iVar6,iVar14,uVar15);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (param_2 == 1) {
        UVar7 = 0x5604;
      }
      else if (param_2 == 2) {
        UVar7 = 0x5605;
      }
      else {
        UVar7 = 0x5606;
      }
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      LoadResourceString(UVar7,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_03,iVar6,iVar14,uVar8);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar6 = -3;
      LoadResourceString(0x55f7,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_04,iVar6,iVar14,uVar15);
      local_14 = param_1 * 3;
      if (param_2 == 3) {
        iVar6 = *(int *)(&DAT_007e2f10 + param_1 * 0xc);
      }
      else {
        iVar6 = *(int *)(&DAT_007e22a0 + (local_14 + param_2) * 4);
      }
      if (iVar6 != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14)
        ;
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar6);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar14 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                              (-(uint)(param_2 != 3) & 0xfffffffe) + 3);
        FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,iVar14,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(iVar14 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(iVar14 + 8);
        local_27 = (-(uint)(param_2 != 3) & 0xfffffffc) + 0xe2;
        local_28 = 1;
        local_23 = param_2;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      local_14 = local_14 + -0x97 + param_2;
      iVar14 = *(int *)(&DAT_007e1c50 + local_14 * 4);
      if (iVar14 != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14)
        ;
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar14);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        iVar9 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,0);
        FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,iVar9,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(iVar9 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(iVar9 + 8);
        local_28 = 1;
        local_27 = 0xdd;
        local_23 = param_2;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      iVar9 = *(int *)(&DAT_008545ac + local_14 * 4);
      if (iVar9 != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14)
        ;
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar9);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        iVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,2);
        FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,iVar10,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(iVar10 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(iVar10 + 8);
        local_28 = 1;
        local_27 = 0xdc;
        local_23 = param_2;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      if (iVar9 == 0 && (iVar14 == 0 && iVar6 == 0)) {
        local_8 = local_8 + 0xf;
      }
      local_1c = (int *)0x1;
      local_10 = 1;
      local_18 = (param_1 + -0x74 + param_2 * 0x42) * 3;
      do {
        pGVar1 = &DAT_007c0e4c + local_18 + (local_10 & 0xffff);
        local_3c = pGVar1;
        if (*pGVar1 == ~(CASE_80|CASE_7F)) break;
        if (local_1c != (int *)0x0) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
          uVar15 = 3;
          iVar14 = -1;
          iVar6 = -3;
          LoadResourceString(0x5657,HINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_05,iVar6,iVar14,uVar15);
          local_1c = (int *)0x0;
        }
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar6 = 1;
        module = HINSTANCE_00807618;
        UVar7 = thunk_FUN_00528060(*pGVar1,'\0');
        LoadResourceString(UVar7,module);
        ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_06,iVar6,iVar14,uVar8);
        local_8 = local_8 + 0xf;
        uVar8 = thunk_FUN_005276e0(*pGVar1,0);
        pbVar11 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0230,
                                       uVar8);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0x96,local_8,'\x01',pbVar11);
        local_5c = 0x96;
        local_54 = *(undefined4 *)(pbVar11 + 4);
        local_58 = local_8;
        local_50 = *(undefined4 *)(pbVar11 + 8);
        local_4b = (uint)*local_3c;
        local_4c = 5;
        local_47 = 0;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_5c);
        local_10 = local_10 + 1;
        local_8 = local_8 + 5 + *(int *)(pbVar11 + 8);
      } while ((ushort)local_10 < 3);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar6 = -1;
      LoadResourceString(0x564b,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_07,iVar6,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      LoadResourceString(0x564c,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_08,iVar6,iVar14,uVar8);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      iVar14 = local_14;
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(&DAT_007e417c + local_14 * 4));
      ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar6 = 1;
      LoadResourceString(0x564d,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_09,iVar6,iVar9,uVar8);
      iVar6 = *(int *)(&DAT_007e3dc0 + param_2 * 4);
      local_1c = (int *)(&DAT_007e3dc0 + param_2 * 4);
      local_18 = 0x42;
      local_10 = iVar6;
      do {
        iVar9 = *local_1c;
        if (iVar9 < (int)local_10) {
          local_10 = iVar9;
        }
        if (iVar6 < iVar9) {
          iVar6 = iVar9;
        }
        local_1c = local_1c + 3;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      iVar6 = (int)((iVar6 - local_10) + ((int)(iVar6 - local_10) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e3dc4 + iVar14 * 4) < (int)(local_10 + iVar6)) {
        local_10 = 0x5613;
      }
      else {
        local_10 = (((int)(local_10 + iVar6 * 2) <= *(int *)(&DAT_007e3dc4 + iVar14 * 4)) - 1 &
                   0xfffffffe) + 0x5616;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar9 = -1;
      iVar6 = -3;
      LoadResourceString(local_10,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_10,iVar6,iVar9,uVar15);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar6 = 1;
      LoadResourceString(0x565a,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_11,iVar6,iVar9,uVar8);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar9 = -1;
      iVar6 = -3;
      LoadResourceString(0x273f - (*(int *)(&DAT_00791b18 + iVar14 * 4) != 0),HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_12,iVar6,iVar9,uVar15);
      local_8 = local_8 + 0xf;
      iVar6 = param_1 + -0x32;
      if (*(int *)(&DAT_00793e28 + iVar6 * 8) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(&DAT_00794038 + iVar6 * 8);
      }
      local_18 = iVar6 * 0x18;
      iVar6 = DrawWeapon(this_00,0x96,(int *)&local_8,(&DAT_00792ca0)[iVar6 * 6],iVar9,param_2);
      cVar4 = local_9;
      if ((iVar6 != 0) || (local_9 = '\0', cVar4 != '\0')) {
        local_9 = '\x01';
      }
      if (*(int *)(&DAT_00793e2c + (param_1 + -0x32) * 8) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(&DAT_0079403c + (param_1 + -0x32) * 8);
      }
      iVar6 = DrawWeapon(this_00,0x96,(int *)&local_8,*(int *)((int)&DAT_00792cac + local_18),iVar6,
                         param_2);
      cVar4 = local_9;
      if ((iVar6 != 0) || (local_9 = '\0', cVar4 != '\0')) {
        local_9 = '\x01';
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar6 = 1;
      LoadResourceString(0x564e,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_13,iVar6,iVar9,uVar8);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar9 = -1;
      iVar6 = -3;
      LoadResourceString((param_2 != 3) + 0x273e,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_14,iVar6,iVar9,uVar15);
      local_8 = local_8 + 0xf;
      if (local_9 != '\0') {
        bVar12 = false;
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar6 = 1;
        LoadResourceString(0x564f,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_15,iVar6,iVar14,uVar8);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        if (*(int *)((int)&DAT_00792ca0 + local_18) != 0) {
          bVar12 = (&DAT_007bf678)[*(int *)((int)&DAT_00792ca0 + local_18) * 3 + -0x1c2] != 0;
        }
        if ((*(int *)((int)&DAT_00792cac + local_18) != 0) &&
           ((bVar12 || ((&DAT_007bf678)[*(int *)((int)&DAT_00792cac + local_18) * 3 + -0x1c2] != 0))
           )) {
          bVar12 = true;
        }
        uVar15 = 2;
        iVar14 = -1;
        iVar6 = -3;
        LoadResourceString(0x273f - bVar12,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_16,iVar6,iVar14,uVar15);
        local_8 = local_8 + 0xf;
        iVar14 = local_14;
      }
      if (param_2 != 3) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar9 = -1;
        iVar6 = 1;
        LoadResourceString(0x5650,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_17,iVar6,iVar9,uVar8);
        iVar6 = *(int *)(&DAT_007e29f0 + iVar14 * 4);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 2;
        iVar9 = -1;
        iVar14 = -3;
        LoadResourceString(0x273f - (iVar6 != 0),HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_18,iVar14,iVar9,uVar15);
        local_8 = local_8 + 0xf;
        iVar14 = local_14;
        if (iVar6 != 0) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar9 = -1;
          iVar14 = 1;
          LoadResourceString(0x5651,HINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_19,iVar14,iVar9,uVar8);
          ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x5f,local_8 - 3,0x16,0x14
                          );
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar6);
          ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          iVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,1);
          FUN_006b5440((int)this_00->field_0218,0,0x7a,local_8,iVar6,0,0x3a);
          local_38 = 0x7a;
          local_30 = *(undefined4 *)(iVar6 + 4);
          local_34 = local_8;
          local_2c = *(undefined4 *)(iVar6 + 8);
          local_28 = 1;
          local_27 = 0xde;
          local_23 = param_2;
          Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_38);
          local_8 = local_8 + 0x14;
          iVar14 = local_14;
        }
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar6 = 1;
      LoadResourceString(0x565b,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_20,iVar6,iVar9,uVar8);
      local_10 = 0;
      uVar5 = 0;
      do {
        if ((&DAT_007e1988)[iVar14 * 3 + (uint)uVar5] != '\0') {
          local_10 = 0x273e;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 3);
      if (local_10 == 0) {
        local_10 = 0x273f;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar6 = -3;
      LoadResourceString(local_10,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_21,iVar6,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      UVar7 = thunk_FUN_00523410(param_1,bVar13,2);
      DrawDescription(this_00,(int *)&local_8,UVar7);
      AddLinks(this_00,(int *)&local_8,'\x02',param_1,param_2);
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    g_currentExceptionFrame = local_a0.previous;
    iVar14 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x7ec,0,iVar6,
                                &DAT_007a4ccc,s_HelpPanelTy__ObjProc_007c3ca0);
    if (iVar14 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x7ec);
  }
  return;
}

