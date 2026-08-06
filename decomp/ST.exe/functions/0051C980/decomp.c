#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SpecProc */

void __thiscall HelpPanelTy::SpecProc(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  BITMAPINFO *pBVar4;
  Global_sub_00526BA0_param_1Enum GVar5;
  int iVar6;
  UINT UVar7;
  char *pcVar7_mg0;
  char *pcVar7_mg2;
  char *pcVar7_mg1;
  uint *puVar8;
  uint uVar15;
  BITMAPINFO *pBVar9_mg1;
  char *pcVar7_mg5;
  char *pcVar7_mg4;
  int uVar14;
  char *pcVar7_mg7;
  char *pcVar7_mg8;
  uint local_EAX_1393;
  BITMAPINFO *pBVar9_mg3;
  char *pcVar7_mgA;
  char *pcVar7_mgB;
  char *pcVar7_mgC;
  char *pcVar7_mgD;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  int iVar13;
  uint uVar16;
  HINSTANCE pHVar17;
  InternalExceptionFrame local_74;
  undefined4 local_30;
  int local_2c;
  LONG local_28;
  LONG local_24;
  undefined1 local_20;
  Global_sub_00526BA0_param_1Enum local_1f;
  int local_1b;
  HelpPanelTy *local_14;
  BITMAPINFO *local_10;
  Global_sub_00526BA0_param_1Enum local_c;
  uint local_8;

  local_8 = 0;
  local_14 = this;
  local_10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0248,4);
  if (g_allPlayers_007FA174 != nullptr) {
    local_74.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_74;
    iVar6 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
    this_00 = local_14;
    if (iVar6 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_14->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
          local_14->field_01A2 = HVar2;
          local_14->field_01AB = local_14->field_01A3;
        }
        else {
          local_14->field_01A2 = 0;
          local_14->field_01AB = nullptr;
        }
        local_14->field_01A1 = CASE_B;
        local_14->field_01A3 = (void *)param_1;
        local_14->field_01A7 = param_2;
        local_14->field_01AF = 0x32;
        local_14->field_01B1 = 5;
        if (local_14->field_0178 != 0) {
          local_14->field_0028 = 0x4202;
          *(undefined2 *)&local_14->field_0x2c = 0;
          local_14->field_002E = 2;
          *(undefined4 *)&local_14->field_0x30 = local_14->field_0178;
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_14->field_0x18);
          }
        }
      }
      bVar12 = (byte)param_2;
      UVar7 = thunk_FUN_00523410(param_1,bVar12,0);
      DrawTitle(this_00,0x55ff,param_2,UVar7);
      DrawObj(this_00,(int *)&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,bVar12,
              this_00->field_023C);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar6 = -1;
      pcVar7_mg0 = LoadResourceString(0x564a,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mg0,iVar6,iVar13,uVar16);
      local_8 = local_8 + 0xf;
      if (param_1 == 0xfe) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar16 = 3;
        iVar13 = -1;
        iVar6 = -3;
        pcVar7_mg2 = LoadResourceString(0x5661,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar7_mg2,iVar6,iVar13,uVar16);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        local_c = (-(uint)(param_2 != 3) & 0xfffffff3) + CASE_5F;
        pHVar17 = g_hINSTANCE_00807618;
        UVar7 = thunk_FUN_00523410(local_c,bVar12,0);
        pcVar7_mg1 = LoadResourceString(UVar7,pHVar17);
        uVar16 = 0xffffffff;
        do {
          pcVar10 = pcVar7_mg1;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar10 = pcVar7_mg1 + 1;
          cVar1 = *pcVar7_mg1;
          pcVar7_mg1 = pcVar10;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        pcVar10 = pcVar10 + -uVar16;
        pcVar11 = (char *)&DAT_0080f33a;
        memmove(pcVar11, pcVar10, uVar16); /* compiler REP MOVS byte copy */
        uVar9 = 0;
        for (puVar8 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != nullptr;
            puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
          *(undefined1 *)puVar8 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        GVar5 = local_c;
        local_8 = local_8 + 0xf;
        uVar15 = thunk_FUN_00526ba0(local_c,bVar12);
        pBVar9_mg1 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,uVar15);
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
               (byte *)pBVar9_mg1);
        pBVar4 = local_10;
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
               (byte *)local_10);
        local_30 = 0x94;
        local_28 = (pBVar4->bmiHeader).biWidth;
        local_2c = local_8 - 2;
        local_24 = (pBVar4->bmiHeader).biHeight;
        local_20 = 2;
        local_1f = GVar5;
        local_1b = param_2;
        Library::DKW::TBL::DArrayAppend(this_00->field_01D7,&local_30);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar6 = -3;
      pcVar7_mg5 = LoadResourceString(0x5655,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mg5,iVar6,iVar13,uVar16);
      pHVar17 = g_hINSTANCE_00807618;
      UVar7 = thunk_FUN_00523410(param_1,bVar12,1);
      pcVar7_mg4 = LoadResourceString(UVar7,pHVar17);
      uVar16 = 0xffffffff;
      do {
        pcVar10 = pcVar7_mg4;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar10 = pcVar7_mg4 + 1;
        cVar1 = *pcVar7_mg4;
        pcVar7_mg4 = pcVar10;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar10 + -uVar16;
      pcVar11 = (char *)&DAT_0080f33a;
      memmove(pcVar11, pcVar10, uVar16); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      ccFntTy::FormText(this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,
                        " ,.;:!?/\\()[]{}",0x106,1);
      uVar14 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
      CheckBkView(this_00,local_8,(ushort)uVar14);
      uVar16 = uVar14 & 0xffff;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,uVar16 + 2);
      ccFntTy::WrTxt(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                     ,-1,-1);
      if ((ushort)uVar14 < 0x10) {
        uVar16 = 0xf;
      }
      local_8 = local_8 + uVar16;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar6 = -3;
      pcVar7_mg7 = LoadResourceString(0x562a,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mg7,iVar6,iVar13,uVar16);
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
      pHVar17 = g_hINSTANCE_00807618;
      UVar7 = thunk_FUN_00523410(local_c,bVar12,0);
      pcVar7_mg8 = LoadResourceString(UVar7,pHVar17);
      uVar16 = 0xffffffff;
      do {
        pcVar10 = pcVar7_mg8;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar10 = pcVar7_mg8 + 1;
        cVar1 = *pcVar7_mg8;
        pcVar7_mg8 = pcVar10;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar10 + -uVar16;
      pcVar11 = (char *)&DAT_0080f33a;
      memmove(pcVar11, pcVar10, uVar16); /* compiler REP MOVS byte copy */
      for (puVar8 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != nullptr;
          puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
        *(undefined1 *)puVar8 = 0x20;
      }
      ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      local_8 = local_8 + 0xf;
      local_EAX_1393 = thunk_FUN_00526ba0(local_c,bVar12);
      pBVar9_mg3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                local_EAX_1393);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
             (byte *)pBVar9_mg3);
      pBVar4 = local_10;
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
             (byte *)local_10);
      local_30 = 0x94;
      local_28 = (pBVar4->bmiHeader).biWidth;
      local_2c = local_8 - 2;
      local_24 = (pBVar4->bmiHeader).biHeight;
      local_20 = 3;
      local_1f = local_c;
      local_1b = param_2;
      Library::DKW::TBL::DArrayAppend(this_00->field_01D7,&local_30);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar6 = -3;
      pcVar7_mgA = LoadResourceString(0x5662,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mgA,iVar6,iVar13,uVar16);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      pcVar7_mgB = LoadResourceString((-(uint)(param_1 != 0xfd) & 0xffffffcd) + 0x5663,
                                      g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mgB,iVar6,iVar13,uVar16);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar6 = -3;
      pcVar7_mgC = LoadResourceString(0x5625,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mgC,iVar6,iVar13,uVar16);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      pcVar7_mgD = LoadResourceString(0x5d5a,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mgD,iVar6,iVar13,uVar16);
      local_8 = local_8 + 0xf;
      UVar7 = thunk_FUN_00523410(param_1,bVar12,2);
      DrawDescription(this_00,(int *)&local_8,UVar7);
      AddLinks(this_00,(int *)&local_8,'\v',param_1,param_2);
      g_currentExceptionFrame = local_74.previous;
      return;
    }
    g_currentExceptionFrame = local_74.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x929,0,iVar6,
                                "%s","HelpPanelTy::SpecProc");
    if (iVar13 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\helppan.cpp",0x929);
  }
  return;
}

