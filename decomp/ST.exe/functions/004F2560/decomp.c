
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintWeap */

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
  InternalExceptionFrame local_7c;
  CPanelTy *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CPanelTy *local_24;
  undefined4 *local_20;
  uint local_1c;
  CPanelTy *local_18;
  int local_14;
  byte *local_10;
  uint local_c;
  char local_5;
  
  local_18 = this + 0xb63;
  if (param_1 == 0) {
    local_20 = *(undefined4 **)(this + 0x19c);
    local_18 = this + 0xc51;
    local_28 = *(int *)(this + 0x58);
    local_2c = *(int *)(this + 0xb0);
  }
  else {
    local_20 = *(undefined4 **)(this + 0x184);
    local_28 = *(int *)(this + 0x40);
    local_2c = *(int *)(this + 0x98);
  }
  local_30 = 5;
  local_14 = 0x2f;
  local_1c = 0;
  if (param_1 == 0) {
    local_24 = this + 0x664;
  }
  else {
    local_24 = this + 0x31c;
  }
  local_c = local_c & 0xffffff00;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_38 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar13 = local_18;
  pCVar11 = local_38;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_7c.previous;
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
  pCVar12 = local_38 + 0x31c;
  for (iVar5 = 0x46; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar12 = 0;
    pCVar12 = pCVar12 + 4;
  }
  iVar5 = local_30;
  if (*(short *)(local_18 + 0x20) != 0) {
    uVar6 = thunk_FUN_005259b0(*(short *)(local_18 + 0x20),*(ushort *)(local_18 + 0x24),'\0');
    local_10 = (byte *)FUN_0070b3a0(*(int *)(pCVar11 + 0x28e),uVar6);
    iVar5 = local_30;
    local_1c = -(uint)(pCVar13[7] != (CPanelTy)0x3) & 5;
    local_34 = local_1c + local_14;
    thunk_FUN_00540760(local_20,local_30,local_34,'\x06',local_10);
    uVar2 = *(ushort *)(pCVar13 + 0x28);
    if (uVar2 != 0xffff) {
      wsprintfA((LPSTR)(pCVar11 + 0x1e1),&DAT_007c1890,(uint)uVar2);
      ccFntTy::SetSurf(*(ccFntTy **)(pCVar11 + 0x1b8),(int)local_20,0,iVar5 + 0x2f,
                       (*(int *)(local_10 + 8) + -0xc) / 2 + local_1c + local_14,0x11,0xc);
      ccFntTy::WrTxt(*(ccFntTy **)(pCVar11 + 0x1b8),(uint *)(pCVar11 + 0x1e1),-3,-1,0,-1,-1);
      pCVar13 = local_24 + (local_c & 0xff) * 0x1c;
      *(int *)pCVar13 = iVar5 + 0x2f + local_28;
      *(int *)(pCVar13 + 4) = local_34 + local_2c;
      *(int *)(pCVar13 + 8) = 0x11;
      *(int *)(pCVar13 + 0xc) = 0xc;
      iVar7 = thunk_FUN_00524fe0(*(undefined2 *)(local_18 + 0x20));
      *(int *)(pCVar13 + 0x18) = iVar7;
      local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
    }
    pCVar13 = local_24 + (local_c & 0xff) * 0x1c;
    *(int *)pCVar13 = iVar5 + local_28;
    *(int *)(pCVar13 + 4) = local_34 + local_2c;
    *(int *)(pCVar13 + 8) = *(int *)(local_10 + 4);
    *(int *)(pCVar13 + 0xc) = *(int *)(local_10 + 8);
    iVar7 = thunk_FUN_00524fe0(*(undefined2 *)(local_18 + 0x20));
    *(int *)(pCVar13 + 0x18) = iVar7;
    local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
  }
  pCVar13 = local_18;
  sVar3 = *(short *)(local_18 + 0x1e);
  if (sVar3 == 0) {
    g_currentExceptionFrame = local_7c.previous;
    return;
  }
  if (sVar3 == 0xdd) {
    iVar7 = *(int *)(pCVar11 + 0x2d6);
    iVar10 = 0;
  }
  else {
    if (sVar3 != 0xde) {
      uVar6 = thunk_FUN_005259b0(sVar3,*(ushort *)(local_18 + 0x22),'\0');
      local_10 = (byte *)FUN_0070b3a0(*(int *)(pCVar11 + 0x28e),uVar6);
      goto LAB_004f27ff;
    }
    iVar7 = *(int *)(pCVar11 + 0x2d6);
    iVar10 = 1;
  }
  local_10 = (byte *)FUN_0070b3a0(iVar7,iVar10);
