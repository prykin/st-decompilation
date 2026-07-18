
void FUN_00550db0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  LPSTR pCVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  undefined4 unaff_ESI;
  uint *puVar9;
  void *unaff_EDI;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  UINT UVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  uint local_5e0 [84];
  int local_490 [6];
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_30c;
  int local_308 [26];
  undefined4 local_2a0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4 [16];
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  ushort *local_18;
  void *local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  puVar2 = local_74;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar9 = local_5e0;
  for (iVar8 = 0x54; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piVar14 = local_490;
  for (iVar8 = 0xf6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar14 = 0;
    piVar14 = piVar14 + 1;
  }
  local_b8 = DAT_00858df8;
  DAT_00858df8 = &local_b8;
  puVar2 = (undefined4 *)__setjmp3(local_b4,0,unaff_EDI,unaff_ESI);
  if (puVar2 == (undefined4 *)0x0) {
    uVar20 = 0x77;
    DAT_00802a44 = local_14;
    iVar8 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffa) + 0xde;
    UVar19 = 0x36c0;
    iVar18 = 0xb;
    iVar16 = 0xbf;
    uVar15 = 3;
    uVar13 = 0x40;
    pCVar3 = thunk_FUN_00571240(s_BKG_TRADECENTERW_007c8680,0);
    thunk_FUN_0053e3f0(pCVar3,uVar13,uVar15,iVar16,iVar18,UVar19,iVar8,uVar20);
    puVar4 = FUN_0070ceb0(0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
    uVar10 = 1;
    *(undefined4 **)((int)local_14 + 0x1dd) = puVar4;
    puVar4[0x16] = 1;
    puVar4[0x17] = 0;
    puVar5 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c204c,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)((int)local_14 + 0x1d1) = puVar5;
    puVar5 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)((int)local_14 + 0x1d5) = puVar5;
    iVar8 = 1;
    uVar17 = 0xffffffff;
    puVar4 = puVar2;
    puVar21 = puVar2;
    pbVar6 = (byte *)thunk_FUN_00571240(s_TRADE_RATE_007c8670,0);
    puVar5 = FUN_00709af0(DAT_00806794,0xb,pbVar6,uVar17,(byte)puVar2,iVar8,(int)puVar4,puVar21);
    local_5 = *(byte *)((int)local_14 + 0x1d0);
    *(ushort **)((int)local_14 + 0x1d9) = puVar5;
    local_1c = *(int *)((int)local_14 + 0x5c);
    bVar7 = 0;
    local_10 = (DAT_0080874e != '\x03') + 0x3b;
    puVar9 = local_5e0 + 1;
    local_c = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 0x22 + *(int *)((int)local_14 + 0x3c)
    ;
    do {
      iVar16 = local_1c;
      bVar12 = bVar7 == local_5;
      puVar9[-1] = uVar10;
      *puVar9 = (uint)bVar12;
      puVar9[2] = local_c;
      puVar9[4] = 0x3a;
      iVar8 = DAT_00806734;
      if (iVar16 != 0) {
        iVar8 = *(int *)((int)local_14 + 0x44);
      }
      bVar7 = bVar7 + 1;
      puVar9[3] = iVar8 + 0x17;
      iVar8 = local_10;
      puVar9[5] = 0x13;
      uVar10 = uVar10 + 1;
      local_c = local_c + iVar8;
      puVar9 = puVar9 + 0x1c;
    } while (bVar7 < 2);
    local_64 = *(undefined4 *)((int)local_14 + 8);
    local_2c = local_5e0;
    local_74[0] = 1;
    local_74[1] = 1;
    local_28 = 1;
    local_60 = 2;
    local_5c = 0xb20a;
    local_40 = 2;
    local_3c = 0xb20b;
    local_24 = 1;
    local_20 = 1;
    local_44 = local_64;
    (**(code **)(**(int **)((int)local_14 + 0xc) + 8))(5,(int)local_14 + 0x1c4,0,local_74,0);
    local_e8 = *(undefined4 *)((int)local_14 + 8);
    iVar16 = 1;
    piVar14 = (int *)0x0;
    uVar13 = 0;
    iVar8 = 1;
    local_490[0] = 0;
    local_e4 = 2;
    local_e0 = 0xb20c;
    local_30c = 2;
    local_490[1] = 2;
    local_37c = 1;
    local_380 = 1;
    local_490[2] = 0;
    local_490[3] = 2;
    pCVar3 = thunk_FUN_00571240(s_BUT_TBUP_007c22d8,0);
    pCVar3 = FUN_006f2c00(pCVar3,iVar8,uVar13);
    local_18 = FUN_006f1ce0(1,pCVar3,piVar14,iVar16);
    local_478 = *(undefined4 *)(local_18 + 2);
    local_474 = *(undefined4 *)(local_18 + 4);
    FUN_006f20e0((uint *)&local_18);
    iVar8 = *(int *)((int)local_14 + 0x5c);
    local_490[4] = *(int *)((int)local_14 + 0x3c) + 0x69;
    iVar16 = DAT_00806734;
    if (iVar8 != 0) {
      iVar16 = *(int *)((int)local_14 + 0x44);
    }
    local_424 = 2;
    local_490[5] = iVar16 + 0x46;
    local_428 = *(undefined4 *)((int)local_14 + 8);
    local_420 = 0xc005;
    local_378 = 500;
    local_374 = 0x28;
    piVar14 = local_490 + 2;
    piVar11 = local_308;
    for (iVar16 = 0x5f; iVar16 != 0; iVar16 = iVar16 + -1) {
      *piVar11 = *piVar14;
      piVar14 = piVar14 + 1;
      piVar11 = piVar11 + 1;
    }
    local_308[3] = DAT_00806734;
    if (iVar8 != 0) {
      local_308[3] = *(int *)((int)local_14 + 0x44);
    }
    local_308[3] = local_308[3] + 0x57;
    puVar4 = (undefined4 *)((int)local_14 + 0x1c0);
    local_2a0 = 0xc006;
    local_c4 = 1;
    local_c0 = 0x14;
    local_bc = 10;
    (**(code **)(**(int **)((int)local_14 + 0xc) + 8))(4,puVar4,0,local_490,0);
    puVar2 = (undefined4 *)((int)local_14 + 0x18);
    *(undefined4 *)((int)local_14 + 0x28) = 0x28;
    *(undefined4 *)((int)local_14 + 0x2c) = 0x186a1;
    FUN_006e6080(local_14,2,*puVar4,puVar2);
    *(undefined4 *)((int)local_14 + 0x28) = 0x22;
    *(uint *)((int)local_14 + 0x2c) =
         (uint)*(ushort *)((int)local_14 + (uint)*(byte *)((int)local_14 + 0x1d0) * 2 + 0x1bc);
    FUN_006e6080(local_14,2,*puVar4,puVar2);
    *(undefined4 *)((int)local_14 + 0x28) = 0x20;
    *(undefined4 *)((int)local_14 + 0x2c) = 1;
    FUN_006e6080(local_14,2,*puVar4,puVar2);
    DAT_00858df8 = (undefined4 *)local_b8;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_b8;
  iVar8 = FUN_006ad4d0(s_E____titans_Andrey_tradecen_cpp_007c8624,0x53,0,(int)puVar2,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40((int)puVar2,0,0x7c8624,0x53);
  return;
}

