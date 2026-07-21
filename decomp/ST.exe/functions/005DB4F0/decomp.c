#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::LoadGraph */

undefined4 __thiscall StartSystemTy::LoadGraph(StartSystemTy *this)

{
  int *piVar1;
  code *pcVar2;
  StartSystemTy *pSVar3;
  int iVar4;
  char *pcVar5;
  ushort *puVar6;
  ccFntTy *pcVar7;
  uint uVar8;
  AnonPointee_StartSystemTy_0544 *pAVar9;
  undefined4 *puVar10;
  DArrayTy *pDVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  InternalExceptionFrame local_50;
  StartSystemTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar3 = local_c;
  if (iVar4 == 0) {
    sub_005DB2A0(local_c);
    iVar4 = 0;
    do {
      wsprintfA(&pSVar3->field_0x3c,"MM_ACC%02d",iVar4);
      pcVar5 = Library::Ourlib::MFIMG::mfImtLoad
                         (g_cMf32_00806780,&pSVar3->field_0x3c,0,0,(undefined4 *)0x0,1);
      *(char **)(&pSVar3->field_0x244 + iVar4 * 4) = pcVar5;
      switch(iVar4) {
      case 0:
        pSVar3->field_025C = 0xf5;
        pSVar3->field_0260 = 0x3d;
        pSVar3->field_0264 = 0xfa;
        pSVar3->field_0268 = 0;
        pSVar3->field_0271 = 0;
        break;
      case 1:
        pSVar3->field_0273 = 0x1f6;
        pSVar3->field_0277 = 0x3d;
        pSVar3->field_027B = 0x4b;
        pSVar3->field_027F = 0;
        pSVar3->field_0288 = 0;
        break;
      case 2:
        pSVar3->field_028A = 0x117;
        pSVar3->field_028E = 0x1ab;
        pSVar3->field_0292 = 0x32;
        pSVar3->field_0296 = 0;
        pSVar3->field_029F = 0;
        break;
      case 3:
        pSVar3->field_02A1 = 0x1ea;
        pSVar3->field_02A5 = 0x1b3;
        pSVar3->field_02A9 = 0x4b;
        pSVar3->field_02AD = 0;
        pSVar3->field_02B6 = 0;
        break;
      case 4:
        pSVar3->field_02B8 = 0x103;
        pSVar3->field_02BC = 0x1f9;
        uVar8 = Library::MSVCRT::FUN_0072e6c0();
        pSVar3->field_02C0 = ((uVar8 & 1) + 1) * 0x19;
        uVar8 = Library::MSVCRT::FUN_0072e6c0();
        pSVar3->field_02C4 = (uVar8 % 3 + 1) * 1000;
        pSVar3->field_02CD = 0;
        break;
      case 5:
        pSVar3->field_02CF = 0x205;
        pSVar3->field_02D3 = 0x1fa;
        uVar8 = Library::MSVCRT::FUN_0072e6c0();
        pSVar3->field_02D7 = (uVar8 % 3 + 2) * 0x19;
        uVar8 = Library::MSVCRT::FUN_0072e6c0();
        pSVar3->field_02DB = ((uVar8 & 1) + 1) * 1000;
        pSVar3->field_02E4 = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    LoadStartPlt(g_cMf32_00806780,0);
    puVar6 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",2,1);
    pSVar3->field_02F0 = puVar6;
    pcVar7 = (ccFntTy *)thunk_FUN_005da130(puVar6,(undefined *)0x0,DAT_00807dd9);
    pSVar3->field_0030 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    pcVar7 = (ccFntTy *)thunk_FUN_005da310((int)pSVar3->field_02F0,(undefined *)0x0,DAT_00807dd9);
    pSVar3->field_0034 = pcVar7;
    puVar6 = pSVar3->field_02F0;
    piVar1 = &pSVar3->field_02EC;
    FUN_006b2330((uint)PTR_008075a8,(uint *)piVar1,0x32,0x4023f6,*(uint *)(puVar6 + 2),
                 *(uint *)(puVar6 + 4),(uint)puVar6);
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*piVar1,0xffffffff,1,0);
    FUN_006b3af0((int *)PTR_008075a8,*piVar1);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar3->field_02F8,(int *)PTR_008075a8,0x32,'\a',(undefined4 *)0x0,
               0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar3->field_02F8 + 4))(DAT_00806784,7,0,"MM_MAP",0xffffffff);
    pSVar3->field_0314 = 1;
    pSVar3->field_0318 = 0;
    pSVar3->field_0300 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar3->field_038D,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,
               0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar3->field_038D + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
    pSVar3->field_03A9 = 0xe5;
    pSVar3->field_03AD = 0xb8;
    pSVar3->field_0395 = 0;
    if (pSVar3->field_0391 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar3->field_03D5,pSVar3->field_0391);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar3->field_041E,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,
               0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar3->field_041E + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
    pSVar3->field_043A = 0xe5;
    pSVar3->field_043E = 0x1b8;
    pSVar3->field_0426 = 0;
    if (pSVar3->field_0422 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar3->field_0466,pSVar3->field_0422);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar3->field_04AF,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,
               0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar3->field_04AF + 4))(DAT_00806784,7,0,"MM_SLDT",0xffffffff);
    pSVar3->field_04CB = 0xeb;
    pSVar3->field_04CF = 0xd8;
    pSVar3->field_04B7 = 0;
    if (pSVar3->field_04B3 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar3->field_04F7,pSVar3->field_04B3);
    }
    iVar4 = 1;
    puVar6 = pSVar3->field_02F0 + 0x14;
    uVar8 = FUN_006b4fe0((int)pSVar3->field_02F0);
    pAVar9 = (AnonPointee_StartSystemTy_0544 *)
             FUN_006b50c0(0xd5,0x119,(uint)pSVar3->field_02F0[7],uVar8,(undefined4 *)puVar6,iVar4);
    pSVar3->field_0544 = pAVar9;
    local_8 = pAVar9[1].field_0008;
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)&pAVar9[1].field_0x2 * pAVar9->field_0004 + 0x1f >> 3 & 0x1ffffffc
                ) * pAVar9->field_0008;
    }
    puVar10 = (undefined4 *)FUN_006b4fa0((int)pAVar9);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = 0xff;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    pAVar9 = pSVar3->field_0544;
    piVar1 = &pSVar3->field_0540;
    FUN_006b2330((uint)PTR_008075a8,(uint *)piVar1,0x31,0x4023f6,pAVar9->field_0004,
                 pAVar9->field_0008,(uint)pAVar9);
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*piVar1,0xffffffff,0xd,0xb9);
    FUN_006b3af0((int *)PTR_008075a8,*piVar1);
    iVar4 = 1;
    puVar6 = pSVar3->field_02F0 + 0x14;
    uVar8 = FUN_006b4fe0((int)pSVar3->field_02F0);
    puVar6 = (ushort *)
             FUN_006b50c0(0x186,0x14,(uint)pSVar3->field_02F0[7],uVar8,(undefined4 *)puVar6,iVar4);
    pSVar3->field_0682 = puVar6;
    local_8 = *(uint *)(puVar6 + 10);
    if (local_8 == 0) {
      local_8 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar6 + 4);
    }
    puVar10 = (undefined4 *)FUN_006b4fa0((int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = 0xff;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    puVar6 = pSVar3->field_0682;
    piVar1 = &pSVar3->field_0554;
    FUN_006b2330((uint)PTR_008075a8,(uint *)piVar1,0x31,0x4023f6,*(uint *)(puVar6 + 2),
                 *(uint *)(puVar6 + 4),(uint)puVar6);
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*piVar1,0xffffffff,0xcb,0x23f);
    FUN_006b3af0((int *)PTR_008075a8,*piVar1);
    pDVar11 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
    pSVar3->field_0686 = &pDVar11->flags;
    Library::DKW::TBL::FUN_006b6020(&pDVar11->flags,0,&DAT_008016a0);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar3->field_055C,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,
               0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar3->field_055C + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
    pSVar3->field_0578 = 0x23a;
    pSVar3->field_057C = 500;
    pSVar3->field_0564 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar3->field_05ED,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,
               0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar3->field_05ED + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
    iVar4 = 1;
    pSVar3->field_0609 = 0x23a;
    puVar6 = pSVar3->field_02F0 + 0x14;
    pSVar3->field_060D = 0x23a - pSVar3->field_0615;
    pSVar3->field_05F5 = 0;
    uVar8 = FUN_006b4fe0((int)pSVar3->field_02F0);
    puVar6 = (ushort *)
             FUN_006b50c0(0x16d,0x49,(uint)pSVar3->field_02F0[7],uVar8,(undefined4 *)puVar6,iVar4);
    pSVar3->field_067E = puVar6;
    uVar8 = *(uint *)(puVar6 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar6 + 4);
    }
    puVar10 = (undefined4 *)FUN_006b4fa0((int)puVar6);
    for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = 0xff;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    puVar6 = pSVar3->field_067E;
    FUN_006b2330((uint)PTR_008075a8,(uint *)&pSVar3->field_0558,0x31,0x4023f6,*(uint *)(puVar6 + 2),
                 *(uint *)(puVar6 + 4),(uint)puVar6);
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,pSVar3->field_0558,0xffffffff,0xcd,499);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  sub_005DB2A0(local_c);
  iVar12 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x1ac,0,iVar4,"%s",
                              "StartSystemTy::LoadGraph");
  if (iVar12 == 0) {
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\startsys.cpp",0x1ad);
    return 0xfffffffc;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

