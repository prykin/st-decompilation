
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::LoadGraph */

undefined4 __thiscall StartSystemTy::LoadGraph(StartSystemTy *this)

{
  StartSystemTy *pSVar1;
  code *pcVar2;
  StartSystemTy *pSVar3;
  int iVar4;
  char *pcVar5;
  ushort *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *local_50;
  undefined4 local_4c [16];
  StartSystemTy *local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_c;
  if (iVar4 == 0) {
    thunk_FUN_005db2a0((int)local_c);
    iVar4 = 0;
    do {
      wsprintfA((LPSTR)(pSVar3 + 0x3c),s_MM_ACC_02d_007cd7a0,iVar4);
      pcVar5 = FUN_0070ae60(DAT_00806780,(char *)(pSVar3 + 0x3c),0,0,(undefined4 *)0x0,1);
      *(char **)(pSVar3 + iVar4 * 4 + 0x244) = pcVar5;
      switch(iVar4) {
      case 0:
        *(undefined4 *)(pSVar3 + 0x25c) = 0xf5;
        *(undefined4 *)(pSVar3 + 0x260) = 0x3d;
        *(undefined4 *)(pSVar3 + 0x264) = 0xfa;
        *(undefined4 *)(pSVar3 + 0x268) = 0;
        *(undefined2 *)(pSVar3 + 0x271) = 0;
        break;
      case 1:
        *(undefined4 *)(pSVar3 + 0x273) = 0x1f6;
        *(undefined4 *)(pSVar3 + 0x277) = 0x3d;
        *(undefined4 *)(pSVar3 + 0x27b) = 0x4b;
        *(undefined4 *)(pSVar3 + 0x27f) = 0;
        *(undefined2 *)(pSVar3 + 0x288) = 0;
        break;
      case 2:
        *(undefined4 *)(pSVar3 + 0x28a) = 0x117;
        *(undefined4 *)(pSVar3 + 0x28e) = 0x1ab;
        *(undefined4 *)(pSVar3 + 0x292) = 0x32;
        *(undefined4 *)(pSVar3 + 0x296) = 0;
        *(undefined2 *)(pSVar3 + 0x29f) = 0;
        break;
      case 3:
        *(undefined4 *)(pSVar3 + 0x2a1) = 0x1ea;
        *(undefined4 *)(pSVar3 + 0x2a5) = 0x1b3;
        *(undefined4 *)(pSVar3 + 0x2a9) = 0x4b;
        *(undefined4 *)(pSVar3 + 0x2ad) = 0;
        *(undefined2 *)(pSVar3 + 0x2b6) = 0;
        break;
      case 4:
        *(undefined4 *)(pSVar3 + 0x2b8) = 0x103;
        *(undefined4 *)(pSVar3 + 700) = 0x1f9;
        uVar8 = FUN_0072e6c0();
        *(uint *)(pSVar3 + 0x2c0) = ((uVar8 & 1) + 1) * 0x19;
        uVar8 = FUN_0072e6c0();
        *(uint *)(pSVar3 + 0x2c4) = (uVar8 % 3 + 1) * 1000;
        *(undefined2 *)(pSVar3 + 0x2cd) = 0;
        break;
      case 5:
        *(undefined4 *)(pSVar3 + 0x2cf) = 0x205;
        *(undefined4 *)(pSVar3 + 0x2d3) = 0x1fa;
        uVar8 = FUN_0072e6c0();
        *(uint *)(pSVar3 + 0x2d7) = (uVar8 % 3 + 2) * 0x19;
        uVar8 = FUN_0072e6c0();
        *(uint *)(pSVar3 + 0x2db) = ((uVar8 & 1) + 1) * 1000;
        *(undefined2 *)(pSVar3 + 0x2e4) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    thunk_FUN_0055da40(DAT_00806780,0);
    puVar6 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,2,1);
    *(ushort **)(pSVar3 + 0x2f0) = puVar6;
    iVar4 = thunk_FUN_005da130((int)puVar6,(undefined *)0x0,DAT_00807dd9);
    *(int *)(pSVar3 + 0x30) = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = 1;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    uVar7 = thunk_FUN_005da310(*(int *)(pSVar3 + 0x2f0),(undefined *)0x0,DAT_00807dd9);
    *(undefined4 *)(pSVar3 + 0x34) = uVar7;
    uVar8 = *(uint *)(pSVar3 + 0x2f0);
    pSVar1 = pSVar3 + 0x2ec;
    FUN_006b2330((uint)DAT_008075a8,(uint *)pSVar1,0x32,0x4023f6,*(uint *)(uVar8 + 4),
                 *(uint *)(uVar8 + 8),uVar8);
    FUN_006b3640(DAT_008075a8,*(uint *)pSVar1,0xffffffff,1,0);
    FUN_006b3af0(DAT_008075a8,*(uint *)pSVar1);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(pSVar3 + 0x2f8),DAT_008075a8,0x32,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(pSVar3 + 0x2f8) + 4))(DAT_00806784,7,0,s_MM_MAP_007cd798,0xffffffff);
    *(undefined4 *)(pSVar3 + 0x314) = 1;
    *(undefined4 *)(pSVar3 + 0x318) = 0;
    *(undefined4 *)(pSVar3 + 0x300) = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(pSVar3 + 0x38d),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(pSVar3 + 0x38d) + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
    *(undefined4 *)(pSVar3 + 0x3a9) = 0xe5;
    *(undefined4 *)(pSVar3 + 0x3ad) = 0xb8;
    *(undefined4 *)(pSVar3 + 0x395) = 0;
    if (*(uint *)(pSVar3 + 0x391) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pSVar3 + 0x3d5),*(uint *)(pSVar3 + 0x391));
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(pSVar3 + 0x41e),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(pSVar3 + 0x41e) + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
    *(undefined4 *)(pSVar3 + 0x43a) = 0xe5;
    *(undefined4 *)(pSVar3 + 0x43e) = 0x1b8;
    *(undefined4 *)(pSVar3 + 0x426) = 0;
    if (*(uint *)(pSVar3 + 0x422) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pSVar3 + 0x466),*(uint *)(pSVar3 + 0x422));
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(pSVar3 + 0x4af),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(pSVar3 + 0x4af) + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
    *(undefined4 *)(pSVar3 + 0x4cb) = 0xeb;
    *(undefined4 *)(pSVar3 + 0x4cf) = 0xd8;
    *(undefined4 *)(pSVar3 + 0x4b7) = 0;
    if (*(uint *)(pSVar3 + 0x4b3) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pSVar3 + 0x4f7),*(uint *)(pSVar3 + 0x4b3));
    }
    iVar4 = 1;
    puVar9 = (undefined4 *)(*(int *)(pSVar3 + 0x2f0) + 0x28);
    uVar8 = FUN_006b4fe0(*(int *)(pSVar3 + 0x2f0));
    iVar4 = FUN_006b50c0(0xd5,0x119,(uint)*(ushort *)(*(int *)(pSVar3 + 0x2f0) + 0xe),uVar8,puVar9,
                         iVar4);
    *(int *)(pSVar3 + 0x544) = iVar4;
    local_8 = *(uint *)(iVar4 + 0x14);
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar4 + 8);
    }
    puVar9 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = 0xff;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar8 = *(uint *)(pSVar3 + 0x544);
    pSVar1 = pSVar3 + 0x540;
    FUN_006b2330((uint)DAT_008075a8,(uint *)pSVar1,0x31,0x4023f6,*(uint *)(uVar8 + 4),
                 *(uint *)(uVar8 + 8),uVar8);
    FUN_006b3640(DAT_008075a8,*(uint *)pSVar1,0xffffffff,0xd,0xb9);
    FUN_006b3af0(DAT_008075a8,*(uint *)pSVar1);
    iVar4 = 1;
    puVar9 = (undefined4 *)(*(int *)(pSVar3 + 0x2f0) + 0x28);
    uVar8 = FUN_006b4fe0(*(int *)(pSVar3 + 0x2f0));
    iVar4 = FUN_006b50c0(0x186,0x14,(uint)*(ushort *)(*(int *)(pSVar3 + 0x2f0) + 0xe),uVar8,puVar9,
                         iVar4);
    *(int *)(pSVar3 + 0x682) = iVar4;
    local_8 = *(uint *)(iVar4 + 0x14);
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar4 + 8);
    }
    puVar9 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = 0xff;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar8 = *(uint *)(pSVar3 + 0x682);
    pSVar1 = pSVar3 + 0x554;
    FUN_006b2330((uint)DAT_008075a8,(uint *)pSVar1,0x31,0x4023f6,*(uint *)(uVar8 + 4),
                 *(uint *)(uVar8 + 8),uVar8);
    FUN_006b3640(DAT_008075a8,*(uint *)pSVar1,0xffffffff,0xcb,0x23f);
    FUN_006b3af0(DAT_008075a8,*(uint *)pSVar1);
    puVar10 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(pSVar3 + 0x686) = puVar10;
    FUN_006b6020((int)puVar10,0,&DAT_008016a0);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(pSVar3 + 0x55c),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(pSVar3 + 0x55c) + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
    *(undefined4 *)(pSVar3 + 0x578) = 0x23a;
    *(undefined4 *)(pSVar3 + 0x57c) = 500;
    *(undefined4 *)(pSVar3 + 0x564) = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(pSVar3 + 0x5ed),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(pSVar3 + 0x5ed) + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
    iVar4 = 1;
    *(undefined4 *)(pSVar3 + 0x609) = 0x23a;
    puVar9 = (undefined4 *)(*(int *)(pSVar3 + 0x2f0) + 0x28);
    *(int *)(pSVar3 + 0x60d) = 0x23a - *(int *)(pSVar3 + 0x615);
    *(undefined4 *)(pSVar3 + 0x5f5) = 0;
    uVar8 = FUN_006b4fe0(*(int *)(pSVar3 + 0x2f0));
    iVar4 = FUN_006b50c0(0x16d,0x49,(uint)*(ushort *)(*(int *)(pSVar3 + 0x2f0) + 0xe),uVar8,puVar9,
                         iVar4);
    *(int *)(pSVar3 + 0x67e) = iVar4;
    uVar8 = *(uint *)(iVar4 + 0x14);
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar9 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = 0xff;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar8 = *(uint *)(pSVar3 + 0x67e);
    FUN_006b2330((uint)DAT_008075a8,(uint *)(pSVar3 + 0x558),0x31,0x4023f6,*(uint *)(uVar8 + 4),
                 *(uint *)(uVar8 + 8),uVar8);
    FUN_006b3640(DAT_008075a8,*(uint *)(pSVar3 + 0x558),0xffffffff,0xcd,499);
    DAT_00858df8 = local_50;
    return 0;
  }
  DAT_00858df8 = local_50;
  thunk_FUN_005db2a0((int)local_c);
  iVar11 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x1ac,0,iVar4,&DAT_007a4ccc);
  if (iVar11 == 0) {
    FUN_006a5e40(iVar4,0,0x7cd718,0x1ad);
    return 0xfffffffc;
  }
  pcVar2 = (code *)swi(3);
  uVar7 = (*pcVar2)();
  return uVar7;
}

