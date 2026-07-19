
void __thiscall CPanelTy::PaintWeap(CPanelTy *this,int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  CPanelTy *pCVar11;
  undefined4 unaff_ESI;
  CPanelTy *pCVar12;
  CPanelTy *pCVar13;
  void *unaff_EDI;
  char *pcVar14;
  char *pcVar15;
  CPanelTy *pCVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  InternalExceptionFrame IStack_7c;
  CPanelTy *pCStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  CPanelTy *pCStack_24;
  undefined4 *puStack_20;
  uint uStack_1c;
  CPanelTy *pCStack_18;
  int iStack_14;
  byte *pbStack_10;
  uint uStack_c;
  char cStack_5;
  
  pCStack_18 = this + 0xb63;
  if (param_1 == 0) {
    puStack_20 = *(undefined4 **)(this + 0x19c);
    pCStack_18 = this + 0xc51;
    iStack_28 = *(int *)(this + 0x58);
    iStack_2c = *(int *)(this + 0xb0);
  }
  else {
    puStack_20 = *(undefined4 **)(this + 0x184);
    iStack_28 = *(int *)(this + 0x40);
    iStack_2c = *(int *)(this + 0x98);
  }
  iStack_30 = 5;
  iStack_14 = 0x2f;
  uStack_1c = 0;
  if (param_1 == 0) {
    pCStack_24 = this + 0x664;
  }
  else {
    pCStack_24 = this + 0x31c;
  }
  uStack_c = uStack_c & 0xffffff00;
  IStack_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_7c;
  pCStack_38 = this;
  iVar5 = Library::MSVCRT::__setjmp3(IStack_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar13 = pCStack_18;
  pCVar11 = pCStack_38;
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_7c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x146,0,iVar5,&DAT_007a4ccc,
                               s_CPanelTy__PaintWeap_007c1ae8);
    if (iVar7 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x146);
    return;
  }
  pCVar12 = pCStack_38 + 0x31c;
  for (iVar5 = 0x46; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar12 = 0;
    pCVar12 = pCVar12 + 4;
  }
  iVar5 = iStack_30;
  if (*(short *)(pCStack_18 + 0x20) != 0) {
    uVar6 = thunk_FUN_005259b0(*(short *)(pCStack_18 + 0x20),*(ushort *)(pCStack_18 + 0x24),'\0');
    pbStack_10 = (byte *)FUN_0070b3a0(*(int *)(pCVar11 + 0x28e),uVar6);
    iVar5 = iStack_30;
    uStack_1c = -(uint)(pCVar13[7] != (CPanelTy)0x3) & 5;
    iStack_34 = uStack_1c + iStack_14;
    thunk_FUN_00540760(puStack_20,iStack_30,iStack_34,'\x06',pbStack_10);
    uVar2 = *(ushort *)(pCVar13 + 0x28);
    if (uVar2 != 0xffff) {
      wsprintfA((LPSTR)(pCVar11 + 0x1e1),&DAT_007c1890,(uint)uVar2);
      ccFntTy::SetSurf(*(ccFntTy **)(pCVar11 + 0x1b8),(int)puStack_20,0,iVar5 + 0x2f,
                       (*(int *)(pbStack_10 + 8) + -0xc) / 2 + uStack_1c + iStack_14,0x11,0xc);
      ccFntTy::WrTxt(*(ccFntTy **)(pCVar11 + 0x1b8),(uint *)(pCVar11 + 0x1e1),-3,-1,0,-1,-1);
      pCVar13 = pCStack_24 + (uStack_c & 0xff) * 0x1c;
      *(int *)pCVar13 = iVar5 + 0x2f + iStack_28;
      *(int *)(pCVar13 + 4) = iStack_34 + iStack_2c;
      *(int *)(pCVar13 + 8) = 0x11;
      *(int *)(pCVar13 + 0xc) = 0xc;
      iVar7 = thunk_FUN_00524fe0(*(undefined2 *)(pCStack_18 + 0x20));
      *(int *)(pCVar13 + 0x18) = iVar7;
      uStack_c = CONCAT31(uStack_c._1_3_,(char)uStack_c + '\x01');
    }
    pCVar13 = pCStack_24 + (uStack_c & 0xff) * 0x1c;
    *(int *)pCVar13 = iVar5 + iStack_28;
    *(int *)(pCVar13 + 4) = iStack_34 + iStack_2c;
    *(int *)(pCVar13 + 8) = *(int *)(pbStack_10 + 4);
    *(int *)(pCVar13 + 0xc) = *(int *)(pbStack_10 + 8);
    iVar7 = thunk_FUN_00524fe0(*(undefined2 *)(pCStack_18 + 0x20));
    *(int *)(pCVar13 + 0x18) = iVar7;
    uStack_c = CONCAT31(uStack_c._1_3_,(char)uStack_c + '\x01');
  }
  pCVar13 = pCStack_18;
  sVar3 = *(short *)(pCStack_18 + 0x1e);
  if (sVar3 == 0) {
    g_currentExceptionFrame = IStack_7c.previous;
    return;
  }
  if (sVar3 == 0xdd) {
    iVar7 = *(int *)(pCVar11 + 0x2d6);
    iVar10 = 0;
  }
  else {
    if (sVar3 != 0xde) {
      uVar6 = thunk_FUN_005259b0(sVar3,*(ushort *)(pCStack_18 + 0x22),'\0');
      pbStack_10 = (byte *)FUN_0070b3a0(*(int *)(pCVar11 + 0x28e),uVar6);
      goto LAB_004f27ff;
    }
    iVar7 = *(int *)(pCVar11 + 0x2d6);
    iVar10 = 1;
  }
  pbStack_10 = (byte *)FUN_0070b3a0(iVar7,iVar10);
