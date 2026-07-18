
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::Update4PanelWB */

void __thiscall CPanelTy::Update4PanelWB(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  CPanelTy CVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char cVar9;
  int iVar10;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  CPanelTy *pCVar11;
  CPanelTy *pCVar12;
  void *unaff_EDI;
  int *piVar13;
  short *psVar14;
  undefined4 *puVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  undefined4 local_104 [4];
  undefined4 local_f4;
  undefined4 local_e4 [4];
  undefined4 local_d4;
  undefined4 *local_c4;
  undefined4 local_c0 [16];
  CPanelTy *local_80;
  int local_7c;
  CPanelTy local_78;
  CPanelTy local_77;
  CPanelTy local_76;
  CPanelTy local_75;
  CPanelTy local_74;
  short local_73 [6];
  CPanelTy local_67;
  CPanelTy local_60;
  int local_5f;
  int local_5b;
  CPanelTy local_4d [2];
  CPanelTy local_4b;
  CPanelTy local_48;
  short local_42;
  CPanelTy local_40;
  CPanelTy local_3e;
  ushort local_3d;
  CPanelTy local_37;
  CPanelTy local_36;
  CPanelTy local_35;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  CPanelTy *local_18;
  uint local_14;
  CPanelTy *local_10;
  uint local_c;
  CPanelTy *local_8;
  
  local_c4 = DAT_00858df8;
  DAT_00858df8 = &local_c4;
  local_80 = this;
  iVar4 = __setjmp3(local_c0,0,unaff_EDI,unaff_ESI);
  this_00 = local_80;
  if (iVar4 != 0) {
    DAT_00858df8 = local_c4;
    iVar10 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x497,0,iVar4,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar4,0,0x7c2700,0x497);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pCVar12 = local_80 + 0xbf5;
  pCVar11 = pCVar12;
  piVar13 = &local_7c;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar13 = *(int *)pCVar11;
    pCVar11 = pCVar11 + 4;
    piVar13 = piVar13 + 1;
  }
  pCVar11 = pCVar12;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pCVar11 = 0;
    pCVar11 = pCVar11 + 4;
  }
  thunk_FUN_0043beb0(DAT_007fa174,4,(int *)pCVar12);
  CVar3 = this_00[0xbfa];
  if ((local_77 != CVar3) || (local_76 != this_00[0xbfb])) {
LAB_005091b9:
    PaintCtrlObj(this_00,1);
    SetControlObj(this_00,'\x01');
    thunk_FUN_00506040((int)this_00);
    DAT_00858df8 = local_c4;
    return;
  }
  if ((this_00[0xbfb] == (CPanelTy)0x2) && (CVar3 == (CPanelTy)0x1)) {
    cVar8 = '\0';
    cVar9 = '\0';
    iVar4 = 0;
    do {
      if (this_00[iVar4 + 0xbfe] != (CPanelTy)0x0) {
        cVar9 = cVar9 + '\x01';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    iVar4 = 0;
    do {
      if (*(char *)((int)local_73 + iVar4) != '\0') {
        cVar8 = cVar8 + '\x01';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    if (cVar9 == cVar8) {
      iVar4 = 3;
      bVar16 = true;
      pCVar12 = this_00 + 0xbfe;
      psVar14 = local_73;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar16 = *(short *)pCVar12 == *psVar14;
        pCVar12 = pCVar12 + 2;
        psVar14 = psVar14 + 1;
      } while (bVar16);
      if (bVar16) {
        if (this_00[0xbfd] != local_74) {
          thunk_FUN_004f1610(this_00,'\0');
        }
      }
      else {
        *(undefined4 *)(this_00 + 0x28) = 5;
        FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x302),(undefined4 *)(this_00 + 0x18));
        local_8 = (CPanelTy *)((uint)local_8 & 0xffffff00);
        pCVar12 = this_00 + 0xbfe;
        do {
          if (*pCVar12 != (CPanelTy)0x0) {
            thunk_FUN_004f17d0(this_00,0,(byte)local_8);
          }
          bVar2 = (byte)local_8 + 1;
          pCVar12 = pCVar12 + 1;
          local_8 = (CPanelTy *)CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < 6);
        thunk_FUN_004f1610(this_00,'\0');
        thunk_FUN_0054a8d0(DAT_00802a30);
      }
      iVar4 = 3;
      bVar16 = true;
      pCVar12 = this_00 + 0xc04;
      psVar14 = local_73 + 3;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar16 = *(short *)pCVar12 == *psVar14;
        pCVar12 = pCVar12 + 2;
        psVar14 = psVar14 + 1;
      } while (bVar16);
      if ((!bVar16) || (this_00[0xbfc] != local_75)) {
        thunk_FUN_004f4570(this_00,'\0',(int)(this_00 + 0xbf5),(int)&local_7c);
      }
    }
    else {
      SetControlObj(this_00,'\x01');
    }
    if (((this_00[0xc0a] != local_67) || (this_00[0xbfc] != local_75)) &&
       (*(int *)(this_00 + 0x9c4) != 0)) {
      *(undefined4 *)(this_00 + 0x28) = 0x20;
      if (this_00[0xbfc] == (CPanelTy)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)(byte)this_00[0xc0a];
      }
      *(uint *)(this_00 + 0x2c) = uVar5;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x9c4),(undefined4 *)(this_00 + 0x18));
    }
    if (*(int *)(this_00 + 0xc12) == local_5f) {
      iVar4 = (*(int *)(*(int *)(this_00 + 0x194) + 4) - *(int *)(*(int *)(this_00 + 0x9ed) + 4)) /
              2;
      if (this_00[0xc24] != local_4d[0]) {
        FUN_006b4170(*(int *)(this_00 + 0x194),0,iVar4 + 0x36,0x5d,7,0x21,0);
        CVar3 = this_00[0xc24];
        local_c = CONCAT31(local_c._1_3_,CVar3);
        cVar8 = (char)(((uint)(byte)CVar3 * 0x21) / 100);
        local_10 = (CPanelTy *)CONCAT31(local_10._1_3_,cVar8);
        if ((CVar3 != (CPanelTy)0x0) && (cVar8 == '\0')) {
          local_10 = (CPanelTy *)CONCAT31(local_10._1_3_,1);
        }
        if ((byte)CVar3 < 0x46) {
          iVar10 = (-(uint)((byte)CVar3 < 0x14) & 5) + 5;
        }
        else {
          iVar10 = 0;
        }
        uVar5 = (uint)local_10 & 0xff;
        FUN_006b55f0(*(undefined4 **)(this_00 + 0x194),0,iVar4 + 0x37,0x7e - uVar5,
                     *(int *)(this_00 + 0x28a),0,iVar10,
                     *(int *)(*(int *)(this_00 + 0x28a) + 8) - uVar5,5,uVar5);
        FUN_006b55f0(*(undefined4 **)(this_00 + 0x194),0,iVar4 + 0x3f,0x5c,*(int *)(this_00 + 0x9ed)
                     ,0,0x3f,0xc,0x75,0x11);
        FUN_006b55f0(*(undefined4 **)(this_00 + 0x194),0,iVar4 + 0x3f,0x6c,*(int *)(this_00 + 0x9ed)
                     ,0,0x3f,0x1c,0x44,0x13);
        PaintDamageXY(this_00,*(int *)(this_00 + 0x194),iVar4 + 0x41,0x5d,
                      CONCAT31((int3)((uint)extraout_EDX >> 8),this_00[0xc24]),0x2714);
        PaintCostsXY(this_00,*(int *)(this_00 + 0x194),iVar4 + 0x41,0x68,
                     *(ushort *)(this_00 + 0xc1c),*(ushort *)(this_00 + 0xc20),4,2);
        if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                       *(uint *)(this_00 + 0xa8));
        }
      }
    }
    else {
      PaintCtrlObj(this_00,1);
      SetControlObj(this_00,'\0');
      thunk_FUN_00506040((int)this_00);
    }
    if (*(int *)(this_00 + 0xc4d) == local_24) {
      DAT_00858df8 = local_c4;
      return;
    }
    PaintIDSObj(this_00);
    DAT_00858df8 = local_c4;
    return;
  }
  if (CVar3 != (CPanelTy)0x1) {
    if (CVar3 != (CPanelTy)0x4) {
      DAT_00858df8 = local_c4;
      return;
    }
    if (local_7c == *(int *)(this_00 + 0xbf5)) {
      switch(*(int *)(this_00 + 0xbf5)) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfd:
      case 0xfe:
        goto switchD_00508349_caseD_dd;
      default:
        DAT_00858df8 = local_c4;
        return;
      }
    }
    goto LAB_005091b9;
  }
  if ((local_7c != *(int *)(this_00 + 0xbf5)) || (local_78 != this_00[0xbf9])) goto LAB_005091b9;
  cVar8 = '\0';
  cVar9 = '\0';
  iVar4 = 0;
  do {
    if (this_00[iVar4 + 0xbfe] != (CPanelTy)0x0) {
      cVar9 = cVar9 + '\x01';
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  iVar4 = 0;
  do {
    if (*(char *)((int)local_73 + iVar4) != '\0') {
      cVar8 = cVar8 + '\x01';
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (cVar9 == cVar8) {
    iVar4 = 3;
    bVar16 = true;
    pCVar12 = this_00 + 0xbfe;
    psVar14 = local_73;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar16 = *(short *)pCVar12 == *psVar14;
      pCVar12 = pCVar12 + 2;
      psVar14 = psVar14 + 1;
    } while (bVar16);
    if (bVar16) {
      if (this_00[0xbfd] != local_74) {
        thunk_FUN_004f1610(this_00,'\0');
      }
    }
    else {
      *(undefined4 *)(this_00 + 0x28) = 5;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x302),(undefined4 *)(this_00 + 0x18));
      local_8 = (CPanelTy *)((uint)local_8 & 0xffffff00);
      pCVar12 = this_00 + 0xbfe;
      do {
        if (*pCVar12 != (CPanelTy)0x0) {
          thunk_FUN_004f17d0(this_00,0,(byte)local_8);
        }
        bVar2 = (byte)local_8 + 1;
        pCVar12 = pCVar12 + 1;
        local_8 = (CPanelTy *)CONCAT31(local_8._1_3_,bVar2);
      } while (bVar2 < 6);
      thunk_FUN_004f1610(this_00,'\0');
      thunk_FUN_0054a8d0(DAT_00802a30);
    }
    iVar4 = 3;
    bVar16 = true;
    pCVar12 = this_00 + 0xc04;
    psVar14 = local_73 + 3;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar16 = *(short *)pCVar12 == *psVar14;
      pCVar12 = pCVar12 + 2;
      psVar14 = psVar14 + 1;
    } while (bVar16);
    if ((!bVar16) || (this_00[0xbfc] != local_75)) {
      thunk_FUN_004f4570(this_00,'\0',(int)(this_00 + 0xbf5),(int)&local_7c);
    }
  }
  else {
    SetControlObj(this_00,'\x01');
  }
  if (((this_00[0xc0a] != local_67) || (this_00[0xbfc] != local_75)) &&
     (*(int *)(this_00 + 0x9c4) != 0)) {
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    if (this_00[0xbfc] == (CPanelTy)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)(byte)this_00[0xc0a];
    }
    *(uint *)(this_00 + 0x2c) = uVar5;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x9c4),(undefined4 *)(this_00 + 0x18));
  }
  if (((*(int *)(this_00 + 0xbf5) == 0x43) || (*(int *)(this_00 + 0xbf5) == 0x4c)) &&
     ((this_00[0xc11] != local_60 || (this_00[0xbfc] != local_75)))) {
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    if (this_00[0xbfc] == (CPanelTy)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (-(uint)(this_00[0xc11] != (CPanelTy)0x0) & 2) + 1;
    }
    *(int *)(this_00 + 0x2c) = iVar4;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x30c),(undefined4 *)(this_00 + 0x18));
  }
  switch(*(undefined4 *)(this_00 + 0xbf5)) {
  case 0x32:
  case 0x40:
  case 0x44:
  case 0x49:
    if ((*(int *)(this_00 + 0xc12) == local_5f) && (this_00[0xc26] == local_4b)) {
      iVar4 = (*(int *)(*(int *)(this_00 + 0x194) + 4) - *(int *)(*(int *)(this_00 + 0x9ed) + 4)) /
              2;
      if (this_00[0xc24] != local_4d[0]) {
        FUN_006b4170(*(int *)(this_00 + 0x194),0,iVar4 + 0x36,0x5d,7,0x21,0);
        CVar3 = this_00[0xc24];
        cVar8 = (char)(((uint)(byte)CVar3 * 0x21) / 100);
        local_c = CONCAT31(local_c._1_3_,cVar8);
        if ((CVar3 != (CPanelTy)0x0) && (cVar8 == '\0')) {
          local_c = CONCAT31(local_c._1_3_,1);
        }
        if ((byte)CVar3 < 0x46) {
          iVar10 = (-(uint)((byte)CVar3 < 0x14) & 5) + 5;
        }
        else {
          iVar10 = 0;
        }
        uVar5 = local_c & 0xff;
        FUN_006b55f0(*(undefined4 **)(this_00 + 0x194),0,iVar4 + 0x37,0x7e - uVar5,
                     *(int *)(this_00 + 0x28a),0,iVar10,
                     *(int *)(*(int *)(this_00 + 0x28a) + 8) - uVar5,5,uVar5);
        FUN_006b55f0(*(undefined4 **)(this_00 + 0x194),0,iVar4 + 0x3f,0x5c,*(int *)(this_00 + 0x9ed)
                     ,0,0x3f,0xc,0x75,0x11);
        FUN_006b55f0(*(undefined4 **)(this_00 + 0x194),0,iVar4 + 0x3f,0x6c,*(int *)(this_00 + 0x9ed)
                     ,0,0x3f,0x1c,0x44,0x13);
        PaintDamageXY(this_00,*(int *)(this_00 + 0x194),iVar4 + 0x41,0x5d,
                      CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00[0xc24]),0x2714);
        PaintCostsXY(this_00,*(int *)(this_00 + 0x194),iVar4 + 0x41,0x68,
                     *(ushort *)(this_00 + 0xc1c),*(ushort *)(this_00 + 0xc20),4,2);
        if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                       *(uint *)(this_00 + 0xa8));
        }
      }
      if ((*(int *)(this_00 + 0xbf5) != 0x44) || (*(ushort *)(this_00 + 0xc34) == local_3d))
      goto switchD_0050858c_caseD_3b;
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),
                         ((*(undefined4 **)(this_00 + 0x194))[1] -
                         *(int *)(*(byte **)(this_00 + 0xa01) + 4)) / 2,0x37,'\x01',
                         *(byte **)(this_00 + 0xa01));
      uVar5 = (uint)*(ushort *)(this_00 + 0xc34);
      uVar7 = FUN_006b0140(0x2725,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__1_s__0_d_007c286c,uVar7,uVar5);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x56,0x39,0x6d,
                       0x15);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),&DAT_0080f33a,-2,-1,0,-1,-1);
      uVar5 = *(uint *)(this_00 + 0x15c);
      if ((int)uVar5 < 0) goto switchD_0050858c_caseD_3b;
      uVar18 = *(uint *)(this_00 + 0xa8);
      uVar17 = *(uint *)(this_00 + 0x50);
      goto LAB_0050918d;
    }
    iVar4 = 0;
    goto LAB_00508b35;
  case 0x33:
    if ((*(int *)(this_00 + 0xc12) == local_5f) && (*(int *)(this_00 + 0xc16) == local_5b)) {
      iVar4 = 0x3a;
      local_c = 2;
      local_18 = this_00 + 0xc1c;
      local_10 = local_4d;
      local_8 = this_00 + 0xc24;
      iVar10 = (*(int *)(*(int *)(this_00 + 0x194) + 4) - *(int *)(*(int *)(this_00 + 0x9ed) + 4)) /
               2;
      do {
        if (*local_8 != *local_10) {
          FUN_006b4170(*(int *)(this_00 + 0x194),0,iVar10 + 0x36,iVar4,7,0x21,0);
          CVar3 = *local_8;
          local_1c = CONCAT31(local_1c._1_3_,CVar3);
          cVar8 = (char)(((uint)(byte)CVar3 * 0x21) / 100);
          local_20 = CONCAT31(local_20._1_3_,cVar8);
          if ((CVar3 != (CPanelTy)0x0) && (cVar8 == '\0')) {
            local_20 = CONCAT31(local_20._1_3_,1);
          }
          if ((byte)CVar3 < 0x46) {
            local_14 = (-(uint)((byte)CVar3 < 0x14) & 5) + 5;
          }
          else {
            local_14 = 0;
          }
          uVar5 = local_20 & 0xff;
          FUN_006b55f0(*(undefined4 **)(this_00 + 0x194),0,iVar10 + 0x37,(iVar4 - uVar5) + 0x21,
                       *(int *)(this_00 + 0x28a),0,local_14,
                       *(int *)(*(int *)(this_00 + 0x28a) + 8) - uVar5,5,uVar5);
          FUN_006b55f0(*(undefined4 **)(this_00 + 0x194),0,iVar10 + 0x3f,iVar4 + -1,
                       *(int *)(this_00 + 0x9ed),0,0x3f,0xc,0x75,0x11);
          FUN_006b55f0(*(undefined4 **)(this_00 + 0x194),0,iVar10 + 0x3f,iVar4 + 0xf,
                       *(int *)(this_00 + 0x9ed),0,0x3f,0x1c,0x44,0x13);
          PaintDamageXY(this_00,*(int *)(this_00 + 0x194),iVar10 + 0x41,iVar4,
                        CONCAT31((int3)((uint)extraout_ECX >> 8),'d' - (char)*local_8),0x36b1);
          PaintCostsXY(this_00,*(int *)(this_00 + 0x194),iVar10 + 0x41,iVar4 + 0xb,
                       *(ushort *)local_18,*(ushort *)(local_18 + 4),4,2);
          if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
            FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,
                         *(uint *)(this_00 + 0x50),*(uint *)(this_00 + 0xa8));
          }
        }
        local_18 = local_18 + 2;
        local_10 = local_10 + 1;
        local_8 = local_8 + 1;
        iVar4 = iVar4 + 0x23;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      goto switchD_0050858c_caseD_3b;
    }
    break;
  case 0x34:
    PaintMunition(this_00,(*(int *)(*(int *)(this_00 + 0x194) + 4) -
                          *(int *)(*(int *)(this_00 + 0x9f9) + 4)) / 2);
    local_10 = this_00 + 0xa2e;
    iVar4 = 0;
    pCVar12 = this_00 + 0xa15;
    do {
      if (*(int *)pCVar12 != 0) {
        if (DAT_0080874e == '\x01') {
          cVar8 = (this_00[0x9d4] != (CPanelTy)0x1) + '\x01';
        }
        else {
          cVar8 = '\x02' - (this_00[0x9d4] != (CPanelTy)0x1);
        }
        uVar7 = thunk_FUN_00525ef0(cVar8,(char)iVar4);
        *(undefined4 *)local_10 = uVar7;
        if (this_00[0xbfc] == local_75) {
          *(undefined4 *)(this_00 + 0x28) = 5;
          iVar10 = *(int *)pCVar12;
        }
        else {
          *(undefined4 *)(this_00 + 0x28) = 0x20;
          *(uint *)(this_00 + 0x2c) = (uint)(this_00[0xbfc] != (CPanelTy)0x0);
          iVar10 = *(int *)pCVar12;
        }
        FUN_006e6080(this_00,2,iVar10,(undefined4 *)(this_00 + 0x18));
      }
      iVar4 = iVar4 + 1;
      local_10 = local_10 + 0x27;
      pCVar12 = pCVar12 + 4;
    } while (iVar4 < 6);
    uVar5 = *(uint *)(this_00 + 0x15c);
    if ((int)uVar5 < 0) goto switchD_0050858c_caseD_3b;
    uVar18 = *(uint *)(this_00 + 0xa8);
    uVar17 = *(uint *)(this_00 + 0x50);
    goto LAB_0050918d;
  case 0x35:
    iVar4 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(int *)(this_00 + 0x9ed) + 4)) / 2;
    if (this_00[0xc31] == local_40) {
      if (this_00[0xc31] == (CPanelTy)0x0) {
        if (*(short *)(this_00 + 0xc2f) != local_42) {
          PaintCtrlObj(this_00,1);
          iVar4 = *(int *)(this_00 + 0x302);
          if (iVar4 != 0) {
            puVar15 = local_e4;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar15 = 0;
              puVar15 = puVar15 + 1;
            }
            local_d4 = 5;
            FUN_006e6080(this_00,2,iVar4,local_e4);
          }
        }
        goto switchD_0050858c_caseD_3b;
      }
      if (this_00[0xc33] == local_3e) goto switchD_0050858c_caseD_3b;
      FUN_006b55f0(*(undefined4 **)(this_00 + 0x194),0,iVar4 + 0x39,0x65,*(int *)(this_00 + 0x9ed),0
                   ,0x39,0x15,0x4c,0x1b);
      PaintPerRes(this_00,iVar4);
      uVar5 = *(uint *)(this_00 + 0x15c);
      goto joined_r0x00508b00;
    }
    break;
  case 0x36:
  case 0x37:
  case 0x43:
  case 0x45:
  case 0x48:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x6f:
    if (this_00[0xc29] == local_48) goto switchD_0050858c_caseD_3b;
    iVar4 = (*(int *)(*(int *)(this_00 + 0x194) + 4) - *(int *)(*(int *)(this_00 + 0x9f5) + 4)) / 2;
    if (this_00[0xc29] == (CPanelTy)0xff) {
      this_00[0xc29] = (CPanelTy)0x0;
    }
    if (0x28 < (byte)this_00[0xc29]) {
      this_00[0xc29] = (CPanelTy)0x28;
    }
    local_8 = (CPanelTy *)((uint)local_8._1_3_ << 8);
    if (this_00[0xc29] != (CPanelTy)0x0) {
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),3);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 6 + ((uint)local_8 & 0xff) * 4,
                           0x75,'\x01',pbVar6);
        CVar3 = (CPanelTy)((byte)local_8 + 1);
        local_8 = (CPanelTy *)CONCAT31(local_8._1_3_,CVar3);
      } while ((byte)CVar3 < (byte)this_00[0xc29]);
    }
    if ((byte)local_8 < 0x28) {
      iVar10 = 0x28 - ((uint)local_8 & 0xff);
      iVar4 = iVar4 + 6 + ((uint)local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x75,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    uVar5 = *(uint *)(this_00 + 0x15c);
    goto joined_r0x00508b00;
  case 0x38:
  case 0x39:
  case 0x4f:
    PaintMineInf(this_00,(*(int *)(*(int *)(this_00 + 0x194) + 4) -
                         *(int *)(*(int *)(this_00 + 0x9ed) + 4)) / 2);
    uVar5 = *(uint *)(this_00 + 0x15c);
joined_r0x00508b00:
    if (-1 < (int)uVar5) {
LAB_00509179:
      uVar18 = *(uint *)(this_00 + 0xa8);
      uVar17 = *(uint *)(this_00 + 0x50);
LAB_0050918d:
      FUN_006b3640(DAT_008075a8,uVar5,0xffffffff,uVar17,uVar18);
    }
    goto switchD_0050858c_caseD_3b;
  case 0x3a:
    iVar4 = (*(int *)(*(int *)(this_00 + 0x194) + 4) - *(int *)(*(int *)(this_00 + 0x9ed) + 4)) / 2;
    if (this_00[0xc3a] != local_37) {
      local_8 = (CPanelTy *)((uint)local_8._1_3_ << 8);
      if (this_00[0xc3a] != (CPanelTy)0x0) {
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),
                             iVar4 + 0x70 + ((uint)local_8 & 0xff) * 4,0x54,'\x01',pbVar6);
          CVar3 = (CPanelTy)((byte)local_8 + 1);
          local_8 = (CPanelTy *)CONCAT31(local_8._1_3_,CVar3);
        } while ((byte)CVar3 < (byte)this_00[0xc3a]);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar10 = iVar4 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10,0x54,'\x01',pbVar6);
          iVar10 = iVar10 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                     *(uint *)(this_00 + 0xa8));
      }
    }
    if (this_00[0xc3b] != local_36) {
      local_8 = (CPanelTy *)((uint)local_8 & 0xffffff00);
      if (this_00[0xc3b] != (CPanelTy)0x0) {
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),
                             iVar4 + 0x70 + ((uint)local_8 & 0xff) * 4,0x5f,'\x01',pbVar6);
          CVar3 = (CPanelTy)((byte)local_8 + 1);
          local_8 = (CPanelTy *)CONCAT31(local_8._1_3_,CVar3);
        } while ((byte)CVar3 < (byte)this_00[0xc3b]);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar10 = iVar4 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10,0x5f,'\x01',pbVar6);
          iVar10 = iVar10 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                     *(uint *)(this_00 + 0xa8));
      }
    }
    if (*(ushort *)(this_00 + 0xc34) == local_3d) goto switchD_0050858c_caseD_3b;
    local_8 = (CPanelTy *)((uint)local_8 & 0xffffff00);
    local_c = ((uint)*(ushort *)(this_00 + 0xc34) * 0x28) / 400;
    if (local_c != 0) {
      uVar5 = 0;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),2);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 0xb + uVar5 * 4,0x76,'\x01',
                           pbVar6);
        bVar2 = (byte)local_8 + 1;
        local_8 = (CPanelTy *)CONCAT31(local_8._1_3_,bVar2);
        uVar5 = (uint)bVar2;
      } while (uVar5 < local_c);
    }
    if ((byte)local_8 < 0x28) {
      iVar4 = iVar4 + 0xb + ((uint)local_8 & 0xff) * 4;
      iVar10 = 0x28 - ((uint)local_8 & 0xff);
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x76,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    uVar5 = *(uint *)(this_00 + 0x15c);
    goto joined_r0x00509177;
  default:
    goto switchD_0050858c_caseD_3b;
  case 0x3c:
    CVar3 = this_00[0xc3c];
    local_c = CONCAT31(local_c._1_3_,CVar3);
    if (local_35 != CVar3) {
      PaintCtrlObj(this_00,1);
      SetControlObj(this_00,'\x01');
      thunk_FUN_00506040((int)this_00);
      goto switchD_0050858c_caseD_3b;
    }
    iVar4 = *(int *)(this_00 + 0x9ed);
    puVar15 = *(undefined4 **)(this_00 + 0x194);
    iVar10 = (puVar15[1] - *(int *)(iVar4 + 4)) / 2;
    if (CVar3 == (CPanelTy)0x1) {
      FUN_006b55f0(puVar15,0,iVar10 + 0x39,0x65,iVar4,0,0x39,0x15,0x4c,0x1b);
      PaintDamageXY(this_00,*(int *)(this_00 + 0x194),iVar10 + 0x39,0x65,
                    CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this_00[0xc3d]),0x2714);
      local_14 = 0;
      uVar5 = (uint)(*(int *)(this_00 + 0xc3d) * 0x28) / 100;
      if (uVar5 != 0) {
        iVar4 = iVar10 + 0xb;
        local_14 = uVar5;
        local_c = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x5c,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (local_14 < 0x28) {
        iVar4 = iVar10 + 0xb + local_14 * 4;
        iVar10 = 0x28 - local_14;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x5c,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else if (CVar3 == (CPanelTy)0x2) {
      FUN_006b55f0(puVar15,0,iVar10,0x71,iVar4,0,0,0x21,*(int *)(iVar4 + 4),
                   *(int *)(iVar4 + 8) + -0x21);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)(this_00 + 0xc3d));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1bc),*(int *)(this_00 + 0x194),0,iVar10,0x71,
                       *(int *)(*(int *)(this_00 + 0x9ed) + 4),
                       *(int *)(*(int *)(this_00 + 0x9ed) + 8) + -0x21);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1bc),&DAT_0080f33a,-1,-1,0);
    }
    uVar5 = *(uint *)(this_00 + 0x15c);
