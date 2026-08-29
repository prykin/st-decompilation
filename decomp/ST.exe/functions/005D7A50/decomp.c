#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::InitSID */

void __thiscall SIDTy::InitSID(SIDTy *this)

{
  uint *puVar1;
  SIDTy *this_00;
  int iVar3;
  int local_EAX_181;
  int puVar3_mg8;
  uint *puVar3;
  int uVar3;
  int puVar4_mg7;
  int local_EAX_410;
  int puVar4_mg6;
  DArrayTy *pDVar4;
  int local_EAX_923;
  int puVar5_mg5;
  int iVar8;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar9;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    puVar3 = &local_8->array_00BC[0xc].field_01E0;

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)puVar3,(int *)g_ddxContext_008075A8,0x2f,'\a',nullptr,0,0);
    /* ST_CALLSITE[005D7AB7]: CALL dword ptr [EDX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*puVar3 + 4))
              ((SpriteClassTy *)puVar3,PTR_00806784,7,0,(byte *)"MM_SID",0xffffffff);
    this_00->field_1A7C = 0x2e;
    this_00->field_1A80 = 0x193;
    this_00->array_00BC[0xc].field_01E8 = 0;
    uVar6 = this_00->array_00BC[0xc].field_01E4;
    if (uVar6 != 0xffffffff) {

      Library::DKW::DDX::FUN_006b3730
                ((uint *)this_00->field_1AA8,uVar6,this_00->array_00BC[0xc].field_01E8,
                 this_00->field_1A7C,this_00->field_1A80);
    }
    iVar9 = 1;
    puVar7 = g_startSystem_0081176C->field_002C + 0x14;

    local_EAX_181 = FUN_006b4fe0(g_startSystem_0081176C->field_002C);

    puVar3_mg8 = FUN_006b50c0(0x15e,0xa5,(uint)g_startSystem_0081176C->field_002C[7],local_EAX_181,
                              (undefined4 *)puVar7,iVar9);
    this_00->field_1CB8 = (ushort *)puVar3_mg8;
    uVar6 = STField<uint>(puVar3_mg8,0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)STField<ushort>(puVar3_mg8,0xE) * STField<int>(puVar3_mg8,0x4) + 0x1f >> 3 &
              0x1ffffffc) * STField<int>(puVar3_mg8,0x8);
    }

    puVar3 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)puVar3_mg8));
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    iVar9 = 1;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar7 = g_startSystem_0081176C->field_002C + 0x14;

    uVar3 = FUN_006b4fe0(g_startSystem_0081176C->field_002C);

    puVar4_mg7 = FUN_006b50c0(0x13e,0xe,(uint)g_startSystem_0081176C->field_002C[7],uVar3,
                              (undefined4 *)puVar7,iVar9);
    this_00->field_1CBC = (ushort *)puVar4_mg7;
    uVar6 = STField<uint>(puVar4_mg7,0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)STField<ushort>(puVar4_mg7,0xE) * STField<int>(puVar4_mg7,0x4) + 0x1f >> 3 &
              0x1ffffffc) * STField<int>(puVar4_mg7,0x8);
    }

    puVar3 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)puVar4_mg7));
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    iVar9 = 1;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar7 = g_startSystem_0081176C->field_002C + 0x14;

    local_EAX_410 = FUN_006b4fe0(g_startSystem_0081176C->field_002C);

    puVar4_mg6 = FUN_006b50c0(0x104,0x28,(uint)g_startSystem_0081176C->field_002C[7],local_EAX_410,
                              (undefined4 *)puVar7,iVar9);
    this_00->field_1CC0 = (ushort *)puVar4_mg6;
    uVar6 = STField<uint>(puVar4_mg6,0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)STField<ushort>(puVar4_mg6,0xE) * STField<int>(puVar4_mg6,0x4) + 0x1f >> 3 &
              0x1ffffffc) * STField<int>(puVar4_mg6,0x8);
    }

    puVar3 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)puVar4_mg6));
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    /* ST_CALLSITE[005D7C4E]: CALL 0x00402d3d; direct=00402D3D SIDTy::PaintExplanation */
    PaintExplanation(this_00);
    puVar7 = this_00->field_1CB8;
    puVar1 = &this_00->field_1CB4;

    FUN_006b2330(g_ddxContext_008075A8,puVar1,0x2e,0x4023f6,*(uint *)(puVar7 + 2),
                 *(uint *)(puVar7 + 4),puVar7);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar1,0xffffffff,0xe1,0x1a9);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar1);

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1B01,(int *)g_ddxContext_008075A8,0x2d,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005D7CD7]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(this_00->field_1B01 + 4))(PTR_00806784,7,0,"SID_SLDUP",0xffffffff);
    this_00->field_1B1D = 0x22b;
    this_00->field_1B21 = 0x1be;
    this_00->field_1B09 = 0;
    if (this_00->field_1B05 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1B49,this_00->field_1B05);
    }

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1B92,(int *)g_ddxContext_008075A8,0x2d,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005D7D34]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(this_00->field_1B92 + 4))(PTR_00806784,7,0,"SID_SLDDN",0xffffffff);
    this_00->field_1BAE = 0x22b;
    this_00->field_1BB2 = 0x211;
    this_00->field_1B9A = 0;
    if (this_00->field_1B96 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1BDA,this_00->field_1B96);
    }

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1C23,(int *)g_ddxContext_008075A8,0x2d,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005D7D93]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(this_00->field_1C23 + 4))(PTR_00806784,7,0,"SID_SLDT",0xffffffff);
    this_00->field_1C3F = 0x22f;
    this_00->field_1C43 = 0x1d3;
    this_00->field_1C2B = 0;
    if (this_00->field_1C27 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1C6B,this_00->field_1C27);
    }
    pDVar4 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1CD0 = pDVar4;

    Library::DKW::TBL::FUN_006b6020(pDVar4,0,&CHAR_00h_008016a0);
    iVar9 = 1;
    puVar7 = this_00->field_1CB8 + 0x14;

    local_EAX_923 = FUN_006b4fe0(this_00->field_1CB8);
    /* ST_CALLSITE[005D7E05]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
    puVar5_mg5 = FUN_006b50c0(0x156,0xe,(uint)this_00->field_1CB8[7],local_EAX_923,
                              (undefined4 *)puVar7,iVar9);
    this_00->field_1CC8 = (ushort *)puVar5_mg5;
    this_00->field_0065 = 3;
    thunk_FUN_005b6730(this_00,1,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar8 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x49,0,iVar3,"%s",
                             "SIDTy::InitSID");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\sid_obj.cpp",0x49);
  return;
}

