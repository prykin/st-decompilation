
void __thiscall CPanelTy::SetCmdObj(CPanelTy *this,uint param_1)

{
  CPanelTy CVar1;
  code *pcVar2;
  bool bVar3;
  CPanelTy *pCVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char acStack_19c [36];
  char acStack_178 [36];
  char acStack_154 [36];
  char acStack_130 [36];
  char acStack_10c [36];
  undefined4 uStack_e8;
  undefined4 auStack_e4 [16];
  char acStack_a4 [29];
  uint uStack_87;
  char acStack_80 [29];
  uint uStack_63;
  char acStack_5c [24];
  CPanelTy *pCStack_44;
  char acStack_40 [8];
  char acStack_38 [12];
  char acStack_2c [12];
  char acStack_20 [12];
  char cStack_14;
  int3 iStack_13;
  undefined1 uStack_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined2 uStack_c;
  undefined1 uStack_a;
  char acStack_8 [4];
  
  if (DAT_00808784 != 0) {
    return;
  }
  if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return;
  }
  uStack_e8 = DAT_00858df8;
  DAT_00858df8 = &uStack_e8;
  pCStack_44 = this;
  iVar5 = __setjmp3(auStack_e4,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_e8;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0xa1a,0,iVar5,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar5,0,0x7c2700,0xa1a);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  thunk_FUN_005252c0(0xae);
  pCVar4 = pCStack_44;
  *(undefined4 *)(pCStack_44 + 300) = 0;
  if (pCStack_44[0xc52] == (CPanelTy)0x0) {
    thunk_FUN_004f8020(pCStack_44,'\0',0);
  }
  *(undefined4 *)(pCVar4 + 300) = 1;
  if (DAT_008016e8 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(DAT_008016e8,'\0');
  }
  if (DAT_0080167c != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(DAT_0080167c,'\0');
  }
  if (DAT_00801680 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(DAT_00801680,'\0');
  }
  if (DAT_00801698 != (int *)0x0) {
    (**(code **)(*DAT_00801698 + 0x1c))(0);
  }
  if (DAT_00802a44 != (void *)0x0) {
    thunk_FUN_00552160(DAT_00802a44,'\0','\0');
  }
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
  thunk_FUN_0054a8d0(DAT_00802a30);
  CVar1 = pCVar4[(param_1 & 0xff) + 0xbfe];
  switch((uint)(byte)CVar1) {
  case 1:
    pcVar7 = acStack_8 + 2;
    acStack_8[2] = 0;
    puVar9 = (undefined4 *)0x8;
    break;
  case 2:
  case 3:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x26:
  case 0x2a:
  case 0x34:
  case 0x37:
  case 0x42:
  case 0x43:
    thunk_FUN_0054b630(DAT_00802a30,(uint)(byte)CVar1,0);
    DAT_00858df8 = (undefined4 *)uStack_e8;
    return;
  default:
    goto switchD_0050f5b2_caseD_4;
  case 0x15:
  case 0x16:
    acStack_8[3] = CVar1 != (CPanelTy)0x15;
    pcVar7 = acStack_8 + 3;
    puVar9 = (undefined4 *)0x28;
    break;
  case 0x1b:
    pcVar7 = acStack_38;
    acStack_38[4] = 0;
    acStack_38[0] = '\x06';
    acStack_38[1] = '\0';
    acStack_38[2] = '\0';
    acStack_38[3] = '\0';
    acStack_38[5] = '\x01';
    acStack_38[6] = '\0';
    acStack_38[7] = 0xff;
    acStack_38[8] = -1;
    acStack_38[9] = -1;
    acStack_38[10] = 0xff;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x1c:
    pcVar7 = acStack_2c;
    acStack_2c[4] = 0;
    acStack_2c[0] = '\x04';
    acStack_2c[1] = '\0';
    acStack_2c[2] = '\0';
    acStack_2c[3] = '\0';
    acStack_2c[5] = '\x01';
    acStack_2c[6] = '\0';
    acStack_2c[7] = 0xff;
    acStack_2c[8] = -1;
    acStack_2c[9] = -1;
    acStack_2c[10] = 0xff;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x1d:
  case 0x3d:
    if ((DAT_0080167c != (ProdPanelTy *)0x0) && (*(short *)(DAT_0080167c + 0x172) == 2)) {
      ProdPanelTy::SetPanel(DAT_0080167c,'\x01');
    }
    thunk_FUN_004fad20(pCVar4);
    DAT_00858df8 = (undefined4 *)uStack_e8;
    return;
  case 0x1e:
  case 0x1f:
    pcVar7 = &cStack_14;
    _cStack_14 = CONCAT31((-(uint3)(CVar1 != (CPanelTy)0x1e) & 0xc) + 9,1);
    uStack_10 = 0;
    uStack_f = 1;
    uStack_d = 0xff;
    uStack_c = 0xffff;
    uStack_a = 0xff;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x20:
  case 0x33:
    pcVar7 = acStack_8 + 1;
    acStack_8[1] = 0;
    puVar9 = (undefined4 *)0x22;
    break;
  case 0x21:
  case 0x41:
    if ((DAT_008016e8 != (ProdPanelTy *)0x0) && (*(short *)(DAT_008016e8 + 0x172) == 2)) {
      ProdPanelTy::SetPanel(DAT_008016e8,'\x01');
    }
    thunk_FUN_004fad20(pCVar4);
    DAT_00858df8 = (undefined4 *)uStack_e8;
    return;
  case 0x22:
  case 0x3b:
  case 0x40:
    pcVar7 = acStack_40;
    acStack_40[4] = '\0';
    acStack_40[5] = '\0';
    acStack_40[6] = 0;
    acStack_40[0] = '\x02';
    acStack_40[1] = '\0';
    acStack_40[2] = '\0';
    acStack_40[3] = '\0';
    puVar9 = (undefined4 *)0x1f;
    break;
  case 0x23:
    pcVar7 = acStack_10c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    pcVar7 = acStack_10c;
    acStack_10c[0] = '\t';
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x24:
  case 0x25:
    pcVar8 = acStack_a4;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    pcVar7 = acStack_a4;
    *pcVar8 = '\0';
    acStack_a4[0] = '\b';
    puVar9 = (undefined4 *)0x17;
    uStack_87 = (uint)(CVar1 == (CPanelTy)0x24);
    break;
  case 0x27:
  case 0x32:
    pcVar7 = acStack_8;
    acStack_8[0] = '\0';
    puVar9 = (undefined4 *)0x9;
    break;
  case 0x28:
  case 0x29:
    pcVar7 = acStack_178;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    pcVar7 = acStack_178;
    acStack_178[0] = (CVar1 != (CPanelTy)0x28) + '\f';
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x30:
  case 0x3f:
    if ((DAT_00802a44 != (void *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) == 2)) {
      thunk_FUN_00552160(DAT_00802a44,'\x01','\0');
    }
    thunk_FUN_004fad20(pCVar4);
    DAT_00858df8 = (undefined4 *)uStack_e8;
    return;
  case 0x31:
    if ((DAT_00802a44 != (void *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) == 2)) {
      thunk_FUN_00552160(DAT_00802a44,'\x01','\x01');
    }
    thunk_FUN_004fad20(pCVar4);
    DAT_00858df8 = (undefined4 *)uStack_e8;
    return;
  case 0x36:
    pcVar7 = acStack_130;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    pcVar7 = acStack_130;
    acStack_130[0] = '\x12';
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x38:
  case 0x45:
    pcVar8 = acStack_80;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    pcVar7 = acStack_80;
    *pcVar8 = '\0';
    acStack_80[0] = '\x1a';
    puVar9 = (undefined4 *)0x17;
    uStack_63 = (uint)(CVar1 != (CPanelTy)0x38);
    break;
  case 0x39:
  case 0x46:
    pcVar8 = acStack_19c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    pcVar7 = acStack_19c;
    *pcVar8 = '\0';
    puVar9 = (undefined4 *)0x17;
    acStack_19c[0] = (CVar1 != (CPanelTy)0x39) + '\f';
    break;
  case 0x3e:
    thunk_FUN_0054b630(DAT_00802a30,0xe,0x6c);
    DAT_00858df8 = (undefined4 *)uStack_e8;
    return;
  case 0x44:
    if ((DAT_00801680 != (ProdPanelTy *)0x0) && (*(short *)(DAT_00801680 + 0x172) == 2)) {
      ProdPanelTy::SetPanel(DAT_00801680,'\x01');
    }
    thunk_FUN_004fad20(pCVar4);
    DAT_00858df8 = (undefined4 *)uStack_e8;
    return;
  case 0x4f:
    pcVar7 = acStack_20;
    acStack_20[4] = 0;
    acStack_20[0] = '\b';
    acStack_20[1] = '\0';
    acStack_20[2] = '\0';
    acStack_20[3] = '\0';
    acStack_20[5] = '\x01';
    acStack_20[6] = '\0';
    acStack_20[7] = 0xff;
    acStack_20[8] = -1;
    acStack_20[9] = -1;
    acStack_20[10] = 0xff;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x50:
  case 0x51:
    pcVar7 = acStack_154;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    pcVar7 = acStack_154;
    acStack_154[0] = (CVar1 != (CPanelTy)0x50) + '\x1b';
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x52:
    pcVar7 = acStack_5c;
    pcVar8 = acStack_5c;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    acStack_5c[0] = '\a';
    puVar9 = (undefined4 *)0x16;
  }
  thunk_FUN_0054edf0(puVar9,(undefined4 *)pcVar7,0,0xffffffff);
switchD_0050f5b2_caseD_4:
  DAT_00858df8 = (undefined4 *)uStack_e8;
  return;
}

