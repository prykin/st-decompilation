
void __thiscall CPanelTy::Update1Panel(CPanelTy *this)

{
  CPanelTy CVar1;
  code *pcVar2;
  CPanelTy *this_00;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 unaff_ESI;
  CPanelTy *pCVar13;
  void *unaff_EDI;
  CPanelTy *pCVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 *puStack_90;
  undefined4 auStack_8c [16];
  CPanelTy *pCStack_4c;
  CPanelTy CStack_48;
  CPanelTy CStack_47;
  CPanelTy CStack_46;
  int iStack_45;
  CPanelTy CStack_41;
  int iStack_40;
  CPanelTy aCStack_3c [15];
  CPanelTy CStack_2d;
  CPanelTy CStack_2c;
  CPanelTy CStack_2b;
  undefined4 uStack_2a;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  short sStack_20;
  CPanelTy aCStack_1e [8];
  int iStack_16;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  
  puStack_90 = DAT_00858df8;
  DAT_00858df8 = &puStack_90;
  pCStack_4c = this;
  iVar4 = __setjmp3(auStack_8c,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_4c;
  if (iVar4 != 0) {
    DAT_00858df8 = puStack_90;
    iVar10 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x167,0,iVar4,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar4,0,0x7c23cc,0x167);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pCVar13 = pCStack_4c + 0xb63;
  pCVar14 = &CStack_48;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar14 = *(undefined4 *)pCVar13;
    pCVar13 = pCVar13 + 4;
    pCVar14 = pCVar14 + 4;
  }
  *(undefined2 *)pCVar14 = *(undefined2 *)pCVar13;
  pCVar13 = pCStack_4c + 0xb63;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar13 = 0;
    pCVar13 = pCVar13 + 4;
  }
  *(undefined2 *)pCVar13 = 0;
  iStack_16 = *(int *)(pCStack_4c + 0xb4b);
  FUN_006afe40(&iStack_16,*(uint **)(pCStack_4c + 0xb95));
  *(undefined4 *)(*(int *)(this_00 + 0xb95) + 0xc) = 0;
  *(int *)(this_00 + 0xb4b) = iStack_16;
  thunk_FUN_0043beb0(DAT_007fa174,1,(int *)(this_00 + 0xb63));
  if (CStack_48 != this_00[0xb63]) {
    if (DAT_00801684 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    SwitchTV(this_00,1);
    PaintInfoBoat(this_00);
    DAT_00858df8 = puStack_90;
    return;
  }
  if (this_00[0xb80] != CStack_2b) {
    if (DAT_00801684 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
  }
  if (this_00[0xb63] == (CPanelTy)0x2) {
    if ((*(int *)(*(int *)(this_00 + 0xb95) + 0xc) != *(int *)(iStack_16 + 0xc)) ||
       (CStack_47 != this_00[0xb64])) {
      SwitchTV(this_00,1);
    }
    iVar4 = 5;
    bVar15 = true;
    pCVar13 = aCStack_1e;
    pCVar14 = this_00 + 0xb8d;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar15 = *pCVar13 == *pCVar14;
      pCVar13 = pCVar13 + 1;
      pCVar14 = pCVar14 + 1;
    } while (bVar15);
    if (!bVar15) {
      PaintDeep(this_00,1);
      bVar3 = (DAT_0080874e == '\x03') + 2;
      uStack_8 = CONCAT31(uStack_8._1_3_,bVar3);
      if (bVar3 < 0xb) {
        uVar5 = (uint)bVar3;
        if (-1 < (int)*(uint *)(this_00 + uVar5 * 4 + 0x148)) {
          FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + uVar5 * 4 + 0x148),0xffffffff,
                       *(uint *)(this_00 + uVar5 * 4 + 0x3c),*(uint *)(this_00 + uVar5 * 4 + 0x94));
        }
      }
    }
    uVar5 = FUN_006b5a50(iStack_16,*(int *)(this_00 + 0xb95));
    if (uVar5 != 0) {
      FUN_006b55f0(*(undefined4 **)(this_00 + 0x184),0,0,0,*(int *)(this_00 + 0x958),0,0,0,
                   *(int *)(*(int *)(this_00 + 0x958) + 4),0x3c);
      uVar16 = *(undefined4 *)(*(int *)(this_00 + 0xb95) + 0xc);
      uVar6 = FUN_006b0140(0x36b9,DAT_00807618);
      wsprintfA(*(LPSTR *)(this_00 + 0x213),s__1_s_0_d_007c245c,uVar6,uVar16);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x184),0,2,0xf,
                       *(int *)(*(int *)(this_00 + 0x958) + 4) + -4,0x2d);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),*(uint **)(this_00 + 0x213),-2,-1,0,-1,-1);
      if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                     *(uint *)(this_00 + 0x98));
      }
      if ((DAT_0080874e == '\x03') && (CStack_2c != this_00[0xb7f])) {
        PaintEnergy(this_00,1);
      }
      iStack_10 = 1;
      uStack_c = 0;
      uStack_8 = *(uint *)(iStack_16 + 0xc);
      if (uStack_8 != 0) {
        iVar4 = *(int *)(this_00 + 0xb95);
        uVar5 = *(uint *)(iVar4 + 0xc);
        do {
          if (uStack_c < uStack_8) {
            piVar7 = (int *)(*(int *)(iStack_16 + 8) * uStack_c + *(int *)(iStack_16 + 0x1c));
          }
          else {
            piVar7 = (int *)0x0;
          }
          uVar11 = 0;
          if (uVar5 != 0) {
            if (uVar5 == 0) {
              piVar8 = (int *)0x0;
              goto LAB_004ff6e4;
            }
            do {
              piVar8 = (int *)(*(int *)(iVar4 + 8) * uVar11 + *(int *)(iVar4 + 0x1c));
LAB_004ff6e4:
              if (*piVar8 == *piVar7) {
                iStack_10 = 0;
                break;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar5);
          }
          if (iStack_10 == 0) goto LAB_004ff723;
          uStack_c = uStack_c + 1;
        } while (uStack_c < uStack_8);
      }
      if ((iStack_10 != 0) && (DAT_00801678 != (int *)0x0)) {
        (**(code **)(*DAT_00801678 + 0x1c))(0);
      }
    }
  }
