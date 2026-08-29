#include "st/generated.hpp"
// Generated translation unit: source/original/Start/sid_obj.cpp

// 005D7A50 SIDTy::InitSID
#line 4 "decomp/ST.exe/functions/005D7A50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::InitSID */

void __thiscall st::fn_005D7A50(SIDTy *this)

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

  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    puVar3 = &local_8->array_00BC[0xc].field_01E0;

    st::fn_007158A0
              (reinterpret_cast<SpriteClassTy *>(puVar3),reinterpret_cast<int *>(g_ddxContext_008075A8),0x2f,'\a',nullptr,0,0);
    /* ST_CALLSITE[005D7AB7]: CALL dword ptr [EDX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*puVar3 + 4))
              ((SpriteClassTy *)puVar3,PTR_00806784,7,0,(byte *)"MM_SID",0xffffffff);
    this_00->field_1A7C = 0x2e;
    this_00->field_1A80 = 0x193;
    this_00->array_00BC[0xc].field_01E8 = 0;
    uVar6 = this_00->array_00BC[0xc].field_01E4;
    if (uVar6 != 0xffffffff) {

      st::fn_006B3730
                ((uint *)this_00->field_1AA8,uVar6,this_00->array_00BC[0xc].field_01E8,
                 this_00->field_1A7C,this_00->field_1A80);
    }
    iVar9 = 1;
    puVar7 = g_startSystem_0081176C->field_002C + 0x14;

    local_EAX_181 = st::fn_006B4FE0(g_startSystem_0081176C->field_002C);

    puVar3_mg8 = st::fn_006B50C0(0x15e,0xa5,(uint)g_startSystem_0081176C->field_002C[7],local_EAX_181,
                              reinterpret_cast<undefined4 *>(puVar7),iVar9);
    this_00->field_1CB8 = (ushort *)puVar3_mg8;
    uVar6 = STField<uint>(puVar3_mg8,0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)STField<ushort>(puVar3_mg8,0xE) * STField<int>(puVar3_mg8,0x4) + 0x1f >> 3 &
              0x1ffffffc) * STField<int>(puVar3_mg8,0x8);
    }

    puVar3 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0((RecoveredRecord_006B4FA0_DAC3A217 *)puVar3_mg8));
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

    uVar3 = st::fn_006B4FE0(g_startSystem_0081176C->field_002C);

    puVar4_mg7 = st::fn_006B50C0(0x13e,0xe,(uint)g_startSystem_0081176C->field_002C[7],uVar3,
                              reinterpret_cast<undefined4 *>(puVar7),iVar9);
    this_00->field_1CBC = (ushort *)puVar4_mg7;
    uVar6 = STField<uint>(puVar4_mg7,0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)STField<ushort>(puVar4_mg7,0xE) * STField<int>(puVar4_mg7,0x4) + 0x1f >> 3 &
              0x1ffffffc) * STField<int>(puVar4_mg7,0x8);
    }

    puVar3 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0((RecoveredRecord_006B4FA0_DAC3A217 *)puVar4_mg7));
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

    local_EAX_410 = st::fn_006B4FE0(g_startSystem_0081176C->field_002C);

    puVar4_mg6 = st::fn_006B50C0(0x104,0x28,(uint)g_startSystem_0081176C->field_002C[7],local_EAX_410,
                              reinterpret_cast<undefined4 *>(puVar7),iVar9);
    this_00->field_1CC0 = (ushort *)puVar4_mg6;
    uVar6 = STField<uint>(puVar4_mg6,0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)STField<ushort>(puVar4_mg6,0xE) * STField<int>(puVar4_mg6,0x4) + 0x1f >> 3 &
              0x1ffffffc) * STField<int>(puVar4_mg6,0x8);
    }

    puVar3 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0((RecoveredRecord_006B4FA0_DAC3A217 *)puVar4_mg6));
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    /* ST_CALLSITE[005D7C4E]: CALL 0x00402d3d; direct=00402D3D SIDTy::PaintExplanation */
    st::fn_00402D3D(this_00);
    puVar7 = this_00->field_1CB8;
    puVar1 = &this_00->field_1CB4;

    st::fn_006B2330(g_ddxContext_008075A8,puVar1,0x2e,0x4023f6,*(uint *)(puVar7 + 2),
                 *(uint *)(puVar7 + 4),puVar7);

    st::fn_006B3640(reinterpret_cast<int *>(g_ddxContext_008075A8),*puVar1,0xffffffff,0xe1,0x1a9);
    st::fn_006B3AF0(reinterpret_cast<int *>(g_ddxContext_008075A8),*puVar1);

    st::fn_007158A0
              (reinterpret_cast<SpriteClassTy *>(&this_00->field_1B01),reinterpret_cast<int *>(g_ddxContext_008075A8),0x2d,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005D7CD7]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(this_00->field_1B01 + 4))(PTR_00806784,7,0,"SID_SLDUP",0xffffffff);
    this_00->field_1B1D = 0x22b;
    this_00->field_1B21 = 0x1be;
    this_00->field_1B09 = 0;
    if (this_00->field_1B05 != 0xffffffff) {
      st::fn_006B3AF0((int *)this_00->field_1B49,this_00->field_1B05);
    }

    st::fn_007158A0
              (reinterpret_cast<SpriteClassTy *>(&this_00->field_1B92),reinterpret_cast<int *>(g_ddxContext_008075A8),0x2d,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005D7D34]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(this_00->field_1B92 + 4))(PTR_00806784,7,0,"SID_SLDDN",0xffffffff);
    this_00->field_1BAE = 0x22b;
    this_00->field_1BB2 = 0x211;
    this_00->field_1B9A = 0;
    if (this_00->field_1B96 != 0xffffffff) {
      st::fn_006B3AF0((int *)this_00->field_1BDA,this_00->field_1B96);
    }

    st::fn_007158A0
              (reinterpret_cast<SpriteClassTy *>(&this_00->field_1C23),reinterpret_cast<int *>(g_ddxContext_008075A8),0x2d,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005D7D93]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(this_00->field_1C23 + 4))(PTR_00806784,7,0,"SID_SLDT",0xffffffff);
    this_00->field_1C3F = 0x22f;
    this_00->field_1C43 = 0x1d3;
    this_00->field_1C2B = 0;
    if (this_00->field_1C27 != 0xffffffff) {
      st::fn_006B3AF0((int *)this_00->field_1C6B,this_00->field_1C27);
    }
    pDVar4 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1CD0 = pDVar4;

    st::fn_006B6020(pDVar4,0,&CHAR_00h_008016a0);
    iVar9 = 1;
    puVar7 = this_00->field_1CB8 + 0x14;

    local_EAX_923 = st::fn_006B4FE0(this_00->field_1CB8);
    /* ST_CALLSITE[005D7E05]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
    puVar5_mg5 = st::fn_006B50C0(0x156,0xe,(uint)this_00->field_1CB8[7],local_EAX_923,
                              reinterpret_cast<undefined4 *>(puVar7),iVar9);
    this_00->field_1CC8 = (ushort *)puVar5_mg5;
    this_00->field_0065 = 3;
    st::fn_00404BF1(this_00,1,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x49,0,iVar3,st::mutable_c_string("%s"),
                             "SIDTy::InitSID");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x49);
  return;
}

// 005D7F80 SIDTy::DoneSID
#line 4 "decomp/ST.exe/functions/005D7F80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::DoneSID */

