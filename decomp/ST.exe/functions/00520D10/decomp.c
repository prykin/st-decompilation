
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::PaintInfoc */

void __thiscall InfocPanelTy::PaintInfoc(InfocPanelTy *this)

{
  char cVar1;
  code *pcVar2;
  InfocPanelTy *this_00;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 unaff_ESI;
  char *pcVar9;
  uint uVar10;
  void *unaff_EDI;
  char *pcVar11;
  int iVar12;
  InternalExceptionFrame local_50;
  InfocPanelTy *local_c;
  byte local_8;
  undefined3 uStack_7;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0xde,0,iVar4,&DAT_007a4ccc
                                ,s_InfocPanelTy__PaintInfoc_007c3fcc);
    if (iVar12 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0xde);
    return;
  }
  if (local_c[2].field_0xe4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)(&local_c[1].field_0xbc + (uint)(byte)local_c[2].field_0xe4 * 0x10);
  }
  PaintInfocObj(local_c,uVar7,(uint)*(ushort *)&local_c[1].field_0x12c,0x58,0x29);
  if (this_00[2].field_0xe4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)(&this_00[1].field_0xc0 + (uint)(byte)this_00[2].field_0xe4 * 0x10);
  }
  uVar5 = PaintInfocObj(this_00,uVar7,CONCAT22(extraout_var,*(undefined2 *)&this_00[1].field_0x130),
                        0x8a,0x29);
  bVar3 = this_00[2].field_0xe4;
  iVar4 = CONCAT31((int3)((uint)uVar5 >> 8),bVar3);
  if (bVar3 == 0xff) {
    uVar7 = 0;
  }
  else {
    iVar4 = (uint)bVar3 * 0x10;
    uVar7 = *(ushort *)(&this_00[1].field_0xbe + iVar4);
  }
  PaintInfocObj(this_00,uVar7,
                CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)&this_00[1].field_0x12e),0xbc,
                0x29);
  if (this_00[2].field_0xe4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)(&this_00[1].field_0xc2 + (uint)(byte)this_00[2].field_0xe4 * 0x10);
  }
  uVar5 = PaintInfocObj(this_00,uVar7,
                        CONCAT22(extraout_var_00,*(undefined2 *)&this_00[1].field_0x132),0xf0,0x29);
  bVar3 = this_00[2].field_0xe4;
  iVar4 = CONCAT31((int3)((uint)uVar5 >> 8),bVar3);
  if (bVar3 == 0xff) {
    uVar7 = 0;
  }
  else {
    iVar4 = (uint)bVar3 * 0x10;
    uVar7 = *(ushort *)(&this_00[1].field_0xc4 + iVar4);
  }
  PaintInfocObj(this_00,uVar7,
                CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)&this_00[1].field_0x134),0x58,
                0x50);
  if (this_00[2].field_0xe4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)(&this_00[1].field_0xc8 + (uint)(byte)this_00[2].field_0xe4 * 0x10);
  }
  uVar5 = PaintInfocObj(this_00,uVar7,
                        CONCAT22(extraout_var_01,*(undefined2 *)&this_00[1].field_0x138),0x8a,0x50);
  bVar3 = this_00[2].field_0xe4;
  iVar4 = CONCAT31((int3)((uint)uVar5 >> 8),bVar3);
  if (bVar3 == 0xff) {
    uVar7 = 0;
  }
  else {
    iVar4 = (uint)bVar3 * 0x10;
    uVar7 = *(ushort *)(&this_00[1].field_0xc6 + iVar4);
  }
  PaintInfocObj(this_00,uVar7,
                CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)&this_00[1].field_0x136),0xbc,
                0x50);
  if (this_00[2].field_0xe4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)(&this_00[1].field_0xca + (uint)(byte)this_00[2].field_0xe4 * 0x10);
  }
  PaintInfocObj(this_00,uVar7,CONCAT22(extraout_var_02,*(undefined2 *)&this_00[1].field_0x13a),0xf0,
                0x50);
  if ((this_00[2].field_0xe4 == 0xff) ||
     (9999 < *(int *)(&this_00[1].field_0x3c + (uint)(byte)this_00[2].field_0xe4 * 0x10))) {
    uVar10 = 0xffffffff;
    pcVar9 = &DAT_007c3ff4;
    do {
      pcVar11 = pcVar9;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar9 = pcVar11 + -uVar10;
    pcVar11 = &this_00[1].field_0x15;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  else {
    wsprintfA(&this_00[1].field_0x15,&DAT_007c1ae4,
              *(int *)(&this_00[1].field_0x3c + (uint)(byte)this_00[2].field_0xe4 * 0x10));
  }
  ccFntTy::SetSurf(*(ccFntTy **)&this_00[2].field_0xe5,*(int *)&this_00->field_0x68,0,0x54,0x71,0x23
                   ,0xc);
  ccFntTy::WrStr(*(ccFntTy **)&this_00[2].field_0xe5,(uint *)&this_00[1].field_0x15,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
  if ((this_00[2].field_0xe4 == 0xff) ||
     (999999 < *(int *)(&this_00[1].field_0x40 + (uint)(byte)this_00[2].field_0xe4 * 0x10))) {
    uVar10 = 0xffffffff;
    pcVar9 = &DAT_007c3fec;
    do {
      pcVar11 = pcVar9;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar9 = pcVar11 + -uVar10;
    pcVar11 = &this_00[1].field_0x15;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  else {
    wsprintfA(&this_00[1].field_0x15,&DAT_007c28fc,
              *(int *)(&this_00[1].field_0x40 + (uint)(byte)this_00[2].field_0xe4 * 0x10));
  }
  ccFntTy::SetSurf(*(ccFntTy **)&this_00[2].field_0xe5,*(int *)&this_00->field_0x68,0,0x78,0x71,0x17
                   ,0xc);
  ccFntTy::WrStr(*(ccFntTy **)&this_00[2].field_0xe5,(uint *)&this_00[1].field_0x15,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
  if ((this_00[2].field_0xe4 == 0xff) ||
     (999999 < *(int *)(&this_00[1].field_0x44 + (uint)(byte)this_00[2].field_0xe4 * 0x10))) {
    uVar10 = 0xffffffff;
    pcVar9 = &DAT_007c3fec;
    do {
      pcVar11 = pcVar9;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar9 = pcVar11 + -uVar10;
    pcVar11 = &this_00[1].field_0x15;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  else {
    wsprintfA(&this_00[1].field_0x15,&DAT_007c28fc,
              *(int *)(&this_00[1].field_0x44 + (uint)(byte)this_00[2].field_0xe4 * 0x10));
  }
  ccFntTy::SetSurf(*(ccFntTy **)&this_00[2].field_0xe5,*(int *)&this_00->field_0x68,0,0xa2,0x71,0x23
                   ,0xc);
  ccFntTy::WrStr(*(ccFntTy **)&this_00[2].field_0xe5,(uint *)&this_00[1].field_0x15,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 5);
  if (this_00[2].field_0xe4 == 0xff) {
    iVar4 = 0xce;
    iVar12 = 0x14;
    do {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00[2].field_0xdc,0);
      thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,iVar4,0x71,'\x01',pbVar6);
      iVar4 = iVar4 + 4;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  else {
    local_8 = 1;
    iVar4 = *(int *)(&this_00[1].field_0x48 + (uint)(byte)this_00[2].field_0xe4 * 0x10);
    if (iVar4 < 1) {
      if (0 < iVar4 + 0x14) {
        uVar10 = 1;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00[2].field_0xdc,0);
          thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,uVar10 * 4 + 0xca,0x71,'\x01',
                             pbVar6);
          local_8 = local_8 + 1;
          uVar10 = (uint)local_8;
        } while ((int)uVar10 <=
                 *(int *)(&this_00[1].field_0x48 + (uint)(byte)this_00[2].field_0xe4 * 0x10) + 0x14)
        ;
      }
      bVar3 = (&this_00[1].field_0x48)[(uint)(byte)this_00[2].field_0xe4 * 0x10] + 0x15;
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar12 = 0x15 - (uint)bVar3;
        iVar4 = (uint)bVar3 * 4 + 0xca;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00[2].field_0xdc,4);
          thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,iVar4,0x71,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
    else {
      if (0 < iVar4) {
        uVar10 = 1;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00[2].field_0xdc,
                                        (-(uint)(DAT_0080874e != '\x03') & 2) + 1);
          thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,uVar10 * 4 + 0xca,0x71,'\x01',
                             pbVar6);
          local_8 = local_8 + 1;
          uVar10 = (uint)local_8;
        } while ((int)uVar10 <=
                 *(int *)(&this_00[1].field_0x48 + (uint)(byte)this_00[2].field_0xe4 * 0x10));
      }
      bVar3 = (&this_00[1].field_0x48)[(uint)(byte)this_00[2].field_0xe4 * 0x10] + 1;
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar12 = 0x15 - (uint)bVar3;
        iVar4 = (uint)bVar3 * 4 + 0xca;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00[2].field_0xdc,0);
          thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,iVar4,0x71,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

