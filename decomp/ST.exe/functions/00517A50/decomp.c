
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
  uint *extraout_EAX;
  uint *extraout_EAX_00;
  uint *extraout_EAX_01;
  char *extraout_EAX_02;
  uint *puVar6;
  byte *pbVar7;
  uint *extraout_EAX_03;
  uint *extraout_EAX_04;
  uint *extraout_EAX_05;
  char *extraout_EAX_06;
  uint *extraout_EAX_07;
  char *extraout_EAX_08;
  uint *extraout_EAX_09;
  uint *extraout_EAX_10;
  uint *extraout_EAX_11;
  char *extraout_EAX_12;
  uint *extraout_EAX_13;
  uint *extraout_EAX_14;
  uint *extraout_EAX_15;
  char *extraout_EAX_16;
  byte *pbVar8;
  uint *extraout_EAX_17;
  char *extraout_EAX_18;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 unaff_ESI;
  AnonShape_00517A50_98726C61 *pAVar12;
  char *pcVar13;
  void *unaff_EDI;
  Global_sub_00526BA0_param_1Enum *pGVar14;
  char *pcVar15;
  byte bVar16;
  int iVar17;
  undefined4 uVar18;
  HINSTANCE pHVar19;
  InternalExceptionFrame *pIVar20;
  undefined4 local_7c [16];
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
  
  pAVar12 = (AnonShape_00517A50_98726C61 *)0x0;
  local_8 = 0;
  local_c = (AnonShape_00517A50_98726C61 *)0x0;
  local_20 = this;
  local_10 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0248,4);
  uVar11 = 0;
  do {
    if ((*(int *)((int)&DAT_007c3469 + (uint)uVar11 * 0x27) == param_1) &&
       ((byte)(&DAT_007c3468)[(uint)uVar11 * 0x27] == param_2)) {
      pAVar12 = (AnonShape_00517A50_98726C61 *)(&DAT_007c3468 + (uint)uVar11 * 0x27);
      local_c = pAVar12;
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0xb);
  if (pAVar12 != (AnonShape_00517A50_98726C61 *)0x0) {
    pIVar20 = g_currentExceptionFrame;
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff80;
    iVar4 = Library::MSVCRT::__setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
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
          if (PTR_00802a30 != (CursorClassTy *)0x0) {
            (*(code *)**(undefined4 **)PTR_00802a30)(&local_20->field_0x18);
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
      LoadResourceString(0x5627,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pAVar12 = local_c;
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      LoadResourceString(local_c->field_0005,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_00,iVar4,iVar17,uVar9);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      LoadResourceString(0x5628,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_01,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pHVar19 = HINSTANCE_00807618;
      UVar5 = thunk_FUN_00523410(pAVar12->field_0009,bVar16,0);
      LoadResourceString(UVar5,pHVar19);
      uVar9 = 0xffffffff;
      pcVar13 = extraout_EAX_02;
      do {
        pcVar15 = pcVar13;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pcVar13 = pcVar15 + -uVar9;
      pcVar15 = (char *)&DAT_0080f33a;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar15 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar15 = pcVar15 + 1;
      }
      for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
          puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
        *(undefined1 *)puVar6 = 0x20;
      }
      ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      pAVar12 = local_c;
      local_8 = local_8 + 0xf;
      uVar9 = thunk_FUN_00526ba0(local_c->field_0009,*(char *)local_c);
      pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,uVar9)
      ;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar7);
      pbVar7 = local_10;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcb,local_8 - 2,'\x06',local_10);
      local_3c = 0xcb;
      local_34 = *(undefined4 *)(pbVar7 + 4);
      local_38 = local_8 - 2;
      local_30 = *(undefined4 *)(pbVar7 + 8);
      local_2c = 2;
      local_2b = pAVar12->field_0009;
      local_27 = param_2;
      Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
      local_8 = local_8 + *(int *)(pbVar7 + 8);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      LoadResourceString(0x5629,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_03,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      LoadResourceString(0x273f - (pAVar12->field_000D != 0),HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_04,iVar4,iVar17,uVar9);
      local_8 = local_8 + 0xf;
      if (pAVar12->field_000D != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar18 = 3;
        iVar17 = -1;
        iVar4 = -3;
        LoadResourceString(0x562a,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_05,iVar4,iVar17,uVar18);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar19 = HINSTANCE_00807618;
        UVar5 = thunk_FUN_00523410(pAVar12->field_000D,bVar16,0);
        LoadResourceString(UVar5,pHVar19);
        uVar9 = 0xffffffff;
        pcVar13 = extraout_EAX_06;
        do {
          pcVar15 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar15 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar13 = pcVar15 + -uVar9;
        pcVar15 = (char *)&DAT_0080f33a;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
            puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        pAVar12 = local_c;
        local_8 = local_8 + 0xf;
        uVar9 = thunk_FUN_00526ba0(local_c->field_000D,*(char *)local_c);
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                      uVar9);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar7);
        pbVar7 = local_10;
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x06',local_10);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar7 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar7 + 8);
        local_2c = 3;
        local_2b = pAVar12->field_000D;
        local_27 = (uint)*(byte *)pAVar12;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar7 + 8);
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      LoadResourceString(0x562b,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_07,iVar4,iVar17,uVar18);
      local_18 = &pAVar12->field_0x19;
      pGVar14 = (Global_sub_00526BA0_param_1Enum *)&pAVar12->field_0x11;
      local_1c = 2;
      do {
        local_14 = pGVar14;
        if (*pGVar14 != 0) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
          pHVar19 = HINSTANCE_00807618;
          UVar5 = thunk_FUN_00523410(*pGVar14,bVar16,0);
          LoadResourceString(UVar5,pHVar19);
          uVar9 = 0xffffffff;
          pcVar13 = extraout_EAX_08;
          do {
            pcVar15 = pcVar13;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar15 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar15;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar13 = pcVar15 + -uVar9;
          pcVar15 = (char *)&DAT_0080f33a;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar15 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar15 = pcVar15 + 1;
          }
          for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
              puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
            *(undefined1 *)puVar6 = 0x20;
          }
          ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
          pGVar14 = local_14;
          local_8 = local_8 + 0xf;
          uVar9 = thunk_FUN_00526ba0(*local_14,*(char *)local_c);
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                        uVar9);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar7);
          pbVar7 = local_10;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcb,local_8 - 2,'\x06',local_10
                );
          local_3c = 0xcb;
          local_34 = *(undefined4 *)(pbVar7 + 4);
          local_38 = local_8 - 2;
          local_30 = *(undefined4 *)(pbVar7 + 8);
          local_2c = 2;
          local_2b = *pGVar14;
          local_27 = (uint)*(byte *)local_c;
          Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
          local_8 = local_8 + *(int *)(pbVar7 + 8);
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
          pIVar20 = (InternalExceptionFrame *)0x3;
          iVar17 = -1;
          iVar4 = -3;
          LoadResourceString(0x562c,HINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_09,iVar4,iVar17,pIVar20);
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
          pIVar20 = (InternalExceptionFrame *)((DAT_0080874e != '\x03') - 1 & 5);
          iVar17 = -1;
          iVar4 = 1;
          LoadResourceString((-(uint)(*local_18 != '\0') & 0xffffffef) + 0x5641,HINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_10,iVar4,iVar17,pIVar20);
          local_8 = local_8 + 0xf;
          pAVar12 = local_c;
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
      LoadResourceString(0x562d,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_11,iVar4,iVar17,uVar18);
      LoadResourceString(*(UINT *)&pAVar12->field_0x1b,HINSTANCE_00807618);
      uVar9 = 0xffffffff;
      pcVar13 = extraout_EAX_12;
      do {
        pcVar15 = pcVar13;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pcVar13 = pcVar15 + -uVar9;
      pcVar15 = (char *)&DAT_0080f33a;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar15 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar15 = pcVar15 + 1;
      }
      ccFntTy::FormText(this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,
                        s________________007c21d8,0xcf,1);
      uVar9 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
      CheckBkView(this_00,local_8,uVar9);
      uVar10 = uVar9 & 0xffff;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,uVar10 + 2);
      ccFntTy::WrTxt(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
      if ((ushort)uVar9 < 0x10) {
        uVar10 = 0xf;
      }
      local_8 = local_8 + uVar10;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      LoadResourceString(0x562e,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_13,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pAVar12 = local_c;
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      LoadResourceString(0x273f - (local_c->field_001F != 0),HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_14,iVar4,iVar17,uVar9);
      local_8 = local_8 + 0xf;
      if (pAVar12->field_001F != 0) {
        CheckBkView(this_00,local_8,0xf);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar18 = 3;
        iVar17 = -1;
        iVar4 = -3;
        LoadResourceString(0x562a,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_15,iVar4,iVar17,uVar18);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar19 = HINSTANCE_00807618;
        UVar5 = thunk_FUN_00523410(pAVar12->field_001F,bVar16,0);
        LoadResourceString(UVar5,pHVar19);
        uVar9 = 0xffffffff;
        pcVar13 = extraout_EAX_16;
        do {
          pcVar15 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar15 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar13 = pcVar15 + -uVar9;
        pcVar15 = (char *)&DAT_0080f33a;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
            puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        pbVar7 = local_10;
        local_8 = local_8 + 0xf;
        CheckBkView(this_00,local_8,CONCAT22(extraout_var,*(undefined2 *)(local_10 + 8)));
        pAVar12 = local_c;
        uVar9 = thunk_FUN_00526ba0(local_c->field_001F,*(char *)local_c);
        pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                      uVar9);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar8);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x06',pbVar7);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar7 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar7 + 8);
        local_2c = 0xb;
        local_2b = pAVar12->field_001F;
        local_27 = (uint)*(byte *)pAVar12;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar7 + 8);
      }
      if (pAVar12->field_0023 != 0) {
        CheckBkView(this_00,local_8,0xf);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar18 = 3;
        iVar17 = -1;
        iVar4 = -3;
        LoadResourceString(0x562f,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_17,iVar4,iVar17,uVar18);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar19 = HINSTANCE_00807618;
        UVar5 = thunk_FUN_00523410(pAVar12->field_0023,bVar16,0);
        LoadResourceString(UVar5,pHVar19);
        uVar9 = 0xffffffff;
        pcVar13 = extraout_EAX_18;
        do {
          pcVar15 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar15 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar13 = pcVar15 + -uVar9;
        pcVar15 = (char *)&DAT_0080f33a;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
            puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        local_8 = local_8 + 0xf;
        iVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,4);
        CheckBkView(this_00,local_8,CONCAT22(extraout_var_00,*(undefined2 *)(iVar4 + 8)));
        pAVar12 = local_c;
        uVar9 = thunk_FUN_00526ba0(local_c->field_0023,*(char *)local_c);
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                      uVar9);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar7);
        pbVar7 = local_10;
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0xcb,local_8 - 2,'\x06',local_10);
        local_3c = 0xcb;
        local_34 = *(undefined4 *)(pbVar7 + 4);
        local_38 = local_8 - 2;
        local_30 = *(undefined4 *)(pbVar7 + 8);
        local_2c = 2;
        local_2b = pAVar12->field_0023;
        local_27 = (uint)*(byte *)pAVar12;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar7 + 8);
      }
      AddLinks(this_00,(int *)&local_8,'\x01',param_1,param_2);
      g_currentExceptionFrame = pIVar20;
      return;
    }
    g_currentExceptionFrame = pIVar20;
    iVar17 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x5f8,0,iVar4,
                                &DAT_007a4ccc,s_HelpPanelTy__RCProc_007c3c6c);
    if (iVar17 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x5f8);
  }
  return;
}

