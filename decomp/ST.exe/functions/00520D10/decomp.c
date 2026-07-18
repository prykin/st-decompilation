
void FUN_00520d10(void)

{
  char cVar1;
  code *pcVar2;
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
  undefined4 *local_50;
  undefined4 local_4c [16];
  int local_c;
  byte local_8;
  undefined3 uStack_7;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = local_50;
    iVar12 = FUN_006ad4d0(s_E____titans_Andrey_infocen_cpp_007c3eb0,0xde,0,iVar4,&DAT_007a4ccc);
    if (iVar12 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c3eb0,0xde);
    return;
  }
  if (*(byte *)(local_c + 0x3d4) == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)((uint)*(byte *)(local_c + 0x3d4) * 0x10 + 0x234 + local_c);
  }
  thunk_FUN_00520b50(uVar7,(uint)*(ushort *)(local_c + 0x2a4),0x58,0x29);
  if (*(byte *)(local_c + 0x3d4) == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)((uint)*(byte *)(local_c + 0x3d4) * 0x10 + 0x238 + local_c);
  }
  uVar5 = thunk_FUN_00520b50(uVar7,CONCAT22(extraout_var,*(undefined2 *)(local_c + 0x2a8)),0x8a,0x29
                            );
  bVar3 = *(byte *)(local_c + 0x3d4);
  iVar4 = CONCAT31((int3)((uint)uVar5 >> 8),bVar3);
  if (bVar3 == 0xff) {
    uVar7 = 0;
  }
  else {
    iVar4 = (uint)bVar3 * 0x10;
    uVar7 = *(ushort *)(iVar4 + 0x236 + local_c);
  }
  thunk_FUN_00520b50(uVar7,CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(local_c + 0x2a6)),
                     0xbc,0x29);
  if (*(byte *)(local_c + 0x3d4) == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)((uint)*(byte *)(local_c + 0x3d4) * 0x10 + 0x23a + local_c);
  }
  uVar5 = thunk_FUN_00520b50(uVar7,CONCAT22(extraout_var_00,*(undefined2 *)(local_c + 0x2aa)),0xf0,
                             0x29);
  bVar3 = *(byte *)(local_c + 0x3d4);
  iVar4 = CONCAT31((int3)((uint)uVar5 >> 8),bVar3);
  if (bVar3 == 0xff) {
    uVar7 = 0;
  }
  else {
    iVar4 = (uint)bVar3 * 0x10;
    uVar7 = *(ushort *)(iVar4 + 0x23c + local_c);
  }
  thunk_FUN_00520b50(uVar7,CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(local_c + 0x2ac)),
                     0x58,0x50);
  if (*(byte *)(local_c + 0x3d4) == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)((*(byte *)(local_c + 0x3d4) + 0x24) * 0x10 + local_c);
  }
  uVar5 = thunk_FUN_00520b50(uVar7,CONCAT22(extraout_var_01,*(undefined2 *)(local_c + 0x2b0)),0x8a,
                             0x50);
  bVar3 = *(byte *)(local_c + 0x3d4);
  iVar4 = CONCAT31((int3)((uint)uVar5 >> 8),bVar3);
  if (bVar3 == 0xff) {
    uVar7 = 0;
  }
  else {
    iVar4 = (uint)bVar3 * 0x10;
    uVar7 = *(ushort *)(iVar4 + 0x23e + local_c);
  }
  thunk_FUN_00520b50(uVar7,CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(local_c + 0x2ae)),
                     0xbc,0x50);
  if (*(byte *)(local_c + 0x3d4) == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)((uint)*(byte *)(local_c + 0x3d4) * 0x10 + 0x242 + local_c);
  }
  thunk_FUN_00520b50(uVar7,CONCAT22(extraout_var_02,*(undefined2 *)(local_c + 0x2b2)),0xf0,0x50);
  if ((*(byte *)(local_c + 0x3d4) == 0xff) ||
     (iVar4 = *(int *)((uint)*(byte *)(local_c + 0x3d4) * 0x10 + 0x1b4 + local_c), 9999 < iVar4)) {
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
    pcVar11 = (char *)(local_c + 0x18d);
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
    wsprintfA((LPSTR)(local_c + 0x18d),&DAT_007c1ae4,iVar4);
  }
  FUN_00710a90(*(int *)(local_c + 0x68),0,0x54,0x71,0x23,0xc);
  FUN_007119c0((uint *)(local_c + 0x18d),-1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
  if ((*(byte *)(local_c + 0x3d4) == 0xff) ||
     (iVar4 = *(int *)((uint)*(byte *)(local_c + 0x3d4) * 0x10 + 0x1b8 + local_c), 999999 < iVar4))
  {
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
    pcVar11 = (char *)(local_c + 0x18d);
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
    wsprintfA((LPSTR)(local_c + 0x18d),&DAT_007c28fc,iVar4);
  }
  FUN_00710a90(*(int *)(local_c + 0x68),0,0x78,0x71,0x17,0xc);
  FUN_007119c0((uint *)(local_c + 0x18d),-1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
  if ((*(byte *)(local_c + 0x3d4) == 0xff) ||
     (iVar4 = *(int *)((uint)*(byte *)(local_c + 0x3d4) * 0x10 + 0x1bc + local_c), 999999 < iVar4))
  {
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
    pcVar11 = (char *)(local_c + 0x18d);
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
    wsprintfA((LPSTR)(local_c + 0x18d),&DAT_007c28fc,iVar4);
  }
  FUN_00710a90(*(int *)(local_c + 0x68),0,0xa2,0x71,0x23,0xc);
  FUN_007119c0((uint *)(local_c + 0x18d),-1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 5);
  if (*(byte *)(local_c + 0x3d4) == 0xff) {
    iVar4 = 0xce;
    iVar12 = 0x14;
    do {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x3cc),0);
      thunk_FUN_00540760(*(undefined4 **)(local_c + 0x68),iVar4,0x71,'\x01',pbVar6);
      iVar4 = iVar4 + 4;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  else {
    local_8 = 1;
    iVar4 = *(int *)((*(byte *)(local_c + 0x3d4) + 0x1c) * 0x10 + local_c);
    if (iVar4 < 1) {
      if (0 < iVar4 + 0x14) {
        uVar10 = 1;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x3cc),0);
          thunk_FUN_00540760(*(undefined4 **)(local_c + 0x68),uVar10 * 4 + 0xca,0x71,'\x01',pbVar6);
          local_8 = local_8 + 1;
          uVar10 = (uint)local_8;
        } while ((int)uVar10 <=
                 *(int *)((*(byte *)(local_c + 0x3d4) + 0x1c) * 0x10 + local_c) + 0x14);
      }
      bVar3 = *(char *)((*(byte *)(local_c + 0x3d4) + 0x1c) * 0x10 + local_c) + 0x15;
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar12 = 0x15 - (uint)bVar3;
        iVar4 = (uint)bVar3 * 4 + 0xca;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x3cc),4);
          thunk_FUN_00540760(*(undefined4 **)(local_c + 0x68),iVar4,0x71,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        DAT_00858df8 = local_50;
        return;
      }
    }
    else {
      if (0 < iVar4) {
        uVar10 = 1;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x3cc),
                                        (-(uint)(DAT_0080874e != '\x03') & 2) + 1);
          thunk_FUN_00540760(*(undefined4 **)(local_c + 0x68),uVar10 * 4 + 0xca,0x71,'\x01',pbVar6);
          local_8 = local_8 + 1;
          uVar10 = (uint)local_8;
        } while ((int)uVar10 <= *(int *)((*(byte *)(local_c + 0x3d4) + 0x1c) * 0x10 + local_c));
      }
      bVar3 = *(char *)((*(byte *)(local_c + 0x3d4) + 0x1c) * 0x10 + local_c) + 1;
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar12 = 0x15 - (uint)bVar3;
        iVar4 = (uint)bVar3 * 4 + 0xca;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x3cc),0);
          thunk_FUN_00540760(*(undefined4 **)(local_c + 0x68),iVar4,0x71,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        DAT_00858df8 = local_50;
        return;
      }
    }
  }
  DAT_00858df8 = local_50;
  return;
}