LAB_004f27ff:
  switch(*(undefined2 *)(pCVar13 + 0x1e)) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    iVar10 = local_14 + 2;
    iVar7 = iVar5 + 1;
    break;
  default:
    if (*(short *)(pCVar13 + 0x20) == 0) {
      local_1c = (0x24 - *(int *)(local_10 + 8)) / 2;
    }
    else {
      local_1c = ((-(uint)(pCVar13[7] != (CPanelTy)0x3) & 0xfffffffa) + 0x22) -
                 *(int *)(local_10 + 8);
    }
    iVar10 = local_1c + local_14;
    iVar7 = iVar5;
  }
  thunk_FUN_00540760(local_20,iVar7,iVar10,'\x06',local_10);
  if (*(short *)(pCVar13 + 0x1e) == 0xff) {
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar11 + 0x1b8),(int)local_20,0,iVar5 + 1,local_14 + 2,
                     *(int *)(local_10 + 4),*(int *)(local_10 + 8));
    iVar19 = -1;
    iVar18 = -1;
    uVar17 = 1;
    iVar10 = -1;
    iVar7 = -2;
    puVar8 = (uint *)FUN_006b0140(0x2715,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar11 + 0x1b8),puVar8,iVar7,iVar10,uVar17,iVar18,iVar19);
  }
  local_5 = '\x01';
  if (*(short *)(pCVar13 + 0x26) == -1) {
    switch(*(undefined2 *)(pCVar13 + 0x1e)) {
    case 0xa3:
    case 0xa8:
    case 0xb2:
    case 0xbe:
    case 0xff:
      local_5 = '\0';
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
      for (uVar6 = uVar6 & 3; pCVar13 = local_18, iVar5 = local_30, uVar6 != 0; uVar6 = uVar6 - 1) {
        *pCVar16 = *pCVar12;
        pCVar12 = pCVar12 + 1;
        pCVar16 = pCVar16 + 1;
      }
    }
  }
  else {
    wsprintfA((LPSTR)(pCVar11 + 0x1e1),&DAT_007c1890,*(short *)(pCVar13 + 0x26));
  }
  if (local_5 != '\0') {
    local_34 = 0;
    if ((0x9b < *(ushort *)(pCVar13 + 0x1e)) && (*(ushort *)(pCVar13 + 0x1e) < 0x9f)) {
      local_34 = 4;
    }
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar11 + 0x1b8),(int)local_20,0,iVar5 + 0x2f,
                     (*(int *)(local_10 + 8) + -0xc) / 2 + local_34 + local_1c + local_14,0x11,0xc);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar11 + 0x1b8),(uint *)(pCVar11 + 0x1e1),-3,-1,0,-1,-1);
    pCVar11 = local_24 + (local_c & 0xff) * 0x1c;
    *(int *)pCVar11 = iVar5 + 0x2f + local_28;
    *(uint *)(pCVar11 + 4) =
         (*(int *)(local_10 + 8) + -0xc) / 2 + local_34 + local_1c + local_14 + local_2c;
    *(int *)(pCVar11 + 8) = 0x11;
    *(int *)(pCVar11 + 0xc) = 0xc;
    iVar7 = thunk_FUN_00524fe0(*(undefined2 *)(local_18 + 0x1e));
    *(int *)(pCVar11 + 0x18) = iVar7;
    local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
    pCVar13 = local_18;
  }
  switch(*(undefined2 *)(pCVar13 + 0x1e)) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    pCVar11 = local_24 + (local_c & 0xff) * 0x1c;
    *(int *)pCVar11 = iVar5 + 1 + local_28;
    *(int *)(pCVar11 + 4) = local_14 + 2 + local_2c;
    break;
  default:
    pCVar11 = local_24 + (local_c & 0xff) * 0x1c;
    *(int *)pCVar11 = iVar5 + local_28;
    *(uint *)(pCVar11 + 4) = local_1c + local_14 + local_2c;
  }
  *(int *)(pCVar11 + 8) = *(int *)(local_10 + 4);
  *(int *)(pCVar11 + 0xc) = *(int *)(local_10 + 8);
  iVar5 = thunk_FUN_00524fe0(*(undefined2 *)(pCVar13 + 0x1e));
  *(int *)(pCVar11 + 0x18) = iVar5;
  g_currentExceptionFrame = local_7c.previous;
  return;
}

