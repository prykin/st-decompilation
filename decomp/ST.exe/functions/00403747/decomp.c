
void __thiscall HelpPanelTy::ObjProc(HelpPanelTy *this,int param_1,uint param_2,char param_3)

{
  HelpPanelTy HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  char cVar3;
  ushort uVar4;
  int iVar5;
  UINT UVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar12;
  HINSTANCE pHVar13;
  byte bVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *puStack_a0;
  undefined4 auStack_9c [16];
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  uint uStack_4b;
  undefined4 uStack_47;
  HelpPanelTy *pHStack_40;
  byte *pbStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  int iStack_27;
  uint uStack_23;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  char cStack_9;
  int iStack_8;
  
  iStack_8 = 0;
  cStack_9 = '\0';
  if (DAT_007fa174 != 0) {
    puStack_a0 = DAT_00858df8;
    DAT_00858df8 = &puStack_a0;
    pHStack_40 = this;
    iVar5 = __setjmp3(auStack_9c,0,unaff_EDI,unaff_ESI);
    this_00 = pHStack_40;
    if (iVar5 == 0) {
      if (param_3 == '\0') {
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
        pHStack_40[0x1a1] = (HelpPanelTy)0x2;
        *(int *)(pHStack_40 + 0x1a3) = param_1;
        *(uint *)(pHStack_40 + 0x1a7) = param_2;
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
      bVar14 = (byte)param_2;
      UVar6 = thunk_FUN_00523410(param_1,bVar14,0);
      DrawTitle(this_00,0x55fa,param_2,UVar6);
      DrawObj(this_00,&iStack_8,param_1,bVar14,*(int *)(this_00 + 0x240));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x19c,
                       0xf);
      uVar16 = 3;
      iVar15 = -1;
      iVar5 = -1;
      puVar7 = (uint *)FUN_006b0140(0x564a,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
      iStack_8 = iStack_8 + 0xf;
      UVar6 = 0;
      iVar5 = FUN_006b0fd0(0x8014a0);
      if (iVar5 == 0) {
        iVar5 = FUN_006b0fd0(0x800f90);
        if (iVar5 == 0) {
          iVar5 = FUN_006b0fd0(0x801360);
          if (iVar5 == 0) {
            iVar5 = FUN_006b0fd0(0x800f80);
            if (iVar5 != 0) {
              UVar6 = 0x3a9d;
            }
          }
          else {
            UVar6 = 0x3aa8;
          }
        }
        else {
          UVar6 = 0x3a9c;
        }
      }
      else {
        UVar6 = 0x3a9b;
      }
      if (UVar6 != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                         0xf);
        uVar16 = 3;
        iVar15 = -1;
        iVar5 = -3;
        puVar7 = (uint *)FUN_006b0140(0x5654,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar15 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(UVar6,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar8);
        iStack_8 = iStack_8 + 0xf;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar16 = 3;
      iVar15 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x5656,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      if (param_2 == 1) {
        UVar6 = 0x5604;
      }
      else if (param_2 == 2) {
        UVar6 = 0x5605;
      }
      else {
        UVar6 = 0x5606;
      }
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar15 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(UVar6,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar8);
      iStack_8 = iStack_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar16 = 3;
      iVar15 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
      iStack_14 = param_1 * 3;
      if (param_2 == 3) {
        iVar5 = *(int *)(&DAT_007e2f10 + param_1 * 0xc);
      }
      else {
        iVar5 = *(int *)(&DAT_007e22a0 + (iStack_14 + param_2) * 4);
      }
      if (iVar5 != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,
                         iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar5);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar15 = FUN_0070b3a0(*(int *)(this_00 + 0x238),(-(uint)(param_2 != 3) & 0xfffffffe) + 3);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,iStack_8,iVar15,0,0x3a);
        uStack_38 = 0xb4;
        uStack_30 = *(undefined4 *)(iVar15 + 4);
        iStack_34 = iStack_8;
        uStack_2c = *(undefined4 *)(iVar15 + 8);
        iStack_27 = (-(uint)(param_2 != 3) & 0xfffffffc) + 0xe2;
        uStack_28 = 1;
        uStack_23 = param_2;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_38);
        iStack_8 = iStack_8 + 0x14;
      }
      iStack_14 = iStack_14 + -0x97 + param_2;
      iVar15 = *(int *)(&DAT_007e1c50 + iStack_14 * 4);
      if (iVar15 != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,
                         iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar15);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        iVar9 = FUN_0070b3a0(*(int *)(this_00 + 0x238),0);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,iStack_8,iVar9,0,0x3a);
        uStack_38 = 0xb4;
        uStack_30 = *(undefined4 *)(iVar9 + 4);
        iStack_34 = iStack_8;
        uStack_2c = *(undefined4 *)(iVar9 + 8);
        uStack_28 = 1;
        iStack_27 = 0xdd;
        uStack_23 = param_2;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_38);
        iStack_8 = iStack_8 + 0x14;
      }
      iVar9 = *(int *)(&DAT_008545ac + iStack_14 * 4);
      if (iVar9 != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,
                         iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar9);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        iVar10 = FUN_0070b3a0(*(int *)(this_00 + 0x238),2);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,iStack_8,iVar10,0,0x3a);
        uStack_38 = 0xb4;
        uStack_30 = *(undefined4 *)(iVar10 + 4);
        iStack_34 = iStack_8;
        uStack_2c = *(undefined4 *)(iVar10 + 8);
        uStack_28 = 1;
        iStack_27 = 0xdc;
        uStack_23 = param_2;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_38);
        iStack_8 = iStack_8 + 0x14;
      }
      if (iVar9 == 0 && (iVar15 == 0 && iVar5 == 0)) {
        iStack_8 = iStack_8 + 0xf;
      }
      piStack_1c = (int *)0x1;
      uStack_10 = 1;
      iStack_18 = (param_1 + -0x74 + param_2 * 0x42) * 3;
      do {
        pbVar11 = &DAT_007c0e4c + iStack_18 + (uStack_10 & 0xffff);
        pbStack_3c = pbVar11;
        if (*pbVar11 == 0) break;
        if (piStack_1c != (int *)0x0) {
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,
                           0x91,0xf);
          uVar16 = 3;
          iVar15 = -1;
          iVar5 = -3;
          puVar7 = (uint *)FUN_006b0140(0x5657,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
          piStack_1c = (int *)0x0;
        }
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar15 = -1;
        iVar5 = 1;
        pHVar13 = DAT_00807618;
        UVar6 = thunk_FUN_00528060(*pbVar11,'\0');
        puVar7 = (uint *)FUN_006b0140(UVar6,pHVar13);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar8);
        iStack_8 = iStack_8 + 0xf;
        uVar8 = thunk_FUN_005276e0(*pbVar11,0);
        pbVar11 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x230),uVar8);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar11);
        uStack_5c = 0x96;
        uStack_54 = *(undefined4 *)(pbVar11 + 4);
        iStack_58 = iStack_8;
        uStack_50 = *(undefined4 *)(pbVar11 + 8);
        uStack_4b = (uint)*pbStack_3c;
        uStack_4c = 5;
        uStack_47 = 0;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_5c);
        uStack_10 = uStack_10 + 1;
        iStack_8 = iStack_8 + 5 + *(int *)(pbVar11 + 8);
      } while ((ushort)uStack_10 < 3);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x19c,
                       0xf);
      uVar16 = 3;
      iVar15 = -1;
      iVar5 = -1;
      puVar7 = (uint *)FUN_006b0140(0x564b,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
      iStack_8 = iStack_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar15 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564c,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar8);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      iVar15 = iStack_14;
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(&DAT_007e417c + iStack_14 * 4));
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,-3,-1,2);
      iStack_8 = iStack_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564d,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar8);
      iVar5 = *(int *)(&DAT_007e3dc0 + param_2 * 4);
      piStack_1c = (int *)(&DAT_007e3dc0 + param_2 * 4);
      iStack_18 = 0x42;
      uStack_10 = iVar5;
      do {
        iVar9 = *piStack_1c;
        if (iVar9 < (int)uStack_10) {
          uStack_10 = iVar9;
        }
        if (iVar5 < iVar9) {
          iVar5 = iVar9;
        }
        piStack_1c = piStack_1c + 3;
        iStack_18 = iStack_18 + -1;
      } while (iStack_18 != 0);
      iVar5 = (int)((iVar5 - uStack_10) + ((int)(iVar5 - uStack_10) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e3dc4 + iVar15 * 4) < (int)(uStack_10 + iVar5)) {
        uStack_10 = 0x5613;
      }
      else {
        uStack_10 = (((int)(uStack_10 + iVar5 * 2) <= *(int *)(&DAT_007e3dc4 + iVar15 * 4)) - 1 &
                    0xfffffffe) + 0x5616;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar16 = 2;
      iVar9 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(uStack_10,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar16);
      iStack_8 = iStack_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x565a,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar8);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar16 = 2;
      iVar9 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x273f - (*(int *)(&DAT_00791b18 + iVar15 * 4) != 0),
                                    DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar16);
      iStack_8 = iStack_8 + 0xf;
      iVar5 = param_1 + -0x32;
      if (*(int *)(&DAT_00793e28 + iVar5 * 8) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(&DAT_00794038 + iVar5 * 8);
      }
      iStack_18 = iVar5 * 0x18;
      iVar5 = DrawWeapon(this_00,0x96,&iStack_8,(&DAT_00792ca0)[iVar5 * 6],iVar9,param_2);
      cVar3 = cStack_9;
      if ((iVar5 != 0) || (cStack_9 = '\0', cVar3 != '\0')) {
        cStack_9 = '\x01';
      }
      if (*(int *)(&DAT_00793e2c + (param_1 + -0x32) * 8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(&DAT_0079403c + (param_1 + -0x32) * 8);
      }
      iVar5 = DrawWeapon(this_00,0x96,&iStack_8,*(int *)((int)&DAT_00792cac + iStack_18),iVar5,
                         param_2);
      cVar3 = cStack_9;
      if ((iVar5 != 0) || (cStack_9 = '\0', cVar3 != '\0')) {
        cStack_9 = '\x01';
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564e,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar8);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar16 = 2;
      iVar9 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140((param_2 != 3) + 0x273e,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar16);
      iStack_8 = iStack_8 + 0xf;
      if (cStack_9 != '\0') {
        bVar12 = false;
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar15 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(0x564f,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar8);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                         0xf);
        if (*(int *)((int)&DAT_00792ca0 + iStack_18) != 0) {
          bVar12 = (&DAT_007bf678)[*(int *)((int)&DAT_00792ca0 + iStack_18) * 3 + -0x1c2] != 0;
        }
        if ((*(int *)((int)&DAT_00792cac + iStack_18) != 0) &&
           ((bVar12 || ((&DAT_007bf678)[*(int *)((int)&DAT_00792cac + iStack_18) * 3 + -0x1c2] != 0)
            ))) {
          bVar12 = true;
        }
        uVar16 = 2;
        iVar15 = -1;
        iVar5 = -3;
        puVar7 = (uint *)FUN_006b0140(0x273f - bVar12,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
        iStack_8 = iStack_8 + 0xf;
        iVar15 = iStack_14;
      }
      if (param_2 != 3) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar9 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(0x5650,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar8);
        iVar5 = *(int *)(&DAT_007e29f0 + iVar15 * 4);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                         0xf);
        uVar16 = 2;
        iVar9 = -1;
        iVar15 = -3;
        puVar7 = (uint *)FUN_006b0140(0x273f - (iVar5 != 0),DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar15,iVar9,uVar16);
        iStack_8 = iStack_8 + 0xf;
        iVar15 = iStack_14;
        if (iVar5 != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                           0x106,0xf);
          uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar9 = -1;
          iVar15 = 1;
          puVar7 = (uint *)FUN_006b0140(0x5651,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar15,iVar9,uVar8);
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x5f,
                           iStack_8 + -3,0x16,0x14);
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar5);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          iVar5 = FUN_0070b3a0(*(int *)(this_00 + 0x238),1);
          FUN_006b5440(*(int *)(this_00 + 0x218),0,0x7a,iStack_8,iVar5,0,0x3a);
          uStack_38 = 0x7a;
          uStack_30 = *(undefined4 *)(iVar5 + 4);
          iStack_34 = iStack_8;
          uStack_2c = *(undefined4 *)(iVar5 + 8);
          uStack_28 = 1;
          iStack_27 = 0xde;
          uStack_23 = param_2;
          FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_38);
          iStack_8 = iStack_8 + 0x14;
          iVar15 = iStack_14;
        }
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x565b,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar8);
      uStack_10 = 0;
      uVar4 = 0;
      do {
        if ((&DAT_007e1988)[iVar15 * 3 + (uint)uVar4] != '\0') {
          uStack_10 = 0x273e;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
      if (uStack_10 == 0) {
        uStack_10 = 0x273f;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar16 = 2;
      iVar15 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(uStack_10,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
      iStack_8 = iStack_8 + 0xf;
      UVar6 = thunk_FUN_00523410(param_1,bVar14,2);
      DrawDescription(this_00,&iStack_8,UVar6);
      AddLinks(this_00,&iStack_8,'\x02',param_1,param_2);
      DAT_00858df8 = puStack_a0;
      return;
    }
    DAT_00858df8 = puStack_a0;
    iVar15 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x7ec,0,iVar5,&DAT_007a4ccc);
    if (iVar15 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c383c,0x7ec);
  }
  return;
}

