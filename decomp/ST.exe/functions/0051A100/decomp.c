#include "../../pseudocode_runtime.h"


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
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  HINSTANCE module;
  byte bVar12;
  int iVar13;
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
  if (g_allPlayers_007FA174 != (STAllPlayersC *)0x0) {
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    local_40 = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
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
          if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_40->field_0x18);
          }
        }
      }
      bVar12 = (byte)param_2;
      UVar7 = thunk_FUN_00523410(param_1,bVar12,0);
      DrawTitle(this_00,0x55fa,param_2,UVar7);
      DrawObj(this_00,(int *)&local_8,param_1,bVar12,this_00->field_0240);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar6 = -1;
      puVar8 = (uint *)LoadResourceString(0x564a,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
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
        iVar13 = -1;
        iVar6 = -3;
        puVar8 = (uint *)LoadResourceString(0x5654,g_module_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar6 = 1;
        puVar8 = (uint *)LoadResourceString(UVar7,g_module_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar9);
        local_8 = local_8 + 0xf;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString(0x5656,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
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
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(UVar7,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar9);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString(0x55f7,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
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
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",iVar6);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        uVar9 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                             (-(uint)(param_2 != 3) & 0xfffffffe) + 3);
        FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,uVar9,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(uVar9 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(uVar9 + 8);
        local_27 = (-(uint)(param_2 != 3) & 0xfffffffc) + 0xe2;
        local_28 = 1;
        local_23 = param_2;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      local_14 = local_14 + -0x97 + param_2;
      iVar13 = *(int *)(&DAT_007e1c50 + local_14 * 4);
      if (iVar13 != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14)
        ;
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",iVar13);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        uVar9 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,0);
        FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,uVar9,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(uVar9 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(uVar9 + 8);
        local_28 = 1;
        local_27 = 0xdd;
        local_23 = param_2;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      iVar14 = *(int *)(&DAT_008545ac + local_14 * 4);
      if (iVar14 != 0) {
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14)
        ;
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",iVar14);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        uVar9 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,2);
        FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,uVar9,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(uVar9 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(uVar9 + 8);
        local_28 = 1;
        local_27 = 0xdc;
        local_23 = param_2;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      if (iVar14 == 0 && (iVar13 == 0 && iVar6 == 0)) {
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
          iVar13 = -1;
          iVar6 = -3;
          puVar8 = (uint *)LoadResourceString(0x5657,g_module_00807618);
          ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
          local_1c = (int *)0x0;
        }
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar6 = 1;
        module = g_module_00807618;
        UVar7 = thunk_FUN_00528060(*pGVar1,'\0');
        puVar8 = (uint *)LoadResourceString(UVar7,module);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar9);
        local_8 = local_8 + 0xf;
        uVar9 = thunk_FUN_005276e0(*pGVar1,0);
        pbVar10 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0230,
                                       uVar9);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0x96,local_8,'\x01',pbVar10);
        local_5c = 0x96;
        local_54 = *(undefined4 *)(pbVar10 + 4);
        local_58 = local_8;
        local_50 = *(undefined4 *)(pbVar10 + 8);
        local_4b = (uint)*local_3c;
        local_4c = 5;
        local_47 = 0;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_5c);
        local_10 = local_10 + 1;
        local_8 = local_8 + 5 + *(int *)(pbVar10 + 8);
      } while ((ushort)local_10 < 3);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar6 = -1;
      puVar8 = (uint *)LoadResourceString(0x564b,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x564c,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar9);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      iVar13 = local_14;
      wsprintfA((LPSTR)&DAT_0080f33a,"%d",*(undefined4 *)(&DAT_007e417c + local_14 * 4));
      ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x564d,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar9);
      iVar6 = *(int *)(&DAT_007e3dc0 + param_2 * 4);
      local_1c = (int *)(&DAT_007e3dc0 + param_2 * 4);
      local_18 = 0x42;
      local_10 = iVar6;
      do {
        iVar14 = *local_1c;
        if (iVar14 < (int)local_10) {
          local_10 = iVar14;
        }
        if (iVar6 < iVar14) {
          iVar6 = iVar14;
        }
        local_1c = local_1c + 3;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      iVar6 = (int)((iVar6 - local_10) + ((int)(iVar6 - local_10) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e3dc4 + iVar13 * 4) < (int)(local_10 + iVar6)) {
        local_10 = 0x5613;
      }
      else {
        local_10 = (((int)(local_10 + iVar6 * 2) <= *(int *)(&DAT_007e3dc4 + iVar13 * 4)) - 1 &
                   0xfffffffe) + 0x5616;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString(local_10,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x565a,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar9);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString(0x273f - (*(int *)(&DAT_00791b18 + iVar13 * 4) != 0),
                                          g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      iVar6 = param_1 + -0x32;
      if (*(int *)(&DAT_00793e28 + iVar6 * 8) == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)(&DAT_00794038 + iVar6 * 8);
      }
      local_18 = iVar6 * 0x18;
      iVar6 = DrawWeapon(this_00,0x96,(int *)&local_8,(&DAT_00792ca0)[iVar6 * 6],iVar14,param_2);
      cVar4 = local_9;
      if ((iVar6 != 0) || (local_9 = '\0', cVar4 != '\0')) {
        local_9 = '\x01';
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(&DAT_00793e2c + (param_1 + -0x32) * 8) == 0) {
        iVar6 = 0;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar6 = *(int *)(&DAT_0079403c + (param_1 + -0x32) * 8);
      }
      iVar6 = DrawWeapon(this_00,0x96,(int *)&local_8,*(int *)((int)&DAT_00792cac + local_18),iVar6,
                         param_2);
      cVar4 = local_9;
      if ((iVar6 != 0) || (local_9 = '\0', cVar4 != '\0')) {
        local_9 = '\x01';
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x564e,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar9);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString((param_2 != 3) + 0x273e,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      if (local_9 != '\0') {
        bVar11 = false;
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar6 = 1;
        puVar8 = (uint *)LoadResourceString(0x564f,g_module_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar9);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        if (*(int *)((int)&DAT_00792ca0 + local_18) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar11 = (&DAT_007bf678)[*(int *)((int)&DAT_00792ca0 + local_18) * 3 + -0x1c2] != 0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)((int)&DAT_00792cac + local_18) != 0) &&
           ((bVar11 || ((&DAT_007bf678)[*(int *)((int)&DAT_00792cac + local_18) * 3 + -0x1c2] != 0))
           )) {
          bVar11 = true;
        }
        uVar15 = 2;
        iVar13 = -1;
        iVar6 = -3;
        puVar8 = (uint *)LoadResourceString(0x273f - bVar11,g_module_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
        local_8 = local_8 + 0xf;
        iVar13 = local_14;
      }
      if (param_2 != 3) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar6 = 1;
        puVar8 = (uint *)LoadResourceString(0x5650,g_module_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar9);
        iVar6 = *(int *)(&DAT_007e29f0 + iVar13 * 4);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 2;
        iVar14 = -1;
        iVar13 = -3;
        puVar8 = (uint *)LoadResourceString(0x273f - (iVar6 != 0),g_module_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar13,iVar14,uVar15);
        local_8 = local_8 + 0xf;
        iVar13 = local_14;
        if (iVar6 != 0) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar14 = -1;
          iVar13 = 1;
          puVar8 = (uint *)LoadResourceString(0x5651,g_module_00807618);
          ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar13,iVar14,uVar9);
          ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x5f,local_8 - 3,0x16,0x14
                          );
          wsprintfA((LPSTR)&DAT_0080f33a,"%4d",iVar6);
          ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          uVar9 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,1);
          FUN_006b5440((int)this_00->field_0218,0,0x7a,local_8,uVar9,0,0x3a);
          local_38 = 0x7a;
          local_30 = *(undefined4 *)(uVar9 + 4);
          local_34 = local_8;
          local_2c = *(undefined4 *)(uVar9 + 8);
          local_28 = 1;
          local_27 = 0xde;
          local_23 = param_2;
          Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_38);
          local_8 = local_8 + 0x14;
          iVar13 = local_14;
        }
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar6 = 1;
      puVar8 = (uint *)LoadResourceString(0x565b,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar14,uVar9);
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
      iVar6 = -3;
      puVar8 = (uint *)LoadResourceString(local_10,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      UVar7 = thunk_FUN_00523410(param_1,bVar12,2);
      DrawDescription(this_00,(int *)&local_8,UVar7);
      AddLinks(this_00,(int *)&local_8,'\x02',param_1,param_2);
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    g_currentExceptionFrame = local_a0.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x7ec,0,iVar6,
                                "%s","HelpPanelTy::ObjProc");
    if (iVar13 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\helppan.cpp",0x7ec);
  }
  return;
}

