
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
  ccFntTy *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
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
      pcVar4 = mfImtLoad(DAT_00806780,&pSVar2->field_0x3c,0,0,(undefined4 *)0x0,1);
      *(char **)(&pSVar2->field_0x244 + iVar3 * 4) = pcVar4;
      switch(iVar3) {
      case 0:
        pSVar2->field_025C = 0xf5;
        pSVar2->field_0260 = 0x3d;
        pSVar2->field_0264 = 0xfa;
        pSVar2->field_0268 = 0;
        pSVar2->field_0271 = 0;
        break;
      case 1:
        pSVar2->field_0273 = 0x1f6;
        pSVar2->field_0277 = 0x3d;
        pSVar2->field_027B = 0x4b;
        pSVar2->field_027F = 0;
        pSVar2->field_0288 = 0;
        break;
      case 2:
        pSVar2->field_028A = 0x117;
        pSVar2->field_028E = 0x1ab;
        pSVar2->field_0292 = 0x32;
        pSVar2->field_0296 = 0;
        pSVar2->field_029F = 0;
        break;
      case 3:
        pSVar2->field_02A1 = 0x1ea;
        pSVar2->field_02A5 = 0x1b3;
        pSVar2->field_02A9 = 0x4b;
        pSVar2->field_02AD = 0;
        pSVar2->field_02B6 = 0;
        break;
      case 4:
        pSVar2->field_02B8 = 0x103;
        pSVar2->field_02BC = 0x1f9;
        uVar7 = Library::MSVCRT::FUN_0072e6c0();
        pSVar2->field_02C0 = ((uVar7 & 1) + 1) * 0x19;
        uVar7 = Library::MSVCRT::FUN_0072e6c0();
        pSVar2->field_02C4 = (uVar7 % 3 + 1) * 1000;
        pSVar2->field_02CD = 0;
        break;
      case 5:
        pSVar2->field_02CF = 0x205;
        pSVar2->field_02D3 = 0x1fa;
        uVar7 = Library::MSVCRT::FUN_0072e6c0();
        pSVar2->field_02D7 = (uVar7 % 3 + 2) * 0x19;
        uVar7 = Library::MSVCRT::FUN_0072e6c0();
        pSVar2->field_02DB = ((uVar7 & 1) + 1) * 1000;
        pSVar2->field_02E4 = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    LoadStartPlt(DAT_00806780,0);
    puVar5 = mfImgLoad(DAT_00806780,1,s_MM_MAPB_007cc790,2,1);
    pSVar2->field_02F0 = puVar5;
    iVar3 = thunk_FUN_005da130((int)puVar5,(undefined *)0x0,DAT_00807dd9);
    pSVar2->field_0030 = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    pcVar6 = (ccFntTy *)thunk_FUN_005da310(pSVar2->field_02F0,(undefined *)0x0,DAT_00807dd9);
    pSVar2->field_0034 = pcVar6;
    uVar7 = pSVar2->field_02F0;
    puVar8 = &pSVar2->field_02EC;
    FUN_006b2330((uint)DAT_008075a8,puVar8,0x32,0x4023f6,*(uint *)(uVar7 + 4),*(uint *)(uVar7 + 8),
                 uVar7);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,1,0);
    FUN_006b3af0(DAT_008075a8,*puVar8);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_02F8,DAT_008075a8,0x32,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(pSVar2->field_02F8 + 4))(DAT_00806784,7,0,s_MM_MAP_007cd798,0xffffffff);
    pSVar2->field_0314 = 1;
    pSVar2->field_0318 = 0;
    pSVar2->field_0300 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_038D,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(pSVar2->field_038D + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
    pSVar2->field_03A9 = 0xe5;
    pSVar2->field_03AD = 0xb8;
    pSVar2->field_0395 = 0;
    if (pSVar2->field_0391 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar2->field_03D5,pSVar2->field_0391);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_041E,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(pSVar2->field_041E + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
    pSVar2->field_043A = 0xe5;
    pSVar2->field_043E = 0x1b8;
    pSVar2->field_0426 = 0;
    if (pSVar2->field_0422 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar2->field_0466,pSVar2->field_0422);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_04AF,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(pSVar2->field_04AF + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
    pSVar2->field_04CB = 0xeb;
    pSVar2->field_04CF = 0xd8;
    pSVar2->field_04B7 = 0;
    if (pSVar2->field_04B3 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar2->field_04F7,pSVar2->field_04B3);
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
              ((SpriteClassTy *)&pSVar2->field_055C,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(pSVar2->field_055C + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
    pSVar2->field_0578 = 0x23a;
    pSVar2->field_057C = 500;
    pSVar2->field_0564 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_05ED,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(pSVar2->field_05ED + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
    iVar3 = 1;
    pSVar2->field_0609 = 0x23a;
    puVar8 = (undefined4 *)(pSVar2->field_02F0 + 0x28);
    pSVar2->field_060D = 0x23a - pSVar2->field_0615;
    pSVar2->field_05F5 = 0;
    uVar7 = FUN_006b4fe0(pSVar2->field_02F0);
    iVar3 = FUN_006b50c0(0x16d,0x49,(uint)*(ushort *)(pSVar2->field_02F0 + 0xe),uVar7,puVar8,iVar3);
    pSVar2->field_067E = iVar3;
    uVar7 = *(uint *)(iVar3 + 0x14);
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar8 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar12 = uVar7 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
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
  uVar11 = (*pcVar1)();
  return uVar11;
}