void __thiscall st::fn_005D7F80(SIDTy *this)

{
  SIDTy *pSVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (errorCode == 0) {
    /* ST_CALLSITE[005D7FB8]: CALL 0x0040458e; direct=0040458E MMObjTy::DoneMMObj */
    st::fn_0040458E(reinterpret_cast<MMObjTy *>(local_8));
    if (pSVar2->field_1CD0 != nullptr) {
      st::fn_006B5570(pSVar2->field_1CD0);
    }
    pSVar2->field_1CD0 = nullptr;
    if (pSVar2->field_1CCC != nullptr) {
      st::fn_006B5570(pSVar2->field_1CCC);
    }
    pSVar2->field_1CCC = nullptr;

    st::fn_00715AB0(reinterpret_cast<SpriteClassTy *>(&pSVar2->array_00BC[0xc].field_01E0));

    st::fn_00715AB0(reinterpret_cast<SpriteClassTy *>(&pSVar2->field_1B01));

    st::fn_00715AB0(reinterpret_cast<SpriteClassTy *>(&pSVar2->field_1B92));

    st::fn_00715AB0(reinterpret_cast<SpriteClassTy *>(&pSVar2->field_1C23));
    if (pSVar2->field_1CB4 != 0xffffffff) {
      st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),pSVar2->field_1CB4);
    }
    pSVar2->field_1CB4 = 0xffffffff;
    if (pSVar2->field_1CB8 != nullptr) {
      st::fn_006AB060(&pSVar2->field_1CB8);
    }
    if (pSVar2->field_1CC8 != nullptr) {
      st::fn_006AB060(&pSVar2->field_1CC8);
    }
    if (pSVar2->field_1CBC != nullptr) {
      st::fn_006AB060(&pSVar2->field_1CBC);
    }
    if (pSVar2->field_1CC0 != nullptr) {
      st::fn_006AB060(&pSVar2->field_1CC0);
    }
    if (pSVar2->field_004D != 0) {

      st::fn_006E3B50(reinterpret_cast<AppClassTy *>(&DAT_00807620),reinterpret_cast<undefined4 *>(&pSVar2->field_0x3d));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x62,0,errorCode,st::mutable_c_string("%s")
                             ,"SIDTy::DoneSID");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x62);
  return;
}

// 005D8160 SIDTy::PaintSID
#line 4 "decomp/ST.exe/functions/005D8160/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintSID */

void __thiscall st::fn_005D8160(SIDTy *this)

{
  InternalExceptionFrame *pIVar2;
  int errorCode;
  int iVar3;
  int local_44 [16];

  pIVar2 = g_currentExceptionFrame;
  errorCode = st::fn_0072D7F0(local_44,0);
  if (errorCode == 0) {
    g_currentExceptionFrame = pIVar2;
    return;
  }
  g_currentExceptionFrame = pIVar2;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x6b,0,errorCode,st::mutable_c_string("%s")
                             ,"SIDTy::PaintSID");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x6b);
  return;
}