LAB_004ff723:
  CVar1 = this_00[0xb63];
  if (((CVar1 != (CPanelTy)0x1) && (CVar1 != (CPanelTy)0x4)) && (CVar1 != (CPanelTy)0x3)) {
    DAT_00858df8 = puStack_90;
    return;
  }
  if (((iStack_40 != *(int *)(this_00 + 0xb6b)) || (CStack_47 != this_00[0xb64])) ||
     (CStack_46 != this_00[0xb65])) {
    if (DAT_00801684 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    SwitchTV(this_00,1);
  }
  iVar4 = *(int *)(this_00 + 0xb66);
  if ((iStack_45 != iVar4) || (CStack_41 != this_00[0xb6a])) {
    if ((iStack_45 == 7) || (((iStack_45 == 0x13 || (iVar4 == 7)) || (iVar4 == 0x13)))) {
      PaintInfoBoat(this_00);
    }
    else {
      FUN_006b55f0(*(undefined4 **)(this_00 + 0x184),0,1,0,*(int *)(this_00 + 0x958),0,1,0,0x4e,0x20
                  );
      PaintName(this_00,1);
      if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                     *(uint *)(this_00 + 0x98));
      }
    }
  }
  pCVar14 = this_00 + 0xb6f;
  pCVar13 = aCStack_3c;
  do {
    CVar1 = *pCVar13;
    bVar15 = (byte)CVar1 < (byte)*pCVar14;
    if (CVar1 != *pCVar14) {
LAB_004ff875:
      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_004ff87a;
    }
    if (CVar1 == (CPanelTy)0x0) break;
    CVar1 = pCVar13[1];
    bVar15 = (byte)CVar1 < (byte)pCVar14[1];
    if (CVar1 != pCVar14[1]) goto LAB_004ff875;
    pCVar13 = pCVar13 + 2;
    pCVar14 = pCVar14 + 2;
  } while (CVar1 != (CPanelTy)0x0);
  iVar4 = 0;
