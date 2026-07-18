
void __thiscall HelpPanelTy::SubProc(HelpPanelTy *this,int param_1,char param_2)

{
  HelpPanelTy HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  char cVar3;
  char cVar4;
  int iVar5;
  UINT UVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar11;
  HINSTANCE pHVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puStack_a4;
  undefined4 auStack_a0 [16];
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  uint uStack_4f;
  undefined4 uStack_4b;
  int iStack_44;
  HelpPanelTy *pHStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  int iStack_2b;
  uint uStack_27;
  uint uStack_20;
  uint uStack_1c;
  byte *pbStack_18;
  uint uStack_14;
  char cStack_d;
  UINT UStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  cStack_d = '\0';
  if (DAT_007fa174 != 0) {
    puStack_a4 = DAT_00858df8;
    DAT_00858df8 = &puStack_a4;
    pHStack_40 = this;
    iVar5 = __setjmp3(auStack_a0,0,unaff_EDI,unaff_ESI);
    this_00 = pHStack_40;
    if (iVar5 == 0) {
      if (param_2 == '\0') {
        HVar1 = pHStack_40[0x1a1];
        if (((HVar1 == (HelpPanelTy)0x0) || (HVar1 == (HelpPanelTy)0x6)) ||
           (HVar1 == (HelpPanelTy)0xa)) {
          pHStack_40[0x1a2] = HVar1;
          *(undefined4 *)(pHStack_40 + 0x1ab) = *(undefined4 *)(pHStack_40 + 0x1a3);
        }
        else {
          pHStack_40[0x1a2] = (HelpPanelTy)0x0;
          *(undefined4 *)(pHStack_40 + 0x1ab) = 0;
        }
        pHStack_40[0x1a1] = (HelpPanelTy)0x3;
        *(int *)(pHStack_40 + 0x1a3) = param_1;
        *(undefined2 *)(pHStack_40 + 0x1af) = 0x32;
        *(undefined2 *)(pHStack_40 + 0x1b1) = 5;
        if (*(int *)(pHStack_40 + 0x178) != 0) {
          *(undefined4 *)(pHStack_40 + 0x28) = 0x4202;
          *(undefined2 *)(pHStack_40 + 0x2c) = 0;
          *(undefined2 *)(pHStack_40 + 0x2e) = 2;
          *(int *)(pHStack_40 + 0x30) = *(int *)(pHStack_40 + 0x178);
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(pHStack_40 + 0x18);
          }
        }
      }
      uStack_1c = thunk_FUN_004e8030(param_1);
      cVar4 = (char)uStack_1c;
      uStack_20 = CONCAT31(uStack_20._1_3_,cVar4);
      uStack_1c = uStack_1c & 0xff;
      UVar6 = thunk_FUN_00523410(param_1,cVar4,0);
      DrawTitle(this_00,0x55fb,uStack_1c,UVar6);
      DrawObj(this_00,&iStack_8,param_1,(byte)uStack_20,*(int *)(this_00 + 0x23c));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x19c,
                       0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -1;
      puVar7 = (uint *)FUN_006b0140(0x564a,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
      iStack_8 = iStack_8 + 0xf;
      UStack_c = 0;
      iVar5 = FUN_006b0fd0(0x801450);
      if (iVar5 == 0) {
        iVar5 = FUN_006b0fd0(0x801480);
        if (iVar5 == 0) {
          iVar5 = FUN_006b0fd0(0x800f10);
          if (iVar5 != 0) {
            UStack_c = 0x3aa2;
          }
        }
        else {
          UStack_c = 0x3aa0;
        }
      }
      else {
        UStack_c = 0x3a9f;
      }
      if (UStack_c != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                         0xf);
        uVar15 = 3;
        iVar13 = -1;
        iVar5 = -3;
        puVar7 = (uint *)FUN_006b0140(0x5654,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(UStack_c,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
        iStack_8 = iStack_8 + 0xf;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x5656,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      if (uStack_1c == 1) {
        UVar6 = 0x5604;
      }
      else if (uStack_1c == 2) {
        UVar6 = 0x5605;
      }
      else {
        UVar6 = 0x5606;
      }
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(UVar6,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
      iStack_8 = iStack_8 + 0xf;
      uStack_14 = 0;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
      if (cVar4 == '\x03') {
        UStack_c = *(UINT *)(&DAT_007e09dc + param_1 * 4);
      }
      else {
        UStack_c = *(UINT *)(&DAT_007e079c + param_1 * 4);
      }
      if (UStack_c != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,
                         iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,UStack_c);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar5 = FUN_0070b3a0(*(int *)(this_00 + 0x238),(-(uint)(cVar4 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,iStack_8,iVar5,0,0x3a);
        uStack_3c = 0xb4;
        uStack_34 = *(undefined4 *)(iVar5 + 4);
        iStack_38 = iStack_8;
        uStack_30 = *(undefined4 *)(iVar5 + 8);
        iStack_2b = (-(uint)(cVar4 != '\x03') & 0xfffffffc) + 0xe2;
        uStack_2c = 1;
        uStack_27 = uStack_1c;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_3c);
        iStack_8 = iStack_8 + 0x14;
        uStack_14 = 1;
      }
      UStack_c = *(UINT *)(&DAT_007e055c + param_1 * 4);
      if (UStack_c != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,
                         iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,UStack_c);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        uStack_14 = FUN_0070b3a0(*(int *)(this_00 + 0x238),0);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,iStack_8,uStack_14,0,0x3a);
        uStack_3c = 0xb4;
        uStack_34 = *(undefined4 *)(uStack_14 + 4);
        iStack_38 = iStack_8;
        uStack_30 = *(undefined4 *)(uStack_14 + 8);
        uStack_2c = 1;
        iStack_2b = 0xdd;
        uStack_27 = uStack_1c;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_3c);
        uStack_14 = 1;
        iStack_8 = iStack_8 + 0x14;
      }
      UStack_c = *(UINT *)(&DAT_00854428 + param_1 * 4);
      if (UStack_c != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,
                         iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,UStack_c);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        uStack_14 = FUN_0070b3a0(*(int *)(this_00 + 0x238),2);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,iStack_8,uStack_14,0,0x3a);
        uStack_3c = 0xb4;
        uStack_34 = *(undefined4 *)(uStack_14 + 4);
        iStack_38 = iStack_8;
        uStack_30 = *(undefined4 *)(uStack_14 + 8);
        uStack_2c = 1;
        iStack_2b = 0xdd;
        uStack_27 = uStack_1c;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_3c);
        uStack_14 = 1;
        iStack_8 = iStack_8 + 0x14;
      }
      if (uStack_14 == 0) {
        iStack_8 = iStack_8 + 0xf;
      }
      UStack_c = 1;
      uStack_14 = 1;
      iStack_44 = param_1 * 3;
      do {
        pbStack_18 = &DAT_007c0dd1 + iStack_44 + (uStack_14 & 0xffff);
        if (*pbStack_18 == 0) break;
        if (UStack_c != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,
                           0x91,0xf);
          uVar15 = 3;
          iVar13 = -1;
          iVar5 = -3;
          puVar7 = (uint *)FUN_006b0140(0x5657,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
          UStack_c = 0;
        }
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        pbVar8 = pbStack_18;
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar5 = 1;
        pHVar12 = DAT_00807618;
        UVar6 = thunk_FUN_00528060(*pbStack_18,'\0');
        puVar7 = (uint *)FUN_006b0140(UVar6,pHVar12);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
        iStack_8 = iStack_8 + 0xf;
        uVar9 = thunk_FUN_005276e0(*pbVar8,0);
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x230),uVar9);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar8);
        uStack_60 = 0x96;
        uStack_58 = *(undefined4 *)(pbVar8 + 4);
        iStack_5c = iStack_8;
        uStack_54 = *(undefined4 *)(pbVar8 + 8);
        uStack_4f = (uint)*pbStack_18;
        uStack_50 = 5;
        uStack_4b = 0;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_60);
        iStack_8 = iStack_8 + 5 + *(int *)(pbVar8 + 8);
        uStack_14 = uStack_14 + 1;
      } while ((ushort)uStack_14 < 3);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x19c,
                       0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -1;
      puVar7 = (uint *)FUN_006b0140(0x564b,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
      iStack_8 = iStack_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564c,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(&DAT_007dfbac + param_1 * 4));
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,-3,-1,2);
      iStack_8 = iStack_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x5658,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
      piVar10 = &DAT_007dfc70;
      UStack_c = DAT_007dfc70;
      pbStack_18 = (byte *)0x28;
      iVar5 = DAT_007dfc70;
      do {
        if (*piVar10 < (int)UStack_c) {
          UStack_c = *piVar10;
        }
        if (iVar5 < *piVar10) {
          iVar5 = *piVar10;
        }
        piVar10 = piVar10 + 1;
        pbStack_18 = (byte *)((int)pbStack_18 + -1);
      } while (pbStack_18 != (byte *)0x0);
      iVar5 = (int)(iVar5 - UStack_c) / 3;
      if (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(UStack_c + iVar5)) {
        UStack_c = 0x5615;
      }
      else {
        UStack_c = (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(UStack_c + iVar5 * 2)) + 0x5613;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(UStack_c,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
      iStack_8 = iStack_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564d,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
      piVar10 = &DAT_007e04a0;
      UStack_c = DAT_007e04a0;
      pbStack_18 = (byte *)0x28;
      iVar5 = DAT_007e04a0;
      do {
        if (*piVar10 < (int)UStack_c) {
          UStack_c = *piVar10;
        }
        if (iVar5 < *piVar10) {
          iVar5 = *piVar10;
        }
        piVar10 = piVar10 + 1;
        pbStack_18 = (byte *)((int)pbStack_18 + -1);
      } while (pbStack_18 != (byte *)0x0);
      iVar5 = (int)((iVar5 - UStack_c) + ((int)(iVar5 - UStack_c) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e049c + param_1 * 4) < (int)(UStack_c + iVar5)) {
        UStack_c = 0x5613;
      }
      else {
        UStack_c = (((int)(UStack_c + iVar5 * 2) <= *(int *)(&DAT_007e049c + param_1 * 4)) - 1 &
                   0xfffffffe) + 0x5616;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(UStack_c,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
      iStack_8 = iStack_8 + 0xf;
      iVar5 = DrawWeapon(this_00,0x96,&iStack_8,*(int *)(&DAT_007a8b18 + param_1 * 4),
                         *(int *)(&DAT_007a8bb8 + param_1 * 4),uStack_20);
      cVar3 = cStack_d;
      if ((iVar5 != 0) || (cStack_d = '\0', cVar3 != '\0')) {
        cStack_d = '\x01';
      }
      iVar5 = DrawWeapon(this_00,0x96,&iStack_8,*(int *)(&DAT_007a8cf8 + param_1 * 4),
                         *(int *)(&DAT_007a8d98 + param_1 * 4),uStack_20);
      cVar3 = cStack_d;
      if ((iVar5 != 0) || (cStack_d = '\0', cVar3 != '\0')) {
        cStack_d = '\x01';
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x5659,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar13 = -3;
      pHVar12 = DAT_00807618;
      iVar5 = FUN_006b0fd0(0x800f10);
      puVar7 = (uint *)FUN_006b0140(0x273f - (iVar5 != 0),pHVar12);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar13,iVar14,uVar15);
      iStack_8 = iStack_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564e,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140((cVar4 != '\x03') + 0x273e,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
      iStack_8 = iStack_8 + 0xf;
      if (cStack_d != '\0') {
        bVar11 = false;
        if (*(int *)(&DAT_007a8b18 + param_1 * 4) != 0) {
          bVar11 = (&DAT_007bf678)[*(int *)(&DAT_007a8b18 + param_1 * 4) * 3 + -0x1c2] != 0;
        }
        if ((*(int *)(&DAT_007a8cf8 + param_1 * 4) != 0) &&
           ((bVar11 || ((&DAT_007bf678)[*(int *)(&DAT_007a8cf8 + param_1 * 4) * 3 + -0x1c2] != 0))))
        {
          bVar11 = true;
        }
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(0x564f,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                         0xf);
        uVar15 = 2;
        iVar13 = -1;
        iVar5 = -3;
        puVar7 = (uint *)FUN_006b0140(0x273f - bVar11,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
        iStack_8 = iStack_8 + 0xf;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x5650,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
      UStack_c = *(UINT *)(&DAT_007e085c + param_1 * 4);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x273f - (UStack_c != 0),DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar15);
      iStack_8 = iStack_8 + 0xf;
      if (UStack_c != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(0x5651,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar13,uVar9);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x5f,
                         iStack_8 + -3,0x16,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,UStack_c);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar5 = FUN_0070b3a0(*(int *)(this_00 + 0x238),(-(uint)(cVar4 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0x7a,iStack_8,iVar5,0,0x3a);
        uStack_3c = 0x7a;
        uStack_34 = *(undefined4 *)(iVar5 + 4);
        iStack_38 = iStack_8;
        uStack_30 = *(undefined4 *)(iVar5 + 8);
        iStack_2b = (-(uint)(cVar4 != '\x03') & 0xfffffffc) + 0xe2;
        uStack_2c = 1;
        uStack_27 = uStack_1c;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_3c);
        iStack_8 = iStack_8 + 0x14;
      }
      UVar6 = thunk_FUN_00523410(param_1,(char)uStack_20,2);
      DrawDescription(this_00,&iStack_8,UVar6);
      AddLinks(this_00,&iStack_8,'\x03',param_1,0);
      DAT_00858df8 = puStack_a4;
      return;
    }
    DAT_00858df8 = puStack_a4;
    iVar13 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x6f4,0,iVar5,&DAT_007a4ccc);
    if (iVar13 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c383c,0x6f4);
  }
  return;
}