LAB_004f27ff:
  switch(*(undefined2 *)(pCVar13 + 0x1e)) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    iVar10 = iStack_14 + 2;
    iVar7 = iVar5 + 1;
    break;
  default:
    if (*(short *)(pCVar13 + 0x20) == 0) {
      uStack_1c = (0x24 - *(int *)(pbStack_10 + 8)) / 2;
    }
    else {
      uStack_1c = ((-(uint)(pCVar13[7] != (CPanelTy)0x3) & 0xfffffffa) + 0x22) -
                  *(int *)(pbStack_10 + 8);
    }
    iVar10 = uStack_1c + iStack_14;
    iVar7 = iVar5;
  }
  thunk_FUN_00540760(puStack_20,iVar7,iVar10,'\x06',pbStack_10);
  if (*(short *)(pCVar13 + 0x1e) == 0xff) {
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar11 + 0x1b8),(int)puStack_20,0,iVar5 + 1,iStack_14 + 2,
                     *(int *)(pbStack_10 + 4),*(int *)(pbStack_10 + 8));
    iVar19 = -1;
    iVar18 = -1;
    uVar17 = 1;
    iVar10 = -1;
    iVar7 = -2;
    puVar8 = (uint *)FUN_006b0140(0x2715,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar11 + 0x1b8),puVar8,iVar7,iVar10,uVar17,iVar18,iVar19);
  }
  cStack_5 = '\x01';
  if (*(short *)(pCVar13 + 0x26) == -1) {
    switch(*(undefined2 *)(pCVar13 + 0x1e)) {
    case 0xa3:
    case 0xa8:
    case 0xb2:
    case 0xbe:
    case 0xff:
      cStack_5 = '\0';
      break;
    default:
      uVar6 = 0xffffffff;
      pcVar14 = &DAT_007c1b00;
      do {
        pcVar15 = pcVar14;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar15 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar15;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pCVar12 = (CPanelTy *)(pcVar15 + -uVar6);
      pCVar16 = pCVar11 + 0x1e1;
      for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pCVar16 = *(undefined4 *)pCVar12;
        pCVar12 = pCVar12 + 4;
        pCVar16 = pCVar16 + 4;
      }
      for (uVar6 = uVar6 & 3; pCVar13 = pCStack_18, iVar5 = iStack_30, uVar6 != 0; uVar6 = uVar6 - 1
          ) {
        *pCVar16 = *pCVar12;
        pCVar12 = pCVar12 + 1;
        pCVar16 = pCVar16 + 1;
      }
    }
  }
  else {
    wsprintfA((LPSTR)(pCVar11 + 0x1e1),&DAT_007c1890,*(short *)(pCVar13 + 0x26));
  }
  if (cStack_5 != '\0') {
    iStack_34 = 0;
    if ((0x9b < *(ushort *)(pCVar13 + 0x1e)) && (*(ushort *)(pCVar13 + 0x1e) < 0x9f)) {
      iStack_34 = 4;
    }
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar11 + 0x1b8),(int)puStack_20,0,iVar5 + 0x2f,
                     (*(int *)(pbStack_10 + 8) + -0xc) / 2 + iStack_34 + uStack_1c + iStack_14,0x11,
                     0xc);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar11 + 0x1b8),(uint *)(pCVar11 + 0x1e1),-3,-1,0,-1,-1);
    pCVar11 = pCStack_24 + (uStack_c & 0xff) * 0x1c;
    *(int *)pCVar11 = iVar5 + 0x2f + iStack_28;
    *(uint *)(pCVar11 + 4) =
         (*(int *)(pbStack_10 + 8) + -0xc) / 2 + iStack_34 + uStack_1c + iStack_14 + iStack_2c;
    *(int *)(pCVar11 + 8) = 0x11;
    *(int *)(pCVar11 + 0xc) = 0xc;
    iVar7 = thunk_FUN_00524fe0(*(undefined2 *)(pCStack_18 + 0x1e));
    *(int *)(pCVar11 + 0x18) = iVar7;
    uStack_c = CONCAT31(uStack_c._1_3_,(char)uStack_c + '\x01');
    pCVar13 = pCStack_18;
  }
  switch(*(undefined2 *)(pCVar13 + 0x1e)) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    pCVar11 = pCStack_24 + (uStack_c & 0xff) * 0x1c;
    *(int *)pCVar11 = iVar5 + 1 + iStack_28;
    *(int *)(pCVar11 + 4) = iStack_14 + 2 + iStack_2c;
    break;
  default:
    pCVar11 = pCStack_24 + (uStack_c & 0xff) * 0x1c;
    *(int *)pCVar11 = iVar5 + iStack_28;
    *(uint *)(pCVar11 + 4) = uStack_1c + iStack_14 + iStack_2c;
  }
  *(int *)(pCVar11 + 8) = *(int *)(pbStack_10 + 4);
  *(int *)(pCVar11 + 0xc) = *(int *)(pbStack_10 + 8);
  iVar5 = thunk_FUN_00524fe0(*(undefined2 *)(pCVar13 + 0x1e));
  *(int *)(pCVar11 + 0x18) = iVar5;
  g_currentExceptionFrame = IStack_7c.previous;
  return;
}