LAB_004ff87a:
  if (iVar4 != 0) {
    FUN_006b55f0(*(undefined4 **)(this_00 + 0x184),0,1,0,*(int *)(this_00 + 0x958),0,1,0,0x4e,0x20);
    PaintName(this_00,1);
    if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
      FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                   *(uint *)(this_00 + 0x98));
    }
  }
  if (CStack_2d != this_00[0xb7e]) {
    FUN_006b55f0(*(undefined4 **)(this_00 + 0x184),0,1,0x1f,*(int *)(this_00 + 0x958),0,1,0x1f,0x4e,
                 0x11);
    PaintLife(this_00,1);
    if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
      FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                   *(uint *)(this_00 + 0x98));
    }
  }
  if (((DAT_0080874e == '\x03') && (this_00[0xb6a] == (CPanelTy)0x3)) &&
     (CStack_2c != this_00[0xb7f])) {
    PaintEnergy(this_00,1);
  }
  iVar4 = *(int *)(this_00 + 0xb66);
  if (((iVar4 == 7) || (iVar4 == 0x13)) || (iVar4 == 0x1b)) {
    if (*(int *)(this_00 + 0xb81) != uStack_2a) {
      FUN_006b55f0(*(undefined4 **)(this_00 + 0x184),0,1,0x2f,*(int *)(this_00 + 0x958),0,1,0x2f,
                   0x4e,0x24);
      if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                     *(uint *)(this_00 + 0x98));
      }
    }
    iVar4 = *(int *)(this_00 + 0xb81);
    if (iVar4 == 0) goto LAB_004ffb91;
    if (iVar4 != uStack_2a) {
      uVar5 = thunk_FUN_00526ba0(iVar4,(char)this_00[0xb85]);
      pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2be),uVar5);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x184),0xb,0x31,'\x01',pbVar9);
      pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ca),1);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x184),10,0x30,'\x06',pbVar9);
      if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                     *(uint *)(this_00 + 0x98));
      }
    }
    FUN_006b4170(*(int *)(this_00 + 0x184),0,0x3b,0x31,7,0x21,0);
    CVar1 = this_00[0xb86];
    cVar12 = (char)(((uint)(byte)CVar1 * 0x21) / 100);
    uStack_8 = CONCAT31(uStack_8._1_3_,cVar12);
    if ((CVar1 != (CPanelTy)0x0) && (cVar12 == '\0')) {
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
    }
    if ((byte)CVar1 < 0x46) {
      iVar4 = (-(uint)((byte)CVar1 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = uStack_8 & 0xff;
    FUN_006b55f0(*(undefined4 **)(this_00 + 0x184),0,0x3c,0x52 - uVar5,*(int *)(this_00 + 0x28a),0,
                 iVar4,*(int *)(*(int *)(this_00 + 0x28a) + 8) - uVar5,5,uVar5);
    uVar5 = *(uint *)(this_00 + 0x14c);
  }
  else {
    if ((((((short)uStack_2a == *(short *)(this_00 + 0xb81)) &&
          (sStack_26 == *(short *)(this_00 + 0xb85))) && (sStack_22 == *(short *)(this_00 + 0xb89)))
        && ((uStack_2a._2_2_ == *(short *)(this_00 + 0xb83) &&
            (sStack_24 == *(short *)(this_00 + 0xb87))))) &&
       (sStack_20 == *(short *)(this_00 + 0xb8b))) goto LAB_004ffb91;
    FUN_006b55f0(*(undefined4 **)(this_00 + 0x184),0,1,0x2f,*(int *)(this_00 + 0x958),0,1,0x2f,0x4e,
                 0x24);
    PaintWeap(this_00,1);
    uVar5 = *(uint *)(this_00 + 0x14c);
  }
  if (-1 < (int)uVar5) {
    FUN_006b3640(DAT_008075a8,uVar5,0xffffffff,*(uint *)(this_00 + 0x40),*(uint *)(this_00 + 0x98));
  }
LAB_004ffb91:
  iVar4 = 5;
  bVar15 = true;
  pCVar13 = aCStack_1e;
  pCVar14 = this_00 + 0xb8d;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar15 = *pCVar13 == *pCVar14;
    pCVar13 = pCVar13 + 1;
    pCVar14 = pCVar14 + 1;
  } while (bVar15);
  if (!bVar15) {
    PaintDeep(this_00,1);
    bVar3 = (DAT_0080874e == '\x03') + 2;
    uStack_8 = CONCAT31(uStack_8._1_3_,bVar3);
    if (bVar3 < 0xb) {
      uVar5 = (uint)bVar3;
      if (-1 < (int)*(uint *)(this_00 + uVar5 * 4 + 0x148)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + uVar5 * 4 + 0x148),0xffffffff,
                     *(uint *)(this_00 + uVar5 * 4 + 0x3c),*(uint *)(this_00 + uVar5 * 4 + 0x94));
      }
    }
  }
  DAT_00858df8 = puStack_90;
  return;
}

