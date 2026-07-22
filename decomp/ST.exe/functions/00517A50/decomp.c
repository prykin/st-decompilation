#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::RCProc */

void __thiscall HelpPanelTy::RCProc(HelpPanelTy *this,int param_1,uint param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  int iVar4;
  UINT UVar5;
  uint *puVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  AnonShape_00517A50_98726C61 *pAVar13;
  Global_sub_00526BA0_param_1Enum *pGVar14;
  char *pcVar15;
  byte bVar16;
  int iVar17;
  undefined4 uVar18;
  HINSTANCE pHVar19;
  InternalExceptionFrame *pIVar20;
  int local_7c [16];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  Global_sub_00526BA0_param_1Enum local_2b;
  uint local_27;
  HelpPanelTy *local_20;
  int local_1c;
  char *local_18;
  Global_sub_00526BA0_param_1Enum *local_14;
  byte *local_10;
  AnonShape_00517A50_98726C61 *local_c;
  uint local_8;

  pAVar13 = (AnonShape_00517A50_98726C61 *)0x0;
  local_8 = 0;
  local_c = (AnonShape_00517A50_98726C61 *)0x0;
  local_20 = this;
  local_10 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0248,4);
  uVar12 = 0;
  do {
    if ((*(int *)((int)&DAT_007c3469 + (uint)uVar12 * 0x27) == param_1) &&
       ((byte)(&DAT_007c3468)[(uint)uVar12 * 0x27] == param_2)) {
      pAVar13 = (AnonShape_00517A50_98726C61 *)(&DAT_007c3468 + (uint)uVar12 * 0x27);
      local_c = pAVar13;
      break;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0xb);
  if (pAVar13 != (AnonShape_00517A50_98726C61 *)0x0) {
    pIVar20 = g_currentExceptionFrame;
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff80;
    iVar4 = Library::MSVCRT::__setjmp3(local_7c,0);
    this_00 = local_20;
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_20->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == (CASE_8|CASE_2))) {
          local_20->field_01A2 = HVar2;
          local_20->field_01AB = local_20->field_01A3;
        }
        else {
          local_20->field_01A2 = 0;
          local_20->field_01AB = 0;
        }
        local_20->field_01A1 = CASE_1;
        local_20->field_01A3 = param_1;
        local_20->field_01A7 = param_2;
        local_20->field_01AF = 0x32;
        local_20->field_01B1 = 5;
        if (local_20->field_0178 != 0) {
          local_20->field_0028 = 0x4202;
          *(undefined2 *)&local_20->field_0x2c = 0;
          local_20->field_002E = 2;
          *(undefined4 *)&local_20->field_0x30 = local_20->field_0178;
          if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_20->field_0x18);
          }
        }
      }
      UVar5 = thunk_FUN_005293f0(param_1);
      DrawTitle(this_00,0x55fe,param_2,UVar5);
      bVar16 = (byte)param_2;
      DrawObj(this_00,(int *)&local_8,param_1,bVar16,0);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)LoadResourceString(0x5627,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pAVar13 = local_c;
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      puVar6 = (uint *)LoadResourceString(local_c->field_0005,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar10);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)LoadResourceString(0x5628,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pHVar19 = g_module_00807618;
      UVar5 = thunk_FUN_00523410(pAVar13->field_0009,bVar16,0);
      pcVar7 = LoadResourceString(UVar5,pHVar19);
      uVar10 = 0xffffffff;
      do {
        pcVar15 = pcVar7;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar15 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar15;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar7 = pcVar15 + -uVar10;
      pcVar15 = (char *)&DAT_0080f33a;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar15 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar15 = pcVar15 + 1;
      }
      for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
          puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
        *(undefined1 *)puVar6 = 0x20;
      }
      ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      pAVar13 = local_c;
      local_8 = local_8 + 0xf;
      uVar10 = thunk_FUN_00526ba0(local_c->field_0009,*(char *)local_c);
      pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,uVar10
                                   );
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar8);
      pbVar8 = local_10;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcb,local_8 - 2,'\x06',local_10);
      local_3c = 0xcb;
      local_34 = *(undefined4 *)(pbVar8 + 4);
      local_38 = local_8 - 2;
      local_30 = *(undefined4 *)(pbVar8 + 8);
      local_2c = 2;
      local_2b = pAVar13->field_0009;
      local_27 = param_2;
      Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
      local_8 = local_8 + *(int *)(pbVar8 + 8);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)LoadResourceString(0x5629,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      puVar6 = (uint *)LoadResourceString(0x273f - (pAVar13->field_000D != 0),g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar10);
      local_8 = local_8 + 0xf;
      if (pAVar13->field_000D != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar18 = 3;
        iVar17 = -1;
        iVar4 = -3;
        puVar6 = (uint *)LoadResourceString(0x562a,g_module_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar18);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar19 = g_module_00807618;
        UVar5 = thunk_FUN_00523410(pAVar13->field_000D,bVar16,0);
        pcVar7 = LoadResourceString(UVar5,pHVar19);
        uVar10 = 0xffffffff;
        do {
          pcVar15 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar15 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar15;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = pcVar15 + -uVar10;
        pcVar15 = (char *)&DAT_0080f33a;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar15 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar15 = pcVar15 + 1;
        }
        for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
            puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        pAVar13 = local_c;
        local_8 = local_8 + 0xf;
        uVar10 = thunk_FUN_00526ba0(local_c->field_000D,*(char *)local_c);
        pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                      uVar10);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar8);
        pbVar8 = local_10;
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x06',local_10);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar8 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar8 + 8);
        local_2c = 3;
        local_2b = pAVar13->field_000D;
        local_27 = (uint)*(byte *)pAVar13;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar8 + 8);
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)LoadResourceString(0x562b,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar18);
      local_18 = &pAVar13->field_0x19;
      pGVar14 = (Global_sub_00526BA0_param_1Enum *)&pAVar13->field_0x11;
      local_1c = 2;
      do {
        local_14 = pGVar14;
        if (*pGVar14 != 0) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
          pHVar19 = g_module_00807618;
          UVar5 = thunk_FUN_00523410(*pGVar14,bVar16,0);
          pcVar7 = LoadResourceString(UVar5,pHVar19);
          uVar10 = 0xffffffff;
          do {
            pcVar15 = pcVar7;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar15 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar15;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          pcVar7 = pcVar15 + -uVar10;
          pcVar15 = (char *)&DAT_0080f33a;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar15 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar15 = pcVar15 + 1;
          }
          for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
              puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
            *(undefined1 *)puVar6 = 0x20;
          }
          ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
          pGVar14 = local_14;
          local_8 = local_8 + 0xf;
          uVar10 = thunk_FUN_00526ba0(*local_14,*(char *)local_c);
          pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                        uVar10);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar8);
          pbVar8 = local_10;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcb,local_8 - 2,'\x06',local_10
                );
          local_3c = 0xcb;
          local_34 = *(undefined4 *)(pbVar8 + 4);
          local_38 = local_8 - 2;
          local_30 = *(undefined4 *)(pbVar8 + 8);
          local_2c = 2;
          local_2b = *pGVar14;
          local_27 = (uint)*(byte *)local_c;
          Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
          local_8 = local_8 + *(int *)(pbVar8 + 8);
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
          pIVar20 = (InternalExceptionFrame *)0x3;
          iVar17 = -1;
          iVar4 = -3;
          puVar6 = (uint *)LoadResourceString(0x562c,g_module_00807618);
          ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,pIVar20);
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
          pIVar20 = (InternalExceptionFrame *)((DAT_0080874e != '\x03') - 1 & 5);
          iVar17 = -1;
          iVar4 = 1;
          puVar6 = (uint *)LoadResourceString((-(uint)(*local_18 != '\0') & 0xffffffef) + 0x5641,
                                              g_module_00807618);
          ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,pIVar20);
          local_8 = local_8 + 0xf;
          pAVar13 = local_c;
        }
        pGVar14 = local_14 + 1;
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_14 = pGVar14;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)LoadResourceString(0x562d,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar18);
      pcVar7 = LoadResourceString(*(UINT *)&pAVar13->field_0x1b,g_module_00807618);
      uVar10 = 0xffffffff;
      do {
        pcVar15 = pcVar7;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar15 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar15;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar7 = pcVar15 + -uVar10;
      pcVar15 = (char *)&DAT_0080f33a;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar15 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar15 = pcVar15 + 1;
      }
      ccFntTy::FormText(this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,
                        " ,.;:!?/\\()[]{}",0xcf,1);
      uVar10 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
      CheckBkView(this_00,local_8,uVar10);
      uVar11 = uVar10 & 0xffff;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,uVar11 + 2);
      ccFntTy::WrTxt(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
      if ((ushort)uVar10 < 0x10) {
        uVar11 = 0xf;
      }
      local_8 = local_8 + uVar11;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)LoadResourceString(0x562e,g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pAVar13 = local_c;
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      puVar6 = (uint *)LoadResourceString(0x273f - (local_c->field_001F != 0),g_module_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar10);
      local_8 = local_8 + 0xf;
      if (pAVar13->field_001F != 0) {
        CheckBkView(this_00,local_8,0xf);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar18 = 3;
        iVar17 = -1;
        iVar4 = -3;
        puVar6 = (uint *)LoadResourceString(0x562a,g_module_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar18);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar19 = g_module_00807618;
        UVar5 = thunk_FUN_00523410(pAVar13->field_001F,bVar16,0);
        pcVar7 = LoadResourceString(UVar5,pHVar19);
        uVar10 = 0xffffffff;
        do {
          pcVar15 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar15 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar15;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = pcVar15 + -uVar10;
        pcVar15 = (char *)&DAT_0080f33a;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar15 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar15 = pcVar15 + 1;
        }
        for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
            puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        pbVar8 = local_10;
        local_8 = local_8 + 0xf;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        CheckBkView(this_00,local_8,CONCAT22(extraout_var,*(undefined2 *)(local_10 + 8)));
        pAVar13 = local_c;
        uVar10 = thunk_FUN_00526ba0(local_c->field_001F,*(char *)local_c);
        pbVar9 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                      uVar10);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar9);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x06',pbVar8);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar8 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar8 + 8);
        local_2c = 0xb;
        local_2b = pAVar13->field_001F;
        local_27 = (uint)*(byte *)pAVar13;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar8 + 8);
      }
      if (pAVar13->field_0023 != 0) {
        CheckBkView(this_00,local_8,0xf);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar18 = 3;
        iVar17 = -1;
        iVar4 = -3;
        puVar6 = (uint *)LoadResourceString(0x562f,g_module_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar6,iVar4,iVar17,uVar18);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar19 = g_module_00807618;
        UVar5 = thunk_FUN_00523410(pAVar13->field_0023,bVar16,0);
        pcVar7 = LoadResourceString(UVar5,pHVar19);
        uVar10 = 0xffffffff;
        do {
          pcVar15 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar15 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar15;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = pcVar15 + -uVar10;
        pcVar15 = (char *)&DAT_0080f33a;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar15 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar15 = pcVar15 + 1;
        }
        for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
            puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        local_8 = local_8 + 0xf;
        iVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,4);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        CheckBkView(this_00,local_8,CONCAT22(extraout_var_00,*(undefined2 *)(iVar4 + 8)));
        pAVar13 = local_c;
        uVar10 = thunk_FUN_00526ba0(local_c->field_0023,*(char *)local_c);
        pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                      uVar10);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar8);
        pbVar8 = local_10;
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcb,local_8 - 2,'\x06',local_10);
        local_3c = 0xcb;
        local_34 = *(undefined4 *)(pbVar8 + 4);
        local_38 = local_8 - 2;
        local_30 = *(undefined4 *)(pbVar8 + 8);
        local_2c = 2;
        local_2b = pAVar13->field_0023;
        local_27 = (uint)*(byte *)pAVar13;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar8 + 8);
      }
      AddLinks(this_00,(int *)&local_8,'\x01',param_1,param_2);
      g_currentExceptionFrame = pIVar20;
      return;
    }
    g_currentExceptionFrame = pIVar20;
    iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x5f8,0,iVar4,
                                "%s","HelpPanelTy::RCProc");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0x5f8);
  }
  return;
}

