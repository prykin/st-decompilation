
void __thiscall HelpPanelTy::ArmProc(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy HVar2;
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
  void *unaff_EDI;
  int *piVar12;
  char *pcVar13;
  HINSTANCE pHVar14;
  char cVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  InternalExceptionFrame IStack_a4;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  HelpPanelTy *pHStack_44;
  int iStack_40;
  int iStack_3c;
  byte *pbStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  int iStack_23;
  int iStack_1f;
  int iStack_18;
  int *piStack_14;
  char cStack_d;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  pHStack_44 = this;
  pbStack_38 = (byte *)FUN_0070b3a0(*(int *)(this + 0x248),4);
  if (DAT_007fa174 != 0) {
    IStack_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_a4;
    iVar4 = __setjmp3(IStack_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = pHStack_44;
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        HVar2 = pHStack_44[0x1a1];
        if (((HVar2 == (HelpPanelTy)0x0) || (HVar2 == (HelpPanelTy)0x6)) ||
           (HVar2 == (HelpPanelTy)0xa)) {
          pHStack_44[0x1a2] = HVar2;
          *(undefined4 *)(pHStack_44 + 0x1ab) = *(undefined4 *)(pHStack_44 + 0x1a3);
        }
        else {
          pHStack_44[0x1a2] = (HelpPanelTy)0x0;
          *(undefined4 *)(pHStack_44 + 0x1ab) = 0;
        }
        pHStack_44[0x1a1] = (HelpPanelTy)0x4;
        *(int *)(pHStack_44 + 0x1a3) = param_1;
        *(int *)(pHStack_44 + 0x1a7) = param_2;
        *(undefined2 *)(pHStack_44 + 0x1af) = 0x32;
        *(undefined2 *)(pHStack_44 + 0x1b1) = 5;
        if (*(int *)(pHStack_44 + 0x178) != 0) {
          *(undefined4 *)(pHStack_44 + 0x28) = 0x4202;
          *(undefined2 *)(pHStack_44 + 0x2c) = 0;
          *(undefined2 *)(pHStack_44 + 0x2e) = 2;
          *(int *)(pHStack_44 + 0x30) = *(int *)(pHStack_44 + 0x178);
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(pHStack_44 + 0x18);
          }
        }
      }
      uVar19 = (undefined2)param_1;
      UVar5 = thunk_FUN_00524fe0(uVar19);
      DrawTitle(this_00,0x55fd,param_2,UVar5);
      uVar6 = thunk_FUN_005259b0(uVar19,0,'\x01');
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x244),uVar6);
      if (pbVar7 != (byte *)0x0) {
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),0x35,
                           (0x1e - *(int *)(pbVar7 + 8)) / 2 + 0x2a,'\x06',pbVar7);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar20 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar8 = (uint *)FUN_006b0140(0x55f8,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar8,iVar4,iVar17,uVar20);
      iVar17 = 0;
      iVar4 = thunk_FUN_006460c0(param_1);
      if (0 < iVar4) {
        do {
          iVar4 = thunk_FUN_00646110(param_1,iVar17,&iStack_c,&piStack_14,&iStack_18);
          if (iVar4 != 0) {
            ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,
                             iStack_8,0x106,0xf);
            if ((piStack_14 == (int *)0x0) || (iStack_18 == 0)) {
              if (iVar17 == 0) {
                uVar20 = FUN_006b0140(0x565c,DAT_00807618);
                uVar16 = 2;
                uVar9 = FUN_006b0140(0x564c,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s___d_d___d_s___d__s__007c3cdc,2,iStack_c,
                          (DAT_0080874e != '\x03') - 1 & 5,uVar9,uVar16,uVar20);
              }
              else {
                uVar20 = FUN_006b0140(0x565d,DAT_00807618);
                uVar16 = 2;
                iVar4 = iVar17;
                uVar9 = FUN_006b0140(0x564c,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s___d_d___d_s___d__d__s__007c3cf4,2,iStack_c,
                          (DAT_0080874e != '\x03') - 1 & 5,uVar9,uVar16,iVar4,uVar20);
              }
            }
            else if (iVar17 == 0) {
              uVar20 = FUN_006b0140(0x565c,DAT_00807618);
              uVar16 = 2;
              uVar9 = FUN_006b0140(0x564c,DAT_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s___d_d__d__d___d_s___d__s__007c3d10,2,iStack_c,
                        piStack_14,iStack_18,(DAT_0080874e != '\x03') - 1 & 5,uVar9,uVar16,uVar20);
            }
            else {
              uVar20 = FUN_006b0140(0x565d,DAT_00807618);
              uVar16 = 2;
              iVar4 = iVar17;
              uVar9 = FUN_006b0140(0x564c,DAT_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s___d_d__d__d___d_s___d__d__s__007c3d30,2,iStack_c,
                        piStack_14,iStack_18,(DAT_0080874e != '\x03') - 1 & 5,uVar9,uVar16,iVar4,
                        uVar20);
            }
            ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,0);
            iStack_8 = iStack_8 + 0xf;
          }
          iVar17 = iVar17 + 1;
          iVar4 = thunk_FUN_006460c0(param_1);
        } while (iVar17 < iVar4);
      }
      iVar4 = param_1 * 3 + -0x1c2;
      piStack_14 = (int *)(iVar4 * 4);
      if ((&DAT_007bf67c)[iVar4] != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                         0xf);
        uVar20 = 3;
        iVar17 = -1;
        iVar4 = -3;
        puVar8 = (uint *)FUN_006b0140(0x5657,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar8,iVar4,iVar17,uVar20);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        piVar12 = piStack_14;
        uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar17 = -1;
        iVar4 = 1;
        pHVar14 = DAT_00807618;
        UVar5 = thunk_FUN_00528060(*(undefined1 *)((int)&DAT_007bf67c + (int)piStack_14),'\0');
        puVar8 = (uint *)FUN_006b0140(UVar5,pHVar14);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar8,iVar4,iVar17,uVar6);
        iStack_8 = iStack_8 + 0xf;
        uVar6 = thunk_FUN_005276e0(*(undefined1 *)((int)&DAT_007bf67c + (int)piVar12),0);
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x230),uVar6);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar7);
        uStack_60 = 0x96;
        uStack_58 = *(undefined4 *)(pbVar7 + 4);
        iStack_5c = iStack_8;
        uStack_54 = *(undefined4 *)(pbVar7 + 8);
        uStack_50 = 5;
        uStack_4b = 0;
        uStack_4f = *(undefined4 *)((int)&DAT_007bf67c + (int)piStack_14);
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_60);
        iStack_8 = iStack_8 + 5 + *(int *)(pbVar7 + 8);
      }
      iVar4 = (&DAT_007e6024)[param_1 * 5 + -0x2ee];
      if (iVar4 != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                         0xf);
        uVar20 = 3;
        iVar18 = -1;
        iVar17 = -3;
        puVar8 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar8,iVar17,iVar18,uVar20);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,
                         iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar4);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        iVar4 = FUN_0070b3a0(*(int *)(this_00 + 0x238),0);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,iStack_8,iVar4,0,0x3a);
        uStack_34 = 0xb4;
        uStack_2c = *(undefined4 *)(iVar4 + 4);
        iStack_30 = iStack_8;
        uStack_28 = *(undefined4 *)(iVar4 + 8);
        uStack_24 = 1;
        iStack_23 = 0xdd;
        iStack_1f = param_2;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_34);
        iStack_8 = iStack_8 + 0x14;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar20 = FUN_006b0140(0x5658,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c3cd8,uVar20);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,-3,-1,3);
      iVar4 = *(int *)(&DAT_007d1fdc + param_1 * 4);
      if (iVar4 == -1) {
        UVar5 = 0x5617;
      }
      else {
        iVar17 = 0;
        piVar12 = &DAT_007d2234;
        do {
          if (*piVar12 != -1) {
            iStack_40 = (&DAT_007d2234)[iVar17];
            iStack_3c = iStack_40;
            break;
          }
          piVar12 = piVar12 + 1;
          iVar17 = iVar17 + 1;
        } while ((int)piVar12 < 0x7d22e8);
        piVar12 = &DAT_007d2234;
        do {
          iVar17 = *piVar12;
          if (iVar17 != -1) {
            if (iVar17 < iStack_3c) {
              iStack_3c = iVar17;
            }
            if (iStack_40 < iVar17) {
              iStack_40 = iVar17;
            }
          }
          piVar12 = piVar12 + 1;
        } while ((int)piVar12 < 0x7d22e8);
        iVar17 = (iStack_40 - iStack_3c) / 3;
        if (iVar4 < iVar17 + iStack_3c) {
          UVar5 = 0x5615;
        }
        else {
          UVar5 = (iVar4 < iStack_3c + iVar17 * 2) + 0x5613;
        }
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      puVar8 = (uint *)FUN_006b0140(UVar5,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar8,iVar4,iVar17,uVar6);
      iStack_8 = iStack_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar20 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar8 = (uint *)FUN_006b0140(0x565e,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar8,iVar4,iVar17,uVar20);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      puVar8 = (uint *)FUN_006b0140(0x273f - (*(int *)(s_blast_p_007d2090 + param_1 * 4) != 0),
                                    DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar8,iVar4,iVar17,uVar6);
      piVar12 = piStack_14;
      iStack_8 = iStack_8 + 0xf;
      cVar15 = (char)param_2;
      if (*(int *)((int)&DAT_007bf678 + (int)piStack_14) != 0) {
        iStack_c = 0x34;
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                         0xf);
        uVar20 = 3;
        iVar17 = -1;
        iVar4 = -3;
        puVar8 = (uint *)FUN_006b0140(0x565f,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar8,iVar4,iVar17,uVar20);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        switch(*(undefined4 *)((int)&DAT_007bf678 + (int)piVar12)) {
        case 1:
          iStack_c = 0x34;
          break;
        case 2:
          iStack_c = 0x5b;
          break;
        case 3:
          iStack_c = 0x44;
          break;
        case 4:
          iStack_c = 0x4e;
        }
        pHVar14 = DAT_00807618;
        UVar5 = thunk_FUN_00523410(iStack_c,cVar15,0);
        pcVar10 = (char *)FUN_006b0140(UVar5,pHVar14);
        uVar6 = 0xffffffff;
        do {
          pcVar13 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar13 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar10 = pcVar13 + -uVar6;
        pcVar13 = (char *)&DAT_0080f33a;
        for (uVar11 = uVar6 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        for (puVar8 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != (uint *)0x0;
            puVar8 = FUN_0072e560(puVar8,'\n')) {
          *(undefined1 *)puVar8 = 0x20;
        }
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        iVar4 = iStack_c;
        iStack_8 = iStack_8 + 0xf;
        uVar6 = thunk_FUN_00526ba0(iStack_c,cVar15);
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x240),uVar6);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar7);
        pbVar7 = pbStack_38;
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x94,iStack_8 + -2,'\x06',pbStack_38);
        uStack_34 = 0x94;
        uStack_2c = *(undefined4 *)(pbVar7 + 4);
        iStack_30 = iStack_8 + -2;
        uStack_28 = *(undefined4 *)(pbVar7 + 8);
        uStack_24 = 2;
        iStack_23 = iVar4;
        iStack_1f = param_2;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_34);
        iStack_8 = iStack_8 + *(int *)(pbVar7 + 8);
      }
      cStack_d = '\0';
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar20 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar8 = (uint *)FUN_006b0140(0x5660,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar8,iVar4,iVar17,uVar20);
      piStack_14 = &DAT_007a8b1c;
      iStack_c = 1;
      do {
        iVar4 = iStack_c;
        if ((*piStack_14 == param_1) && (iVar17 = thunk_FUN_004e8030(iStack_c), iVar17 == param_2))
        {
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                           0x106,0xf);
          pHVar14 = DAT_00807618;
          UVar5 = thunk_FUN_00523410(iStack_c,cVar15,0);
          pcVar10 = (char *)FUN_006b0140(UVar5,pHVar14);
          uVar6 = 0xffffffff;
          do {
            pcVar13 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar10 = pcVar13 + -uVar6;
          pcVar13 = (char *)&DAT_0080f33a;
          for (uVar11 = uVar6 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar13 = pcVar13 + 1;
          }
          for (puVar8 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != (uint *)0x0;
              puVar8 = FUN_0072e560(puVar8,'\n')) {
            *(undefined1 *)puVar8 = 0x20;
          }
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          iVar4 = iStack_c;
          iStack_8 = iStack_8 + 0xf;
          uVar6 = thunk_FUN_00526ba0(iStack_c,cVar15);
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x23c),uVar6);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar7);
          pbVar7 = pbStack_38;
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x94,iStack_8 + -2,'\x06',pbStack_38)
          ;
          uStack_34 = 0x94;
          uStack_2c = *(undefined4 *)(pbVar7 + 4);
          iStack_30 = iStack_8 + -2;
          uStack_28 = *(undefined4 *)(pbVar7 + 8);
          uStack_24 = 3;
          iStack_23 = iVar4;
          iStack_1f = param_2;
          FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_34);
          iStack_8 = iStack_8 + *(int *)(pbVar7 + 8);
          cStack_d = '\x01';
        }
        piStack_14 = piStack_14 + 1;
        iStack_c = iVar4 + 1;
      } while (iVar4 < 0x28);
      piStack_14 = &DAT_007a8cfc;
      iStack_c = 1;
      do {
        iVar4 = iStack_c;
        if ((*piStack_14 == param_1) && (iVar17 = thunk_FUN_004e8030(iStack_c), iVar17 == param_2))
        {
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                           0x106,0xf);
          pHVar14 = DAT_00807618;
          UVar5 = thunk_FUN_00523410(iStack_c,cVar15,0);
          pcVar10 = (char *)FUN_006b0140(UVar5,pHVar14);
          uVar6 = 0xffffffff;
          do {
            pcVar13 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar10 = pcVar13 + -uVar6;
          pcVar13 = (char *)&DAT_0080f33a;
          for (uVar11 = uVar6 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar13 = pcVar13 + 1;
          }
          for (puVar8 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != (uint *)0x0;
              puVar8 = FUN_0072e560(puVar8,'\n')) {
            *(undefined1 *)puVar8 = 0x20;
          }
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          iVar4 = iStack_c;
          iStack_8 = iStack_8 + 0xf;
          uVar6 = thunk_FUN_00526ba0(iStack_c,cVar15);
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x23c),uVar6);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar7);
          pbVar7 = pbStack_38;
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x94,iStack_8 + -2,'\x06',pbStack_38)
          ;
          uStack_34 = 0x94;
          uStack_2c = *(undefined4 *)(pbVar7 + 4);
          iStack_30 = iStack_8 + -2;
          uStack_28 = *(undefined4 *)(pbVar7 + 8);
          uStack_24 = 3;
          iStack_23 = iVar4;
          iStack_1f = param_2;
          FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_34);
          iStack_8 = iStack_8 + *(int *)(pbVar7 + 8);
          cStack_d = '\x01';
        }
        piStack_14 = piStack_14 + 1;
        iStack_c = iVar4 + 1;
        if (0x27 < iVar4) {
          piVar12 = &DAT_00792ca0;
          iStack_c = 0x32;
          do {
            iStack_18 = 2;
            iVar4 = iStack_c;
            do {
              if ((*piVar12 == param_1) &&
                 (piStack_14 = piVar12, iVar17 = thunk_FUN_004e8030(iVar4), iVar17 == param_2)) {
                ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,
                                 iStack_8,0x106,0xf);
                pHVar14 = DAT_00807618;
                UVar5 = thunk_FUN_00523410(iStack_c,cVar15,0);
                pcVar10 = (char *)FUN_006b0140(UVar5,pHVar14);
                uVar6 = 0xffffffff;
                do {
                  pcVar13 = pcVar10;
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  pcVar13 = pcVar10 + 1;
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar13;
                } while (cVar1 != '\0');
                uVar6 = ~uVar6;
                pcVar10 = pcVar13 + -uVar6;
                pcVar13 = (char *)&DAT_0080f33a;
                for (uVar11 = uVar6 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
                  pcVar10 = pcVar10 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar13 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                  pcVar13 = pcVar13 + 1;
                }
                for (puVar8 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != (uint *)0x0;
                    puVar8 = FUN_0072e560(puVar8,'\n')) {
                  *(undefined1 *)puVar8 = 0x20;
                }
                ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                               (DAT_0080874e != '\x03') - 1 & 5);
                iVar4 = iStack_c;
                iStack_8 = iStack_8 + 0xf;
                uVar6 = thunk_FUN_00526ba0(iStack_c,cVar15);
                pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x240),uVar6);
                thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar7);
                pbVar7 = pbStack_38;
                thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x94,iStack_8 + -2,'\x06',
                                   pbStack_38);
                uStack_34 = 0x94;
                uStack_2c = *(undefined4 *)(pbVar7 + 4);
                iStack_30 = iStack_8 + -2;
                uStack_28 = *(undefined4 *)(pbVar7 + 8);
                uStack_24 = 2;
                iStack_23 = iVar4;
                iStack_1f = param_2;
                FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_34);
                iStack_8 = iStack_8 + *(int *)(pbVar7 + 8);
                cStack_d = '\x01';
                iVar4 = iStack_c;
                piVar12 = piStack_14;
              }
              piVar12 = piVar12 + 3;
              iStack_18 = iStack_18 + -1;
            } while (iStack_18 != 0);
            iStack_c = iVar4 + 1;
            if (0x41 < iVar4 + -0x31) {
              if (cStack_d == '\0') {
                iStack_8 = iStack_8 + 0xf;
              }
              piStack_14 = piVar12;
              UVar5 = thunk_FUN_00525ca0(uVar19);
              DrawDescription(this_00,&iStack_8,UVar5);
              AddLinks(this_00,&iStack_8,'\x04',param_1,param_2);
              g_currentExceptionFrame = IStack_a4.previous;
              return;
            }
          } while( true );
        }
      } while( true );
    }
    g_currentExceptionFrame = IStack_a4.previous;
    iVar17 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x8c4,0,iVar4,
                                &DAT_007a4ccc,s_HelpPanelTy__ArmProc_007c3cbc);
    if (iVar17 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x8c4);
  }
  return;
}

