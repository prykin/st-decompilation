#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SpecProc */

void __thiscall HelpPanelTy::SpecProc(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  Global_sub_00526BA0_param_1Enum GVar4;
  int iVar5;
  UINT UVar6;
  uint *puVar7;
  char *pcVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  HINSTANCE pHVar16;
  InternalExceptionFrame local_74;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  Global_sub_00526BA0_param_1Enum local_1f;
  int local_1b;
  HelpPanelTy *local_14;
  byte *local_10;
  Global_sub_00526BA0_param_1Enum local_c;
  uint local_8;

  local_8 = 0;
  local_14 = this;
  local_10 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0248,4);
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    local_74.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_74;
    iVar5 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
    this_00 = local_14;
    if (iVar5 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_14->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == (CASE_8|CASE_2))) {
          local_14->field_01A2 = HVar2;
          local_14->field_01AB = local_14->field_01A3;
        }
        else {
          local_14->field_01A2 = 0;
          local_14->field_01AB = 0;
        }
        local_14->field_01A1 = CASE_B;
        local_14->field_01A3 = param_1;
        local_14->field_01A7 = param_2;
        local_14->field_01AF = 0x32;
        local_14->field_01B1 = 5;
        if (local_14->field_0178 != 0) {
          local_14->field_0028 = 0x4202;
          *(undefined2 *)&local_14->field_0x2c = 0;
          local_14->field_002E = 2;
          *(undefined4 *)&local_14->field_0x30 = local_14->field_0178;
          if (PTR_00802a30 != (CursorClassTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)**(undefined4 **)PTR_00802a30)(&local_14->field_0x18);
          }
        }
      }
      bVar13 = (byte)param_2;
      UVar6 = thunk_FUN_00523410(param_1,bVar13,0);
      DrawTitle(this_00,0x55ff,param_2,UVar6);
      DrawObj(this_00,(int *)&local_8,param_1,bVar13,this_00->field_023C);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar5 = -1;
      puVar7 = (uint *)LoadResourceString(0x564a,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      if (param_1 == 0xfe) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 3;
        iVar14 = -1;
        iVar5 = -3;
        puVar7 = (uint *)LoadResourceString(0x5661,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar14,uVar15);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        local_c = (-(uint)(param_2 != 3) & 0xfffffff3) + CASE_5F;
        pHVar16 = HINSTANCE_00807618;
        UVar6 = thunk_FUN_00523410(local_c,bVar13,0);
        pcVar8 = LoadResourceString(UVar6,pHVar16);
        uVar10 = 0xffffffff;
        do {
          pcVar12 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar12 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar12;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar8 = pcVar12 + -uVar10;
        pcVar12 = (char *)&DAT_0080f33a;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar12 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar12 = pcVar12 + 1;
        }
        for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != (uint *)0x0;
            puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
          *(undefined1 *)puVar7 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        GVar4 = local_c;
        local_8 = local_8 + 0xf;
        uVar10 = thunk_FUN_00526ba0(local_c,bVar13);
        pbVar9 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                      uVar10);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0x96,local_8,'\x01',pbVar9);
        pbVar9 = local_10;
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_10);
        local_30 = 0x94;
        local_28 = *(undefined4 *)(pbVar9 + 4);
        local_2c = local_8 - 2;
        local_24 = *(undefined4 *)(pbVar9 + 8);
        local_20 = 2;
        local_1f = GVar4;
        local_1b = param_2;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_30);
        local_8 = local_8 + *(int *)(pbVar9 + 8);
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar5 = -3;
      puVar7 = (uint *)LoadResourceString(0x5655,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar14,uVar15);
      pHVar16 = HINSTANCE_00807618;
      UVar6 = thunk_FUN_00523410(param_1,bVar13,1);
      pcVar8 = LoadResourceString(UVar6,pHVar16);
      uVar10 = 0xffffffff;
      do {
        pcVar12 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar12;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar8 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_0080f33a;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar12 = pcVar12 + 1;
      }
      ccFntTy::FormText(this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,
                        s________________007c21d8,0x106,1);
      uVar10 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
      CheckBkView(this_00,local_8,uVar10);
      uVar11 = uVar10 & 0xffff;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,uVar11 + 2)
      ;
      ccFntTy::WrTxt(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
      if ((ushort)uVar10 < 0x10) {
        uVar11 = 0xf;
      }
      local_8 = local_8 + uVar11;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar5 = -3;
      puVar7 = (uint *)LoadResourceString(0x562a,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar14,uVar15);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (param_2 == 1) {
        local_c = CASE_7;
      }
      else if (param_2 == 2) {
        local_c = CASE_13;
      }
      else {
        local_c = CASE_1B;
      }
      pHVar16 = HINSTANCE_00807618;
      UVar6 = thunk_FUN_00523410(local_c,bVar13,0);
      pcVar8 = LoadResourceString(UVar6,pHVar16);
      uVar10 = 0xffffffff;
      do {
        pcVar12 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar12;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar8 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_0080f33a;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar12 = pcVar12 + 1;
      }
      for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != (uint *)0x0;
          puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }
      ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      local_8 = local_8 + 0xf;
      uVar10 = thunk_FUN_00526ba0(local_c,bVar13);
      pbVar9 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,uVar10
                                   );
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0x96,local_8,'\x01',pbVar9);
      pbVar9 = local_10;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_10);
      local_30 = 0x94;
      local_28 = *(undefined4 *)(pbVar9 + 4);
      local_2c = local_8 - 2;
      local_24 = *(undefined4 *)(pbVar9 + 8);
      local_20 = 3;
      local_1f = local_c;
      local_1b = param_2;
      Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_30);
      local_8 = local_8 + *(int *)(pbVar9 + 8);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar5 = -3;
      puVar7 = (uint *)LoadResourceString(0x5662,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar14,uVar15);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar5 = 1;
      puVar7 = (uint *)LoadResourceString((-(uint)(param_1 != 0xfd) & 0xffffffcd) + 0x5663,
                                          HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar14,uVar10);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar5 = -3;
      puVar7 = (uint *)LoadResourceString(0x5625,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar14,uVar15);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar5 = 1;
      puVar7 = (uint *)LoadResourceString(0x5d5a,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar5,iVar14,uVar10);
      local_8 = local_8 + 0xf;
      UVar6 = thunk_FUN_00523410(param_1,bVar13,2);
      DrawDescription(this_00,(int *)&local_8,UVar6);
      AddLinks(this_00,(int *)&local_8,'\v',param_1,param_2);
      g_currentExceptionFrame = local_74.previous;
      return;
    }
    g_currentExceptionFrame = local_74.previous;
    iVar14 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x929,0,iVar5,
                                &DAT_007a4ccc,s_HelpPanelTy__SpecProc_007c3d54);
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x929);
  }
  return;
}

