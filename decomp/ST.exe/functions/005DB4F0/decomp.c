#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::LoadGraph */

undefined4 __thiscall StartSystemTy::LoadGraph(StartSystemTy *this)

{
  int *piVar1;
  AnonPointee_StartSystemTy_0544 *pAVar2;
  StartSystemTy *pSVar4;
  int iVar3;
  char *pcVar5;
  uint local_EAX_340;
  uint local_EAX_361;
  uint uVar12;
  uint local_EAX_452;
  ushort *puVar5;
  HDC pHVar6;
  HDC pcVar6;
  int local_EAX_1035;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar7;
  uint *puVar8;
  int uVar8;
  DArrayTy *pDVar9;
  int local_EAX_1618;
  int iVar12;
  uint uVar10;
  uint uVar11;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  InternalExceptionFrame local_50;
  StartSystemTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar4 = local_c;
  if (iVar3 == 0) {
    /* ST_CALLSITE[005DB52B]: CALL 0x00402f86; direct=00402F86 StartSystemTy::sub_005DB2A0 */
    sub_005DB2A0(local_c);
    iVar14 = 0;
    do {
      /* ST_CALLSITE[005DB53C]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&pSVar4->field_003C,"MM_ACC%02d",iVar14);
      pcVar5 = Library::Ourlib::MFIMG::mfImtLoad
                         (g_cMf32_00806780,&pSVar4->field_003C,0,0,nullptr,1);
      pSVar4->array_0244[iVar14] = (uint)pcVar5;
      switch(iVar14) {
      case 0:
        pSVar4->field_025C = 0xf5;
        pSVar4->field_0260 = 0x3d;
        pSVar4->field_0264 = 0xfa;
        pSVar4->field_0268 = 0;
        pSVar4->field_0271 = 0;
        break;
      case 1:
        pSVar4->field_0273 = 0x1f6;
        pSVar4->field_0277 = 0x3d;
        pSVar4->field_027B = 0x4b;
        pSVar4->field_027F = 0;
        pSVar4->field_0288 = 0;
        break;
      case 2:
        pSVar4->field_028A = 0x117;
        pSVar4->field_028E = 0x1ab;
        pSVar4->field_0292 = 0x32;
        pSVar4->field_0296 = 0;
        pSVar4->field_029F = 0;
        break;
      case 3:
        pSVar4->field_02A1 = 0x1ea;
        pSVar4->field_02A5 = 0x1b3;
        pSVar4->field_02A9 = 0x4b;
        pSVar4->field_02AD = 0;
        pSVar4->field_02B6 = 0;
        break;
      case 4:
        pSVar4->field_02B8 = 0x103;
        pSVar4->field_02BC = 0x1f9;

        local_EAX_340 = Library::MSVCRT::FUN_0072e6c0();
        pSVar4->field_02C0 = ((local_EAX_340 & 1) + 1) * 0x19;

        local_EAX_361 = Library::MSVCRT::FUN_0072e6c0();
        pSVar4->field_02C4 = (local_EAX_361 % 3 + 1) * 1000;
        pSVar4->field_02CD = 0;
        break;
      case 5:
        pSVar4->field_02CF = 0x205;
        pSVar4->field_02D3 = 0x1fa;

        uVar12 = Library::MSVCRT::FUN_0072e6c0();
        pSVar4->field_02D7 = (uVar12 % 3 + 2) * 0x19;

        local_EAX_452 = Library::MSVCRT::FUN_0072e6c0();
        pSVar4->field_02DB = ((local_EAX_452 & 1) + 1) * 1000;
        pSVar4->field_02E4 = 0;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 6);
    /* ST_CALLSITE[005DB6E8]: CALL 0x00401a4b; direct=00401A4B LoadStartPlt */
    LoadStartPlt(g_cMf32_00806780,0);
    puVar5 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",2,1);
    pSVar4->field_02F0 = puVar5;
    /* ST_CALLSITE[005DB713]: CALL 0x004034ef; direct=004034EF thunk_FUN_005da130; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/WinDef.h/HDC__; source view only; no Ghidra override */
    pHVar6 = thunk_FUN_005da130(puVar5,nullptr,DAT_00807dd9);
    pSVar4->field_0030 = pHVar6;
    pHVar6[0x16].unused = 1;
    pHVar6[0x17].unused = 0;
    /* ST_CALLSITE[005DB734]: CALL 0x00403e5e; direct=00403E5E thunk_FUN_005da310; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = thunk_FUN_005da310((int)pSVar4->field_02F0,nullptr,DAT_00807dd9);
    pSVar4->field_0034 = (ccFntTy *)pcVar6;
    puVar15 = pSVar4->field_02F0;
    puVar8 = &pSVar4->field_02EC;

    FUN_006b2330(g_ddxContext_008075A8,puVar8,0x32,0x4023f6,*(uint *)(puVar15 + 2),
                 *(uint *)(puVar15 + 4),puVar15);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar8,0xffffffff,1,0);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar8);

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar4->field_02F8,(int *)g_ddxContext_008075A8,0x32,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005DB7BA]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(pSVar4->field_02F8 + 4))(PTR_00806784,7,0,"MM_MAP",0xffffffff);
    pSVar4->field_0314 = 1;
    pSVar4->field_0318 = 0;
    pSVar4->field_0300 = 0;

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar4->field_038D,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005DB803]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(pSVar4->field_038D + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
    pSVar4->field_03A9 = 0xe5;
    pSVar4->field_03AD = 0xb8;
    pSVar4->field_0395 = 0;
    if (pSVar4->field_0391 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar4->field_03D5,pSVar4->field_0391);
    }

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar4->field_041E,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005DB860]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(pSVar4->field_041E + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
    pSVar4->field_043A = 0xe5;
    pSVar4->field_043E = 0x1b8;
    pSVar4->field_0426 = 0;
    if (pSVar4->field_0422 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar4->field_0466,pSVar4->field_0422);
    }

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar4->field_04AF,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005DB8BF]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(pSVar4->field_04AF + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
    pSVar4->field_04CB = 0xeb;
    pSVar4->field_04CF = 0xd8;
    pSVar4->field_04B7 = 0;
    if (pSVar4->field_04B3 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar4->field_04F7,pSVar4->field_04B3);
    }
    iVar14 = 1;
    puVar15 = pSVar4->field_02F0 + 0x14;

    local_EAX_1035 = FUN_006b4fe0(pSVar4->field_02F0);
    pRVar7 = (RecoveredRecord_006B4FA0_DAC3A217 *)

             FUN_006b50c0(0xd5,0x119,(uint)pSVar4->field_02F0[7],local_EAX_1035,
                          (undefined4 *)puVar15,iVar14);
    pSVar4->field_0544 = (AnonPointee_StartSystemTy_0544 *)pRVar7;
    local_8 = *(uint *)&pRVar7[1].field_0x4;
    if (local_8 == 0) {
      local_8 = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)&pRVar7->field_0x8;
    }

    puVar8 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar7));
    for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    pAVar2 = pSVar4->field_0544;
    piVar1 = &pSVar4->field_0540;

    FUN_006b2330(g_ddxContext_008075A8,(uint *)piVar1,0x31,0x4023f6,pAVar2->field_0004,
                 pAVar2->field_0008,(ushort *)pAVar2);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*piVar1,0xffffffff,0xd,0xb9);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*piVar1);
    iVar14 = 1;
    puVar15 = pSVar4->field_02F0 + 0x14;

    uVar8 = FUN_006b4fe0(pSVar4->field_02F0);
    pRVar7 = (RecoveredRecord_006B4FA0_DAC3A217 *)

             FUN_006b50c0(0x186,0x14,(uint)pSVar4->field_02F0[7],uVar8,(undefined4 *)puVar15,iVar14);
    pSVar4->field_0682 = (ushort *)pRVar7;
    local_8 = *(uint *)&pRVar7[1].field_0x4;
    if (local_8 == 0) {
      local_8 = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)&pRVar7->field_0x8;
    }

    puVar8 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar7));
    for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar15 = pSVar4->field_0682;
    puVar8 = &pSVar4->field_0554;

    FUN_006b2330(g_ddxContext_008075A8,puVar8,0x31,0x4023f6,*(uint *)(puVar15 + 2),
                 *(uint *)(puVar15 + 4),puVar15);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar8,0xffffffff,0xcb,0x23f);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar8);
    pDVar9 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    pSVar4->field_0686 = pDVar9;

    Library::DKW::TBL::FUN_006b6020(pDVar9,0,&CHAR_00h_008016a0);

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar4->field_055C,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005DBAC2]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(pSVar4->field_055C + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
    pSVar4->field_0578 = 0x23a;
    pSVar4->field_057C = 500;
    pSVar4->field_0564 = 0;

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar4->field_05ED,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005DBB0F]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(pSVar4->field_05ED + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
    iVar14 = 1;
    pSVar4->field_0609 = 0x23a;
    puVar15 = pSVar4->field_02F0 + 0x14;
    pSVar4->field_060D = 0x23a - pSVar4->field_0615;
    pSVar4->field_05F5 = 0;

    local_EAX_1618 = FUN_006b4fe0(pSVar4->field_02F0);
    pRVar7 = (RecoveredRecord_006B4FA0_DAC3A217 *)

             FUN_006b50c0(0x16d,0x49,(uint)pSVar4->field_02F0[7],local_EAX_1618,
                          (undefined4 *)puVar15,iVar14);
    pSVar4->field_067E = (ushort *)pRVar7;
    uVar11 = *(uint *)&pRVar7[1].field_0x4;
    if (uVar11 == 0) {
      uVar11 = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)&pRVar7->field_0x8;
    }

    puVar8 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar7));
    for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar15 = pSVar4->field_067E;

    FUN_006b2330(g_ddxContext_008075A8,&pSVar4->field_0558,0x31,0x4023f6,*(uint *)(puVar15 + 2),
                 *(uint *)(puVar15 + 4),puVar15);

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,pSVar4->field_0558,0xffffffff,0xcd,499);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  /* ST_CALLSITE[005DBC07]: CALL 0x00402f86; direct=00402F86 StartSystemTy::sub_005DB2A0 */
  sub_005DB2A0(local_c);

  iVar12 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x1ac,0,iVar3,"%s",
                              "StartSystemTy::LoadGraph");
  if (iVar12 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0x1ad);
    return 0xfffffffc;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

