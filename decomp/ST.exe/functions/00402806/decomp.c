
undefined4 thunk_FUN_005db4f0(void)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  ushort *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  uint uStack_8;
  
  puStack_50 = DAT_00858df8;
  DAT_00858df8 = &puStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    thunk_FUN_005db2a0(iStack_c);
    iVar2 = 0;
    do {
      wsprintfA((LPSTR)(iStack_c + 0x3c),s_MM_ACC_02d_007cd7a0,iVar2);
      pcVar3 = FUN_0070ae60(DAT_00806780,(char *)(iStack_c + 0x3c),0,0,(undefined4 *)0x0,1);
      *(char **)(iStack_c + 0x244 + iVar2 * 4) = pcVar3;
      switch(iVar2) {
      case 0:
        *(undefined4 *)(iStack_c + 0x25c) = 0xf5;
        *(undefined4 *)(iStack_c + 0x260) = 0x3d;
        *(undefined4 *)(iStack_c + 0x264) = 0xfa;
        *(undefined4 *)(iStack_c + 0x268) = 0;
        *(undefined2 *)(iStack_c + 0x271) = 0;
        break;
      case 1:
        *(undefined4 *)(iStack_c + 0x273) = 0x1f6;
        *(undefined4 *)(iStack_c + 0x277) = 0x3d;
        *(undefined4 *)(iStack_c + 0x27b) = 0x4b;
        *(undefined4 *)(iStack_c + 0x27f) = 0;
        *(undefined2 *)(iStack_c + 0x288) = 0;
        break;
      case 2:
        *(undefined4 *)(iStack_c + 0x28a) = 0x117;
        *(undefined4 *)(iStack_c + 0x28e) = 0x1ab;
        *(undefined4 *)(iStack_c + 0x292) = 0x32;
        *(undefined4 *)(iStack_c + 0x296) = 0;
        *(undefined2 *)(iStack_c + 0x29f) = 0;
        break;
      case 3:
        *(undefined4 *)(iStack_c + 0x2a1) = 0x1ea;
        *(undefined4 *)(iStack_c + 0x2a5) = 0x1b3;
        *(undefined4 *)(iStack_c + 0x2a9) = 0x4b;
        *(undefined4 *)(iStack_c + 0x2ad) = 0;
        *(undefined2 *)(iStack_c + 0x2b6) = 0;
        break;
      case 4:
        *(undefined4 *)(iStack_c + 0x2b8) = 0x103;
        *(undefined4 *)(iStack_c + 700) = 0x1f9;
        uVar6 = FUN_0072e6c0();
        *(uint *)(iStack_c + 0x2c0) = ((uVar6 & 1) + 1) * 0x19;
        uVar6 = FUN_0072e6c0();
        *(uint *)(iStack_c + 0x2c4) = (uVar6 % 3 + 1) * 1000;
        *(undefined2 *)(iStack_c + 0x2cd) = 0;
        break;
      case 5:
        *(undefined4 *)(iStack_c + 0x2cf) = 0x205;
        *(undefined4 *)(iStack_c + 0x2d3) = 0x1fa;
        uVar6 = FUN_0072e6c0();
        *(uint *)(iStack_c + 0x2d7) = (uVar6 % 3 + 2) * 0x19;
        uVar6 = FUN_0072e6c0();
        *(uint *)(iStack_c + 0x2db) = ((uVar6 & 1) + 1) * 1000;
        *(undefined2 *)(iStack_c + 0x2e4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    thunk_FUN_0055da40(DAT_00806780,0);
    puVar4 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,2,1);
    *(ushort **)(iStack_c + 0x2f0) = puVar4;
    iVar2 = thunk_FUN_005da130((int)puVar4,(undefined *)0x0,DAT_00807dd9);
    *(int *)(iStack_c + 0x30) = iVar2;
    *(undefined4 *)(iVar2 + 0x58) = 1;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    uVar5 = thunk_FUN_005da310(*(int *)(iStack_c + 0x2f0),(undefined *)0x0,DAT_00807dd9);
    *(undefined4 *)(iStack_c + 0x34) = uVar5;
    uVar6 = *(uint *)(iStack_c + 0x2f0);
    puVar8 = (uint *)(iStack_c + 0x2ec);
    FUN_006b2330((uint)DAT_008075a8,puVar8,0x32,0x4023f6,*(uint *)(uVar6 + 4),*(uint *)(uVar6 + 8),
                 uVar6);
    FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,1,0);
    FUN_006b3af0(DAT_008075a8,*puVar8);
    FUN_007158a0(DAT_008075a8,0x32,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(iStack_c + 0x2f8) + 4))(DAT_00806784,7,0,s_MM_MAP_007cd798,0xffffffff);
    *(undefined4 *)(iStack_c + 0x314) = 1;
    *(undefined4 *)(iStack_c + 0x318) = 0;
    *(undefined4 *)(iStack_c + 0x300) = 0;
    FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(iStack_c + 0x38d) + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
    *(undefined4 *)(iStack_c + 0x3a9) = 0xe5;
    *(undefined4 *)(iStack_c + 0x3ad) = 0xb8;
    *(undefined4 *)(iStack_c + 0x395) = 0;
    if (*(uint *)(iStack_c + 0x391) != 0xffffffff) {
      FUN_006b3af0(*(int **)(iStack_c + 0x3d5),*(uint *)(iStack_c + 0x391));
    }
    FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(iStack_c + 0x41e) + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
    *(undefined4 *)(iStack_c + 0x43a) = 0xe5;
    *(undefined4 *)(iStack_c + 0x43e) = 0x1b8;
    *(undefined4 *)(iStack_c + 0x426) = 0;
    if (*(uint *)(iStack_c + 0x422) != 0xffffffff) {
      FUN_006b3af0(*(int **)(iStack_c + 0x466),*(uint *)(iStack_c + 0x422));
    }
    FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(iStack_c + 0x4af) + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
    *(undefined4 *)(iStack_c + 0x4cb) = 0xeb;
    *(undefined4 *)(iStack_c + 0x4cf) = 0xd8;
    *(undefined4 *)(iStack_c + 0x4b7) = 0;
    if (*(uint *)(iStack_c + 0x4b3) != 0xffffffff) {
      FUN_006b3af0(*(int **)(iStack_c + 0x4f7),*(uint *)(iStack_c + 0x4b3));
    }
    iVar2 = 1;
    puVar7 = (undefined4 *)(*(int *)(iStack_c + 0x2f0) + 0x28);
    uVar6 = FUN_006b4fe0(*(int *)(iStack_c + 0x2f0));
    iVar2 = FUN_006b50c0(0xd5,0x119,(uint)*(ushort *)(*(int *)(iStack_c + 0x2f0) + 0xe),uVar6,puVar7
                         ,iVar2);
    *(int *)(iStack_c + 0x544) = iVar2;
    uStack_8 = *(uint *)(iVar2 + 0x14);
    if (uStack_8 == 0) {
      uStack_8 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar2 + 8);
    }
    puVar7 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar6 = uStack_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uStack_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    uVar6 = *(uint *)(iStack_c + 0x544);
    puVar8 = (uint *)(iStack_c + 0x540);
    FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x4023f6,*(uint *)(uVar6 + 4),*(uint *)(uVar6 + 8),
                 uVar6);
    FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0xd,0xb9);
    FUN_006b3af0(DAT_008075a8,*puVar8);
    iVar2 = 1;
    puVar7 = (undefined4 *)(*(int *)(iStack_c + 0x2f0) + 0x28);
    uVar6 = FUN_006b4fe0(*(int *)(iStack_c + 0x2f0));
    iVar2 = FUN_006b50c0(0x186,0x14,(uint)*(ushort *)(*(int *)(iStack_c + 0x2f0) + 0xe),uVar6,puVar7
                         ,iVar2);
    *(int *)(iStack_c + 0x682) = iVar2;
    uStack_8 = *(uint *)(iVar2 + 0x14);
    if (uStack_8 == 0) {
      uStack_8 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar2 + 8);
    }
    puVar7 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar6 = uStack_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uStack_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    uVar6 = *(uint *)(iStack_c + 0x682);
    puVar8 = (uint *)(iStack_c + 0x554);
    FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x4023f6,*(uint *)(uVar6 + 4),*(uint *)(uVar6 + 8),
                 uVar6);
    FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0xcb,0x23f);
    FUN_006b3af0(DAT_008075a8,*puVar8);
    puVar8 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(iStack_c + 0x686) = puVar8;
    FUN_006b6020((int)puVar8,0,&DAT_008016a0);
    FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(iStack_c + 0x55c) + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
    *(undefined4 *)(iStack_c + 0x578) = 0x23a;
    *(undefined4 *)(iStack_c + 0x57c) = 500;
    *(undefined4 *)(iStack_c + 0x564) = 0;
    FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(iStack_c + 0x5ed) + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
    iVar2 = 1;
    *(undefined4 *)(iStack_c + 0x609) = 0x23a;
    puVar7 = (undefined4 *)(*(int *)(iStack_c + 0x2f0) + 0x28);
    *(int *)(iStack_c + 0x60d) = 0x23a - *(int *)(iStack_c + 0x615);
    *(undefined4 *)(iStack_c + 0x5f5) = 0;
    uVar6 = FUN_006b4fe0(*(int *)(iStack_c + 0x2f0));
    iVar2 = FUN_006b50c0(0x16d,0x49,(uint)*(ushort *)(*(int *)(iStack_c + 0x2f0) + 0xe),uVar6,puVar7
                         ,iVar2);
    *(int *)(iStack_c + 0x67e) = iVar2;
    uVar6 = *(uint *)(iVar2 + 0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar7 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    uVar6 = *(uint *)(iStack_c + 0x67e);
    FUN_006b2330((uint)DAT_008075a8,(uint *)(iStack_c + 0x558),0x31,0x4023f6,*(uint *)(uVar6 + 4),
                 *(uint *)(uVar6 + 8),uVar6);
    FUN_006b3640(DAT_008075a8,*(uint *)(iStack_c + 0x558),0xffffffff,0xcd,499);
    DAT_00858df8 = puStack_50;
    return 0;
  }
  DAT_00858df8 = puStack_50;
  thunk_FUN_005db2a0(iStack_c);
  iVar9 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x1ac,0,iVar2,&DAT_007a4ccc);
  if (iVar9 == 0) {
    FUN_006a5e40(iVar2,0,0x7cd718,0x1ad);
    return 0xfffffffc;
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

