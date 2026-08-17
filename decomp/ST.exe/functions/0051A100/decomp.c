#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ObjProc */

void __thiscall HelpPanelTy::ObjProc(HelpPanelTy *this,int param_1,uint param_2,char param_3)

{
  Global_sub_00528060_param_1Enum *pGVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  char cVar4;
  ushort uVar5;
  int iVar6;
  UINT UVar6;
  char *pcVar7;
  BITMAPINFO *pBVar8;
  int iVar12;
  bool bVar9;
  HINSTANCE module;
  int iVar10;
  byte bVar11;
  int iVar13;
  int iVar14;
  uint uVar15;
  InternalExceptionFrame local_a0;
  undefined4 local_5c;
  uint local_58;
  LONG local_54;
  LONG local_50;
  undefined1 local_4c;
  uint local_4b;
  undefined4 local_47;
  HelpPanelTy *local_40;
  Global_sub_00528060_param_1Enum *local_3c;
  undefined4 local_38;
  uint local_34;
  LONG local_30;
  LONG local_2c;
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
  if (g_allPlayers_007FA174 != nullptr) {
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    local_40 = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
    this_00 = local_40;
    if (iVar6 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_40->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
          local_40->field_01A2 = HVar2;
          local_40->field_01AB = local_40->field_01A3;
        }
        else {
          local_40->field_01A2 = 0;
          local_40->field_01AB = 0;
        }
        STPiece<0,2>(iVar10) = local_40->field_0178;
        STPiece<2,2>(iVar10) = local_40->field_017A;
        local_40->field_01A1 = CASE_2;
        local_40->field_01A3 = (void *)param_1;
        local_40->field_01A7 = param_2;
        local_40->field_01AF = 0x32;
        local_40->field_01B1 = 5;
        if (iVar10 != 0) {
          local_40->field_0028 = 0x4202;
          *(undefined2 *)&local_40->field_0x2c = 0;
          *(undefined2 *)&local_40->field_0x2e = 2;
          local_40->field_0030 = (undefined2)iVar10;
          local_40->field_0032 = STPiece<2,2>(iVar10);
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_CALLSITE[0051A1F2]: CALL dword ptr [EDX] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_40->field_0x18);
          }
        }
      }
      bVar11 = (byte)param_2;
      UVar6 = thunk_FUN_00523410(param_1,bVar11,0);
      /* ST_CALLSITE[0051A20E]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
      DrawTitle(this_00,0x55fa,param_2,UVar6);
      /* ST_CALLSITE[0051A222]: CALL 0x00403d78; direct=00403D78 HelpPanelTy::DrawObj */
      DrawObj(this_00,(int *)&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,bVar11,
              this_00->field_0240);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar10 = -1;
      pcVar7 = LoadResourceString(0x564a,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      UVar6 = 0;
      iVar10 = FUN_006b0fd0(0x8014a0);
      if (iVar10 == 0) {
        iVar10 = FUN_006b0fd0(0x800f90);
        if (iVar10 == 0) {
          iVar10 = FUN_006b0fd0(0x801360);
          if (iVar10 == 0) {
            iVar10 = FUN_006b0fd0(0x800f80);
            if (iVar10 != 0) {
              UVar6 = 0x3a9d;
            }
          }
          else {
            UVar6 = 0x3aa8;
          }
        }
        else {
          UVar6 = 0x3a9c;
        }
      }
      else {
        UVar6 = 0x3a9b;
      }
      if (UVar6 != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 3;
        iVar13 = -1;
        iVar10 = -3;
        pcVar7 = LoadResourceString(0x5654,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar10 = 1;
        pcVar7 = LoadResourceString(UVar6,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
        local_8 = local_8 + 0xf;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar10 = -3;
      pcVar7 = LoadResourceString(0x5656,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (param_2 == 1) {
        UVar6 = 0x5604;
      }
      else if (param_2 == 2) {
        UVar6 = 0x5605;
      }
      else {
        UVar6 = 0x5606;
      }
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar10 = 1;
      pcVar7 = LoadResourceString(UVar6,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar10 = -3;
      pcVar7 = LoadResourceString(0x55f7,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      local_14 = param_1 * 3;
      if (param_2 == 3) {
        iVar10 = *(int *)(&DAT_007e2f10 + param_1 * 0xc);
      }
      else {
        iVar10 = *(int *)(&DAT_007e22a0 + (local_14 + param_2) * 4);
      }
      if (iVar10 != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051A4F4]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",iVar10);
        ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                              (-(uint)(param_2 != 3) & 0xfffffffe) + 3);
        FUN_006b5440((ushort *)this_00->field_0218,0,0xb4,local_8,pBVar8,0,0x3a);
        local_38 = 0xb4;
        local_30 = (pBVar8->bmiHeader).biWidth;
        local_34 = local_8;
        local_2c = (pBVar8->bmiHeader).biHeight;
        local_27 = (-(uint)(param_2 != 3) & 0xfffffffc) + 0xe2;
        local_28 = 1;
        local_23 = param_2;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      local_14 = local_14 + -0x97 + param_2;
      iVar13 = *(int *)(&DAT_007e1c50 + local_14 * 4);
      if (iVar13 != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051A603]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",iVar13);
        ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,0);
        FUN_006b5440((ushort *)this_00->field_0218,0,0xb4,local_8,pBVar8,0,0x3a);
        local_38 = 0xb4;
        local_30 = (pBVar8->bmiHeader).biWidth;
        local_34 = local_8;
        local_2c = (pBVar8->bmiHeader).biHeight;
        local_28 = 1;
        local_27 = 0xdd;
        local_23 = param_2;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      iVar14 = *(int *)(&DAT_008545ac + local_14 * 4);
      if (iVar14 != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051A6E6]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",iVar14);
        ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,2);
        FUN_006b5440((ushort *)this_00->field_0218,0,0xb4,local_8,pBVar8,0,0x3a);
        local_38 = 0xb4;
        local_30 = (pBVar8->bmiHeader).biWidth;
        local_34 = local_8;
        local_2c = (pBVar8->bmiHeader).biHeight;
        local_28 = 1;
        local_27 = 0xdc;
        local_23 = param_2;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      if (iVar14 == 0 && (iVar13 == 0 && iVar10 == 0)) {
        local_8 = local_8 + 0xf;
      }
      local_1c = (int *)0x1;
      local_10 = 1;
      local_18 = (param_1 + -0x74 + param_2 * 0x42) * 3;
      do {
        pGVar1 = &DAT_007c0e4c + local_18 + (local_10 & 0xffff);
        local_3c = pGVar1;
        if (*pGVar1 == CASE_0) break;
        if (local_1c != nullptr) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
          uVar15 = 3;
          iVar13 = -1;
          iVar10 = -3;
          pcVar7 = LoadResourceString(0x5657,g_hINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
          local_1c = nullptr;
        }
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar10 = 1;
        module = g_hINSTANCE_00807618;
        UVar6 = thunk_FUN_00528060(*pGVar1,'\0');
        pcVar7 = LoadResourceString(UVar6,module);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
        local_8 = local_8 + 0xf;
        uVar15 = thunk_FUN_005276e0(*pGVar1,0);
        pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0230,uVar15);
        /* ST_CALLSITE[0051A8B8]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
               (byte *)pBVar8);
        local_5c = 0x96;
        local_54 = (pBVar8->bmiHeader).biWidth;
        local_58 = local_8;
        local_50 = (pBVar8->bmiHeader).biHeight;
        local_4b = (uint)*local_3c;
        local_4c = 5;
        local_47 = 0;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_5c);
        local_10 = local_10 + 1;
        local_8 = local_8 + 5 + (pBVar8->bmiHeader).biHeight;
      } while ((ushort)local_10 < 3);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar10 = -1;
      pcVar7 = LoadResourceString(0x564b,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar10 = 1;
      pcVar7 = LoadResourceString(0x564c,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      iVar13 = local_14;
      /* ST_CALLSITE[0051A9F1]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%d",*(undefined4 *)(&DAT_007e417c + local_14 * 4));
      ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar10 = 1;
      pcVar7 = LoadResourceString(0x564d,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      iVar10 = *(int *)(&DAT_007e3dc0 + param_2 * 4);
      local_1c = (int *)(&DAT_007e3dc0 + param_2 * 4);
      local_18 = 0x42;
      local_10 = iVar10;
      do {
        iVar14 = *local_1c;
        if (iVar14 < (int)local_10) {
          local_10 = iVar14;
        }
        if (iVar10 < iVar14) {
          iVar10 = iVar14;
        }
        local_1c = local_1c + 3;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      iVar10 = (int)((iVar10 - local_10) + ((int)(iVar10 - local_10) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e3dc4 + iVar13 * 4) < (int)(local_10 + iVar10)) {
        local_10 = 0x5613;
      }
      else {
        local_10 = (((int)(local_10 + iVar10 * 2) <= *(int *)(&DAT_007e3dc4 + iVar13 * 4)) - 1 &
                   0xfffffffe) + 0x5616;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar10 = -3;
      pcVar7 = LoadResourceString(local_10,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar10 = 1;
      pcVar7 = LoadResourceString(0x565a,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar10 = -3;
      pcVar7 = LoadResourceString(0x273f - (*(int *)(&DAT_00791b18 + iVar13 * 4) != 0),
                                  g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      iVar10 = param_1 + -0x32;
      if (*(int *)(&DAT_00793e28 + iVar10 * 8) == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)(&DAT_00794038 + iVar10 * 8);
      }
      local_18 = iVar10 * 0x18;
      /* ST_CALLSITE[0051AC1E]: CALL 0x00403f17; direct=00403F17 HelpPanelTy::DrawWeapon */
      iVar10 = DrawWeapon(this_00,0x96,(int *)&local_8,(&DAT_00792ca0)[iVar10 * 6],iVar14,bVar11);
      cVar4 = local_9;
      if ((iVar10 != 0) || (local_9 = '\0', cVar4 != '\0')) {
        local_9 = '\x01';
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(&DAT_00793e2c + (param_1 + -0x32) * 8) == 0) {
        iVar10 = 0;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar10 = *(int *)(&DAT_0079403c + (param_1 + -0x32) * 8);
      }
      /* ST_CALLSITE[0051AC69]: CALL 0x00403f17; direct=00403F17 HelpPanelTy::DrawWeapon */
      iVar10 = DrawWeapon(this_00,0x96,(int *)&local_8,*(int *)((int)&DAT_00792cac + local_18),
                          iVar10,bVar11);
      cVar4 = local_9;
      if ((iVar10 != 0) || (local_9 = '\0', cVar4 != '\0')) {
        local_9 = '\x01';
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar10 = 1;
      pcVar7 = LoadResourceString(0x564e,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar10 = -3;
      pcVar7 = LoadResourceString((param_2 != 3) + 0x273e,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      if (local_9 != '\0') {
        bVar9 = false;
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar10 = 1;
        pcVar7 = LoadResourceString(0x564f,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        if (*(int *)((int)&DAT_00792ca0 + local_18) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar9 = (&DAT_007bf678)[*(int *)((int)&DAT_00792ca0 + local_18) * 3 + -0x1c2] != 0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)((int)&DAT_00792cac + local_18) != 0) &&
           ((bVar9 || ((&DAT_007bf678)[*(int *)((int)&DAT_00792cac + local_18) * 3 + -0x1c2] != 0)))
           ) {
          bVar9 = true;
        }
        uVar15 = 2;
        iVar13 = -1;
        iVar10 = -3;
        pcVar7 = LoadResourceString(0x273f - bVar9,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
        local_8 = local_8 + 0xf;
        iVar13 = local_14;
      }
      if (param_2 != 3) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar10 = 1;
        pcVar7 = LoadResourceString(0x5650,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
        iVar10 = *(int *)(&DAT_007e29f0 + iVar13 * 4);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 2;
        iVar14 = -1;
        iVar13 = -3;
        pcVar7 = LoadResourceString(0x273f - (iVar10 != 0),g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar15);
        local_8 = local_8 + 0xf;
        iVar13 = local_14;
        if (iVar10 != 0) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar14 = -1;
          iVar13 = 1;
          pcVar7 = LoadResourceString(0x5651,g_hINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar15);
          ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x5f,local_8 - 3,0x16,0x14
                          );
          /* ST_CALLSITE[0051AF6E]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)&DAT_0080f33a,"%4d",iVar10);
          ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,1);
          FUN_006b5440((ushort *)this_00->field_0218,0,0x7a,local_8,pBVar8,0,0x3a);
          local_38 = 0x7a;
          local_30 = (pBVar8->bmiHeader).biWidth;
          local_34 = local_8;
          local_2c = (pBVar8->bmiHeader).biHeight;
          local_28 = 1;
          local_27 = 0xde;
          local_23 = param_2;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_38);
          local_8 = local_8 + 0x14;
          iVar13 = local_14;
        }
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar10 = 1;
      pcVar7 = LoadResourceString(0x565b,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      local_10 = 0;
      uVar5 = 0;
      do {
        if ((&DAT_007e1988)[iVar13 * 3 + (uint)uVar5] != '\0') {
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
      iVar13 = -1;
      iVar10 = -3;
      pcVar7 = LoadResourceString(local_10,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      UVar6 = thunk_FUN_00523410(param_1,bVar11,2);
      /* ST_CALLSITE[0051B100]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
      DrawDescription(this_00,(int *)&local_8,UVar6);
      /* ST_CALLSITE[0051B10F]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
      AddLinks(this_00,(int *)&local_8,'\x02',param_1,param_2);
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    g_currentExceptionFrame = local_a0.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x7ec,0,iVar6,
                                "%s","HelpPanelTy::ObjProc");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\helppan.cpp",0x7ec);
  }
  return;
}