joined_r0x00509177:
    if ((int)uVar5 < 0) goto switchD_0050858c_caseD_3b;
    goto LAB_00509179;
  case 0x50:
    iVar4 = 3;
    bVar16 = true;
    pCVar12 = this_00 + 0xc11;
    pCVar11 = &local_60;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar16 = *(short *)pCVar12 == *(short *)pCVar11;
      pCVar12 = pCVar12 + 2;
      pCVar11 = pCVar11 + 2;
    } while (bVar16);
    if (!bVar16) {
      pCVar12 = this_00 + 0xa15;
      iVar4 = 6;
      do {
        if (*(int *)pCVar12 != 0) {
          if (this_00[0xbfc] == local_75) {
            *(undefined4 *)(this_00 + 0x28) = 5;
            iVar10 = *(int *)pCVar12;
          }
          else {
            *(undefined4 *)(this_00 + 0x28) = 0x20;
            *(uint *)(this_00 + 0x2c) = (uint)(this_00[0xbfc] != (CPanelTy)0x0);
            iVar10 = *(int *)pCVar12;
          }
          FUN_006e6080(this_00,2,iVar10,(undefined4 *)(this_00 + 0x18));
        }
        pCVar12 = pCVar12 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    goto switchD_0050858c_caseD_3b;
  }
  iVar4 = 1;
LAB_00508b35:
  PaintCtrlObj(this_00,iVar4);
  SetControlObj(this_00,'\0');
  thunk_FUN_00506040((int)this_00);
switchD_0050858c_caseD_3b:
  if (*(int *)(this_00 + 0xc4d) == local_24) {
    DAT_00858df8 = local_c4;
    return;
  }
  PaintIDSObj(this_00);
  DAT_00858df8 = local_c4;
  return;
switchD_00508349_caseD_dd:
  PaintCtrlObj(this_00,1);
  iVar4 = *(int *)(this_00 + 0x302);
  if (iVar4 == 0) {
    DAT_00858df8 = local_c4;
    return;
  }
  puVar15 = local_104;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  local_f4 = 5;
  FUN_006e6080(this_00,2,iVar4,local_104);
  DAT_00858df8 = local_c4;
  return;
}

