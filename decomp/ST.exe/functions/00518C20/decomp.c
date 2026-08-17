#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SubProc */

void __thiscall HelpPanelTy::SubProc(HelpPanelTy *this,int param_1,char param_2)

{
  HelpPanelTy_field_01A1State HVar1;
  HelpPanelTy *this_00;
  Global_sub_00528060_param_1Enum *pGVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int local_EAX_243;
  UINT UVar6;
  char *pcVar7;
  BITMAPINFO *pBVar8;
  int iVar12;
  int *piVar9;
  bool bVar10;
  HINSTANCE pHVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  InternalExceptionFrame local_a4;
  undefined4 local_60;
  uint local_5c;
  LONG local_58;
  LONG local_54;
  undefined1 local_50;
  uint local_4f;
  undefined4 local_4b;
  int local_44;
  HelpPanelTy *local_40;
  undefined4 local_3c;
  uint local_38;
  LONG local_34;
  LONG local_30;
  undefined1 local_2c;
  int local_2b;
  uint local_27;
  char local_20;
  undefined3 uStack_1f;
  uint local_1c;
  Global_sub_00528060_param_1Enum *local_18;
  AnonShape_00518C20_0B2995D2 *local_14;
  char local_d;
  UINT local_c;
  uint local_8;

  local_8 = 0;
  local_d = '\0';
  if (g_allPlayers_007FA174 != nullptr) {
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    local_40 = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
    this_00 = local_40;
    if (iVar6 == 0) {
      if (param_2 == '\0') {
        HVar1 = local_40->field_01A1;
        if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
          local_40->field_01A2 = HVar1;
          local_40->field_01AB = local_40->field_01A3;
        }
        else {
          local_40->field_01A2 = 0;
          local_40->field_01AB = 0;
        }
        STPiece<0,2>(iVar13) = local_40->field_0178;
        STPiece<2,2>(iVar13) = local_40->field_017A;
        local_40->field_01A1 = CASE_3;
        local_40->field_01A3 = (void *)param_1;
        local_40->field_01AF = 0x32;
        local_40->field_01B1 = 5;
        if (iVar13 != 0) {
          local_40->field_0028 = 0x4202;
          *(undefined2 *)&local_40->field_0x2c = 0;
          *(undefined2 *)&local_40->field_0x2e = 2;
          local_40->field_0030 = (undefined2)iVar13;
          local_40->field_0032 = STPiece<2,2>(iVar13);
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_CALLSITE[00518D05]: CALL dword ptr [EDX] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_40->field_0x18);
          }
        }
      }
      local_EAX_243 = thunk_FUN_004e8030(param_1);
      cVar5 = (char)local_EAX_243;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_20 = CONCAT31(uStack_1f,cVar5);
      local_1c = local_EAX_243 & 0xff;
      UVar6 = thunk_FUN_00523410(param_1,cVar5,0);
      /* ST_CALLSITE[00518D43]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
      DrawTitle(this_00,0x55fb,local_1c,UVar6);
      /* ST_CALLSITE[00518D5A]: CALL 0x00403d78; direct=00403D78 HelpPanelTy::DrawObj */
      DrawObj(this_00,(int *)&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,
              (byte)_local_20,this_00->field_023C);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar13 = -1;
      pcVar7 = LoadResourceString(0x564a,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      local_c = 0;
      iVar13 = FUN_006b0fd0(0x801450);
      if (iVar13 == 0) {
        iVar13 = FUN_006b0fd0(0x801480);
        if (iVar13 == 0) {
          iVar13 = FUN_006b0fd0(0x800f10);
          if (iVar13 != 0) {
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
        iVar13 = -3;
        pcVar7 = LoadResourceString(0x5654,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar13 = 1;
        pcVar7 = LoadResourceString(local_c,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
        local_8 = local_8 + 0xf;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar13 = -3;
      pcVar7 = LoadResourceString(0x5656,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (local_1c == 1) {
        UVar6 = 0x5604;
      }
      else if (local_1c == 2) {
        UVar6 = 0x5605;
      }
      else {
        UVar6 = 0x5606;
      }
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      pcVar7 = LoadResourceString(UVar6,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      local_14 = nullptr;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar13 = -3;
      pcVar7 = LoadResourceString(0x55f7,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      if (cVar5 == '\x03') {
        local_c = *(UINT *)(&DAT_007e09dc + param_1 * 4);
      }
      else {
        local_c = *(UINT *)(&DAT_007e079c + param_1 * 4);
      }
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051901A]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",local_c);
        ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                              (-(uint)(cVar5 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440((ushort *)this_00->field_0218,0,0xb4,local_8,pBVar8,0,0x3a);
        local_3c = 0xb4;
        local_34 = (pBVar8->bmiHeader).biWidth;
        local_38 = local_8;
        local_30 = (pBVar8->bmiHeader).biHeight;
        local_2b = (-(uint)(cVar5 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + 0x14;
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
      }
      local_c = *(UINT *)(&DAT_007e055c + param_1 * 4);
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[00519129]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",local_c);
        ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        local_14 = (AnonShape_00518C20_0B2995D2 *)
                   FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,0);
        FUN_006b5440((ushort *)this_00->field_0218,0,0xb4,local_8,(tagBITMAPINFO *)local_14,0,0x3a);
        local_3c = 0xb4;
        local_34 = local_14->field_0004;
        local_38 = local_8;
        local_30 = local_14->field_0008;
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_3c);
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
        local_8 = local_8 + 0x14;
      }
      local_c = *(UINT *)(&DAT_00854428 + param_1 * 4);
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051921A]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",local_c);
        ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        local_14 = (AnonShape_00518C20_0B2995D2 *)
                   FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,2);
        FUN_006b5440((ushort *)this_00->field_0218,0,0xb4,local_8,(tagBITMAPINFO *)local_14,0,0x3a);
        local_3c = 0xb4;
        local_34 = local_14->field_0004;
        local_38 = local_8;
        local_30 = local_14->field_0008;
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_3c);
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
        local_8 = local_8 + 0x14;
      }
      if (local_14 == nullptr) {
        local_8 = local_8 + 0xf;
      }
      local_c = 1;
      local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
      local_44 = param_1 * 3;
      do {
        local_18 = &DAT_007c0dd1 + local_44 + ((uint)local_14 & 0xffff);
        if (*local_18 == CASE_0) break;
        if (local_c != 0) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
          uVar16 = 3;
          iVar14 = -1;
          iVar13 = -3;
          pcVar7 = LoadResourceString(0x5657,g_hINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
          local_c = 0;
        }
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        pGVar3 = local_18;
        uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar13 = 1;
        pHVar11 = g_hINSTANCE_00807618;
        UVar6 = thunk_FUN_00528060(*local_18,'\0');
        pcVar7 = LoadResourceString(UVar6,pHVar11);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
        local_8 = local_8 + 0xf;
        uVar16 = thunk_FUN_005276e0(*pGVar3,0);
        pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0230,uVar16);
        /* ST_CALLSITE[005193E8]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
               (byte *)pBVar8);
        local_60 = 0x96;
        local_58 = (pBVar8->bmiHeader).biWidth;
        local_5c = local_8;
        local_54 = (pBVar8->bmiHeader).biHeight;
        local_4f = (uint)*local_18;
        local_50 = 5;
        local_4b = 0;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_60);
        local_8 = local_8 + 5 + (pBVar8->bmiHeader).biHeight;
        local_14 = (AnonShape_00518C20_0B2995D2 *)&local_14->field_0x1;
      } while ((ushort)local_14 < 3);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar13 = -1;
      pcVar7 = LoadResourceString(0x564b,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      pcVar7 = LoadResourceString(0x564c,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      /* ST_CALLSITE[00519521]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%d",*(undefined4 *)(&DAT_007dfbac + param_1 * 4));
      ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      pcVar7 = LoadResourceString(0x5658,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      piVar9 = &DAT_007dfc70;
      local_c = DAT_007dfc70;
      local_18 = (Global_sub_00528060_param_1Enum *)0x28;
      iVar13 = DAT_007dfc70;
      do {
        if (*piVar9 < (int)local_c) {
          local_c = *piVar9;
        }
        if (iVar13 < *piVar9) {
          iVar13 = *piVar9;
        }
        piVar9 = piVar9 + 1;
        local_18 = (Global_sub_00528060_param_1Enum *)((int)local_18 + -1);
      } while (local_18 != nullptr);
      iVar13 = (int)(iVar13 - local_c) / 3;
      if (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(local_c + iVar13)) {
        local_c = 0x5615;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c = (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(local_c + iVar13 * 2)) + 0x5613;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar13 = -3;
      pcVar7 = LoadResourceString(local_c,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      pcVar7 = LoadResourceString(0x564d,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      piVar9 = &DAT_007e04a0;
      local_c = DAT_007e04a0;
      local_18 = (Global_sub_00528060_param_1Enum *)0x28;
      iVar13 = DAT_007e04a0;
      do {
        if (*piVar9 < (int)local_c) {
          local_c = *piVar9;
        }
        if (iVar13 < *piVar9) {
          iVar13 = *piVar9;
        }
        piVar9 = piVar9 + 1;
        local_18 = (Global_sub_00528060_param_1Enum *)((int)local_18 + -1);
      } while (local_18 != nullptr);
      iVar13 = (int)((iVar13 - local_c) + ((int)(iVar13 - local_c) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e049c + param_1 * 4) < (int)(local_c + iVar13)) {
        local_c = 0x5613;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c = (((int)(local_c + iVar13 * 2) <= *(int *)(&DAT_007e049c + param_1 * 4)) - 1 &
                  0xfffffffe) + 0x5616;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar13 = -3;
      pcVar7 = LoadResourceString(local_c,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      /* ST_CALLSITE[0051978D]: CALL 0x00403f17; direct=00403F17 HelpPanelTy::DrawWeapon */
      iVar13 = DrawWeapon(this_00,0x96,(int *)&local_8,*(int *)(&DAT_007a8b18 + param_1 * 4),
                          *(int *)(&DAT_007a8bb8 + param_1 * 4),(byte)_local_20);
      cVar4 = local_d;
      if ((iVar13 != 0) || (local_d = '\0', cVar4 != '\0')) {
        local_d = '\x01';
      }
      /* ST_CALLSITE[005197C4]: CALL 0x00403f17; direct=00403F17 HelpPanelTy::DrawWeapon */
      iVar13 = DrawWeapon(this_00,0x96,(int *)&local_8,*(int *)(&DAT_007a8cf8 + param_1 * 4),
                          *(int *)(&DAT_007a8d98 + param_1 * 4),(byte)_local_20);
      cVar4 = local_d;
      if ((iVar13 != 0) || (local_d = '\0', cVar4 != '\0')) {
        local_d = '\x01';
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      pcVar7 = LoadResourceString(0x5659,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar15 = -1;
      iVar14 = -3;
      pHVar11 = g_hINSTANCE_00807618;
      iVar13 = FUN_006b0fd0(0x800f10);
      pcVar7 = LoadResourceString(0x273f - (iVar13 != 0),pHVar11);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar14,iVar15,uVar16);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      pcVar7 = LoadResourceString(0x564e,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar13 = -3;
      pcVar7 = LoadResourceString((cVar5 != '\x03') + 0x273e,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      if (local_d != '\0') {
        bVar10 = false;
        if (*(int *)(&DAT_007a8b18 + param_1 * 4) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar10 = (&DAT_007bf678)[*(int *)(&DAT_007a8b18 + param_1 * 4) * 3 + -0x1c2] != 0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)(&DAT_007a8cf8 + param_1 * 4) != 0) &&
           ((bVar10 || ((&DAT_007bf678)[*(int *)(&DAT_007a8cf8 + param_1 * 4) * 3 + -0x1c2] != 0))))
        {
          bVar10 = true;
        }
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar13 = 1;
        pcVar7 = LoadResourceString(0x564f,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar16 = 2;
        iVar14 = -1;
        iVar13 = -3;
        pcVar7 = LoadResourceString(0x273f - bVar10,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
        local_8 = local_8 + 0xf;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      pcVar7 = LoadResourceString(0x5650,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_c = *(UINT *)(&DAT_007e085c + param_1 * 4);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar13 = -3;
      pcVar7 = LoadResourceString(0x273f - (local_c != 0),g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      if (local_c != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar13 = 1;
        pcVar7 = LoadResourceString(0x5651,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x5f,local_8 - 3,0x16,0x14);
        /* ST_CALLSITE[00519B87]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",local_c);
        ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                              (-(uint)(cVar5 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440((ushort *)this_00->field_0218,0,0x7a,local_8,pBVar8,0,0x3a);
        local_3c = 0x7a;
        local_34 = (pBVar8->bmiHeader).biWidth;
        local_38 = local_8;
        local_30 = (pBVar8->bmiHeader).biHeight;
        local_2b = (-(uint)(cVar5 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + 0x14;
      }
      UVar6 = thunk_FUN_00523410(param_1,(char)_local_20,2);
      /* ST_CALLSITE[00519C5A]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
      DrawDescription(this_00,(int *)&local_8,UVar6);
      /* ST_CALLSITE[00519C6A]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
      AddLinks(this_00,(int *)&local_8,'\x03',param_1,0);
      g_currentExceptionFrame = local_a4.previous;
      return;
    }
    g_currentExceptionFrame = local_a4.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x6f4,0,iVar6,
                                "%s","HelpPanelTy::SubProc");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\helppan.cpp",0x6f4);
  }
  return;
}

