
void thunk_FUN_0051ff50(void)

{
  code *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  UINT UVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 auStack_430 [224];
  undefined4 uStack_b0;
  undefined4 auStack_ac [16];
  undefined4 auStack_6c [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  puVar17 = auStack_6c;
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  puVar17 = auStack_430;
  for (iVar6 = 0xe0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  uStack_b0 = DAT_00858df8;
  DAT_00858df8 = &uStack_b0;
  iVar6 = __setjmp3(auStack_ac,0,unaff_EDI,unaff_ESI);
  if (iVar6 == 0) {
    uVar16 = 0x8b;
    uVar15 = 0xd8;
    UVar14 = 0x36bf;
    iVar13 = 0xb;
    iVar6 = 0xbf;
    uVar10 = 3;
    uVar9 = 0x40;
    DAT_00801698 = iStack_10;
    pCVar3 = thunk_FUN_00571240(s_BKG_INFOCENTERW_007c3f18,0);
    thunk_FUN_0053e3f0(pCVar3,uVar9,uVar10,iVar6,iVar13,UVar14,uVar15,uVar16);
    puVar4 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BUT_CHPLAYER_007c3f08,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)(iStack_10 + 0x3c4) = puVar4;
    puVar4 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_GAME_ALLY_007c3efc,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)(iStack_10 + 0x3c8) = puVar4;
    puVar17 = (undefined4 *)0x0;
    iVar13 = 0;
    iVar6 = 1;
    bVar12 = 0;
    uVar11 = 0xffffffff;
    pbVar5 = (byte *)thunk_FUN_00571240(s_IND_PNT_007c2078,0);
    puVar4 = FUN_00709af0(DAT_00806794,0xb,pbVar5,uVar11,bVar12,iVar6,iVar13,puVar17);
    *(ushort **)(iStack_10 + 0x3cc) = puVar4;
    puVar17 = FUN_0070ceb0(0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
    *(undefined4 **)(iStack_10 + 0x3d5) = puVar17;
    puVar17[0x16] = 1;
    puVar17[0x17] = 0;
    iStack_c = *(int *)(iStack_10 + 0x5c);
    iStack_14 = *(int *)(iStack_10 + 0x3c) + 0x1d;
    iVar13 = 0;
    iVar6 = 1;
    puVar17 = auStack_430 + 1;
    iStack_8 = 7;
    do {
      iVar8 = iStack_14;
      puVar17[-1] = iVar6;
      *puVar17 = 2;
      puVar17[2] = iVar8;
      iVar2 = iStack_c;
      puVar17[4] = 0x11;
      iVar8 = DAT_00806734;
      if (iVar2 != 0) {
        iVar8 = *(int *)(iStack_10 + 0x44);
      }
      iVar6 = iVar6 + 1;
      puVar17[3] = iVar13 + 0x23 + iVar8;
      puVar17[5] = 0xc;
      iVar13 = iVar13 + 0xd;
      puVar17 = puVar17 + 0x1c;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
    uStack_5c = *(undefined4 *)(iStack_10 + 8);
    puStack_24 = auStack_430;
    uStack_58 = 2;
    uStack_38 = 2;
    auStack_6c[0] = 1;
    uStack_20 = 1;
    uStack_54 = 0xb208;
    uStack_34 = 0xb209;
    uStack_1c = 1;
    uStack_18 = 1;
    uStack_3c = uStack_5c;
    (**(code **)(**(int **)(iStack_10 + 0xc) + 8))(5,iStack_10 + 0x3d0,0,auStack_6c,0);
    *(undefined4 *)(iStack_10 + 0x2d4) = 0x56;
    *(int *)(iStack_10 + 0x2d8) = 0x17;
    *(undefined4 *)(iStack_10 + 0x2dc) = 0x31;
    *(undefined4 *)(iStack_10 + 0x2e0) = 0x20;
    *(undefined4 *)(iStack_10 + 0x2e4) = 0x2760;
    *(undefined4 *)(iStack_10 + 0x2e8) = 0x88;
    *(undefined4 *)(iStack_10 + 0x2ec) = 0x17;
    *(undefined4 *)(iStack_10 + 0x2f0) = 0x31;
    *(undefined4 *)(iStack_10 + 0x2f4) = 0x20;
    *(undefined4 *)(iStack_10 + 0x2f8) = 0x2761;
    *(undefined4 *)(iStack_10 + 0x2fc) = 0xba;
    *(undefined4 *)(iStack_10 + 0x300) = 0x17;
    *(undefined4 *)(iStack_10 + 0x304) = 0x31;
    *(undefined4 *)(iStack_10 + 0x308) = 0x20;
    *(undefined4 *)(iStack_10 + 0x30c) = 0x2762;
    *(undefined4 *)(iStack_10 + 0x310) = 0xee;
    *(undefined4 *)(iStack_10 + 0x314) = 0x17;
    *(undefined4 *)(iStack_10 + 0x318) = 0x31;
    *(undefined4 *)(iStack_10 + 0x31c) = 0x20;
    *(undefined4 *)(iStack_10 + 800) = 0x2763;
    *(undefined4 *)(iStack_10 + 0x324) = 0x58;
    *(undefined4 *)(iStack_10 + 0x328) = 0x3e;
    *(undefined4 *)(iStack_10 + 0x32c) = 0x31;
    *(undefined4 *)(iStack_10 + 0x330) = 0x20;
    *(undefined4 *)(iStack_10 + 0x334) = 0x2764;
    *(undefined4 *)(iStack_10 + 0x338) = 0x88;
    *(undefined4 *)(iStack_10 + 0x33c) = 0x3e;
    *(undefined4 *)(iStack_10 + 0x340) = 0x31;
    *(undefined4 *)(iStack_10 + 0x344) = 0x20;
    *(undefined4 *)(iStack_10 + 0x348) = 0x2765;
    *(undefined4 *)(iStack_10 + 0x34c) = 0xba;
    *(undefined4 *)(iStack_10 + 0x350) = 0x3e;
    *(undefined4 *)(iStack_10 + 0x354) = 0x31;
    *(undefined4 *)(iStack_10 + 0x358) = 0x20;
    *(undefined4 *)(iStack_10 + 0x364) = 0x3e;
    *(undefined4 *)(iStack_10 + 0x368) = 0x31;
    *(undefined4 *)(iStack_10 + 0x36c) = 0x20;
    *(undefined4 *)(iStack_10 + 0x35c) = 0x2766;
    *(undefined4 *)(iStack_10 + 0x360) = 0xee;
    *(undefined4 *)(iStack_10 + 0x370) = 0x2767;
    *(undefined4 *)(iStack_10 + 0x374) = 0x56;
    *(undefined4 *)(iStack_10 + 0x378) = 0x65;
    *(undefined4 *)(iStack_10 + 0x37c) = 0x1f;
    *(undefined4 *)(iStack_10 + 0x380) = 0x19;
    *(undefined4 *)(iStack_10 + 900) = 0x271f;
    *(undefined4 *)(iStack_10 + 0x388) = 0x75;
    *(undefined4 *)(iStack_10 + 0x38c) = 0x65;
    *(undefined4 *)(iStack_10 + 0x390) = 0x2a;
    *(undefined4 *)(iStack_10 + 0x394) = 0x19;
    *(undefined4 *)(iStack_10 + 0x3a8) = 0x19;
    *(undefined4 *)(iStack_10 + 0x3bc) = 0x19;
    *(undefined4 *)(iStack_10 + 0x398) = 0x271d;
    *(undefined4 *)(iStack_10 + 0x39c) = 0x9f;
    *(undefined4 *)(iStack_10 + 0x3a0) = 0x65;
    *(undefined4 *)(iStack_10 + 0x3a4) = 0x2a;
    *(undefined4 *)(iStack_10 + 0x3ac) = 0x2768;
    *(undefined4 *)(iStack_10 + 0x3b0) = 0xcc;
    *(undefined4 *)(iStack_10 + 0x3b4) = 0x65;
    *(undefined4 *)(iStack_10 + 0x3b8) = 0x53;
    *(undefined4 *)(iStack_10 + 0x3c0) = 0x2769;
    iVar6 = 0xc;
    piVar7 = (int *)(iStack_10 + 0x2d8);
    do {
      piVar7[-1] = piVar7[-1] + *(int *)(iStack_10 + 0x3c);
      iVar6 = iVar6 + -1;
      *piVar7 = *piVar7 + (*(int *)(iStack_10 + 0x58) - *(int *)(iStack_10 + 0x48)) +
                          *(int *)(iStack_10 + 0x50);
      piVar7 = piVar7 + 5;
    } while (iVar6 != 0);
    DAT_00858df8 = (undefined4 *)uStack_b0;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_b0;
  iVar13 = FUN_006ad4d0(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x3e,0,iVar6,&DAT_007a4ccc);
  if (iVar13 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar6,0,0x7c3eb0,0x3e);
  return;
}

