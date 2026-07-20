
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SubProc */

void __thiscall HelpPanelTy::SubProc(HelpPanelTy *this,int param_1,char param_2)

{
  code *pcVar1;
  HelpPanelTy *this_00;
  Global_sub_00528060_param_1Enum *pGVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  UINT UVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar11;
  HINSTANCE pHVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  InternalExceptionFrame local_a4;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  uint local_4f;
  undefined4 local_4b;
  int local_44;
  HelpPanelTy *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_2b;
  uint local_27;
  uint local_20;
  uint local_1c;
  Global_sub_00528060_param_1Enum *local_18;
  uint local_14;
  char local_d;
  UINT local_c;
  uint local_8;
  
  local_8 = 0;
  local_d = '\0';
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    local_40 = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_40;
    if (iVar5 == 0) {
      if (param_2 == '\0') {
        cVar4 = local_40->field_01A1;
        if (((cVar4 == '\0') || (cVar4 == '\x06')) || (cVar4 == '\n')) {
          local_40->field_01A2 = cVar4;
          local_40->field_01AB = local_40->field_01A3;
        }
        else {
          local_40->field_01A2 = 0;
          local_40->field_01AB = 0;
        }
        local_40->field_01A1 = 3;
        local_40->field_01A3 = param_1;
        local_40->field_01AF = 0x32;
        local_40->field_01B1 = 5;
        if (local_40->field_0178 != 0) {
          local_40->field_0028 = 0x4202;
          *(undefined2 *)&local_40->field_0x2c = 0;
          local_40->field_002E = 2;
          *(undefined4 *)&local_40->field_0x30 = local_40->field_0178;
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(&local_40->field_0x18);
          }
        }
      }
      local_1c = thunk_FUN_004e8030(param_1);
      cVar4 = (char)local_1c;
      local_20 = CONCAT31(local_20._1_3_,cVar4);
      local_1c = local_1c & 0xff;
      UVar6 = thunk_FUN_00523410(param_1,cVar4,0);
      DrawTitle(this_00,0x55fb,local_1c,UVar6);
      DrawObj(this_00,(int *)&local_8,param_1,(byte)local_20,this_00->field_023C);
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -1;
      puVar7 = (uint *)FUN_006b0140(0x564a,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      local_c = 0;
      iVar5 = FUN_006b0fd0(0x801450);
      if (iVar5 == 0) {
        iVar5 = FUN_006b0fd0(0x801480);
        if (iVar5 == 0) {
          iVar5 = FUN_006b0fd0(0x800f10);
          if (iVar5 != 0) {
            local_c = 0x3aa2;
          }
        }
        else {
          local_c = 0x3aa0;
        }
      }
      else {
        local_c = 0x3a9f;
      }
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 3;
        iVar13 = -1;
        iVar5 = -3;
        puVar7 = (uint *)FUN_006b0140(0x5654,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
        ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(local_c,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
        local_8 = local_8 + 0xf;
      }
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x5656,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (local_1c == 1) {
        UVar6 = 0x5604;
      }
      else if (local_1c == 2) {
        UVar6 = 0x5605;
      }
      else {
        UVar6 = 0x5606;
      }
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(UVar6,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
      local_8 = local_8 + 0xf;
      local_14 = 0;
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x55f7,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      if (cVar4 == '\x03') {
        local_c = *(UINT *)(&DAT_007e09dc + param_1 * 4);
      }
      else {
        local_c = *(UINT *)(&DAT_007e079c + param_1 * 4);
      }
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,local_c);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar5 = FUN_0070b3a0(this_00->field_0238,(-(uint)(cVar4 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440(this_00->field_0218,0,0xb4,local_8,iVar5,0,0x3a);
        local_3c = 0xb4;
        local_34 = *(undefined4 *)(iVar5 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(iVar5 + 8);
        local_2b = (-(uint)(cVar4 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + 0x14;
        local_14 = 1;
      }
      local_c = *(UINT *)(&DAT_007e055c + param_1 * 4);
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,local_c);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        local_14 = FUN_0070b3a0(this_00->field_0238,0);
        FUN_006b5440(this_00->field_0218,0,0xb4,local_8,local_14,0,0x3a);
        local_3c = 0xb4;
        local_34 = *(undefined4 *)(local_14 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(local_14 + 8);
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_14 = 1;
        local_8 = local_8 + 0x14;
      }
      local_c = *(UINT *)(&DAT_00854428 + param_1 * 4);
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,local_c);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        local_14 = FUN_0070b3a0(this_00->field_0238,2);
        FUN_006b5440(this_00->field_0218,0,0xb4,local_8,local_14,0,0x3a);
        local_3c = 0xb4;
        local_34 = *(undefined4 *)(local_14 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(local_14 + 8);
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_14 = 1;
        local_8 = local_8 + 0x14;
      }
      if (local_14 == 0) {
        local_8 = local_8 + 0xf;
      }
      local_c = 1;
      local_14 = 1;
      local_44 = param_1 * 3;
      do {
        local_18 = &DAT_007c0dd1 + local_44 + (local_14 & 0xffff);
        if (*local_18 == ~(CASE_80|CASE_7F)) break;
        if (local_c != 0) {
          ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
          uVar15 = 3;
          iVar13 = -1;
          iVar5 = -3;
          puVar7 = (uint *)FUN_006b0140(0x5657,HINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
          local_c = 0;
        }
        ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
        pGVar2 = local_18;
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar5 = 1;
        pHVar12 = HINSTANCE_00807618;
        UVar6 = thunk_FUN_00528060(*local_18,'\0');
        puVar7 = (uint *)FUN_006b0140(UVar6,pHVar12);
        ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
        local_8 = local_8 + 0xf;
        uVar9 = thunk_FUN_005276e0(*pGVar2,0);
        pbVar8 = (byte *)FUN_0070b3a0(this_00->field_0230,uVar9);
        DibPut((undefined4 *)this_00->field_0218,0x96,local_8,'\x01',pbVar8);
        local_60 = 0x96;
        local_58 = *(undefined4 *)(pbVar8 + 4);
        local_5c = local_8;
        local_54 = *(undefined4 *)(pbVar8 + 8);
        local_4f = (uint)*local_18;
        local_50 = 5;
        local_4b = 0;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_60);
        local_8 = local_8 + 5 + *(int *)(pbVar8 + 8);
        local_14 = local_14 + 1;
      } while ((ushort)local_14 < 3);
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -1;
      puVar7 = (uint *)FUN_006b0140(0x564b,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564c,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(&DAT_007dfbac + param_1 * 4));
      ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x5658,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
      piVar10 = &DAT_007dfc70;
      local_c = DAT_007dfc70;
      local_18 = (Global_sub_00528060_param_1Enum *)0x28;
      iVar5 = DAT_007dfc70;
      do {
        if (*piVar10 < (int)local_c) {
          local_c = *piVar10;
        }
        if (iVar5 < *piVar10) {
          iVar5 = *piVar10;
        }
        piVar10 = piVar10 + 1;
        local_18 = (Global_sub_00528060_param_1Enum *)((int)local_18 + -1);
      } while (local_18 != (Global_sub_00528060_param_1Enum *)0x0);
      iVar5 = (int)(iVar5 - local_c) / 3;
      if (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(local_c + iVar5)) {
        local_c = 0x5615;
      }
      else {
        local_c = (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(local_c + iVar5 * 2)) + 0x5613;
      }
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(local_c,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564d,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
      piVar10 = &DAT_007e04a0;
      local_c = DAT_007e04a0;
      local_18 = (Global_sub_00528060_param_1Enum *)0x28;
      iVar5 = DAT_007e04a0;
      do {
        if (*piVar10 < (int)local_c) {
          local_c = *piVar10;
        }
        if (iVar5 < *piVar10) {
          iVar5 = *piVar10;
        }
        piVar10 = piVar10 + 1;
        local_18 = (Global_sub_00528060_param_1Enum *)((int)local_18 + -1);
      } while (local_18 != (Global_sub_00528060_param_1Enum *)0x0);
      iVar5 = (int)((iVar5 - local_c) + ((int)(iVar5 - local_c) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e049c + param_1 * 4) < (int)(local_c + iVar5)) {
        local_c = 0x5613;
      }
      else {
        local_c = (((int)(local_c + iVar5 * 2) <= *(int *)(&DAT_007e049c + param_1 * 4)) - 1 &
                  0xfffffffe) + 0x5616;
      }
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(local_c,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      iVar5 = DrawWeapon(this_00,0x96,(int *)&local_8,*(int *)(&DAT_007a8b18 + param_1 * 4),
                         *(int *)(&DAT_007a8bb8 + param_1 * 4),local_20);
      cVar3 = local_d;
      if ((iVar5 != 0) || (local_d = '\0', cVar3 != '\0')) {
        local_d = '\x01';
      }
      iVar5 = DrawWeapon(this_00,0x96,(int *)&local_8,*(int *)(&DAT_007a8cf8 + param_1 * 4),
                         *(int *)(&DAT_007a8d98 + param_1 * 4),local_20);
      cVar3 = local_d;
      if ((iVar5 != 0) || (local_d = '\0', cVar3 != '\0')) {
        local_d = '\x01';
      }
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x5659,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar13 = -3;
      pHVar12 = HINSTANCE_00807618;
      iVar5 = FUN_006b0fd0(0x800f10);
      puVar7 = (uint *)FUN_006b0140(0x273f - (iVar5 != 0),pHVar12);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar13,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564e,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140((cVar4 != '\x03') + 0x273e,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      if (local_d != '\0') {
        bVar11 = false;
        if (*(int *)(&DAT_007a8b18 + param_1 * 4) != 0) {
          bVar11 = (&DAT_007bf678)[*(int *)(&DAT_007a8b18 + param_1 * 4) * 3 + -0x1c2] != 0;
        }
        if ((*(int *)(&DAT_007a8cf8 + param_1 * 4) != 0) &&
           ((bVar11 || ((&DAT_007bf678)[*(int *)(&DAT_007a8cf8 + param_1 * 4) * 3 + -0x1c2] != 0))))
        {
          bVar11 = true;
        }
        ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(0x564f,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
        ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 2;
        iVar13 = -1;
        iVar5 = -3;
        puVar7 = (uint *)FUN_006b0140(0x273f - bVar11,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
        local_8 = local_8 + 0xf;
      }
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x5650,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
      local_c = *(UINT *)(&DAT_007e085c + param_1 * 4);
      ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x273f - (local_c != 0),HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(0x5651,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar13,uVar9);
        ccFntTy::SetSurf(this_00->field_01E8,this_00->field_0218,0,0x5f,local_8 - 3,0x16,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,local_c);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar5 = FUN_0070b3a0(this_00->field_0238,(-(uint)(cVar4 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440(this_00->field_0218,0,0x7a,local_8,iVar5,0,0x3a);
        local_3c = 0x7a;
        local_34 = *(undefined4 *)(iVar5 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(iVar5 + 8);
        local_2b = (-(uint)(cVar4 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + 0x14;
      }
      UVar6 = thunk_FUN_00523410(param_1,(char)local_20,2);
      DrawDescription(this_00,(int *)&local_8,UVar6);
      AddLinks(this_00,(int *)&local_8,'\x03',param_1,0);
      g_currentExceptionFrame = local_a4.previous;
      return;
    }
    g_currentExceptionFrame = local_a4.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x6f4,0,iVar5,
                                &DAT_007a4ccc,s_HelpPanelTy__SubProc_007c3c84);
    if (iVar13 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x6f4);
  }
  return;
}

