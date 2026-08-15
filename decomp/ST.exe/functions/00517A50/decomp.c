#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::RCProc */

void __thiscall HelpPanelTy::RCProc(HelpPanelTy *this,int param_1,uint param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  BITMAPINFO *pBVar4;
  int iVar4;
  UINT UVar5;
  char *pcVar5_mg1;
  char *pcVar5_mg2;
  char *pcVar5_mg3;
  char *pcVar5_mg0;
  uint *puVar6;
  uint uVar18;
  BITMAPINFO *pBVar7_mg1;
  char *pcVar5_mg5;
  char *pcVar5_mg6;
  char *pcVar5_mg8;
  char *pcVar5_mg7;
  uint local_EAX_1380;
  BITMAPINFO *pBVar7_mg3;
  char *pcVar5_mgA;
  char *pcVar5_mgB;
  uint local_EAX_1813;
  BITMAPINFO *pBVar7_mg5;
  char *pcVar5_mgD;
  char *pcVar5_mgE;
  char *pcVar5_mg10;
  char *pcVar5_mgF;
  int uVar17;
  char *pcVar5_mg12;
  char *pcVar5_mg13;
  char *pcVar5_mg15;
  char *pcVar5_mg14;
  uint local_EAX_2923;
  BITMAPINFO *pBVar7;
  char *pcVar5_mg18;
  char *pcVar5_mg17;
  BITMAPINFO *pBVar7_mg8;
  uint local_EAX_3381;
  BITMAPINFO *pBVar7_mg9;
  int iVar14;
  uint uVar8;
  ushort uVar9;
  AnonShape_00517A50_98726C61 *pAVar10;
  char *pcVar11;
  Global_sub_00526BA0_param_1Enum *pGVar12;
  char *pcVar13;
  int iVar15;
  byte bVar16;
  int iVar17;
  uint uVar19;
  HINSTANCE pHVar20;
  InternalExceptionFrame *pIVar21;
  int local_7c [16];
  undefined4 local_3c;
  uint local_38;
  LONG local_34;
  LONG local_30;
  undefined1 local_2c;
  Global_sub_00526BA0_param_1Enum local_2b;
  uint local_27;
  HelpPanelTy *local_20;
  int local_1c;
  char *local_18;
  Global_sub_00526BA0_param_1Enum *local_14;
  BITMAPINFO *local_10;
  AnonShape_00517A50_98726C61 *local_c;
  uint local_8;
  InternalExceptionFrame *pIVar21_mg0;

  pAVar10 = nullptr;
  local_8 = 0;
  local_c = nullptr;
  local_20 = this;
  local_10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0248,4);
  uVar9 = 0;
  do {
    if ((*(int *)((int)&DAT_007c3469 + (uint)uVar9 * 0x27) == param_1) &&
       ((byte)(&DAT_007c3468)[(uint)uVar9 * 0x27] == param_2)) {
      pAVar10 = (AnonShape_00517A50_98726C61 *)(&DAT_007c3468 + (uint)uVar9 * 0x27);
      local_c = pAVar10;
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0xb);
  if (pAVar10 != nullptr) {
    pIVar21_mg0 = g_currentExceptionFrame;
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff80;
    iVar4 = Library::MSVCRT::__setjmp3(local_7c,0);
    this_00 = local_20;
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_20->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
          local_20->field_01A2 = HVar2;
          local_20->field_01AB = local_20->field_01A3;
        }
        else {
          local_20->field_01A2 = 0;
          local_20->field_01AB = 0;
        }
        STPiece<0,2>(iVar15) = local_20->field_0178;
        STPiece<2,2>(iVar15) = local_20->field_017A;
        local_20->field_01A1 = CASE_1;
        local_20->field_01A3 = (void *)param_1;
        local_20->field_01A7 = param_2;
        local_20->field_01AF = 0x32;
        local_20->field_01B1 = 5;
        if (iVar15 != 0) {
          local_20->field_0028 = 0x4202;
          *(undefined2 *)&local_20->field_0x2c = 0;
          *(undefined2 *)&local_20->field_0x2e = 2;
          local_20->field_0030 = (undefined2)iVar15;
          local_20->field_0032 = STPiece<2,2>(iVar15);
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_20->field_0x18);
          }
        }
      }
      UVar5 = thunk_FUN_005293f0(param_1);
      DrawTitle(this_00,0x55fe,param_2,UVar5);
      bVar16 = (byte)param_2;
      DrawObj(this_00,(int *)&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,bVar16,0);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      pcVar5_mg1 = LoadResourceString(0x5627,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg1,iVar15,iVar17,uVar19);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pAVar10 = local_c;
      uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar15 = 1;
      pcVar5_mg2 = LoadResourceString(local_c->field_0005,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg2,iVar15,iVar17,uVar19);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      pcVar5_mg3 = LoadResourceString(0x5628,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg3,iVar15,iVar17,uVar19);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pHVar20 = g_hINSTANCE_00807618;
      UVar5 = thunk_FUN_00523410(pAVar10->field_0009,bVar16,0);
      pcVar5_mg0 = LoadResourceString(UVar5,pHVar20);
      uVar19 = 0xffffffff;
      do {
        pcVar11 = pcVar5_mg0;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar11 = pcVar5_mg0 + 1;
        cVar1 = *pcVar5_mg0;
        pcVar5_mg0 = pcVar11;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      pcVar11 = pcVar11 + -uVar19;
      pcVar13 = (char *)&DAT_0080f33a;
      memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
          puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
        *(undefined1 *)puVar6 = 0x20;
      }
      ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      pAVar10 = local_c;
      local_8 = local_8 + 0xf;
      uVar18 = thunk_FUN_00526ba0(local_c->field_0009,*(char *)local_c);
      pBVar7_mg1 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,uVar18);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x01',
             (byte *)pBVar7_mg1);
      pBVar4 = local_10;
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcb,local_8 - 2,'\x06',
             (byte *)local_10);
      local_3c = 0xcb;
      local_34 = (pBVar4->bmiHeader).biWidth;
      local_38 = local_8 - 2;
      local_30 = (pBVar4->bmiHeader).biHeight;
      local_2c = 2;
      local_2b = pAVar10->field_0009;
      local_27 = param_2;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_3c);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      pcVar5_mg5 = LoadResourceString(0x5629,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg5,iVar15,iVar17,uVar19);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar15 = 1;
      pcVar5_mg6 = LoadResourceString(0x273f - (pAVar10->field_000D != 0),g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg6,iVar15,iVar17,uVar19);
      local_8 = local_8 + 0xf;
      if (pAVar10->field_000D != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar19 = 3;
        iVar17 = -1;
        iVar15 = -3;
        pcVar5_mg8 = LoadResourceString(0x562a,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg8,iVar15,iVar17,uVar19);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar20 = g_hINSTANCE_00807618;
        UVar5 = thunk_FUN_00523410(pAVar10->field_000D,bVar16,0);
        pcVar5_mg7 = LoadResourceString(UVar5,pHVar20);
        uVar19 = 0xffffffff;
        do {
          pcVar11 = pcVar5_mg7;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar11 = pcVar5_mg7 + 1;
          cVar1 = *pcVar5_mg7;
          pcVar5_mg7 = pcVar11;
        } while (cVar1 != '\0');
        uVar19 = ~uVar19;
        pcVar11 = pcVar11 + -uVar19;
        pcVar13 = (char *)&DAT_0080f33a;
        memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        pAVar10 = local_c;
        local_8 = local_8 + 0xf;
        local_EAX_1380 = thunk_FUN_00526ba0(local_c->field_000D,*(char *)local_c);
        pBVar7_mg3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                  local_EAX_1380);
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x01',
               (byte *)pBVar7_mg3);
        pBVar4 = local_10;
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x06',
               (byte *)local_10);
        local_3c = 0xcd;
        local_34 = (pBVar4->bmiHeader).biWidth;
        local_38 = local_8;
        local_30 = (pBVar4->bmiHeader).biHeight;
        local_2c = 3;
        local_2b = pAVar10->field_000D;
        local_27 = (uint)*(byte *)pAVar10;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      pcVar5_mgA = LoadResourceString(0x562b,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar5_mgA,iVar15,iVar17,uVar19);
      local_18 = &pAVar10->field_0x19;
      pGVar12 = (Global_sub_00526BA0_param_1Enum *)&pAVar10->field_0x11;
      local_1c = 2;
      do {
        local_14 = pGVar12;
        if (*pGVar12 != 0) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
          pHVar20 = g_hINSTANCE_00807618;
          UVar5 = thunk_FUN_00523410(*pGVar12,bVar16,0);
          pcVar5_mgB = LoadResourceString(UVar5,pHVar20);
          uVar19 = 0xffffffff;
          do {
            pcVar11 = pcVar5_mgB;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar11 = pcVar5_mgB + 1;
            cVar1 = *pcVar5_mgB;
            pcVar5_mgB = pcVar11;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar11 = pcVar11 + -uVar19;
          pcVar13 = (char *)&DAT_0080f33a;
          memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
          uVar8 = 0;
          for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
              puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
            *(undefined1 *)puVar6 = 0x20;
          }
          ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          pGVar12 = local_14;
          local_8 = local_8 + 0xf;
          local_EAX_1813 = thunk_FUN_00526ba0(*local_14,*(char *)local_c);
          pBVar7_mg5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                    local_EAX_1813);
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x01',
                 (byte *)pBVar7_mg5);
          pBVar4 = local_10;
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcb,local_8 - 2,'\x06',
                 (byte *)local_10);
          local_3c = 0xcb;
          local_34 = (pBVar4->bmiHeader).biWidth;
          local_38 = local_8 - 2;
          local_30 = (pBVar4->bmiHeader).biHeight;
          local_2c = 2;
          local_2b = *pGVar12;
          local_27 = (uint)*(byte *)local_c;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_3c);
          local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
          pIVar21 = (InternalExceptionFrame *)0x3;
          iVar17 = -1;
          iVar15 = -3;
          pcVar5_mgD = LoadResourceString(0x562c,g_hINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,pcVar5_mgD,iVar15,iVar17,(uint)pIVar21);
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
          pIVar21_mg0 = (InternalExceptionFrame *)((DAT_0080874e != '\x03') - 1 & 5);
          iVar17 = -1;
          iVar15 = 1;
          pcVar5_mgE = LoadResourceString((-(uint)(*local_18 != '\0') & 0xffffffef) + 0x5641,
                                          g_hINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,pcVar5_mgE,iVar15,iVar17,(uint)pIVar21_mg0);
          local_8 = local_8 + 0xf;
          pAVar10 = local_c;
        }
        pGVar12 = local_14 + 1;
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_14 = pGVar12;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      pcVar5_mg10 = LoadResourceString(0x562d,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg10,iVar15,iVar17,uVar19);
      pcVar5_mgF = LoadResourceString(*(UINT *)&pAVar10->field_0x1b,g_hINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar11 = pcVar5_mgF;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar11 = pcVar5_mgF + 1;
        cVar1 = *pcVar5_mgF;
        pcVar5_mgF = pcVar11;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      pcVar11 = pcVar11 + -uVar19;
      pcVar13 = (char *)&DAT_0080f33a;
      memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      ccFntTy::FormText(this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,
                        " ,.;:!?/\\()[]{}",0xcf,1);
      uVar17 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
      CheckBkView(this_00,local_8,(ushort)uVar17);
      uVar19 = uVar17 & 0xffff;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,uVar19 + 2);
      ccFntTy::WrTxt(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                     ,-1,-1);
      if ((ushort)uVar17 < 0x10) {
        uVar19 = 0xf;
      }
      local_8 = local_8 + uVar19;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      pcVar5_mg12 = LoadResourceString(0x562e,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg12,iVar15,iVar17,uVar19);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pAVar10 = local_c;
      uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar15 = 1;
      pcVar5_mg13 = LoadResourceString(0x273f - (local_c->field_001F != 0),g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg13,iVar15,iVar17,uVar19);
      local_8 = local_8 + 0xf;
      if (pAVar10->field_001F != 0) {
        CheckBkView(this_00,local_8,0xf);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar19 = 3;
        iVar17 = -1;
        iVar15 = -3;
        pcVar5_mg15 = LoadResourceString(0x562a,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg15,iVar15,iVar17,uVar19);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar20 = g_hINSTANCE_00807618;
        UVar5 = thunk_FUN_00523410(pAVar10->field_001F,bVar16,0);
        pcVar5_mg14 = LoadResourceString(UVar5,pHVar20);
        uVar19 = 0xffffffff;
        do {
          pcVar11 = pcVar5_mg14;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar11 = pcVar5_mg14 + 1;
          cVar1 = *pcVar5_mg14;
          pcVar5_mg14 = pcVar11;
        } while (cVar1 != '\0');
        uVar19 = ~uVar19;
        pcVar11 = pcVar11 + -uVar19;
        pcVar13 = (char *)&DAT_0080f33a;
        memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        pBVar4 = local_10;
        local_8 = local_8 + 0xf;
        CheckBkView(this_00,local_8,(ushort)(local_10->bmiHeader).biHeight);
        pAVar10 = local_c;
        local_EAX_2923 = thunk_FUN_00526ba0(local_c->field_001F,*(char *)local_c);
        pBVar7 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                              local_EAX_2923);
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x01',
               (byte *)pBVar7);
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x06',
               (byte *)pBVar4);
        local_3c = 0xcd;
        local_34 = (pBVar4->bmiHeader).biWidth;
        local_38 = local_8;
        local_30 = (pBVar4->bmiHeader).biHeight;
        local_2c = 0xb;
        local_2b = pAVar10->field_001F;
        local_27 = (uint)*(byte *)pAVar10;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }
      if (pAVar10->field_0023 != 0) {
        CheckBkView(this_00,local_8,0xf);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar19 = 3;
        iVar17 = -1;
        iVar15 = -3;
        pcVar5_mg18 = LoadResourceString(0x562f,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar5_mg18,iVar15,iVar17,uVar19);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar20 = g_hINSTANCE_00807618;
        UVar5 = thunk_FUN_00523410(pAVar10->field_0023,bVar16,0);
        pcVar5_mg17 = LoadResourceString(UVar5,pHVar20);
        uVar19 = 0xffffffff;
        do {
          pcVar11 = pcVar5_mg17;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar11 = pcVar5_mg17 + 1;
          cVar1 = *pcVar5_mg17;
          pcVar5_mg17 = pcVar11;
        } while (cVar1 != '\0');
        uVar19 = ~uVar19;
        pcVar11 = pcVar11 + -uVar19;
        pcVar13 = (char *)&DAT_0080f33a;
        memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
        for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        local_8 = local_8 + 0xf;
        pBVar7_mg8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,4);
        CheckBkView(this_00,local_8,(ushort)(pBVar7_mg8->bmiHeader).biHeight);
        pAVar10 = local_c;
        local_EAX_3381 = thunk_FUN_00526ba0(local_c->field_0023,*(char *)local_c);
        pBVar7_mg9 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                  local_EAX_3381);
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x01',
               (byte *)pBVar7_mg9);
        pBVar4 = local_10;
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcb,local_8 - 2,'\x06',
               (byte *)local_10);
        local_3c = 0xcb;
        local_34 = (pBVar4->bmiHeader).biWidth;
        local_38 = local_8 - 2;
        local_30 = (pBVar4->bmiHeader).biHeight;
        local_2c = 2;
        local_2b = pAVar10->field_0023;
        local_27 = (uint)*(byte *)pAVar10;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }
      AddLinks(this_00,(int *)&local_8,'\x01',param_1,param_2);
      g_currentExceptionFrame = pIVar21_mg0;
      return;
    }
    g_currentExceptionFrame = pIVar21_mg0;
    iVar14 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x5f8,0,iVar4,
                                "%s","HelpPanelTy::RCProc");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0x5f8);
  }
  return;
}

