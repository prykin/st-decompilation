
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::PaintInfoc */

void __thiscall InfocPanelTy::PaintInfoc(InfocPanelTy *this)

{
  char cVar1;
  InfocPanelTy IVar2;
  code *pcVar3;
  InfocPanelTy *this_00;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  ushort uVar8;
  uint uVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 unaff_ESI;
  InfocPanelTy *pIVar10;
  uint uVar11;
  void *unaff_EDI;
  char *pcVar12;
  char *pcVar13;
  InfocPanelTy *pIVar14;
  int iVar15;
  InternalExceptionFrame local_50;
  InfocPanelTy *local_c;
  byte local_8;
  undefined3 uStack_7;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar5 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar15 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0xde,0,iVar5,&DAT_007a4ccc
                                ,s_InfocPanelTy__PaintInfoc_007c3fcc);
    if (iVar15 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0xde);
    return;
  }
  if (local_c[0x3d4] == (InfocPanelTy)0xff) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(ushort *)(local_c + (uint)(byte)local_c[0x3d4] * 0x10 + 0x234);
  }
  PaintInfocObj(local_c,uVar8,(uint)*(ushort *)(local_c + 0x2a4),0x58,0x29);
  if (this_00[0x3d4] == (InfocPanelTy)0xff) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(ushort *)(this_00 + (uint)(byte)this_00[0x3d4] * 0x10 + 0x238);
  }
  uVar6 = PaintInfocObj(this_00,uVar8,CONCAT22(extraout_var,*(undefined2 *)(this_00 + 0x2a8)),0x8a,
                        0x29);
  IVar2 = this_00[0x3d4];
  iVar5 = CONCAT31((int3)((uint)uVar6 >> 8),IVar2);
  if (IVar2 == (InfocPanelTy)0xff) {
    uVar8 = 0;
  }
  else {
    iVar5 = (uint)(byte)IVar2 * 0x10;
    uVar8 = *(ushort *)(this_00 + iVar5 + 0x236);
  }
  PaintInfocObj(this_00,uVar8,
                CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(this_00 + 0x2a6)),0xbc,0x29);
  if (this_00[0x3d4] == (InfocPanelTy)0xff) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(ushort *)(this_00 + (uint)(byte)this_00[0x3d4] * 0x10 + 0x23a);
  }
  uVar6 = PaintInfocObj(this_00,uVar8,CONCAT22(extraout_var_00,*(undefined2 *)(this_00 + 0x2aa)),
                        0xf0,0x29);
  IVar2 = this_00[0x3d4];
  iVar5 = CONCAT31((int3)((uint)uVar6 >> 8),IVar2);
  if (IVar2 == (InfocPanelTy)0xff) {
    uVar8 = 0;
  }
  else {
    iVar5 = (uint)(byte)IVar2 * 0x10;
    uVar8 = *(ushort *)(this_00 + iVar5 + 0x23c);
  }
  PaintInfocObj(this_00,uVar8,
                CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(this_00 + 0x2ac)),0x58,0x50);
  if (this_00[0x3d4] == (InfocPanelTy)0xff) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(ushort *)(this_00 + ((byte)this_00[0x3d4] + 0x24) * 0x10);
  }
  uVar6 = PaintInfocObj(this_00,uVar8,CONCAT22(extraout_var_01,*(undefined2 *)(this_00 + 0x2b0)),
                        0x8a,0x50);
  IVar2 = this_00[0x3d4];
  iVar5 = CONCAT31((int3)((uint)uVar6 >> 8),IVar2);
  if (IVar2 == (InfocPanelTy)0xff) {
    uVar8 = 0;
  }
  else {
    iVar5 = (uint)(byte)IVar2 * 0x10;
    uVar8 = *(ushort *)(this_00 + iVar5 + 0x23e);
  }
  PaintInfocObj(this_00,uVar8,
                CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(this_00 + 0x2ae)),0xbc,0x50);
  if (this_00[0x3d4] == (InfocPanelTy)0xff) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(ushort *)(this_00 + (uint)(byte)this_00[0x3d4] * 0x10 + 0x242);
  }
  PaintInfocObj(this_00,uVar8,CONCAT22(extraout_var_02,*(undefined2 *)(this_00 + 0x2b2)),0xf0,0x50);
  if ((this_00[0x3d4] == (InfocPanelTy)0xff) ||
     (9999 < *(int *)(this_00 + (uint)(byte)this_00[0x3d4] * 0x10 + 0x1b4))) {
    uVar11 = 0xffffffff;
    pcVar12 = &DAT_007c3ff4;
    do {
      pcVar13 = pcVar12;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pIVar10 = (InfocPanelTy *)(pcVar13 + -uVar11);
    pIVar14 = this_00 + 0x18d;
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pIVar14 = *(undefined4 *)pIVar10;
      pIVar10 = pIVar10 + 4;
      pIVar14 = pIVar14 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pIVar14 = *pIVar10;
      pIVar10 = pIVar10 + 1;
      pIVar14 = pIVar14 + 1;
    }
  }
  else {
    wsprintfA((LPSTR)(this_00 + 0x18d),&DAT_007c1ae4,
              *(int *)(this_00 + (uint)(byte)this_00[0x3d4] * 0x10 + 0x1b4));
  }
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x3d5),*(int *)(this_00 + 0x68),0,0x54,0x71,0x23,0xc);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x3d5),(uint *)(this_00 + 0x18d),-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
  if ((this_00[0x3d4] == (InfocPanelTy)0xff) ||
     (999999 < *(int *)(this_00 + (uint)(byte)this_00[0x3d4] * 0x10 + 0x1b8))) {
    uVar11 = 0xffffffff;
    pcVar12 = &DAT_007c3fec;
    do {
      pcVar13 = pcVar12;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pIVar10 = (InfocPanelTy *)(pcVar13 + -uVar11);
    pIVar14 = this_00 + 0x18d;
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pIVar14 = *(undefined4 *)pIVar10;
      pIVar10 = pIVar10 + 4;
      pIVar14 = pIVar14 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pIVar14 = *pIVar10;
      pIVar10 = pIVar10 + 1;
      pIVar14 = pIVar14 + 1;
    }
  }
  else {
    wsprintfA((LPSTR)(this_00 + 0x18d),&DAT_007c28fc,
              *(int *)(this_00 + (uint)(byte)this_00[0x3d4] * 0x10 + 0x1b8));
  }
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x3d5),*(int *)(this_00 + 0x68),0,0x78,0x71,0x17,0xc);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x3d5),(uint *)(this_00 + 0x18d),-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
  if ((this_00[0x3d4] == (InfocPanelTy)0xff) ||
     (999999 < *(int *)(this_00 + (uint)(byte)this_00[0x3d4] * 0x10 + 0x1bc))) {
    uVar11 = 0xffffffff;
    pcVar12 = &DAT_007c3fec;
    do {
      pcVar13 = pcVar12;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pIVar10 = (InfocPanelTy *)(pcVar13 + -uVar11);
    pIVar14 = this_00 + 0x18d;
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pIVar14 = *(undefined4 *)pIVar10;
      pIVar10 = pIVar10 + 4;
      pIVar14 = pIVar14 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pIVar14 = *pIVar10;
      pIVar10 = pIVar10 + 1;
      pIVar14 = pIVar14 + 1;
    }
  }
  else {
    wsprintfA((LPSTR)(this_00 + 0x18d),&DAT_007c28fc,
              *(int *)(this_00 + (uint)(byte)this_00[0x3d4] * 0x10 + 0x1bc));
  }
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x3d5),*(int *)(this_00 + 0x68),0,0xa2,0x71,0x23,0xc);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x3d5),(uint *)(this_00 + 0x18d),-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 5);
  if (this_00[0x3d4] == (InfocPanelTy)0xff) {
    iVar5 = 0xce;
    iVar15 = 0x14;
    do {
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x3cc),0);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),iVar5,0x71,'\x01',pbVar7);
      iVar5 = iVar5 + 4;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  else {
    local_8 = 1;
    iVar5 = *(int *)(this_00 + ((byte)this_00[0x3d4] + 0x1c) * 0x10);
    if (iVar5 < 1) {
      if (0 < iVar5 + 0x14) {
        uVar11 = 1;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x3cc),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),uVar11 * 4 + 0xca,0x71,'\x01',pbVar7);
          local_8 = local_8 + 1;
          uVar11 = (uint)local_8;
        } while ((int)uVar11 <= *(int *)(this_00 + ((byte)this_00[0x3d4] + 0x1c) * 0x10) + 0x14);
      }
      bVar4 = (char)this_00[((byte)this_00[0x3d4] + 0x1c) * 0x10] + 0x15;
      _local_8 = CONCAT31(uStack_7,bVar4);
      if (bVar4 < 0x15) {
        iVar15 = 0x15 - (uint)bVar4;
        iVar5 = (uint)bVar4 * 4 + 0xca;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x3cc),4);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),iVar5,0x71,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
    else {
      if (0 < iVar5) {
        uVar11 = 1;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x3cc),
                                        (-(uint)(DAT_0080874e != '\x03') & 2) + 1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),uVar11 * 4 + 0xca,0x71,'\x01',pbVar7);
          local_8 = local_8 + 1;
          uVar11 = (uint)local_8;
        } while ((int)uVar11 <= *(int *)(this_00 + ((byte)this_00[0x3d4] + 0x1c) * 0x10));
      }
      bVar4 = (char)this_00[((byte)this_00[0x3d4] + 0x1c) * 0x10] + 1;
      _local_8 = CONCAT31(uStack_7,bVar4);
      if (bVar4 < 0x15) {
        iVar15 = 0x15 - (uint)bVar4;
        iVar5 = (uint)bVar4 * 4 + 0xca;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x3cc),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),iVar5,0x71,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

