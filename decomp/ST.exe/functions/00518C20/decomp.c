#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SubProc */

void __thiscall HelpPanelTy::SubProc(HelpPanelTy *this,int param_1,char param_2)

{
  HelpPanelTy_field_01A1State HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  Global_sub_00528060_param_1Enum *pGVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  UINT UVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  HINSTANCE pHVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
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
  AnonShape_00518C20_0B2995D2 *local_14;
  char local_d;
  UINT local_c;
  uint local_8;

  local_8 = 0;
  local_d = '\0';
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    local_40 = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
    this_00 = local_40;
    if (iVar6 == 0) {
      if (param_2 == '\0') {
        HVar1 = local_40->field_01A1;
        if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == (CASE_8|CASE_2))) {
          local_40->field_01A2 = HVar1;
          local_40->field_01AB = local_40->field_01A3;
        }
        else {
          local_40->field_01A2 = 0;
          local_40->field_01AB = 0;
        }
        local_40->field_01A1 = CASE_3;
        local_40->field_01A3 = param_1;
        local_40->field_01AF = 0x32;
        local_40->field_01B1 = 5;
        if (local_40->field_0178 != 0) {
          local_40->field_0028 = 0x4202;
          *(undefined2 *)&local_40->field_0x2c = 0;
          local_40->field_002E = 2;
          *(undefined4 *)&local_40->field_0x30 = local_40->field_0178;
          if (PTR_00802a30 != (CursorClassTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)PTR_00802a30->field_0000)(&local_40->field_0x18);
          }
        }
      }
      local_1c = thunk_FUN_004e8030(param_1);
      cVar5 = (char)local_1c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_20 = CONCAT31(local_20._1_3_,cVar5);
      local_1c = local_1c & 0xff;
      UVar7 = thunk_FUN_00523410(param_1,cVar5,0);
      DrawTitle(this_00,0x55fb,local_1c,UVar7);
      DrawObj(this_00,(int *)&local_8,param_1,(byte)local_20,this_00->field_023C);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar6 = -1;
      puVar8 = (uint *)LoadResourceString(0x564a,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      local_c = 0;
      iVar6 = FUN_006b0fd0(0x801450);
      if (iVar6 == 0) {
        iVar6 = FUN_006b0fd0(0x801480);
        if (iVar6 == 0) {
          iVar6 = FUN_006b0fd0(0x800f10);
          if (iVar6 != 0) {
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
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar16 = 3;
        iVar14 = -1;
        iVar6 = -3;
        puVar8 = (uint *)LoadResourceString(0x5654,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar6 = 1;
        puVar8 = (uint *)LoadResourceString(local_c,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
        local_8 = local_8 + 0xf;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString(0x5656,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (local_1c == 1) {
        UVar7 = 0x5604;
      }
      else if (local_1c == 2) {
        UVar7 = 0x5605;
      }
      else {
        UVar7 = 0x5606;
      }
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(UVar7,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
      local_8 = local_8 + 0xf;
      local_14 = (AnonShape_00518C20_0B2995D2 *)0x0;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString(0x55f7,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
      if (cVar5 == '\x03') {
        local_c = *(UINT *)(&DAT_007e09dc + param_1 * 4);
      }
      else {
        local_c = *(UINT *)(&DAT_007e079c + param_1 * 4);
      }
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14)
        ;
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",local_c);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                             (-(uint)(cVar5 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,iVar6,0,0x3a);
        local_3c = 0xb4;
        local_34 = *(undefined4 *)(iVar6 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(iVar6 + 8);
        local_2b = (-(uint)(cVar5 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + 0x14;
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
      }
      local_c = *(UINT *)(&DAT_007e055c + param_1 * 4);
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14)
        ;
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",local_c);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        local_14 = (AnonShape_00518C20_0B2995D2 *)
                   FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,0);
        FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,(int)local_14,0,0x3a);
        local_3c = 0xb4;
        local_34 = local_14->field_0004;
        local_38 = local_8;
        local_30 = local_14->field_0008;
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
        local_8 = local_8 + 0x14;
      }
      local_c = *(UINT *)(&DAT_00854428 + param_1 * 4);
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14)
        ;
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",local_c);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        local_14 = (AnonShape_00518C20_0B2995D2 *)
                   FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,2);
        FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,(int)local_14,0,0x3a);
        local_3c = 0xb4;
        local_34 = local_14->field_0004;
        local_38 = local_8;
        local_30 = local_14->field_0008;
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
        local_8 = local_8 + 0x14;
      }
      if (local_14 == (AnonShape_00518C20_0B2995D2 *)0x0) {
        local_8 = local_8 + 0xf;
      }
      local_c = 1;
      local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
      local_44 = param_1 * 3;
      do {
        local_18 = &DAT_007c0dd1 + local_44 + ((uint)local_14 & 0xffff);
        if (*local_18 == ~(CASE_80|CASE_7F)) break;
        if (local_c != 0) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
          uVar16 = 3;
          iVar14 = -1;
          iVar6 = -3;
          puVar8 = (uint *)LoadResourceString(0x5657,HINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
          local_c = 0;
        }
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        pGVar3 = local_18;
        uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar6 = 1;
        pHVar13 = HINSTANCE_00807618;
        UVar7 = thunk_FUN_00528060(*local_18,'\0');
        puVar8 = (uint *)LoadResourceString(UVar7,pHVar13);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
        local_8 = local_8 + 0xf;
        uVar10 = thunk_FUN_005276e0(*pGVar3,0);
        pbVar9 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0230,
                                      uVar10);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0x96,local_8,'\x01',pbVar9);
        local_60 = 0x96;
        local_58 = *(undefined4 *)(pbVar9 + 4);
        local_5c = local_8;
        local_54 = *(undefined4 *)(pbVar9 + 8);
        local_4f = (uint)*local_18;
        local_50 = 5;
        local_4b = 0;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_60);
        local_8 = local_8 + 5 + *(int *)(pbVar9 + 8);
        local_14 = (AnonShape_00518C20_0B2995D2 *)&local_14->field_0x1;
      } while ((ushort)local_14 < 3);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar6 = -1;
      puVar8 = (uint *)LoadResourceString(0x564b,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x564c,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      wsprintfA((LPSTR)&DAT_0080f33a,"%d",*(undefined4 *)(&DAT_007dfbac + param_1 * 4));
      ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x5658,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
      piVar11 = &DAT_007dfc70;
      local_c = DAT_007dfc70;
      local_18 = (Global_sub_00528060_param_1Enum *)0x28;
      iVar6 = DAT_007dfc70;
      do {
        if (*piVar11 < (int)local_c) {
          local_c = *piVar11;
        }
        if (iVar6 < *piVar11) {
          iVar6 = *piVar11;
        }
        piVar11 = piVar11 + 1;
        local_18 = (Global_sub_00528060_param_1Enum *)((int)local_18 + -1);
      } while (local_18 != (Global_sub_00528060_param_1Enum *)0x0);
      iVar6 = (int)(iVar6 - local_c) / 3;
      if (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(local_c + iVar6)) {
        local_c = 0x5615;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c = (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(local_c + iVar6 * 2)) + 0x5613;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString(local_c,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x564d,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
      piVar11 = &DAT_007e04a0;
      local_c = DAT_007e04a0;
      local_18 = (Global_sub_00528060_param_1Enum *)0x28;
      iVar6 = DAT_007e04a0;
      do {
        if (*piVar11 < (int)local_c) {
          local_c = *piVar11;
        }
        if (iVar6 < *piVar11) {
          iVar6 = *piVar11;
        }
        piVar11 = piVar11 + 1;
        local_18 = (Global_sub_00528060_param_1Enum *)((int)local_18 + -1);
      } while (local_18 != (Global_sub_00528060_param_1Enum *)0x0);
      iVar6 = (int)((iVar6 - local_c) + ((int)(iVar6 - local_c) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e049c + param_1 * 4) < (int)(local_c + iVar6)) {
        local_c = 0x5613;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c = (((int)(local_c + iVar6 * 2) <= *(int *)(&DAT_007e049c + param_1 * 4)) - 1 &
                  0xfffffffe) + 0x5616;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString(local_c,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      iVar6 = DrawWeapon(this_00,0x96,(int *)&local_8,*(int *)(&DAT_007a8b18 + param_1 * 4),
                         *(int *)(&DAT_007a8bb8 + param_1 * 4),local_20);
      cVar4 = local_d;
      if ((iVar6 != 0) || (local_d = '\0', cVar4 != '\0')) {
        local_d = '\x01';
      }
      iVar6 = DrawWeapon(this_00,0x96,(int *)&local_8,*(int *)(&DAT_007a8cf8 + param_1 * 4),
                         *(int *)(&DAT_007a8d98 + param_1 * 4),local_20);
      cVar4 = local_d;
      if ((iVar6 != 0) || (local_d = '\0', cVar4 != '\0')) {
        local_d = '\x01';
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x5659,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar15 = -1;
      iVar14 = -3;
      pHVar13 = HINSTANCE_00807618;
      iVar6 = FUN_006b0fd0(0x800f10);
      puVar8 = (uint *)LoadResourceString(0x273f - (iVar6 != 0),pHVar13);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar14,iVar15,uVar16);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x564e,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString((cVar5 != '\x03') + 0x273e,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      if (local_d != '\0') {
        bVar12 = false;
        if (*(int *)(&DAT_007a8b18 + param_1 * 4) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar12 = (&DAT_007bf678)[*(int *)(&DAT_007a8b18 + param_1 * 4) * 3 + -0x1c2] != 0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)(&DAT_007a8cf8 + param_1 * 4) != 0) &&
           ((bVar12 || ((&DAT_007bf678)[*(int *)(&DAT_007a8cf8 + param_1 * 4) * 3 + -0x1c2] != 0))))
        {
          bVar12 = true;
        }
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar6 = 1;
        puVar8 = (uint *)LoadResourceString(0x564f,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar16 = 2;
        iVar14 = -1;
        iVar6 = -3;
        puVar8 = (uint *)LoadResourceString(0x273f - bVar12,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
        local_8 = local_8 + 0xf;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x5650,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
      local_c = *(UINT *)(&DAT_007e085c + param_1 * 4);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString(0x273f - (local_c != 0),HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar6 = 1;
        puVar8 = (uint *)LoadResourceString(0x5651,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar10);
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x5f,local_8 - 3,0x16,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",local_c);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                             (-(uint)(cVar5 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440((int)this_00->field_0218,0,0x7a,local_8,iVar6,0,0x3a);
        local_3c = 0x7a;
        local_34 = *(undefined4 *)(iVar6 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(iVar6 + 8);
        local_2b = (-(uint)(cVar5 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + 0x14;
      }
      UVar7 = thunk_FUN_00523410(param_1,(char)local_20,2);
      DrawDescription(this_00,(int *)&local_8,UVar7);
      AddLinks(this_00,(int *)&local_8,'\x03',param_1,0);
      g_currentExceptionFrame = local_a4.previous;
      return;
    }
    g_currentExceptionFrame = local_a4.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x6f4,0,iVar6,
                                "%s","HelpPanelTy::SubProc");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\helppan.cpp",0x6f4);
  }
  return;
}

