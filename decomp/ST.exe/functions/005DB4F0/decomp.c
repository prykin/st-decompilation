
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::LoadGraph */

undefined4 __thiscall StartSystemTy::LoadGraph(StartSystemTy *this)

{
  code *pcVar1;
  StartSystemTy *pSVar2;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  StartSystemTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    thunk_FUN_005db2a0((int)local_c);
    iVar3 = 0;
    do {
      wsprintfA(&pSVar2->field_0x3c,s_MM_ACC_02d_007cd7a0,iVar3);
      pcVar4 = FUN_0070ae60(DAT_00806780,&pSVar2->field_0x3c,0,0,(undefined4 *)0x0,1);
      *(char **)(&pSVar2->field_0x244 + iVar3 * 4) = pcVar4;
      switch(iVar3) {
      case 0:
        *(undefined4 *)&pSVar2->field_0x25c = 0xf5;
        *(undefined4 *)&pSVar2->field_0x260 = 0x3d;
        *(undefined4 *)&pSVar2->field_0x264 = 0xfa;
        *(undefined4 *)&pSVar2->field_0x268 = 0;
        *(undefined2 *)&pSVar2->field_0x271 = 0;
        break;
      case 1:
        *(undefined4 *)&pSVar2->field_0x273 = 0x1f6;
        *(undefined4 *)&pSVar2->field_0x277 = 0x3d;
        *(undefined4 *)&pSVar2->field_0x27b = 0x4b;
        *(undefined4 *)&pSVar2->field_0x27f = 0;
        *(undefined2 *)&pSVar2->field_0x288 = 0;
        break;
      case 2:
        *(undefined4 *)&pSVar2->field_0x28a = 0x117;
        *(undefined4 *)&pSVar2->field_0x28e = 0x1ab;
        *(undefined4 *)&pSVar2->field_0x292 = 0x32;
        *(undefined4 *)&pSVar2->field_0x296 = 0;
        *(undefined2 *)&pSVar2->field_0x29f = 0;
        break;
      case 3:
        *(undefined4 *)&pSVar2->field_0x2a1 = 0x1ea;
        *(undefined4 *)&pSVar2->field_0x2a5 = 0x1b3;
        *(undefined4 *)&pSVar2->field_0x2a9 = 0x4b;
        *(undefined4 *)&pSVar2->field_0x2ad = 0;
        *(undefined2 *)&pSVar2->field_0x2b6 = 0;
        break;
      case 4:
        *(undefined4 *)&pSVar2->field_0x2b8 = 0x103;
        *(undefined4 *)&pSVar2->field_0x2bc = 0x1f9;
        uVar7 = Library::MSVCRT::FUN_0072e6c0();
        *(uint *)&pSVar2->field_0x2c0 = ((uVar7 & 1) + 1) * 0x19;
        uVar7 = Library::MSVCRT::FUN_0072e6c0();
        *(uint *)&pSVar2->field_0x2c4 = (uVar7 % 3 + 1) * 1000;
        *(undefined2 *)&pSVar2->field_0x2cd = 0;
        break;
      case 5:
        *(undefined4 *)&pSVar2->field_0x2cf = 0x205;
        *(undefined4 *)&pSVar2->field_0x2d3 = 0x1fa;
        uVar7 = Library::MSVCRT::FUN_0072e6c0();
        *(uint *)&pSVar2->field_0x2d7 = (uVar7 % 3 + 2) * 0x19;
        uVar7 = Library::MSVCRT::FUN_0072e6c0();
        *(uint *)&pSVar2->field_0x2db = ((uVar7 & 1) + 1) * 1000;
        *(undefined2 *)&pSVar2->field_0x2e4 = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    thunk_FUN_0055da40(DAT_00806780,0);
    puVar5 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,2,1);
    pSVar2->field_02F0 = puVar5;
    iVar3 = thunk_FUN_005da130((int)puVar5,(undefined *)0x0,DAT_00807dd9);
    pSVar2->field_0030 = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    uVar6 = thunk_FUN_005da310(pSVar2->field_02F0,(undefined *)0x0,DAT_00807dd9);
    pSVar2->field_0034 = uVar6;
    uVar7 = pSVar2->field_02F0;
    puVar8 = &pSVar2->field_02EC;
    FUN_006b2330((uint)DAT_008075a8,puVar8,0x32,0x4023f6,*(uint *)(uVar7 + 4),*(uint *)(uVar7 + 8),
                 uVar7);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,1,0);
    FUN_006b3af0(DAT_008075a8,*puVar8);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_0x2f8,DAT_008075a8,0x32,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)&pSVar2->field_0x2f8 + 4))(DAT_00806784,7,0,s_MM_MAP_007cd798,0xffffffff);
    *(undefined4 *)&pSVar2->field_0x314 = 1;
    *(undefined4 *)&pSVar2->field_0x318 = 0;
    *(undefined4 *)&pSVar2->field_0x300 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_0x38d,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)&pSVar2->field_0x38d + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff)
    ;
    *(undefined4 *)&pSVar2->field_0x3a9 = 0xe5;
    *(undefined4 *)&pSVar2->field_0x3ad = 0xb8;
    *(undefined4 *)&pSVar2->field_0x395 = 0;
    if (*(uint *)&pSVar2->field_0x391 != 0xffffffff) {
      FUN_006b3af0(*(int **)&pSVar2->field_0x3d5,*(uint *)&pSVar2->field_0x391);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_0x41e,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)&pSVar2->field_0x41e + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff)
    ;
    *(undefined4 *)&pSVar2->field_0x43a = 0xe5;
    *(undefined4 *)&pSVar2->field_0x43e = 0x1b8;
    *(undefined4 *)&pSVar2->field_0x426 = 0;
    if (*(uint *)&pSVar2->field_0x422 != 0xffffffff) {
      FUN_006b3af0(*(int **)&pSVar2->field_0x466,*(uint *)&pSVar2->field_0x422);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_0x4af,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)&pSVar2->field_0x4af + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
    *(undefined4 *)&pSVar2->field_0x4cb = 0xeb;
    *(undefined4 *)&pSVar2->field_0x4cf = 0xd8;
    *(undefined4 *)&pSVar2->field_0x4b7 = 0;
    if (*(uint *)&pSVar2->field_0x4b3 != 0xffffffff) {
      FUN_006b3af0(*(int **)&pSVar2->field_0x4f7,*(uint *)&pSVar2->field_0x4b3);
    }
    iVar3 = 1;
    puVar8 = (undefined4 *)(pSVar2->field_02F0 + 0x28);
    uVar7 = FUN_006b4fe0(pSVar2->field_02F0);
    iVar3 = FUN_006b50c0(0xd5,0x119,(uint)*(ushort *)(pSVar2->field_02F0 + 0xe),uVar7,puVar8,iVar3);
    pSVar2->field_0544 = iVar3;
    local_8 = *(uint *)(iVar3 + 0x14);
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
    }
    puVar8 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar7 = pSVar2->field_0544;
    puVar8 = &pSVar2->field_0540;
    FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x4023f6,*(uint *)(uVar7 + 4),*(uint *)(uVar7 + 8),
                 uVar7);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0xd,0xb9);
    FUN_006b3af0(DAT_008075a8,*puVar8);
    iVar3 = 1;
    puVar8 = (undefined4 *)(pSVar2->field_02F0 + 0x28);
    uVar7 = FUN_006b4fe0(pSVar2->field_02F0);
    iVar3 = FUN_006b50c0(0x186,0x14,(uint)*(ushort *)(pSVar2->field_02F0 + 0xe),uVar7,puVar8,iVar3);
    pSVar2->field_0682 = iVar3;
    local_8 = *(uint *)(iVar3 + 0x14);
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
    }
    puVar8 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar7 = pSVar2->field_0682;
    puVar8 = &pSVar2->field_0554;
    FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x4023f6,*(uint *)(uVar7 + 4),*(uint *)(uVar7 + 8),
                 uVar7);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0xcb,0x23f);
    FUN_006b3af0(DAT_008075a8,*puVar8);
    puVar9 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    pSVar2->field_0686 = puVar9;
    Library::DKW::TBL::FUN_006b6020((int)puVar9,0,&DAT_008016a0);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_0x55c,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)&pSVar2->field_0x55c + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff)
    ;
    *(undefined4 *)&pSVar2->field_0x578 = 0x23a;
    *(undefined4 *)&pSVar2->field_0x57c = 500;
    *(undefined4 *)&pSVar2->field_0x564 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_0x5ed,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)&pSVar2->field_0x5ed + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff)
    ;
    iVar3 = 1;
    *(undefined4 *)&pSVar2->field_0x609 = 0x23a;
    puVar8 = (undefined4 *)(pSVar2->field_02F0 + 0x28);
    *(int *)&pSVar2->field_0x60d = 0x23a - *(int *)&pSVar2->field_0x615;
    *(undefined4 *)&pSVar2->field_0x5f5 = 0;
    uVar7 = FUN_006b4fe0(pSVar2->field_02F0);
    iVar3 = FUN_006b50c0(0x16d,0x49,(uint)*(ushort *)(pSVar2->field_02F0 + 0xe),uVar7,puVar8,iVar3);
    pSVar2->field_067E = iVar3;
    uVar7 = *(uint *)(iVar3 + 0x14);
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar8 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar7 = pSVar2->field_067E;
    FUN_006b2330((uint)DAT_008075a8,&pSVar2->field_0558,0x31,0x4023f6,*(uint *)(uVar7 + 4),
                 *(uint *)(uVar7 + 8),uVar7);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,pSVar2->field_0558,0xffffffff,0xcd,499);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  thunk_FUN_005db2a0((int)local_c);
  iVar10 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x1ac,0,iVar3,&DAT_007a4ccc,
                              s_StartSystemTy__LoadGraph_007cd778);
  if (iVar10 == 0) {
    RaiseInternalException(iVar3,0,s_E____titans_Start_startsys_cpp_007cd718,0x1ad);
    return 0xfffffffc;
  }
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

