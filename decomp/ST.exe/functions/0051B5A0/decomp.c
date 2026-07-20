
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ArmProc */

void __thiscall HelpPanelTy::ArmProc(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  int iVar4;
  UINT UVar5;
  uint uVar6;
  byte *pbVar7;
  uint *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  Global_sub_00526BA0_param_1Enum GVar12;
  void *unaff_EDI;
  int *piVar13;
  char *pcVar14;
  HINSTANCE pHVar15;
  char cVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  Global_sub_005259B0_param_1Enum GVar20;
  undefined4 uVar21;
  InternalExceptionFrame local_a4;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4f;
  undefined4 local_4b;
  HelpPanelTy *local_44;
  int local_40;
  int local_3c;
  byte *local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  Global_sub_00526BA0_param_1Enum local_23;
  int local_1f;
  int local_18;
  int *local_14;
  char local_d;
  Global_sub_00526BA0_param_1Enum local_c;
  uint local_8;
  
  local_8 = 0;
  local_44 = this;
  local_38 = (byte *)FUN_0070b3a0(this->field_0248,4);
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    iVar4 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_44;
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_44->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == (CASE_8|CASE_2))) {
          local_44->field_01A2 = HVar2;
          local_44->field_01AB = local_44->field_01A3;
        }
        else {
          local_44->field_01A2 = 0;
          local_44->field_01AB = 0;
        }
        local_44->field_01A1 = CASE_4;
        local_44->field_01A3 = param_1;
        local_44->field_01A7 = param_2;
        local_44->field_01AF = 0x32;
        local_44->field_01B1 = 5;
        if (local_44->field_0178 != 0) {
          local_44->field_0028 = 0x4202;
          *(undefined2 *)&local_44->field_0x2c = 0;
          local_44->field_002E = 2;
          *(undefined4 *)&local_44->field_0x30 = local_44->field_0178;
          if (PTR_00802a30 != (CursorClassTy *)0x0) {
            (*(code *)**(undefined4 **)PTR_00802a30)(&local_44->field_0x18);
          }
        }
      }
      GVar20 = (Global_sub_005259B0_param_1Enum)param_1;
      UVar5 = thunk_FUN_00524fe0(GVar20);
      DrawTitle(this_00,0x55fd,param_2,UVar5);
      uVar6 = thunk_FUN_005259b0(GVar20,0,'\x01');
      pbVar7 = (byte *)FUN_0070b3a0(this_00->field_0244,uVar6);
      if (pbVar7 != (byte *)0x0) {
        DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0x35,
               (0x1e - *(int *)(pbVar7 + 8)) / 2 + 0x2a,'\x06',pbVar7);
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar21 = 3;
      iVar18 = -1;
      iVar4 = -3;
      puVar8 = (uint *)FUN_006b0140(0x55f8,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar4,iVar18,uVar21);
      iVar18 = 0;
      iVar4 = thunk_FUN_006460c0(param_1);
      if (0 < iVar4) {
        do {
          iVar4 = thunk_FUN_00646110(param_1,iVar18,&local_c,&local_14,&local_18);
          if (iVar4 != 0) {
            ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
            if ((local_14 == (int *)0x0) || (local_18 == 0)) {
              if (iVar18 == 0) {
                uVar21 = FUN_006b0140(0x565c,HINSTANCE_00807618);
                uVar17 = 2;
                uVar9 = FUN_006b0140(0x564c,HINSTANCE_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s___d_d___d_s___d__s__007c3cdc,2,local_c,
                          (DAT_0080874e != '\x03') - 1 & 5,uVar9,uVar17,uVar21);
              }
              else {
                uVar21 = FUN_006b0140(0x565d,HINSTANCE_00807618);
                uVar17 = 2;
                iVar4 = iVar18;
                uVar9 = FUN_006b0140(0x564c,HINSTANCE_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s___d_d___d_s___d__d__s__007c3cf4,2,local_c,
                          (DAT_0080874e != '\x03') - 1 & 5,uVar9,uVar17,iVar4,uVar21);
              }
            }
            else if (iVar18 == 0) {
              uVar21 = FUN_006b0140(0x565c,HINSTANCE_00807618);
              uVar17 = 2;
              uVar9 = FUN_006b0140(0x564c,HINSTANCE_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s___d_d__d__d___d_s___d__s__007c3d10,2,local_c,local_14
                        ,local_18,(DAT_0080874e != '\x03') - 1 & 5,uVar9,uVar17,uVar21);
            }
            else {
              uVar21 = FUN_006b0140(0x565d,HINSTANCE_00807618);
              uVar17 = 2;
              iVar4 = iVar18;
              uVar9 = FUN_006b0140(0x564c,HINSTANCE_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s___d_d__d__d___d_s___d__d__s__007c3d30,2,local_c,
                        local_14,local_18,(DAT_0080874e != '\x03') - 1 & 5,uVar9,uVar17,iVar4,uVar21
                       );
            }
            ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,0);
            local_8 = local_8 + 0xf;
          }
          iVar18 = iVar18 + 1;
          iVar4 = thunk_FUN_006460c0(param_1);
        } while (iVar18 < iVar4);
      }
      iVar4 = param_1 * 3 + -0x1c2;
      local_14 = (int *)(iVar4 * 4);
      if ((&DAT_007bf67c)[iVar4] != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar21 = 3;
        iVar18 = -1;
        iVar4 = -3;
        puVar8 = (uint *)FUN_006b0140(0x5657,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar4,iVar18,uVar21);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        piVar13 = local_14;
        uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar18 = -1;
        iVar4 = 1;
        pHVar15 = HINSTANCE_00807618;
        UVar5 = thunk_FUN_00528060(*(Global_sub_00528060_param_1Enum *)
                                    ((int)&DAT_007bf67c + (int)local_14),'\0');
        puVar8 = (uint *)FUN_006b0140(UVar5,pHVar15);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar4,iVar18,uVar6);
        local_8 = local_8 + 0xf;
        uVar6 = thunk_FUN_005276e0(*(Global_sub_005276E0_param_1Enum *)
                                    ((int)&DAT_007bf67c + (int)piVar13),0);
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_0230,uVar6);
        DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x96,local_8,'\x01',pbVar7);
        local_60 = 0x96;
        local_58 = *(undefined4 *)(pbVar7 + 4);
        local_5c = local_8;
        local_54 = *(undefined4 *)(pbVar7 + 8);
        local_50 = 5;
        local_4b = 0;
        local_4f = *(undefined4 *)((int)&DAT_007bf67c + (int)local_14);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_60);
        local_8 = local_8 + 5 + *(int *)(pbVar7 + 8);
      }
      iVar4 = (&DAT_007e6024)[param_1 * 5 + -0x2ee];
      if (iVar4 != 0) {
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar21 = 3;
        iVar19 = -1;
        iVar18 = -3;
        puVar8 = (uint *)FUN_006b0140(0x55f7,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar18,iVar19,uVar21);
        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14)
        ;
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar4);
        ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        iVar4 = FUN_0070b3a0(this_00->field_0238,0);
        FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,iVar4,0,0x3a);
        local_34 = 0xb4;
        local_2c = *(undefined4 *)(iVar4 + 4);
        local_30 = local_8;
        local_28 = *(undefined4 *)(iVar4 + 8);
        local_24 = 1;
        local_23 = 0xdd;
        local_1f = param_2;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_34);
        local_8 = local_8 + 0x14;
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar21 = FUN_006b0140(0x5658,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c3cd8,uVar21);
      ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,-3,-1,3);
      iVar4 = *(int *)(&DAT_007d1fdc + param_1 * 4);
      if (iVar4 == -1) {
        UVar5 = 0x5617;
      }
      else {
        iVar18 = 0;
        piVar13 = &DAT_007d2234;
        do {
          if (*piVar13 != -1) {
            local_40 = (&DAT_007d2234)[iVar18];
            local_3c = local_40;
            break;
          }
          piVar13 = piVar13 + 1;
          iVar18 = iVar18 + 1;
        } while ((int)piVar13 < 0x7d22e8);
        piVar13 = &DAT_007d2234;
        do {
          iVar18 = *piVar13;
          if (iVar18 != -1) {
            if (iVar18 < local_3c) {
              local_3c = iVar18;
            }
            if (local_40 < iVar18) {
              local_40 = iVar18;
            }
          }
          piVar13 = piVar13 + 1;
        } while ((int)piVar13 < 0x7d22e8);
        iVar18 = (local_40 - local_3c) / 3;
        if (iVar4 < iVar18 + local_3c) {
          UVar5 = 0x5615;
        }
        else {
          UVar5 = (iVar4 < local_3c + iVar18 * 2) + 0x5613;
        }
      }
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar18 = -1;
      iVar4 = 1;
      puVar8 = (uint *)FUN_006b0140(UVar5,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar4,iVar18,uVar6);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar21 = 3;
      iVar18 = -1;
      iVar4 = -3;
      puVar8 = (uint *)FUN_006b0140(0x565e,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar4,iVar18,uVar21);
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar18 = -1;
      iVar4 = 1;
      puVar8 = (uint *)FUN_006b0140(0x273f - (*(int *)(s_blast_p_007d2090 + param_1 * 4) != 0),
                                    HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar4,iVar18,uVar6);
      piVar13 = local_14;
      local_8 = local_8 + 0xf;
      cVar16 = (char)param_2;
      if (*(int *)((int)&DAT_007bf678 + (int)local_14) != 0) {
        local_c = CASE_34;
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar21 = 3;
        iVar18 = -1;
        iVar4 = -3;
        puVar8 = (uint *)FUN_006b0140(0x565f,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar4,iVar18,uVar21);
        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        switch(*(undefined4 *)((int)&DAT_007bf678 + (int)piVar13)) {
        case 1:
          local_c = CASE_34;
          break;
        case 2:
          local_c = CASE_5B;
          break;
        case 3:
          local_c = CASE_44;
          break;
        case 4:
          local_c = CASE_4E;
        }
        pHVar15 = HINSTANCE_00807618;
        UVar5 = thunk_FUN_00523410(local_c,cVar16,0);
        pcVar10 = (char *)FUN_006b0140(UVar5,pHVar15);
        uVar6 = 0xffffffff;
        do {
          pcVar14 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar14 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar14;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar10 = pcVar14 + -uVar6;
        pcVar14 = (char *)&DAT_0080f33a;
        for (uVar11 = uVar6 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar14 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar14 = pcVar14 + 1;
        }
        for (puVar8 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != (uint *)0x0;
            puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
          *(undefined1 *)puVar8 = 0x20;
        }
        ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        GVar12 = local_c;
        local_8 = local_8 + 0xf;
        uVar6 = thunk_FUN_00526ba0(local_c,cVar16);
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_0240,uVar6);
        DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x96,local_8,'\x01',pbVar7);
        pbVar7 = local_38;
        DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_38);
        local_34 = 0x94;
        local_2c = *(undefined4 *)(pbVar7 + 4);
        local_30 = local_8 - 2;
        local_28 = *(undefined4 *)(pbVar7 + 8);
        local_24 = 2;
        local_23 = GVar12;
        local_1f = param_2;
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_34);
        local_8 = local_8 + *(int *)(pbVar7 + 8);
      }
      local_d = '\0';
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar21 = 3;
      iVar18 = -1;
      iVar4 = -3;
      puVar8 = (uint *)FUN_006b0140(0x5660,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar4,iVar18,uVar21);
      local_14 = &DAT_007a8b1c;
      local_c = CASE_1;
      do {
        GVar12 = local_c;
        if ((*local_14 == param_1) && (iVar4 = thunk_FUN_004e8030(local_c), iVar4 == param_2)) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          pHVar15 = HINSTANCE_00807618;
          UVar5 = thunk_FUN_00523410(local_c,cVar16,0);
          pcVar10 = (char *)FUN_006b0140(UVar5,pHVar15);
          uVar6 = 0xffffffff;
          do {
            pcVar14 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar14 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar14;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar10 = pcVar14 + -uVar6;
          pcVar14 = (char *)&DAT_0080f33a;
          for (uVar11 = uVar6 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar14 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar14 = pcVar14 + 1;
          }
          for (puVar8 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != (uint *)0x0;
              puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
            *(undefined1 *)puVar8 = 0x20;
          }
          ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
          GVar12 = local_c;
          local_8 = local_8 + 0xf;
          uVar6 = thunk_FUN_00526ba0(local_c,cVar16);
          pbVar7 = (byte *)FUN_0070b3a0(this_00->field_023C,uVar6);
          DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x96,local_8,'\x01',pbVar7);
          pbVar7 = local_38;
          DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_38
                );
          local_34 = 0x94;
          local_2c = *(undefined4 *)(pbVar7 + 4);
          local_30 = local_8 - 2;
          local_28 = *(undefined4 *)(pbVar7 + 8);
          local_24 = 3;
          local_23 = GVar12;
          local_1f = param_2;
          Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_34);
          local_8 = local_8 + *(int *)(pbVar7 + 8);
          local_d = '\x01';
        }
        local_14 = local_14 + 1;
        local_c = GVar12 + CASE_1;
      } while ((int)GVar12 < 0x28);
      local_14 = &DAT_007a8cfc;
      local_c = CASE_1;
      do {
        GVar12 = local_c;
        if ((*local_14 == param_1) && (iVar4 = thunk_FUN_004e8030(local_c), iVar4 == param_2)) {
          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          pHVar15 = HINSTANCE_00807618;
          UVar5 = thunk_FUN_00523410(local_c,cVar16,0);
          pcVar10 = (char *)FUN_006b0140(UVar5,pHVar15);
          uVar6 = 0xffffffff;
          do {
            pcVar14 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar14 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar14;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar10 = pcVar14 + -uVar6;
          pcVar14 = (char *)&DAT_0080f33a;
          for (uVar11 = uVar6 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar14 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar14 = pcVar14 + 1;
          }
          for (puVar8 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != (uint *)0x0;
              puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
            *(undefined1 *)puVar8 = 0x20;
          }
          ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
          GVar12 = local_c;
          local_8 = local_8 + 0xf;
          uVar6 = thunk_FUN_00526ba0(local_c,cVar16);
          pbVar7 = (byte *)FUN_0070b3a0(this_00->field_023C,uVar6);
          DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x96,local_8,'\x01',pbVar7);
          pbVar7 = local_38;
          DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_38
                );
          local_34 = 0x94;
          local_2c = *(undefined4 *)(pbVar7 + 4);
          local_30 = local_8 - 2;
          local_28 = *(undefined4 *)(pbVar7 + 8);
          local_24 = 3;
          local_23 = GVar12;
          local_1f = param_2;
          Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_34);
          local_8 = local_8 + *(int *)(pbVar7 + 8);
          local_d = '\x01';
        }
        local_14 = local_14 + 1;
        local_c = GVar12 + CASE_1;
        if (0x27 < (int)GVar12) {
          piVar13 = &DAT_00792ca0;
          local_c = CASE_32;
          do {
            local_18 = 2;
            GVar12 = local_c;
            do {
              if ((*piVar13 == param_1) &&
                 (local_14 = piVar13, iVar4 = thunk_FUN_004e8030(GVar12), iVar4 == param_2)) {
                ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,
                                 0xf);
                pHVar15 = HINSTANCE_00807618;
                UVar5 = thunk_FUN_00523410(local_c,cVar16,0);
                pcVar10 = (char *)FUN_006b0140(UVar5,pHVar15);
                uVar6 = 0xffffffff;
                do {
                  pcVar14 = pcVar10;
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  pcVar14 = pcVar10 + 1;
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar14;
                } while (cVar1 != '\0');
                uVar6 = ~uVar6;
                pcVar10 = pcVar14 + -uVar6;
                pcVar14 = (char *)&DAT_0080f33a;
                for (uVar11 = uVar6 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
                  pcVar10 = pcVar10 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar14 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                  pcVar14 = pcVar14 + 1;
                }
                for (puVar8 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n');
                    puVar8 != (uint *)0x0; puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
                  *(undefined1 *)puVar8 = 0x20;
                }
                ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,
                               (DAT_0080874e != '\x03') - 1 & 5);
                GVar12 = local_c;
                local_8 = local_8 + 0xf;
                uVar6 = thunk_FUN_00526ba0(local_c,cVar16);
                pbVar7 = (byte *)FUN_0070b3a0(this_00->field_0240,uVar6);
                DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x96,local_8,'\x01',pbVar7
                      );
                pbVar7 = local_38;
                DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x94,local_8 - 2,'\x06',
                       local_38);
                local_34 = 0x94;
                local_2c = *(undefined4 *)(pbVar7 + 4);
                local_30 = local_8 - 2;
                local_28 = *(undefined4 *)(pbVar7 + 8);
                local_24 = 2;
                local_23 = GVar12;
                local_1f = param_2;
                Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_34);
                local_8 = local_8 + *(int *)(pbVar7 + 8);
                local_d = '\x01';
                GVar12 = local_c;
                piVar13 = local_14;
              }
              piVar13 = piVar13 + 3;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
            local_c = GVar12 + CASE_1;
            if (0x41 < (int)(GVar12 - (CASE_20|CASE_11))) {
              if (local_d == '\0') {
                local_8 = local_8 + 0xf;
              }
              local_14 = piVar13;
              UVar5 = thunk_FUN_00525ca0(GVar20);
              DrawDescription(this_00,(int *)&local_8,UVar5);
              AddLinks(this_00,(int *)&local_8,'\x04',param_1,param_2);
              g_currentExceptionFrame = local_a4.previous;
              return;
            }
          } while( true );
        }
      } while( true );
    }
    g_currentExceptionFrame = local_a4.previous;
    iVar18 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x8c4,0,iVar4,
                                &DAT_007a4ccc,s_HelpPanelTy__ArmProc_007c3cbc);
    if (iVar18 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x8c4);
  }
  return;
}