// 005D81F0 SIDTy::NoneSID
#line 4 "decomp/ST.exe/functions/005D81F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::NoneSID
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneSID(SIDTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005D831F RET | 005D8387 RET | 005D83CB RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005D81F0(SIDTy *this)

{
  uint uVar1;
  SIDTy *this_00;
  DWORD DVar3;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  InternalExceptionFrame local_50;
  SIDTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
  /* ST_CALLSITE[005D8205]: CALL dword ptr [0x0085bedc] */
  DVar3 = st::external_000000DA();
  this->field_0061 = DVar3;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x98,0,iVar3,st::mutable_c_string("%s"),
                               "SIDTy::NoneSID");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x98);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((local_c->field_0065 == '\x01') && (st::machine_word_boundary_cast<uint>(local_c->field_1CC4) != st::machine_word_boundary_cast<uint>((HANDLE)0x0))) &&
     /* ST_CALLSITE[005D824D]: CALL dword ptr [0x0085bce0] */
     (DVar3 = st::external_0000006D(local_c->field_1CC4,0), DVar3 == 0)) {
    /* ST_CALLSITE[005D825E]: CALL dword ptr [0x0085bce4] */
    st::external_0000006E(this_00->field_1CC4);
    /* ST_CALLSITE[005D8266]: CALL 0x0040392c; direct=0040392C SIDTy::PrepFiles */
    st::fn_0040392C(this_00);
    this_00->field_002D = 5;
    piVar6 = reinterpret_cast<int *>(&this_00->field_1AF1);
    iVar5 = 2;
    do {
      if (*piVar6 != 0) {
        st::fn_006E6080(this_00,2,*piVar6,reinterpret_cast<undefined4 *>(&this_00->field_0x1d));
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (this_00->field_0065 == '\x03') {
    iVar5 = this_00->array_00BC[0xc].field_01E8;
    if (iVar5 < st::machine_word_boundary_cast<int>(this_00->array_00BC[0xc].field_01EC + -1)) {
      this_00->array_00BC[0xc].field_01E8 = iVar5 + 1;
      uVar1 = this_00->array_00BC[0xc].field_01E4;
      if (uVar1 != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)this_00->field_1AA8,uVar1,this_00->array_00BC[0xc].field_01E8,
                   this_00->field_1A7C,this_00->field_1A80);
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 1;
      /* ST_CALLSITE[005D8373]: CALL 0x004030f8; direct=004030F8 SIDTy::CreateCtrls */
      st::fn_004030F8(this_00);
    }
  }
  else if (this_00->field_0065 == '\x04') {
    iVar5 = this_00->array_00BC[0xc].field_01E8;
    if (0 < iVar5) {
      this_00->array_00BC[0xc].field_01E8 = iVar5 + -1;
      uVar1 = this_00->array_00BC[0xc].field_01E4;
      if (uVar1 != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)this_00->field_1AA8,uVar1,this_00->array_00BC[0xc].field_01E8,
                   this_00->field_1A7C,this_00->field_1A80);
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      this_00->field_0045 = 0x200;
      this_00->field_0049 = 0;
      this_00->field_004D = 0x693f;
      st::fn_00404DB8(reinterpret_cast<MTaskTy *>(this_00));
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005D8450 SIDTy::CreateCtrls
#line 4 "decomp/ST.exe/functions/005D8450/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::CreateCtrls */

void __thiscall st::fn_005D8450(SIDTy *this)

{
  char cVar1;
  SIDTy *this_00;
  int iVar3;
  HANDLE pvVar3;
  int iVar6;
  uint uVar4;
  uint uVar5;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ccFntTy **ppcVar12;
  ccFntTy *local_db0 [8];
  DArrayTy *local_d90;
  uint local_d64;
  uint local_d60;
  uint local_d5c;
  uint local_d24;
  uint local_d20;
  uint local_d1c;
  uint local_554;
  uint local_550;
  uint local_524 [10];
  uint local_4fc;
  uint local_4f8;
  uint local_4f4;
  uint local_4dc;
  uint local_4d8;
  uint local_4d4;
  uint local_4bc;
  uint local_4b8;
  uint local_4b4;
  uint local_49c;
  uint local_498;
  uint local_494;
  uint local_3f8;
  uint local_3f4;
  uint local_3f0;
  uint local_3ec;
  uint local_3e8;
  uint local_3e4;
  uint local_3e0;
  uint local_394;
  uint local_390;
  uint local_38c;
  uint local_2ec;
  uint local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_f8;
  uint local_f4;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_54;
  InternalExceptionFrame local_50;
  SIDTy *local_8;
  char *pcVar8_mg2;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;

  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x104,0,iVar3,st::mutable_c_string("%s"),
                               "SIDTy::CreateCtrls");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x104);
    return;
  }
  if (st::machine_word_boundary_cast<uint>(local_8->field_1CC4) != st::machine_word_boundary_cast<uint>((HANDLE)0x0)) {
    /* ST_CALLSITE[005D8496]: CALL dword ptr [0x0085bcac] */
    st::external_00000060(local_8->field_1CC4);
    this_00->field_1CC4 = (HANDLE)0x0;
  }
  uVar4 = 0xffffffff;
  pcVar8 = &CHAR_00h_00807680;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = &this_00->field_1CD4;
  memmove(pcVar10, pcVar8, uVar4); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar4 = 0xffffffff;
  pcVar8_mg2 = st_global_0079C19C;
  do {
    pcVar8 = pcVar8_mg2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar8_mg2 + 1;
    cVar1 = *pcVar8_mg2;
    pcVar8_mg2 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar7 = -1;
  pcVar10 = &this_00->field_1CD4;
  do {
    pcVar9 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar4;
  pcVar10 = pcVar9 + -1;
  memmove(pcVar10, pcVar8, uVar4); /* compiler REP MOVS byte copy */
  pcVar8 = &this_00->field_1CD4;
  st::fn_006B78C0(pcVar8,pcVar8);
  /* ST_CALLSITE[005D850F]: CALL dword ptr [0x0085bcfc] */
  pvVar3 = st::external_00000074(reinterpret_cast<LPCSTR>(pcVar8),0,2);
  this_00->field_1CC4 = pvVar3;
  if (st::machine_word_boundary_cast<uint>(pvVar3) == st::machine_word_boundary_cast<uint>((HANDLE)0xffffffff)) {
    this_00->field_1CC4 = (HANDLE)0x0;
  }
  memset(local_524, 0, 0x4d4); /* compiler bulk-zero initialization */
  iVar7 = 0;
  local_524[0] = 0;
  local_524[2] = 0xe4;
  local_524[3] = 0x1be;
  local_524[4] = 0x145;
  local_524[5] = 100;
  local_524[6] = 0;
  local_524[7] = 0;
  if (DAT_0080734c != '\0') {
    local_54 = 1;
  }
  local_3ec = this_00->field_1B1D;
  local_2ec = 1;
  local_3e8 = this_00->field_1B21;
  local_3e4 = this_00->field_1B25;
  local_3e0 = this_00->field_1B29;
  local_26c = this_00->field_1BAE;
  local_268 = this_00->field_1BB2;
  local_2e8 = 1;
  local_16c = 1;
  local_168 = 1;
  local_264 = this_00->field_1BB6;
  local_f4 = 1;
  local_e8 = this_00->field_1C3F;
  local_4fc = this_00->field_0008;
  local_260 = this_00->field_1BBA;
  local_e4 = this_00->field_1C43;
  local_e0 = this_00->field_1C47;
  local_3f4 = 0;
  local_274 = 0;
  local_ec = 0;
  local_4f8 = 2;
  local_4f4 = 0x8160;
  local_4d8 = 2;
  local_4d4 = 0x8161;
  local_4b8 = 2;
  local_4b4 = 0x8162;
  local_498 = 2;
  local_494 = 0x8163;
  local_3f8 = 2;
  local_3f0 = 2;
  local_2e4 = 500;
  local_2e0 = 0x32;
  local_390 = 2;
  local_38c = 0x8164;
  local_278 = 2;
  local_270 = 2;
  local_164 = 500;
  local_160 = 0x32;
  local_210 = 2;
  local_20c = 0x8165;
  local_f8 = 3;
  local_dc = 0x3a;
  local_d8 = 8;
  local_a0 = 2;
  local_9c = 0x8166;
  local_4dc = local_4fc;
  local_4bc = local_4fc;
  local_49c = local_4fc;
  local_394 = local_4fc;
  local_214 = local_4fc;
  local_a4 = local_4fc;
  /* ST_CALLSITE[005D874C]: CALL dword ptr [EAX + 0x8] */
  (*this_00->field_000C->vtable->CreateObject)
            (reinterpret_cast<SystemClassTy *>(this_00->field_000C),7,&this_00->field_1AF1,nullptr,st::machine_word_boundary_cast<undefined4>(local_524),0);
  ppcVar12 = local_db0;
  for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppcVar12 = nullptr;
    ppcVar12 = ppcVar12 + 1;
  }
  local_db0[0] = nullptr;
  local_db0[1] = (ccFntTy *)0x9;
  local_db0[2] = g_startSystem_0081176C->field_0034;
  local_d90 = this_00->field_1CD0;
  local_d64 = this_00->field_0008;
  local_db0[3] = (ccFntTy *)0xe4;
  local_db0[4] = (ccFntTy *)0x1aa;
  local_db0[5] = (ccFntTy *)0x156;
  local_db0[6] = (ccFntTy *)0x10;
  local_550 = 1;
  local_554 = 1;
  local_db0[7] = (ccFntTy *)0x104;
  local_d60 = 2;
  local_d5c = 0x697f;
  local_d20 = 2;
  local_d1c = 0x68ff;
  local_d24 = local_d64;
  /* ST_CALLSITE[005D8812]: CALL dword ptr [EAX + 0x8] */
  (*this_00->field_000C->vtable->CreateObject)
            (reinterpret_cast<SystemClassTy *>(this_00->field_000C),6,&this_00->field_1AF5,nullptr,st::machine_word_boundary_cast<undefined4>(local_db0),1);
  /* ST_CALLSITE[005D8831]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar4 = st::fn_0040361B(reinterpret_cast<MMObjTy *>(this_00),1,1,0x1e8,0x228,0x55,0x12,0x6900,0x6980);
  this_00->field_1AF9[0] = uVar4;
  /* ST_CALLSITE[005D8858]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar4 = st::fn_0040361B(reinterpret_cast<MMObjTy *>(this_00),1,1,0x1e8,0x23b,0x55,0x12,0x6901,0x6981);
  this_00->field_1AF9[1] = uVar4;
  /* ST_CALLSITE[005D8865]: CALL 0x0040392c; direct=0040392C SIDTy::PrepFiles */
  st::fn_0040392C(this_00);

  st::fn_006B3430(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_1CB4);
  if (this_00->field_1B05 != 0xffffffff) {

    st::fn_006B34D0
              ((uint *)this_00->field_1B49,this_00->field_1B05,0xfffffffe,this_00->field_1B1D,
               this_00->field_1B21);
  }
  if (this_00->field_1B96 != 0xffffffff) {

    st::fn_006B34D0
              ((uint *)this_00->field_1BDA,this_00->field_1B96,0xfffffffe,this_00->field_1BAE,
               this_00->field_1BB2);
  }
  if (this_00->field_1C27 != 0xffffffff) {

    st::fn_006B34D0
              ((uint *)this_00->field_1C6B,this_00->field_1C27,0xfffffffe,this_00->field_1C3F,
               this_00->field_1C43);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005D8A90 SIDTy::DeleteCtrls
#line 4 "decomp/ST.exe/functions/005D8A90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::DeleteCtrls */

void __thiscall st::fn_005D8A90(SIDTy *this)

{
  SIDTy *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    iVar5 = 4;
    puVar6 = &local_8->field_1AF1;
    do {
      if (*puVar6 != 0) {
        st::fn_006E56B0(pSVar2->field_000C,*puVar6);
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    st::fn_006B3AF0(reinterpret_cast<int *>(g_ddxContext_008075A8),pSVar2->field_1CB4);
    if (pSVar2->field_1B05 != 0xffffffff) {
      st::fn_006B3AF0((int *)pSVar2->field_1B49,pSVar2->field_1B05);
    }
    if (pSVar2->field_1B96 != 0xffffffff) {
      st::fn_006B3AF0((int *)pSVar2->field_1BDA,pSVar2->field_1B96);
    }
    if (pSVar2->field_1C27 != 0xffffffff) {
      st::fn_006B3AF0((int *)pSVar2->field_1C6B,pSVar2->field_1C27);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x110,0,iVar3,st::mutable_c_string("%s"),
                             "SIDTy::DeleteCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x110);
  return;
}

// 005D8BF0 SIDTy::PrepFiles
#line 4 "decomp/ST.exe/functions/005D8BF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PrepFiles

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005D8BF0(SIDTy *this)

{
  char cVar1;
  byte bVar2;
  int local_EAX_42;
  DArrayTy *pDVar5;
  HANDLE hFindFile;
  int iVar4;
  cMf32 *this_00;
  int local_EAX_626;
  BOOL BVar4;
  dword dVar5;
  char *pcVar6;
  int local_EAX_880;
  int iVar7;
  int iVar9;
  uint uVar8;
  int iVar10;
  uint uVar11;
  DArrayTy *pDVar12;
  int iVar13;
  char *pcVar14;
  SIDTy *this_01;
  CHAR *pCVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  uint uVar20;
  _WIN32_FIND_DATAA local_21c;
  byte local_dc [64];
  InternalExceptionFrame local_9c;
  InternalExceptionFrame local_58;
  HANDLE local_14;
  int local_10;
  SIDTy *local_c;
  dword local_8;

  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;

  local_EAX_42 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_01 = local_c;
  if (local_EAX_42 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x167,0,local_EAX_42,
                               st::mutable_c_string("%s"),"SIDTy::PrepFiles");
    if (iVar9 == 0) {
      st::fn_006A5E40(local_EAX_42,0,st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x167);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_1CCC != nullptr) {
    st::fn_006B5570(local_c->field_1CCC);
    this_01->field_1CCC = nullptr;
  }
  pDVar5 = st::fn_006B54F0(nullptr,10,10);
  this_01->field_1CCC = pDVar5;
  this_01->field_002D = 0x20;
  this_01->field_0031 = 0;
  st::fn_006E6080(this_01,2,this_01->field_1AF1,reinterpret_cast<undefined4 *>(&this_01->field_0x1d));
  this_01->field_002D = 0x29;
  this_01->field_0031 = 0x19;
  st::fn_006E6080(this_01,2,this_01->field_1AF5,reinterpret_cast<undefined4 *>(&this_01->field_0x1d));
  st::fn_006B4170(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_01->field_1CB8),0,3,0x15,0x142,0x62,0xff);

  st::fn_006B35D0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_01->field_1CB4);
  /* ST_CALLSITE[005D8CDA]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(&this_01->field_1CD4),st::mutable_c_string("%s%s"),&CHAR_00h_00807680,st_global_0079C19C);
  uVar8 = 0xffffffff;
  pcVar14 = &st_global_007CC8BC;
  do {
    pcVar6 = pcVar14;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar6 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar6;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar10 = -1;
  pcVar14 = &this_01->field_1CD4;
  do {
    pcVar16 = pcVar14;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar16 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar16;
  } while (cVar1 != '\0');
  pcVar14 = pcVar6 + -uVar8;
  pcVar6 = pcVar16 + -1;
  memmove(pcVar6, pcVar14, uVar8); /* compiler REP MOVS byte copy */
  uVar11 = 0;
  /* ST_CALLSITE[005D8D1F]: CALL dword ptr [0x0085bcec] */
  hFindFile = st::external_00000070(reinterpret_cast<LPCSTR>(&this_01->field_1CD4),reinterpret_cast<LPWIN32_FIND_DATAA>(&local_21c));
  local_14 = hFindFile;
  if (st::machine_word_boundary_cast<uint>(hFindFile) != st::machine_word_boundary_cast<uint>((HANDLE)0xffffffff)) {
    do {
      if (((byte)local_21c.dwFileAttributes & 0x10) != 0) {
        pbVar17 = &DAT_007cc8b8;
        pCVar15 = local_21c.cFileName;
        do {
          bVar2 = *pCVar15;
          bVar19 = bVar2 < *pbVar17;
          if (bVar2 != *pbVar17) {
LAB_005d8d7a:
            iVar10 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_005d8d7f;
          }
          if (bVar2 == 0) break;
          bVar2 = pCVar15[1];
          bVar19 = bVar2 < pbVar17[1];
          if (bVar2 != pbVar17[1]) goto LAB_005d8d7a;
          pCVar15 = pCVar15 + 2;
          pbVar17 = pbVar17 + 2;
        } while (bVar2 != 0);
        iVar10 = 0;
LAB_005d8d7f:
        if (iVar10 != 0) {
          pbVar17 = &DAT_007cc8b4;
          pCVar15 = local_21c.cFileName;
          do {
            bVar2 = *pCVar15;
            bVar19 = bVar2 < *pbVar17;
            if (bVar2 != *pbVar17) {
LAB_005d8dba:
              iVar10 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              goto LAB_005d8dbf;
            }
            if (bVar2 == 0) break;
            bVar2 = pCVar15[1];
            bVar19 = bVar2 < pbVar17[1];
            if (bVar2 != pbVar17[1]) goto LAB_005d8dba;
            pCVar15 = pCVar15 + 2;
            pbVar17 = pbVar17 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_005d8dbf:
          if (iVar10 != 0) {
            uVar8 = 0xffffffff;
            pCVar15 = local_21c.cFileName;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar1 = *pCVar15;
              pCVar15 = pCVar15 + 1;
            } while (cVar1 != '\0');
            if (~uVar8 - 1 < 0x40) {
              /* ST_CALLSITE[005D8E05]: CALL dword ptr [0x0085bde8] */
              st::external_00000080(reinterpret_cast<LPSTR>(&this_01->field_1CD4),st::mutable_c_string("%s%s%s\\%s"),&CHAR_00h_00807680,
                        st_global_0079C19C,local_21c.cFileName,PTR_s_PL_LOG_0079c1a0);
              local_9c.previous = g_currentExceptionFrame;
              g_currentExceptionFrame = &local_9c;

              iVar4 = st::fn_0072D7F0(local_9c.jumpBuffer,0);
              this_01 = local_c;
              if (iVar4 == 0) {
                /* ST_CALLSITE[005D8E49]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
                this_00 = st::pointer_boundary_cast<cMf32 *>(st::fn_006F0EC0
                                    (0x345,reinterpret_cast<byte *>(&local_c->field_1CD4),0,0,0));
                if (this_00 != nullptr) {

                  local_EAX_626 = st::fn_006F21C0(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079c1a4);
                  if (local_EAX_626 == 0) {

                    st::fn_006B5AA0(this_01->field_1CCC,reinterpret_cast<char *>(local_21c.cFileName));
                  }
                  st::fn_006F1170(this_00);
                }
                g_currentExceptionFrame = local_9c.previous;
              }
              else {
                g_currentExceptionFrame = local_9c.previous;
              }
            }
          }
        }
      }
      hFindFile = local_14;
      /* ST_CALLSITE[005D8EAF]: CALL dword ptr [0x0085bcf0] */
      BVar4 = st::external_00000071(local_14,reinterpret_cast<LPWIN32_FIND_DATAA>(&local_21c));
    } while (BVar4 != 0);
  }
  if (st::machine_word_boundary_cast<uint>(hFindFile) != st::machine_word_boundary_cast<uint>((HANDLE)0xffffffff)) {
    /* ST_CALLSITE[005D8EC3]: CALL dword ptr [0x0085bcf4] */
    st::external_00000072(hFindFile);
  }
  uVar8 = 0xffffffff;
  pcVar14 = &CHAR_00h_00807ddd;
  do {
    pcVar6 = pcVar14;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar6 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar6;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pbVar17 = reinterpret_cast<byte *>((pcVar6 + -uVar8));
  pbVar18 = local_dc;
  for (uVar11 = uVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pbVar18 = *(undefined4 *)pbVar17;
    pbVar17 = pbVar17 + 4;
    pbVar18 = pbVar18 + 4;
  }
  uVar20 = this_01->field_1AF1;
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pbVar18 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    pbVar18 = pbVar18 + 1;
  }
  this_01->field_002D = 0x28;
  this_01->field_0031 = this_01->field_1CCC->elementSize;
  st::fn_006E6080(this_01,2,uVar20,reinterpret_cast<undefined4 *>(&this_01->field_0x1d));
  pDVar12 = this_01->field_1CCC;
  dVar5 = pDVar12->elementSize;
  if ((int)dVar5 < 1) {
    this_01->field_002D = 0x22;
    this_01->field_0031 = 0;
    st::fn_006E6080(this_01,2,this_01->field_1AF1,reinterpret_cast<undefined4 *>(&this_01->field_0x1d));
    uVar20 = this_01->field_1AF1;
    this_01->field_002D = 5;
  }
  else {
    if (1 < (int)dVar5) {
      do {
        local_8 = 0;
        uVar8 = 0;
        if (0 < (int)(dVar5 - 1)) {
          do {
            uVar11 = uVar8 + 1;
            if ((int)uVar11 < (int)dVar5) {
              pcVar14 = *(char **)(pDVar12->growCapacity + 4 + uVar8 * 4);
            }
            else {
              pcVar14 = nullptr;
            }
            if ((int)uVar8 < (int)dVar5) {
              pcVar6 = *(char **)(pDVar12->growCapacity + uVar8 * 4);
            }
            else {
              pcVar6 = nullptr;
            }

            local_EAX_880 = st::fn_0072E620(pcVar6,pcVar14);
            if (0 < local_EAX_880) {

              st::fn_006B8200(reinterpret_cast<AnonShape_006B8200_800652FF *>(this_01->field_1CCC),uVar8,uVar11);
              local_8 = 1;
            }
            pDVar12 = this_01->field_1CCC;
            dVar5 = pDVar12->elementSize;
            uVar8 = uVar11;
          } while ((int)uVar11 < (int)(dVar5 - 1));
        }
      } while (local_8 != 0);
    }
    this_01->field_002D = 0x20;
    this_01->field_0031 = 1;
    st::fn_006E6080(this_01,2,this_01->field_1AF1,reinterpret_cast<undefined4 *>(&this_01->field_0x1d));
    iVar13 = 0;
    local_8 = this_01->field_1CCC->elementSize;
    iVar10 = local_10;
    if (0 < (int)local_8) {
      if ((int)local_8 < 1) {
        pbVar17 = nullptr;
        goto LAB_005d8fe2;
      }
      do {
        pbVar17 = *(byte **)(this_01->field_1CCC->growCapacity + iVar13 * 4);
LAB_005d8fe2:
        pbVar18 = local_dc;
        do {
          bVar2 = *pbVar17;
          bVar19 = bVar2 < *pbVar18;
          if (bVar2 != *pbVar18) {
LAB_005d900c:
            iVar7 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_005d9011;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar17[1];
          bVar19 = bVar2 < pbVar18[1];
          if (bVar2 != pbVar18[1]) goto LAB_005d900c;
          pbVar17 = pbVar17 + 2;
          pbVar18 = pbVar18 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_005d9011:
        iVar10 = iVar13;
      } while ((iVar7 != 0) && (iVar13 = iVar13 + 1, iVar10 = local_10, iVar13 < (int)local_8));
    }
    local_10 = iVar10;
    uVar20 = this_01->field_1AF1;
    this_01->field_002D = 0x22;
    this_01->field_0031 = local_10;
  }
  st::fn_006E6080(this_01,2,uVar20,reinterpret_cast<undefined4 *>(&this_01->field_0x1d));
  this_01->field_002D = 0x29;
  this_01->field_0031 = 9;
  st::fn_006E6080(this_01,2,this_01->field_1AF5,reinterpret_cast<undefined4 *>(&this_01->field_0x1d));

  st::fn_006B35D0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_01->field_1CB4);
  g_currentExceptionFrame = local_58.previous;
  return;
}

// 005D9250 SIDTy::PaintExplanation
#line 4 "decomp/ST.exe/functions/005D9250/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintExplanation

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005D9250(SIDTy *this)

{
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar1;
  SIDTy *pSVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  char *resourceString;
  uint uVar7;
  ccFntTy *this_00;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    st::fn_006B4170(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(local_8->field_1CB8),0,0,0x7d,
                 *(int *)(local_8->field_1CC0 + 2),*(int *)(local_8->field_1CC0 + 4),0xff);
    pRVar1 = reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(pSVar3->field_1CC0);
    uVar8 = *(uint *)&pRVar1[1].field_0x4;
    if (uVar8 == 0) {
      uVar8 = ((uint)pRVar1->field_000E * *(int *)&pRVar1->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar1->field_0x8;
    }

    puVar5 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar1));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }

    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)pSVar3->field_1CC0,0,0,0,0,0);
    if (pSVar3->array_00BC[0xc].field_01DF == '\0') {
      iVar12 = -1;
      iVar10 = -1;
      uVar8 = 0;
      iVar9 = -1;
      iVar4 = -2;
      /* ST_CALLSITE[005D936D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      resourceString = st::fn_006B0140(0x2521,g_hINSTANCE_00807618);
      this_00 = g_startSystem_0081176C->field_0034;
    }
    else {
      pcVar11 = &CHAR_00h_00807ddd;
      resourceString = &pSVar3->field_1CD4;
      pcVar6 = st::fn_006B0140(0x2520,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005D9339]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(reinterpret_cast<LPSTR>(resourceString),st::mutable_c_string("&0%s\n&5%s&0?"),pcVar6,pcVar11);
      this_00 = g_startSystem_0081176C->field_0034;
      iVar12 = -1;
      iVar10 = -1;
      uVar8 = 0;
      iVar9 = -1;
      iVar4 = -2;
    }

    st::fn_00711B70(this_00,resourceString,iVar4,iVar9,uVar8,iVar10,iVar12);
    st::fn_006B5440(pSVar3->field_1CB8,0,0,0x7d,reinterpret_cast<tagBITMAPINFO *>(pSVar3->field_1CC0),0,0xff);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x17b,0,iVar4,st::mutable_c_string("%s"),
                             "SIDTy::PaintExplanation");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x17b);
  return;
}

// 005D9470 SIDTy::GetMessage
#line 4 "decomp/ST.exe/functions/005D9470/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005D9470; family_names=SIDTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:14,18:7,1c:0} */

int __thiscall st::fn_005D9470(SIDTy *this,STMessage *message)

{
  byte *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  STMessageId SVar5;
  SIDTyVTable *pSVar6;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar7;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar8;
  int *piVar9;
  dword dVar10;
  SIDTy *this_00;
  DWORD DVar12;
  int local_EAX_48;
  uint uVar13;
  uint *puVar14;
  char *pcVar12_mg2;
  int iVar11;
  int iVar19;
  uint uVar15;
  char *pcVar17;
  UINT resourceId;
  uint *puVar18;
  byte *pbVar19;
  int iVar20;
  char *pcVar21;
  char *pcVar22;
  bool bVar23;
  DArrayTy *pDVar24;
  RecoveredRecord_MMMObjTy_005B6560 *pRVar25;
  int iVar26;
  InternalExceptionFrame local_64;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  SIDTy *local_10;
  dword local_c;
  char *local_8;

  local_10 = this;

  DVar12 = st::fn_006E51B0(this->field_0010);
  this->field_0061 = DVar12;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;

  local_EAX_48 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_48 != 0) {
    g_currentExceptionFrame = local_64.previous;

    iVar19 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x212,0,local_EAX_48,
                                st::mutable_c_string("%s"),"SIDTy::GetMessage");
    if (iVar19 == 0) {
      st::fn_006A5E40(local_EAX_48,0,st::mutable_c_string("E:\\__titans\\Start\\sid_obj.cpp"),0x212);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00402563(local_10,message);
  SVar5 = message->id;
  if (SVar5 < MESS_SHARED_6980) {
    if (SVar5 != MESS_SHARED_697F) {
      if (SVar5 < 6) {
        if (SVar5 == MESS_SHARED_0005) {
          /* ST_CALLSITE[005D9516]: CALL 0x004029cd; direct=004029CD SIDTy::PaintSID */
          st::fn_004029CD(this_00);
        }
        else if (SVar5 == MESS_ID_NONE) {
          /* ST_CALLSITE[005D950A]: CALL 0x00403d64; direct=00403D64 SIDTy::NoneSID */
          st::fn_00403D64(this_00);
        }
        else if (SVar5 == MESS_ID_CREATE) {
          /* ST_CALLSITE[005D94FE]: CALL 0x004029af; direct=004029AF SIDTy::InitSID */
          st::fn_004029AF(this_00);
        }
        else if (SVar5 == MESS_SHARED_0003) {
          /* ST_CALLSITE[005D94F2]: CALL 0x00405b78; direct=00405B78 SIDTy::DoneSID */
          st::fn_00405B78(this_00);
        }
      }
      else if (SVar5 == MESS_MMSGTY_68FF) {
        pSVar6 = this_00->vtable;
        this_00->array_00BC[0xc].field_01DF = 0;
        this_00->field_002D = message->id + 1;
        /* ST_CALLSITE[005D9847]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/SIDTy;pointer:/SubmarineTitans/Recovered/STMessage */
        (*pSVar6->GetMessage)(this_00,reinterpret_cast<STMessage *>(&this_00->field_0x1d));
      }
      else if (SVar5 == MESS_SHARED_6900) {
        st::fn_00404BF1(this_00,10,'\x01',-1);
        this_00->field_002D = 0x32;
        st::fn_006E6080(this_00,2,this_00->field_1AF5,reinterpret_cast<undefined4 *>(&this_00->field_0x1d));
        if ((int)this_00->field_1CD0->elementSize < 1) {
          pcVar22 = nullptr;
        }
        else {
          pcVar22 = *(char **)this_00->field_1CD0->growCapacity;
        }
        uVar15 = 0xffffffff;
        do {
          pcVar17 = pcVar22;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar17 = pcVar22 + 1;
          cVar2 = *pcVar22;
          pcVar22 = pcVar17;
        } while (cVar2 != '\0');
        uVar15 = ~uVar15;
        pcVar22 = &this_00->field_1CD4;
        pcVar17 = pcVar17 + -uVar15;
        pcVar21 = pcVar22;
        memmove(pcVar21, pcVar17, uVar15); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        st::fn_006B7780(pcVar22,pcVar22);
        if (this_00->field_1CD4 != '\0') {
          if (this_00->array_00BC[0xc].field_01DF == '\0') {
            local_8 = (char *)0xffffffff;
            if ((int)this_00->field_1CD0->elementSize < 1) {
              pcVar22 = nullptr;
            }
            else {
              pcVar22 = *(char **)this_00->field_1CD0->growCapacity;
            }
            st::fn_0072E340(&CHAR_00h_00807ddd,pcVar22,0x3f);
            pcVar17 = nullptr;
            local_c = this_00->field_1CCC->elementSize;
            pcVar22 = local_8;
            if (0 < (int)local_c) {
              if ((int)local_c < 1) {
                pbVar19 = nullptr;
                goto LAB_005d979c;
              }
              do {
                pbVar19 = *(byte **)(this_00->field_1CCC->growCapacity + (int)pcVar17 * 4);
LAB_005d979c:
                pcVar22 = &CHAR_00h_00807ddd;
                do {
                  bVar3 = *pbVar19;
                  bVar23 = bVar3 < (byte)*pcVar22;
                  if (bVar3 != *pcVar22) {
LAB_005d97c5:
                    iVar20 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                    goto LAB_005d97ca;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar19[1];
                  bVar23 = bVar3 < (byte)pcVar22[1];
                  if (bVar3 != pcVar22[1]) goto LAB_005d97c5;
                  pbVar19 = pbVar19 + 2;
                  pcVar22 = pcVar22 + 2;
                } while (bVar3 != 0);
                iVar20 = 0;
LAB_005d97ca:
                pcVar22 = pcVar17;
              } while ((iVar20 != 0) &&
                      (pcVar17 = pcVar17 + 1, pcVar22 = local_8, (int)pcVar17 < (int)local_c));
            }
            local_8 = pcVar22;
            DAT_00807340 = 1;
            if ((int)local_8 < 0) {

              st::fn_00403D1E(reinterpret_cast<AnonShape_005738D0_F693E267 *>(&g_sound));
            }
            else {
              st::fn_004048B3(reinterpret_cast<RecoveredRecordView_00572510_EB02076B *>(&g_sound));
            }
            if (DAT_00808446 != '\0') {
              /* ST_CALLSITE[005D9809]: CALL 0x00403a8f; direct=00403A8F SIDTy::DeleteCtrls */
              st::fn_00403A8F(this_00);
              this_00->field_0065 = 4;
              st::fn_00404BF1(this_00,2,'\x01',-1);
              st::fn_006C18B0((uint)DAT_00807363);
            }
          }
          else {
            if ((int)this_00->field_1CD0->elementSize < 1) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined4 *)this_00->field_1CD0->growCapacity;
            }
            /* ST_CALLSITE[005D96E4]: CALL dword ptr [0x0085bde8] */
            st::external_00000080(reinterpret_cast<LPSTR>(&this_00->field_1CD4),st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,
                      st_global_0079C19C,uVar13);

            st::fn_00725910(&this_00->field_1CD4,&st_global_007CC8BC,0,st::function_address_boundary_cast<undefined *>(st::fn_00725C20),0,0);
            /* ST_CALLSITE[005D9705]: CALL 0x0040392c; direct=0040392C SIDTy::PrepFiles */
            st::fn_0040392C(this_00);
            this_00->array_00BC[0xc].field_01DF = 0;
            /* ST_CALLSITE[005D9713]: CALL 0x00402d3d; direct=00402D3D SIDTy::PaintExplanation */
            st::fn_00402D3D(this_00);
            this_00->field_002D = 5;
            puVar18 = this_00->field_1AF9;
            iVar20 = 2;
            do {
              if (*puVar18 != 0) {
                st::fn_006E6080(this_00,2,*puVar18,reinterpret_cast<undefined4 *>(&this_00->field_0x1d));
              }
              puVar18 = puVar18 + 1;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
        }
      }
      else if (SVar5 == MESS_FSGSTY_6901) {
        st::fn_00404BF1(this_00,10,'\x01',-1);
        if (this_00->array_00BC[0xc].field_01DF == '\0') {
          if ((CHAR_00h_00807ddd != '\0') && (this_00->field_1CCC->elementSize != 0)) {
            uVar13 = this_00->field_1AF1;
            puVar1 = &this_00->field_0x1d;
            this_00->array_00BC[0xc].field_01DF = 1;
            this_00->field_002D = 0x20;
            this_00->field_0031 = 0;
            st::fn_006E6080(this_00,2,uVar13,reinterpret_cast<undefined4 *>(puVar1));
            this_00->field_002D = 0x29;
            this_00->field_0031 = 0x19;
            st::fn_006E6080(this_00,2,this_00->field_1AF5,reinterpret_cast<undefined4 *>(puVar1));
            this_00->field_002D = 5;
            puVar18 = this_00->field_1AF9;
            local_8 = (char *)0x2;
            do {
              if (*puVar18 != 0) {
                st::fn_006E6080(this_00,2,*puVar18,reinterpret_cast<undefined4 *>(puVar1));
              }
              puVar18 = puVar18 + 1;
              local_8 = local_8 + -1;
            } while (local_8 != nullptr);
            /* ST_CALLSITE[005D9627]: CALL 0x00402d3d; direct=00402D3D SIDTy::PaintExplanation */
            st::fn_00402D3D(this_00);
          }
        }
        else {
          this_00->array_00BC[0xc].field_01DF = 0;
          /* ST_CALLSITE[005D9559]: CALL 0x00402d3d; direct=00402D3D SIDTy::PaintExplanation */
          st::fn_00402D3D(this_00);
          this_00->field_002D = 5;
          puVar18 = this_00->field_1AF9;
          iVar20 = 2;
          do {
            if (*puVar18 != 0) {
              st::fn_006E6080(this_00,2,*puVar18,reinterpret_cast<undefined4 *>(&this_00->field_0x1d));
            }
            puVar18 = puVar18 + 1;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          /* ST_CALLSITE[005D9588]: CALL 0x0040392c; direct=0040392C SIDTy::PrepFiles */
          st::fn_0040392C(this_00);
        }
      }
      goto cf_common_exit_005D9CCB;
    }
    pRVar7 = reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(this_00->field_1CC8);
    local_8 = *(char **)&pRVar7[1].field_0x4;
    if (local_8 == nullptr) {
      local_8 = (char *)(((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 &
                         0x1ffffffc) * *(int *)&pRVar7->field_0x8);
    }

    puVar14 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar7));
    for (uVar15 = (uint)local_8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
    for (uVar15 = (uint)local_8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined1 *)puVar14 = 0xff;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }

    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_1CC8,0,0,0,0,0);

    st::fn_007119C0(g_startSystem_0081176C->field_0034,*(char **)(message->arg0).ptr,0,-1,2);
    uVar4 = (message->arg1).words.low;
    if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
      uVar15 = (uint)(message->arg1).words.high;
      st::fn_006B5B10(reinterpret_cast<AnonShape_006E6FB0_BC494FEA *>(this_00->field_1CC8),0,(uint)uVar4,uVar15,
                   (uint)uVar4,uVar15 + 0xe,7,0xd);
    }
    pRVar8 = reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_1CC8);

    st::fn_006B55F0
              (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_1CB8),0,4,1,pRVar8,0,0,0,
               *(int *)&pRVar8->field_0x4,*(int *)&pRVar8->field_0x8);
  }
  else {
    if (MESS_SIDTY_8163 < SVar5) {
      if (SVar5 == MESS_OPTPANELTY_8164) {
        pRVar25 = reinterpret_cast<RecoveredRecord_MMMObjTy_005B6560 *>(&this_00->field_1B01);
      }
      else {
        if (SVar5 != MESS_OPTPANELTY_8165) {
          if (SVar5 == MESS_SHARED_8166) {
            uVar15 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
            this_00->field_1C43 = uVar15;
            if (this_00->field_1C27 != 0xffffffff) {

              st::fn_006B3730
                        ((uint *)this_00->field_1C6B,this_00->field_1C27,this_00->field_1C2B,
                         this_00->field_1C3F,uVar15);
            }
          }
          goto cf_common_exit_005D9CCB;
        }
        pRVar25 = reinterpret_cast<RecoveredRecord_MMMObjTy_005B6560 *>(&this_00->field_1B92);
      }
      /* ST_CALLSITE[005D9CC6]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
      st::fn_004031D4
                (reinterpret_cast<MMMObjTy *>(this_00),pRVar25,reinterpret_cast<RecoveredRecord_005B6560_90DC7408 *>(message),0);
      goto cf_common_exit_005D9CCB;
    }
    if (SVar5 == MESS_SIDTY_8163) {
      dVar10 = this_00->field_1CCC->elementSize;
      if (dVar10 == 0) {
        pDVar24 = this_00->field_1CD0;
        pcVar22 = &CHAR_00h_00807ddd;
      }
      else {
        if ((message->arg0).i32 < (int)dVar10) {
          pcVar22 = *(char **)(this_00->field_1CCC->growCapacity + (message->arg0).i32 * 4);
        }
        else {
          pcVar22 = nullptr;
        }
        st::fn_0072E340(&CHAR_00h_00807ddd,pcVar22,0x3f);
        if ((message->arg0).i32 < (int)this_00->field_1CCC->elementSize) {
          pDVar24 = this_00->field_1CD0;
          pcVar22 = *(char **)(this_00->field_1CCC->growCapacity + (message->arg0).i32 * 4);
        }
        else {
          pDVar24 = this_00->field_1CD0;
          pcVar22 = nullptr;
        }
      }

      st::fn_006B6020(pDVar24,0,pcVar22);
      this_00->field_002D = 0x33;
      this_00->field_0031 = st::machine_word_boundary_cast<undefined4>(this_00->field_1CD0);
      st::fn_006E6080(this_00,2,this_00->field_1AF5,reinterpret_cast<undefined4 *>(&this_00->field_0x1d));
      goto cf_common_exit_005D9CCB;
    }
    if (MESS_SHARED_8160 < SVar5) {
      if (SVar5 == MESS_SIDTY_8161) {
        uVar15 = (uint)(message->arg0).words.low;
        if ((int)uVar15 < (int)this_00->field_1CCC->elementSize) {
          local_8 = *(char **)(this_00->field_1CCC->growCapacity + uVar15 * 4);
        }
        else {
          local_8 = nullptr;
        }
        st::fn_006B4170(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_1CB8),0,
                     (message->arg1).words.low + 3,(message->arg1).words.high + 0x15,0x142,0xe,0xff);
        pRVar7 = reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(this_00->field_1CBC);
        local_c = *(dword *)&pRVar7[1].field_0x4;
        if (local_c == 0) {
          local_c = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 & 0x1ffffffc)
                    * *(int *)&pRVar7->field_0x8;
        }

        puVar14 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar7));
        for (uVar15 = local_c >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar14 = 0xffffffff;
          puVar14 = puVar14 + 1;
        }
        for (uVar15 = local_c & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar14 = 0xff;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        if (((message->arg0).words.high == 1) && (local_8 != nullptr)) {
          st::fn_006B5EE0(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_1CB8),0,
                       (message->arg1).words.low + 3,(message->arg1).words.high + 0x15,0x142,0xe,
                       0x87,0xd);
        }

        st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_1CBC,0,0,0,0,0);

        st::fn_007119C0(g_startSystem_0081176C->field_0034,local_8,0,-1,2);
        st::fn_006B5440(this_00->field_1CB8,0,(message->arg1).words.low + 6,
                     (message->arg1).words.high + 0x15,reinterpret_cast<tagBITMAPINFO *>(this_00->field_1CBC),0,0xff);

        st::fn_006B35D0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_1CB4);
      }
      goto cf_common_exit_005D9CCB;
    }
    if (SVar5 == MESS_SHARED_8160) {
      (message->arg1).u32 = 0xe;
      goto cf_common_exit_005D9CCB;
    }
    if ((SVar5 < MESS_SHARED_6980) || (MESS_SIDTY_6981 < SVar5)) goto cf_common_exit_005D9CCB;
    piVar9 = static_cast<int *>((message->arg1).ptr);
    local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)((char)message->id + 0x81));
    local_20 = *piVar9 + -0xe1;
    local_18 = piVar9[2];
    local_1c = piVar9[1] - 0x1a9;
    local_14 = piVar9[3];
    st::fn_006B4170(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_1CB8),0,local_20,local_1c,local_18,
                 local_14,0xff);
    /* ST_CALLSITE[005D99C1]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    st::fn_00404C5F(reinterpret_cast<MMObjTy *>(this_00),(int)this_00->field_1CB8,&local_20,2,0x87,0xffffffff);
    if ((local_c & 0xff) == 1) {
      resourceId = (this_00->array_00BC[0xc].field_01DF != '\0') + 0x24b8;
    }
    else {
      resourceId = (-(uint)(this_00->array_00BC[0xc].field_01DF != '\0') & 0xfffffffd) + 0x24bd;
    }

    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_1CB8,0,local_20,local_1c
                     ,local_18,local_14);
    uVar15 = ((message->arg0).words.low != 1) + 2;
    iVar26 = -1;
    iVar20 = -1;
    /* ST_CALLSITE[005D9A3C]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar12_mg2 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);

    st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar12_mg2,iVar20,iVar26,uVar15);
  }

  st::fn_006B35D0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_1CB4);
cf_common_exit_005D9CCB:
  g_currentExceptionFrame = local_64.previous;
  /* ST_CALLSITE[005D9CD9]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  iVar11 = st::fn_00401280(reinterpret_cast<MMObjTy *>(this_00),message);
  return iVar11;
}
