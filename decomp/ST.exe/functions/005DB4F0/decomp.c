#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::LoadGraph */

undefined4 __thiscall StartSystemTy::LoadGraph(StartSystemTy *this)

{
  StartSystemTy *pSVar2;
  int iVar3;
  char *pcVar3;
  uint local_EAX_340;
  uint local_EAX_361;
  uint uVar12;
  uint local_EAX_452;
  ushort *puVar5;
  ccFntTy *pcVar4;
  int local_EAX_1035;
  AnonPointee_StartSystemTy_0544 *pAVar5;
  undefined4 *puVar6;
  int uVar8;
  ushort *puVar7;
  DArrayTy *pDVar8;
  int local_EAX_1618;
  int iVar12;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar13;
  InternalExceptionFrame local_50;
  StartSystemTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    sub_005DB2A0(local_c);
    iVar13 = 0;
    do {
      wsprintfA(&pSVar2->field_003C,"MM_ACC%02d",iVar13);
      pcVar3 = Library::Ourlib::MFIMG::mfImtLoad
                         (g_cMf32_00806780,&pSVar2->field_003C,0,0,nullptr,1);
      pSVar2->array_0244[iVar13] = (uint)pcVar3;
      switch(iVar13) {
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
        local_EAX_340 = Library::MSVCRT::FUN_0072e6c0();
        pSVar2->field_02C0 = ((local_EAX_340 & 1) + 1) * 0x19;
        local_EAX_361 = Library::MSVCRT::FUN_0072e6c0();
        pSVar2->field_02C4 = (local_EAX_361 % 3 + 1) * 1000;
        pSVar2->field_02CD = 0;
        break;
      case 5:
        pSVar2->field_02CF = 0x205;
        pSVar2->field_02D3 = 0x1fa;
        uVar12 = Library::MSVCRT::FUN_0072e6c0();
        pSVar2->field_02D7 = (uVar12 % 3 + 2) * 0x19;
        local_EAX_452 = Library::MSVCRT::FUN_0072e6c0();
        pSVar2->field_02DB = ((local_EAX_452 & 1) + 1) * 1000;
        pSVar2->field_02E4 = 0;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 6);
    LoadStartPlt(g_cMf32_00806780,0);
    puVar5 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",2,1);
    pSVar2->field_02F0 = puVar5;
    pcVar4 = (ccFntTy *)thunk_FUN_005da130(puVar5,nullptr,DAT_00807dd9);
    pSVar2->field_0030 = pcVar4;
    pcVar4->field_0058 = 1;
    pcVar4->field_005C = 0;
    pcVar4 = (ccFntTy *)thunk_FUN_005da310((int)pSVar2->field_02F0,nullptr,DAT_00807dd9);
    pSVar2->field_0034 = pcVar4;
    puVar7 = pSVar2->field_02F0;
    puVar6 = &pSVar2->field_02EC;
    FUN_006b2330(g_ddxContext_008075A8,puVar6,0x32,0x4023f6,*(uint *)(puVar7 + 2),
                 *(uint *)(puVar7 + 4),puVar7);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,1,0);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_02F8,(int *)g_ddxContext_008075A8,0x32,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_02F8 + 4))(PTR_00806784,7,0,"MM_MAP",0xffffffff);
    pSVar2->field_0314 = 1;
    pSVar2->field_0318 = 0;
    pSVar2->field_0300 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_038D,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_038D + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
    pSVar2->field_03A9 = 0xe5;
    pSVar2->field_03AD = 0xb8;
    pSVar2->field_0395 = 0;
    if (pSVar2->field_0391 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar2->field_03D5,pSVar2->field_0391);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_041E,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_041E + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
    pSVar2->field_043A = 0xe5;
    pSVar2->field_043E = 0x1b8;
    pSVar2->field_0426 = 0;
    if (pSVar2->field_0422 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar2->field_0466,pSVar2->field_0422);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_04AF,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_04AF + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
    pSVar2->field_04CB = 0xeb;
    pSVar2->field_04CF = 0xd8;
    pSVar2->field_04B7 = 0;
    if (pSVar2->field_04B3 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar2->field_04F7,pSVar2->field_04B3);
    }
    iVar13 = 1;
    puVar7 = pSVar2->field_02F0 + 0x14;
    local_EAX_1035 = FUN_006b4fe0((int)pSVar2->field_02F0);
    pAVar5 = (AnonPointee_StartSystemTy_0544 *)
             FUN_006b50c0(0xd5,0x119,(uint)pSVar2->field_02F0[7],local_EAX_1035,(undefined4 *)puVar7
                          ,iVar13);
    pSVar2->field_0544 = pAVar5;
    local_8 = pAVar5[1].field_0008;
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)&pAVar5[1].field_0x2 * pAVar5->field_0004 + 0x1f >> 3 & 0x1ffffffc
                ) * pAVar5->field_0008;
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int *)pAVar5);
    for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    pAVar5 = pSVar2->field_0544;
    puVar6 = &pSVar2->field_0540;
    FUN_006b2330(g_ddxContext_008075A8,puVar6,0x31,0x4023f6,pAVar5->field_0004,pAVar5->field_0008,
                 (ushort *)pAVar5);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,0xd,0xb9);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
    iVar13 = 1;
    puVar7 = pSVar2->field_02F0 + 0x14;
    uVar8 = FUN_006b4fe0((int)pSVar2->field_02F0);
    puVar7 = (ushort *)
             FUN_006b50c0(0x186,0x14,(uint)pSVar2->field_02F0[7],uVar8,(undefined4 *)puVar7,iVar13);
    pSVar2->field_0682 = puVar7;
    local_8 = *(uint *)(puVar7 + 10);
    if (local_8 == 0) {
      local_8 = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar7 + 4);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int *)puVar7);
    for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar7 = pSVar2->field_0682;
    puVar6 = &pSVar2->field_0554;
    FUN_006b2330(g_ddxContext_008075A8,puVar6,0x31,0x4023f6,*(uint *)(puVar7 + 2),
                 *(uint *)(puVar7 + 4),puVar7);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,0xcb,0x23f);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
    pDVar8 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    pSVar2->field_0686 = pDVar8;
    Library::DKW::TBL::FUN_006b6020(pDVar8,0,&DAT_008016a0);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_055C,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_055C + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
    pSVar2->field_0578 = 0x23a;
    pSVar2->field_057C = 500;
    pSVar2->field_0564 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar2->field_05ED,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_05ED + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
    iVar13 = 1;
    pSVar2->field_0609 = 0x23a;
    puVar7 = pSVar2->field_02F0 + 0x14;
    pSVar2->field_060D = 0x23a - pSVar2->field_0615;
    pSVar2->field_05F5 = 0;
    local_EAX_1618 = FUN_006b4fe0((int)pSVar2->field_02F0);
    puVar7 = (ushort *)
             FUN_006b50c0(0x16d,0x49,(uint)pSVar2->field_02F0[7],local_EAX_1618,(undefined4 *)puVar7
                          ,iVar13);
    pSVar2->field_067E = puVar7;
    uVar10 = *(uint *)(puVar7 + 10);
    if (uVar10 == 0) {
      uVar10 = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar7 + 4);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int *)puVar7);
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar7 = pSVar2->field_067E;
    FUN_006b2330(g_ddxContext_008075A8,&pSVar2->field_0558,0x31,0x4023f6,*(uint *)(puVar7 + 2),
                 *(uint *)(puVar7 + 4),puVar7);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,pSVar2->field_0558,0xffffffff,0xcd,499);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  sub_005DB2A0(local_c);
  iVar12 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x1ac,0,iVar3,"%s",
                              "StartSystemTy::LoadGraph");
  if (iVar12 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0x1ad);
    return 0xfffffffc;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

