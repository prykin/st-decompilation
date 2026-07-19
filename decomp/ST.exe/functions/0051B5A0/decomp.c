
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ArmProc */

void __thiscall HelpPanelTy::ArmProc(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  UINT UVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  Global_sub_00526BA0_param_1Enum GVar11;
  void *unaff_EDI;
  int *piVar12;
  char *pcVar13;
  HINSTANCE pHVar14;
  char cVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  Global_sub_005259B0_param_1Enum GVar19;
  undefined4 uVar20;
  InternalExceptionFrame local_a4;
  undefined4 local_60;
  int local_5c;
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
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  Global_sub_00526BA0_param_1Enum local_23;
  int local_1f;
  int local_18;
  int *local_14;
  char local_d;
  Global_sub_00526BA0_param_1Enum local_c;
  int local_8;
  
  local_8 = 0;
  local_44 = this;
  local_38 = (byte *)FUN_0070b3a0(this->field_0248,4);
  if (DAT_007fa174 != 0) {
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    iVar3 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_44;
    if (iVar3 == 0) {
      if (param_3 == '\0') {
        cVar15 = local_44->field_01A1;
        if (((cVar15 == '\0') || (cVar15 == '\x06')) || (cVar15 == '\n')) {
          local_44->field_01A2 = cVar15;
          *(undefined4 *)&local_44->field_0x1ab = local_44->field_01A3;
        }
        else {
          local_44->field_01A2 = 0;
          *(undefined4 *)&local_44->field_0x1ab = 0;
        }
        local_44->field_01A1 = 4;
        local_44->field_01A3 = param_1;
        local_44->field_01A7 = param_2;
        *(undefined2 *)&local_44->field_0x1af = 0x32;
        *(undefined2 *)&local_44->field_0x1b1 = 5;
        if (*(int *)&local_44->field_0x178 != 0) {
          local_44->field_0028 = 0x4202;
          *(undefined2 *)&local_44->field_0x2c = 0;
          local_44->field_002E = 2;
          *(int *)&local_44->field_0x30 = *(int *)&local_44->field_0x178;
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(&local_44->field_0x18);
          }
        }
      }
      GVar19 = (Global_sub_005259B0_param_1Enum)param_1;
      UVar4 = thunk_FUN_00524fe0(GVar19);
      DrawTitle(this_00,0x55fd,param_2,UVar4);
      uVar5 = thunk_FUN_005259b0(GVar19,0,'\x01');
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x244,uVar5);
      if (pbVar6 != (byte *)0x0) {
        thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,0x35,
                           (0x1e - *(int *)(pbVar6 + 8)) / 2 + 0x2a,'\x06',pbVar6);
      }
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar20 = 3;
      iVar17 = -1;
      iVar3 = -3;
      puVar7 = (uint *)FUN_006b0140(0x55f8,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar7,iVar3,iVar17,uVar20);
      iVar17 = 0;
      iVar3 = thunk_FUN_006460c0(param_1);
      if (0 < iVar3) {
        do {
          iVar3 = thunk_FUN_00646110(param_1,iVar17,&local_c,&local_14,&local_18);
          if (iVar3 != 0) {
            ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0x96,local_8,
                             0x106,0xf);
            if ((local_14 == (int *)0x0) || (local_18 == 0)) {
              if (iVar17 == 0) {
                uVar20 = FUN_006b0140(0x565c,DAT_00807618);
                uVar16 = 2;
                uVar8 = FUN_006b0140(0x564c,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s___d_d___d_s___d__s__007c3cdc,2,local_c,
                          (DAT_0080874e != '\x03') - 1 & 5,uVar8,uVar16,uVar20);
              }
              else {
                uVar20 = FUN_006b0140(0x565d,DAT_00807618);
                uVar16 = 2;
                iVar3 = iVar17;
                uVar8 = FUN_006b0140(0x564c,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s___d_d___d_s___d__d__s__007c3cf4,2,local_c,
                          (DAT_0080874e != '\x03') - 1 & 5,uVar8,uVar16,iVar3,uVar20);
              }
            }
            else if (iVar17 == 0) {
              uVar20 = FUN_006b0140(0x565c,DAT_00807618);
              uVar16 = 2;
              uVar8 = FUN_006b0140(0x564c,DAT_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s___d_d__d__d___d_s___d__s__007c3d10,2,local_c,local_14
                        ,local_18,(DAT_0080874e != '\x03') - 1 & 5,uVar8,uVar16,uVar20);
            }
            else {
              uVar20 = FUN_006b0140(0x565d,DAT_00807618);
              uVar16 = 2;
              iVar3 = iVar17;
              uVar8 = FUN_006b0140(0x564c,DAT_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s___d_d__d__d___d_s___d__d__s__007c3d30,2,local_c,
                        local_14,local_18,(DAT_0080874e != '\x03') - 1 & 5,uVar8,uVar16,iVar3,uVar20
                       );
            }
            ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,0);
            local_8 = local_8 + 0xf;
          }
          iVar17 = iVar17 + 1;
          iVar3 = thunk_FUN_006460c0(param_1);
        } while (iVar17 < iVar3);
      }
      iVar3 = param_1 * 3 + -0x1c2;
      local_14 = (int *)(iVar3 * 4);
      if ((&DAT_007bf67c)[iVar3] != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,0x91,0xf
                        );
        uVar20 = 3;
        iVar17 = -1;
        iVar3 = -3;
        puVar7 = (uint *)FUN_006b0140(0x5657,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar7,iVar3,iVar17,uVar20);
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0x96,local_8,0x106
                         ,0xf);
        piVar12 = local_14;
        uVar5 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar17 = -1;
        iVar3 = 1;
        pHVar14 = DAT_00807618;
        UVar4 = thunk_FUN_00528060(*(Global_sub_00528060_param_1Enum *)
                                    ((int)&DAT_007bf67c + (int)local_14),'\0');
        puVar7 = (uint *)FUN_006b0140(UVar4,pHVar14);
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar7,iVar3,iVar17,uVar5);
        local_8 = local_8 + 0xf;
        uVar5 = thunk_FUN_005276e0(*(Global_sub_005276E0_param_1Enum *)
                                    ((int)&DAT_007bf67c + (int)piVar12),0);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x230,uVar5);
        thunk_FUN_00540760((undefined4 *)this_00->field_0218,0x96,local_8,'\x01',pbVar6);
        local_60 = 0x96;
        local_58 = *(undefined4 *)(pbVar6 + 4);
        local_5c = local_8;
        local_54 = *(undefined4 *)(pbVar6 + 8);
        local_50 = 5;
        local_4b = 0;
        local_4f = *(undefined4 *)((int)&DAT_007bf67c + (int)local_14);
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_60);
        local_8 = local_8 + 5 + *(int *)(pbVar6 + 8);
      }
      iVar3 = (&DAT_007e6024)[param_1 * 5 + -0x2ee];
      if (iVar3 != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,0x91,0xf
                        );
        uVar20 = 3;
        iVar18 = -1;
        iVar17 = -3;
        puVar7 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar7,iVar17,iVar18,uVar20);
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e8,this_00->field_0218,0,0x96,local_8 + -3,
                         0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar3);
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e8,&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        iVar3 = FUN_0070b3a0(*(int *)&this_00->field_0x238,0);
        FUN_006b5440(this_00->field_0218,0,0xb4,local_8,iVar3,0,0x3a);
        local_34 = 0xb4;
        local_2c = *(undefined4 *)(iVar3 + 4);
        local_30 = local_8;
        local_28 = *(undefined4 *)(iVar3 + 8);
        local_24 = 1;
        local_23 = 0xdd;
        local_1f = param_2;
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_34);
        local_8 = local_8 + 0x14;
      }
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar20 = FUN_006b0140(0x5658,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c3cd8,uVar20);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,-3,-1,3);
      iVar3 = *(int *)(&DAT_007d1fdc + param_1 * 4);
      if (iVar3 == -1) {
        UVar4 = 0x5617;
      }
      else {
        iVar17 = 0;
        piVar12 = &DAT_007d2234;
        do {
          if (*piVar12 != -1) {
            local_40 = (&DAT_007d2234)[iVar17];
            local_3c = local_40;
            break;
          }
          piVar12 = piVar12 + 1;
          iVar17 = iVar17 + 1;
        } while ((int)piVar12 < 0x7d22e8);
        piVar12 = &DAT_007d2234;
        do {
          iVar17 = *piVar12;
          if (iVar17 != -1) {
            if (iVar17 < local_3c) {
              local_3c = iVar17;
            }
            if (local_40 < iVar17) {
              local_40 = iVar17;
            }
          }
          piVar12 = piVar12 + 1;
        } while ((int)piVar12 < 0x7d22e8);
        iVar17 = (local_40 - local_3c) / 3;
        if (iVar3 < iVar17 + local_3c) {
          UVar4 = 0x5615;
        }
        else {
          UVar4 = (iVar3 < local_3c + iVar17 * 2) + 0x5613;
        }
      }
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0x96,local_8,0x106,
                       0xf);
      uVar5 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar3 = 1;
      puVar7 = (uint *)FUN_006b0140(UVar4,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar7,iVar3,iVar17,uVar5);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar20 = 3;
      iVar17 = -1;
      iVar3 = -3;
      puVar7 = (uint *)FUN_006b0140(0x565e,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar7,iVar3,iVar17,uVar20);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0x96,local_8,0x106,
                       0xf);
      uVar5 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar3 = 1;
      puVar7 = (uint *)FUN_006b0140(0x273f - (*(int *)(s_blast_p_007d2090 + param_1 * 4) != 0),
                                    DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar7,iVar3,iVar17,uVar5);
      piVar12 = local_14;
      local_8 = local_8 + 0xf;
      cVar15 = (char)param_2;
      if (*(int *)((int)&DAT_007bf678 + (int)local_14) != 0) {
        local_c = CASE_34;
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,0x91,0xf
                        );
        uVar20 = 3;
        iVar17 = -1;
        iVar3 = -3;
        puVar7 = (uint *)FUN_006b0140(0x565f,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar7,iVar3,iVar17,uVar20);
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0x96,local_8,0x106
                         ,0xf);
        switch(*(undefined4 *)((int)&DAT_007bf678 + (int)piVar12)) {
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
        pHVar14 = DAT_00807618;
        UVar4 = thunk_FUN_00523410(local_c,cVar15,0);
        pcVar9 = (char *)FUN_006b0140(UVar4,pHVar14);
        uVar5 = 0xffffffff;
        do {
          pcVar13 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar13 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar13;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar9 = pcVar13 + -uVar5;
        pcVar13 = (char *)&DAT_0080f33a;
        for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar13 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar13 = pcVar13 + 1;
        }
        for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != (uint *)0x0;
            puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
          *(undefined1 *)puVar7 = 0x20;
        }
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        GVar11 = local_c;
        local_8 = local_8 + 0xf;
        uVar5 = thunk_FUN_00526ba0(local_c,cVar15);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x240,uVar5);
        thunk_FUN_00540760((undefined4 *)this_00->field_0218,0x96,local_8,'\x01',pbVar6);
        pbVar6 = local_38;
        thunk_FUN_00540760((undefined4 *)this_00->field_0218,0x94,local_8 + -2,'\x06',local_38);
        local_34 = 0x94;
        local_2c = *(undefined4 *)(pbVar6 + 4);
        local_30 = local_8 + -2;
        local_28 = *(undefined4 *)(pbVar6 + 8);
        local_24 = 2;
        local_23 = GVar11;
        local_1f = param_2;
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_34);
        local_8 = local_8 + *(int *)(pbVar6 + 8);
      }
      local_d = '\0';
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar20 = 3;
      iVar17 = -1;
      iVar3 = -3;
      puVar7 = (uint *)FUN_006b0140(0x5660,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar7,iVar3,iVar17,uVar20);
      local_14 = &DAT_007a8b1c;
      local_c = CASE_1;
      do {
        GVar11 = local_c;
        if ((*local_14 == param_1) && (iVar3 = thunk_FUN_004e8030(local_c), iVar3 == param_2)) {
          ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0x96,local_8,
                           0x106,0xf);
          pHVar14 = DAT_00807618;
          UVar4 = thunk_FUN_00523410(local_c,cVar15,0);
          pcVar9 = (char *)FUN_006b0140(UVar4,pHVar14);
          uVar5 = 0xffffffff;
          do {
            pcVar13 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar13 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar13;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar9 = pcVar13 + -uVar5;
          pcVar13 = (char *)&DAT_0080f33a;
          for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar13 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar13 = pcVar13 + 1;
          }
          for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != (uint *)0x0;
              puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
            *(undefined1 *)puVar7 = 0x20;
          }
          ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          GVar11 = local_c;
          local_8 = local_8 + 0xf;
          uVar5 = thunk_FUN_00526ba0(local_c,cVar15);
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x23c,uVar5);
          thunk_FUN_00540760((undefined4 *)this_00->field_0218,0x96,local_8,'\x01',pbVar6);
          pbVar6 = local_38;
          thunk_FUN_00540760((undefined4 *)this_00->field_0218,0x94,local_8 + -2,'\x06',local_38);
          local_34 = 0x94;
          local_2c = *(undefined4 *)(pbVar6 + 4);
          local_30 = local_8 + -2;
          local_28 = *(undefined4 *)(pbVar6 + 8);
          local_24 = 3;
          local_23 = GVar11;
          local_1f = param_2;
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_34);
          local_8 = local_8 + *(int *)(pbVar6 + 8);
          local_d = '\x01';
        }
        local_14 = local_14 + 1;
        local_c = GVar11 + CASE_1;
      } while ((int)GVar11 < 0x28);
      local_14 = &DAT_007a8cfc;
      local_c = CASE_1;
      do {
        GVar11 = local_c;
        if ((*local_14 == param_1) && (iVar3 = thunk_FUN_004e8030(local_c), iVar3 == param_2)) {
          ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0x96,local_8,
                           0x106,0xf);
          pHVar14 = DAT_00807618;
          UVar4 = thunk_FUN_00523410(local_c,cVar15,0);
          pcVar9 = (char *)FUN_006b0140(UVar4,pHVar14);
          uVar5 = 0xffffffff;
          do {
            pcVar13 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar13 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar13;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar9 = pcVar13 + -uVar5;
          pcVar13 = (char *)&DAT_0080f33a;
          for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar13 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar13 = pcVar13 + 1;
          }
          for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != (uint *)0x0;
              puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
            *(undefined1 *)puVar7 = 0x20;
          }
          ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          GVar11 = local_c;
          local_8 = local_8 + 0xf;
          uVar5 = thunk_FUN_00526ba0(local_c,cVar15);
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x23c,uVar5);
          thunk_FUN_00540760((undefined4 *)this_00->field_0218,0x96,local_8,'\x01',pbVar6);
          pbVar6 = local_38;
          thunk_FUN_00540760((undefined4 *)this_00->field_0218,0x94,local_8 + -2,'\x06',local_38);
          local_34 = 0x94;
          local_2c = *(undefined4 *)(pbVar6 + 4);
          local_30 = local_8 + -2;
          local_28 = *(undefined4 *)(pbVar6 + 8);
          local_24 = 3;
          local_23 = GVar11;
          local_1f = param_2;
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_34);
          local_8 = local_8 + *(int *)(pbVar6 + 8);
          local_d = '\x01';
        }
        local_14 = local_14 + 1;
        local_c = GVar11 + CASE_1;
        if (0x27 < (int)GVar11) {
          piVar12 = &DAT_00792ca0;
          local_c = CASE_32;
          do {
            local_18 = 2;
            GVar11 = local_c;
            do {
              if ((*piVar12 == param_1) &&
                 (local_14 = piVar12, iVar3 = thunk_FUN_004e8030(GVar11), iVar3 == param_2)) {
                ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0x96,
                                 local_8,0x106,0xf);
                pHVar14 = DAT_00807618;
                UVar4 = thunk_FUN_00523410(local_c,cVar15,0);
                pcVar9 = (char *)FUN_006b0140(UVar4,pHVar14);
                uVar5 = 0xffffffff;
                do {
                  pcVar13 = pcVar9;
                  if (uVar5 == 0) break;
                  uVar5 = uVar5 - 1;
                  pcVar13 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar13;
                } while (cVar1 != '\0');
                uVar5 = ~uVar5;
                pcVar9 = pcVar13 + -uVar5;
                pcVar13 = (char *)&DAT_0080f33a;
                for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *pcVar13 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  pcVar13 = pcVar13 + 1;
                }
                for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n');
                    puVar7 != (uint *)0x0; puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
                  *(undefined1 *)puVar7 = 0x20;
                }
                ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                               (DAT_0080874e != '\x03') - 1 & 5);
                GVar11 = local_c;
                local_8 = local_8 + 0xf;
                uVar5 = thunk_FUN_00526ba0(local_c,cVar15);
                pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x240,uVar5);
                thunk_FUN_00540760((undefined4 *)this_00->field_0218,0x96,local_8,'\x01',pbVar6);
                pbVar6 = local_38;
                thunk_FUN_00540760((undefined4 *)this_00->field_0218,0x94,local_8 + -2,'\x06',
                                   local_38);
                local_34 = 0x94;
                local_2c = *(undefined4 *)(pbVar6 + 4);
                local_30 = local_8 + -2;
                local_28 = *(undefined4 *)(pbVar6 + 8);
                local_24 = 2;
                local_23 = GVar11;
                local_1f = param_2;
                Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_34);
                local_8 = local_8 + *(int *)(pbVar6 + 8);
                local_d = '\x01';
                GVar11 = local_c;
                piVar12 = local_14;
              }
              piVar12 = piVar12 + 3;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
            local_c = GVar11 + CASE_1;
            if (0x41 < (int)(GVar11 - (CASE_20|CASE_11))) {
              if (local_d == '\0') {
                local_8 = local_8 + 0xf;
              }
              local_14 = piVar12;
              UVar4 = thunk_FUN_00525ca0(GVar19);
              DrawDescription(this_00,&local_8,UVar4);
              AddLinks(this_00,&local_8,'\x04',param_1,param_2);
              g_currentExceptionFrame = local_a4.previous;
              return;
            }
          } while( true );
        }
      } while( true );
    }
    g_currentExceptionFrame = local_a4.previous;
    iVar17 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x8c4,0,iVar3,
                                &DAT_007a4ccc,s_HelpPanelTy__ArmProc_007c3cbc);
    if (iVar17 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x8c4);
  }
  return;
}

