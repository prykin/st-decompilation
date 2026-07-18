
void __thiscall HelpPanelTy::SpecProc(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy HVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  int iVar4;
  UINT UVar5;
  uint *puVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  HINSTANCE pHVar15;
  undefined4 uStack_74;
  undefined4 auStack_70 [16];
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  int iStack_1f;
  int iStack_1b;
  HelpPanelTy *pHStack_14;
  byte *pbStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  pHStack_14 = this;
  pbStack_10 = (byte *)FUN_0070b3a0(*(int *)(this + 0x248),4);
  if (DAT_007fa174 != 0) {
    uStack_74 = DAT_00858df8;
    DAT_00858df8 = &uStack_74;
    iVar4 = __setjmp3(auStack_70,0,unaff_EDI,unaff_ESI);
    this_00 = pHStack_14;
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        HVar2 = pHStack_14[0x1a1];
        if (((HVar2 == (HelpPanelTy)0x0) || (HVar2 == (HelpPanelTy)0x6)) ||
           (HVar2 == (HelpPanelTy)0xa)) {
          pHStack_14[0x1a2] = HVar2;
          *(undefined4 *)(pHStack_14 + 0x1ab) = *(undefined4 *)(pHStack_14 + 0x1a3);
        }
        else {
          pHStack_14[0x1a2] = (HelpPanelTy)0x0;
          *(undefined4 *)(pHStack_14 + 0x1ab) = 0;
        }
        pHStack_14[0x1a1] = (HelpPanelTy)0xb;
        *(int *)(pHStack_14 + 0x1a3) = param_1;
        *(int *)(pHStack_14 + 0x1a7) = param_2;
        *(undefined2 *)(pHStack_14 + 0x1af) = 0x32;
        *(undefined2 *)(pHStack_14 + 0x1b1) = 5;
        if (*(int *)(pHStack_14 + 0x178) != 0) {
          *(undefined4 *)(pHStack_14 + 0x28) = 0x4202;
          *(undefined2 *)(pHStack_14 + 0x2c) = 0;
          *(undefined2 *)(pHStack_14 + 0x2e) = 2;
          *(int *)(pHStack_14 + 0x30) = *(int *)(pHStack_14 + 0x178);
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(pHStack_14 + 0x18);
          }
        }
      }
      bVar12 = (byte)param_2;
      UVar5 = thunk_FUN_00523410(param_1,bVar12,0);
      DrawTitle(this_00,0x55ff,param_2,UVar5);
      DrawObj(this_00,&iStack_8,param_1,bVar12,*(int *)(this_00 + 0x23c));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x19c,
                       0xf);
      uVar14 = 3;
      iVar13 = -1;
      iVar4 = -1;
      puVar6 = (uint *)FUN_006b0140(0x564a,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar13,uVar14);
      iStack_8 = iStack_8 + 0xf;
      if (param_1 == 0xfe) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                         0xf);
        uVar14 = 3;
        iVar13 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x5661,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar13,uVar14);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                         0x106,0xf);
        iStack_c = (-(uint)(param_2 != 3) & 0xfffffff3) + 0x5f;
        pHVar15 = DAT_00807618;
        UVar5 = thunk_FUN_00523410(iStack_c,bVar12,0);
        pcVar7 = (char *)FUN_006b0140(UVar5,pHVar15);
        uVar9 = 0xffffffff;
        do {
          pcVar11 = pcVar7;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar11 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar11;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar7 = pcVar11 + -uVar9;
        pcVar11 = (char *)&DAT_0080f33a;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar11 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar11 = pcVar11 + 1;
        }
        for (puVar6 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
            puVar6 = FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        iVar4 = iStack_c;
        iStack_8 = iStack_8 + 0xf;
        uVar9 = thunk_FUN_00526ba0(iStack_c,bVar12);
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x240),uVar9);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar8);
        pbVar8 = pbStack_10;
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x94,iStack_8 + -2,'\x06',pbStack_10);
        uStack_30 = 0x94;
        uStack_28 = *(undefined4 *)(pbVar8 + 4);
        iStack_2c = iStack_8 + -2;
        uStack_24 = *(undefined4 *)(pbVar8 + 8);
        uStack_20 = 2;
        iStack_1f = iVar4;
        iStack_1b = param_2;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_30);
        iStack_8 = iStack_8 + *(int *)(pbVar8 + 8);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar14 = 3;
      iVar13 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x5655,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar13,uVar14);
      pHVar15 = DAT_00807618;
      UVar5 = thunk_FUN_00523410(param_1,bVar12,1);
      pcVar7 = (char *)FUN_006b0140(UVar5,pHVar15);
      uVar9 = 0xffffffff;
      do {
        pcVar11 = pcVar7;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pcVar7 = pcVar11 + -uVar9;
      pcVar11 = (char *)&DAT_0080f33a;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar11 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar11 = pcVar11 + 1;
      }
      ccFntTy::FormText(*(ccFntTy **)(this_00 + 0x1e0),(char *)&DAT_0080f33a,&DAT_0080f33a,
                        (uint *)s________________007c21d8,0x106,1);
      uVar9 = FUN_007113e0(*(void **)(this_00 + 0x1e0),&DAT_0080f33a);
      CheckBkView(this_00,iStack_8,uVar9);
      uVar10 = uVar9 & 0xffff;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,uVar10 + 2);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                     (DAT_0080874e != '\x03') - 1 & 5,-1,-1);
      if ((ushort)uVar9 < 0x10) {
        uVar10 = 0xf;
      }
      iStack_8 = iStack_8 + uVar10;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar14 = 3;
      iVar13 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x562a,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar13,uVar14);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      if (param_2 == 1) {
        iStack_c = 7;
      }
      else if (param_2 == 2) {
        iStack_c = 0x13;
      }
      else {
        iStack_c = 0x1b;
      }
      pHVar15 = DAT_00807618;
      UVar5 = thunk_FUN_00523410(iStack_c,bVar12,0);
      pcVar7 = (char *)FUN_006b0140(UVar5,pHVar15);
      uVar9 = 0xffffffff;
      do {
        pcVar11 = pcVar7;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pcVar7 = pcVar11 + -uVar9;
      pcVar11 = (char *)&DAT_0080f33a;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar11 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar11 = pcVar11 + 1;
      }
      for (puVar6 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
          puVar6 = FUN_0072e560(puVar6,'\n')) {
        *(undefined1 *)puVar6 = 0x20;
      }
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                     (DAT_0080874e != '\x03') - 1 & 5);
      iStack_8 = iStack_8 + 0xf;
      uVar9 = thunk_FUN_00526ba0(iStack_c,bVar12);
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x23c),uVar9);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar8);
      pbVar8 = pbStack_10;
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x94,iStack_8 + -2,'\x06',pbStack_10);
      uStack_30 = 0x94;
      uStack_28 = *(undefined4 *)(pbVar8 + 4);
      iStack_2c = iStack_8 + -2;
      uStack_24 = *(undefined4 *)(pbVar8 + 8);
      uStack_20 = 3;
      iStack_1f = iStack_c;
      iStack_1b = param_2;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_30);
      iStack_8 = iStack_8 + *(int *)(pbVar8 + 8);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar14 = 3;
      iVar13 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x5662,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar13,uVar14);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140((-(uint)(param_1 != 0xfd) & 0xffffffcd) + 0x5663,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar13,uVar9);
      iStack_8 = iStack_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,
                       0xf);
      uVar14 = 3;
      iVar13 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x5625,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar13,uVar14);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x5d5a,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar13,uVar9);
      iStack_8 = iStack_8 + 0xf;
      UVar5 = thunk_FUN_00523410(param_1,bVar12,2);
      DrawDescription(this_00,&iStack_8,UVar5);
      AddLinks(this_00,&iStack_8,'\v',param_1,param_2);
      DAT_00858df8 = (undefined4 *)uStack_74;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_74;
    iVar13 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x929,0,iVar4,&DAT_007a4ccc);
    if (iVar13 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c383c,0x929);
  }
  return;
}

