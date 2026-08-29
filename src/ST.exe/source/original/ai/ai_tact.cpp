#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_tact.cpp

// 0068DC80 AiTactClassTy::InitData
#line 4 "decomp/ST.exe/functions/0068DC80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitData */

int __thiscall
st::fn_0068DC80(AiTactClassTy *this,RecoveredRecord_0068DC80_ED7BAEDA *param_1)

{
  AiTactClassTy *pAVar2;
  int local_EAX_45;
  DArrayTy *pAVar3;
  DArrayTy *pAVar3_mg1;
  DArrayTy *pDVar3;
  DArrayTy *pAVar5;
  int iVar3;
  int iVar9;
  int iVar4;
  RecoveredRecord_0068DC80_ED7BAEDA *pRVar5;
  AiTactClassTy_field_00A5DArray **ppAVar6;
  byte *puVar7;
  byte *puVar8;
  InternalExceptionFrame local_64;
  uint local_20;
  AnonShape_0068DC80_4419198B *local_1c;
  AiTactClassTy *local_18;
  uint local_14;
  AllocationRecord_006684E0 *local_10;
  AnonShape_0068DC80_4419198B *local_c;
  AllocationRecord_006684E0 *local_8;

  puVar8 = nullptr;
  local_c = nullptr;
  local_10 = nullptr;
  local_8 = nullptr;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_18 = this;

  local_EAX_45 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  pAVar2 = local_18;
  if (local_EAX_45 == 0) {
    if (local_18 != nullptr) {
      puVar8 = reinterpret_cast<byte *>((&local_18->field_0020));
    }
    pRVar5 = param_1;
    memmove(puVar8, pRVar5, 0x10c); /* compiler REP MOVS byte copy */
    local_18->field_0020 = 0x38e;
    local_18->field_0038 = 1;
    ppAVar6 = &local_18->field_00A5;
    iVar4 = 8;
    do {
      if (*ppAVar6 != nullptr) {
        /* ST_CALLSITE[0068DCFE]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/AiTactClassTy_field_00A5DArray; source view only; no Ghidra override */
        pAVar3 = st::fn_006B0060(nullptr,reinterpret_cast<uint *>((&param_1[1].field_0x0 + (int)ppAVar6[1])));
        *ppAVar6 = reinterpret_cast<AiTactClassTy_field_00A5DArray *>(pAVar3);
      }
      ppAVar6 = ppAVar6 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (pAVar2->field_00A5 == nullptr) {
      /* ST_CALLSITE[0068DD1D]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/AiTactClassTy_field_00A5DArray; source view only; no Ghidra override */
      pAVar3_mg1 = st::fn_006AE290(nullptr,10,8,10);
      pAVar2->field_00A5 = reinterpret_cast<AiTactClassTy_field_00A5DArray *>(pAVar3_mg1);
    }
    if (pAVar2->field_00B1 == nullptr) {
      pDVar3 = st::fn_006AE290(nullptr,10,0x34,10);
      pAVar2->field_00B1 = pDVar3;
    }
    if (pAVar2->field_00BD == nullptr) {
      /* ST_CALLSITE[0068DD57]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/AiTactClassTy_field_00BDDArray; source view only; no Ghidra override */
      pAVar5 = st::fn_006AE290(nullptr,10,0x4a,10);
      pAVar2->field_00BD = reinterpret_cast<AiTactClassTy_field_00BDDArray *>(pAVar5);
    }
    if (pAVar2->field_00C9 == nullptr) {
      pDVar3 = st::fn_006AE290(nullptr,10,8,10);
      pAVar2->field_00C9 = pDVar3;
    }
    iVar4 = 0;
    if (0 < pAVar2->field_0125) {
      pAVar2->field_00A5->count = 0;
      puVar7 = &param_1[1].field_0x0 + param_1->field_0107;
      if (0 < pAVar2->field_0125) {
        do {
          *(undefined4 *)(puVar7 + 4) = pAVar2->field_0024;
          *(undefined4 *)(puVar7 + 0x77) = pAVar2->field_009D;
          puVar7[0x6a] = pAVar2->field_0088;
          /* ST_CALLSITE[0068DDDE]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
          st::fn_00401BC2(g_playSystem_00802A38,900,st::machine_word_boundary_cast<undefined4>(&local_14),st::machine_word_boundary_cast<undefined4>(&local_c),st::machine_word_boundary_cast<undefined4>(puVar7),0);
          local_1c = local_c;
          local_20 = local_c->field_0018;

          st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(pAVar2->field_00A5),&local_20);
          local_c->field_0284 = pAVar2;
          puVar7 = puVar7 + *(int *)(puVar7 + 0x14);
          iVar4 = iVar4 + 1;
        } while (iVar4 < pAVar2->field_0125);
      }
      local_10 = st::fn_004053C1(st::mutable_c_string("__REPAIR_FLEET__"),pAVar2->field_0039,0x8000,0,
                                    (byte)pAVar2->field_0024);
      /* ST_CALLSITE[0068DE43]: CALL 0x004014c4; direct=004014C4 FltDataPack */
      local_8 = st::fn_004014C4(local_10,&local_14);
      st::fn_00405BCD(reinterpret_cast<int *>(&local_10));
      *(undefined4 *)&local_8->field_0x4 = pAVar2->field_0024;
      *(undefined4 *)&local_8->field_0x77 = pAVar2->field_009D;
      local_8->field_0x6a = pAVar2->field_0088;
      /* ST_CALLSITE[0068DE91]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
      st::fn_00401BC2(g_playSystem_00802A38,900,st::machine_word_boundary_cast<undefined4>(&local_14),st::machine_word_boundary_cast<undefined4>(&local_c),st::machine_word_boundary_cast<undefined4>(local_8),0);
      st::fn_00405BCD(reinterpret_cast<int *>(&local_8));
      local_1c = local_c;
      local_20 = local_c->field_0018;

      iVar3 = st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(pAVar2->field_00A5),&local_20);
      pAVar2->field_00A1 = iVar3;
      local_c->field_0284 = pAVar2;
    }
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  /* ST_CALLSITE[0068DEF4]: CALL 0x0040284c; direct=0040284C AiTactClassTy::sub_0068E010 */
  st::fn_0040284C(local_18);
  st::fn_00405BCD(reinterpret_cast<int *>(&local_8));
  st::fn_00405BCD(reinterpret_cast<int *>(&local_10));

  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x61,0,local_EAX_45,st::mutable_c_string("%s")
                             ,"AiTactClassTy::InitData");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_45,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x62);
  return local_EAX_45;
}

// 0068E050 AiTactClassTy::PrepareToSave
#line 4 "decomp/ST.exe/functions/0068E050/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 0068E050 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00690CB3 */

byte * __thiscall st::fn_0068E050(AiTactClassTy *this,uint *param_1)

{
  AiTactClassTy *pAVar2;
  int errorCode;
  uint *puVar3;
  byte *pbVar4;
  int iVar4;
  byte *pbVar5;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == nullptr) {
      puVar3 = nullptr;
    }
    else {
      puVar3 = &local_8->field_0020;
    }
    /* ST_CALLSITE[0068E092]: CALL 0x0040518c; direct=0040518C TactDataPack */
    pbVar4 = st::fn_0040518C(puVar3,param_1);
    pbVar4[0] = 0x8e;
    pbVar4[1] = 3;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[0xc] = 1;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    *(undefined4 *)(pbVar4 + 0x5e) = pAVar2->field_001C;
    pbVar4[0x105] = 0;
    pbVar4[0x106] = 0;
    g_currentExceptionFrame = local_4c.previous;
    return pbVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x81,0,errorCode,st::mutable_c_string("%s"),
                             "AiTactClassTy::PrepareToSave");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x82);
  return nullptr;
}

// 0068E690 FUN_0068e690
#line 4 "decomp/ST.exe/functions/0068E690/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact.cpp
   Diagnostic line evidence: 263 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall st::fn_0068E690(void *this,RecoveredRecordView_0068E690_5404D20D *param_1)

{
  uint local_c;
  RecoveredRecordView_0068E690_5404D20D *local_8;

  local_c = 0;
  local_8 = nullptr;
  if (param_1 == nullptr) {
    st::fn_006A5E40
              (-6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x107);
    return 0xfffffffa;
  }
  local_c = param_1->field_0018;
  local_8 = param_1;

  st::fn_006AE1C0(STField<DArrayTy *>(this,0xa5),&local_c);
  param_1->field_0284 = this;
  param_1->field_0097 = STField<undefined4>(this,0x9d);
  return 0;
}

// 0068E950 AiTactClassTy::ClaimSave
#line 4 "decomp/ST.exe/functions/0068E950/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ClaimSave */

void __thiscall st::fn_0068E950(AiTactClassTy *this)

{
  void **slotStorage;
  AiTactClassTy *pAVar2;
  int errorCode;
  void *pvVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  int local_c;
  AiTactClassTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;

  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    slotStorage = &local_8->field_0130;
    if (local_8->field_0130 != nullptr) {
      st::fn_006AB060(slotStorage);
    }
    if (pAVar2->field_00BD != nullptr) {

      pvVar3 = st::fn_006B0020(&pAVar2->field_00BD->flags,&local_c);
      *slotStorage = pvVar3;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x16d,0,errorCode,st::mutable_c_string("%s"),
                             "AiTactClassTy::ClaimSave");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x16e);
  return;
}

// 0068EA40 AiTactClassTy::ClaimRestore
#line 4 "decomp/ST.exe/functions/0068EA40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ClaimRestore */

void __thiscall st::fn_0068EA40(AiTactClassTy *this)

{
  AiTactClassTy *pAVar2;
  int errorCode;
  DArrayTy *pAVar3;
  int iVar3;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_0130 != nullptr) &&
       (local_8->field_00BD != nullptr)) {
      st::fn_006AE110(reinterpret_cast<DArrayTy *>(local_8->field_00BD));
      /* ST_CALLSITE[0068EA95]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/AiTactClassTy_field_00BDDArray; source view only; no Ghidra override */
      pAVar3 = st::fn_006B0060(nullptr,static_cast<uint *>(pAVar2->field_0130));
      pAVar2->field_00BD = reinterpret_cast<AiTactClassTy_field_00BDDArray *>(pAVar3);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x17b,0,errorCode,st::mutable_c_string("%s"),
                             "AiTactClassTy::ClaimRestore");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x17c);
  return;
}

// 0068EB30 AiTactClassTy::PrepareToSave
#line 4 "decomp/ST.exe/functions/0068EB30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::PrepareToSave */

int __thiscall
st::fn_0068EB30
          (AiTactClassTy *this,RecoveredRecordView_0068EB30_46CFB8C2 *param_1,short param_2)

{
  short sVar1;
  AiTactClassTy *pAVar3;
  int iVar4;
  uint uVar4;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pAVar3 = local_8;
  if (iVar4 == 0) {
    *(undefined4 *)&param_1->field_0x2c = 0;
    if (*(short *)&param_1->field_0xc == -1) {
      uVar4 = 0xffffffff;
    }
    else {

      uVar4 = st::fn_00404E21(local_8,*(short *)&param_1->field_0xc);
    }
    *(uint *)&param_1->field_0x30 = uVar4;
    sVar1 = pAVar3->field_007C;
    *(undefined4 *)&param_1->field_0x34 = 0xffffffff;
    param_1->field_0006 = param_1->field_0006 + (param_2 + (sVar1 + 1) * 0x14) * 0x32;
    param_1->field_003A = pAVar3->field_012C;

    st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(pAVar3->field_00BD),param_1);
    st::fn_004049A8(reinterpret_cast<DArrayTy *>(pAVar3->field_00BD),st::function_address_boundary_cast<STFnType_callback_00676C40_p1_6bf6b031 *>(st::fn_0068E7D0));
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x1a2,0,iVar4,st::mutable_c_string("%s"),
                             "AiTactClassTy::PrepareToSave");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x1a3);
  return iVar4;
}

// 0068EC70 AiTactClassTy::ExecClaim
#line 4 "decomp/ST.exe/functions/0068EC70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ExecClaim
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall ExecClaim(AiTactClassTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0068EEFC RET | 0068EF45 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_0068EC70(AiTactClassTy *this)

{
  AiFltClassTy *this_00;
  uint uVar1;
  char cVar3;
  byte uVar4;
  byte uVar5;
  AiTactClassTy *pAVar6;
  char cVar7;
  int iVar8;
  AiTactClassTy_field_00BDDArray *pAVar8;
  AiTactClassTy_field_00A5Element *element_00a5;
  int iVar10;
  AiTactClassTy_field_00A5DArray *pAVar10;
  int iVar11;
  AiTactClassTy_field_00A5Element *element_00a5_2;
  AiTactClassTy_field_00BDElement *element_00bd;
  bool bVar15;
  InternalExceptionFrame local_88;
  uint local_44 [2];
  char local_3c;
  char cStack_3b;
  undefined2 uStack_3a;
  undefined1 uStack_38;
  undefined1 uStack_37;
  ushort local_36;
  AiTactClassTy *local_10;
  uint local_c;
  uint local_8;

  if ((this->field_0091 == 0) || ((uint)(this->field_0095 + this->field_0091) <= this->field_012C))
  {
    this->field_0095 = this->field_012C;
    local_88.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_88;
    local_10 = this;

    iVar8 = st::fn_0072D7F0(local_88.jumpBuffer,0);
    pAVar6 = local_10;
    if (iVar8 == 0) {
      local_8 = 0;
      pAVar8 = local_10->field_00BD;
      if (0 < (int)pAVar8->count) {
        bVar15 = pAVar8->count != 0;
        do {
          uVar4 = uStack_37;
          cVar7 = cStack_3b;
          if (bVar15) {
            element_00bd = DArrayAt<AiTactClassTy_field_00BDElement>(pAVar8, local_8);
          }
          else {
            element_00bd = nullptr;
          }
          cStack_3b = (char)element_00bd;
          cVar3 = cStack_3b;
          uStack_37 = (undefined1)((uint)element_00bd >> 0x18);
          uVar5 = uStack_37;
          uStack_37 = uVar4;
          switch(element_00bd->state) {
          case 0:
            if ((element_00bd->field_0012 == 0) ||
               ((uint)(element_00bd->field_003A + element_00bd->field_0012) <= pAVar6->field_012C))
            {
              pAVar10 = pAVar6->field_00A5;
              local_c = 0;
              if (0 < (int)pAVar10->count) {
                bVar15 = pAVar10->count != 0;
                cStack_3b = cVar7;
                do {
                  if (bVar15) {
                    element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar10, local_c);
                  }
                  else {
                    element_00a5 = nullptr;
                  }
                  this_00 = (AiFltClassTy *)element_00a5->field_0004;
                  if (this_00 != nullptr) {
                    memset(local_44, 0, 0x34); /* compiler bulk-zero initialization */
                    iVar11 = 0;
                    local_44[1] = pAVar6->field_012C;
                    local_44[0] = 0x68;
                    uStack_3a = SUB42(element_00bd,0);
                    uStack_38 = (undefined1)((uint)element_00bd >> 0x10);
                    cStack_3b = '\x01';
                    uStack_37 = uVar5;
                    /* ST_CALLSITE[0068ED95]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                    st::fn_00401555(this_00,local_44);
                    if ('\0' < local_3c) {
                      element_00bd->state = 1;
                      element_00bd->field_0034 = local_c;
                      element_00bd->field_0038 = local_36;
                      element_00bd->field_003A = pAVar6->field_012C;
                      cVar7 = cStack_3b;
                      break;
                    }
                  }
                  pAVar10 = pAVar6->field_00A5;
                  local_c = local_c + 1;
                  bVar15 = local_c < pAVar10->count;
                  cVar7 = cStack_3b;
                } while ((int)local_c < (int)pAVar10->count);
              }
            }
            else {
              element_00bd->state = 3;
            }
            break;
          case 1:
            if ((element_00bd->field_000E == 0) ||
               ((uint)(element_00bd->field_003A + element_00bd->field_000E) <= pAVar6->field_012C)) {
              pAVar10 = pAVar6->field_00A5;
              if (element_00bd->field_0034 < pAVar10->count) {
                element_00a5_2 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar10, element_00bd->field_0034);
              }
              else {
                element_00a5_2 = nullptr;
              }
              if ((element_00a5_2 != nullptr) && (element_00a5_2->field_0004 != 0)) {
                memset(local_44, 0, 0x34); /* compiler bulk-zero initialization */
                iVar11 = 0;
                local_44[1] = pAVar6->field_012C;
                local_44[0] = 0x69;
                uStack_3a = (undefined2)((uint)element_00bd >> 8);
                uStack_38 = uVar5;
                /* ST_CALLSITE[0068EE47]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                st::fn_00401555(st::pointer_boundary_cast<AiFltClassTy *>(element_00a5_2->field_0004),local_44);
                if ('\0' < local_3c) {
                  element_00bd->state = 2;
                }
                cVar7 = cStack_3b;
                if (local_3c < '\0') {
                  element_00bd->state = 3;
                }
                break;
              }
            }
            element_00bd->state = 3;
            break;
          case 2:
          case 3:
            uVar1 = element_00bd->field_0030;
            cStack_3b = cVar7;
            if (-1 < (int)uVar1) {
              pAVar10 = pAVar6->field_00A5;
              if (uVar1 < pAVar10->count) {
                element_00a5_2 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar10, uVar1);
              }
              else {
                element_00a5_2 = nullptr;
              }
              if ((element_00a5_2 != nullptr) && (element_00a5_2->field_0004 != 0)) {
                memset(local_44, 0, 0x34); /* compiler bulk-zero initialization */
                local_44[1] = pAVar6->field_012C;
                local_44[0] = 0x6b;
                cStack_3b = (char)((uint)element_00bd >> 8);
                uStack_3a = (undefined2)((uint)element_00bd >> 0x10);
                local_3c = cVar3;
                /* ST_CALLSITE[0068EEBA]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                st::fn_00401555(st::pointer_boundary_cast<AiFltClassTy *>(element_00a5_2->field_0004),local_44);
              }
            }

            st::fn_006B0C70(reinterpret_cast<DArrayTy *>(pAVar6->field_00BD),local_8);
            local_8 = local_8 - 1;
            cVar7 = cStack_3b;
          }
          cStack_3b = cVar7;
          pAVar8 = pAVar6->field_00BD;
          local_8 = local_8 + 1;
          bVar15 = local_8 < pAVar8->count;
        } while ((int)local_8 < (int)pAVar8->count);
      }
      g_currentExceptionFrame = local_88.previous;
      return;
    }
    g_currentExceptionFrame = local_88.previous;

    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x1ff,0,iVar8,st::mutable_c_string("%s"),
                                "AiTactClassTy::ExecClaim");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar8,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x200);
  }
  return;
}

// 0068F020 AiTactClassTy::GiveObjByClaim
#line 4 "decomp/ST.exe/functions/0068F020/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByClaim

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0068F7E0 -> 0068F020 @ 0068F82E

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0068F020(AiTactClassTy *this,uint *param_1)

{
  AiFltClassTy * st_unresolved_pARam00000004{};

  ushort uVar1;
  AiTactClassTy_field_00BDDArray *pAVar2;
  uint uVar3;
  AiTactClassTy *this_00;
  int iVar5;
  ushort *puVar5;
  STGameObjC *this_01;
  int iVar7;
  AiTactClassTy_field_00A5Element *element_00a5;
  AiTactClassTy_field_00BDElement *element_00bd_2;
  int iVar6;
  AiTactClassTy_field_00A5DArray *pAVar9;
  AiFltClassTy *this_02;
  uint uVar10;
  bool bVar11;
  InternalExceptionFrame local_50;
  uint local_c;
  AiTactClassTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;

  iVar5 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 == 0) {
    if ((param_1 != nullptr) && (param_1[3] != 0)) {
      /* ST_CALLSITE[0068F070]: CALL 0x00405af1; direct=00405AF1 AiTactClassTy::ClaimSave */
      st::fn_00405AF1(local_8);
      pAVar9 = this_00->field_00A5;
      if (0 < (int)pAVar9->count) {
        bVar11 = pAVar9->count != 0;
        uVar10 = 0;
        do {
          if (bVar11) {
            element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar9, uVar10);
          }
          else {
            element_00a5 = nullptr;
          }
          if (((undefined4 *)element_00a5 != nullptr) &&
             (element_00a5->field_0004 !=
              0)) {
            st::fn_004034E0(st::pointer_boundary_cast<RecoveredRecordView_00660D40_386ADDB8 *>(element_00a5->field_0004));
          }
          pAVar9 = this_00->field_00A5;
          uVar10 = uVar10 + 1;
          bVar11 = uVar10 < pAVar9->count;
        } while ((int)uVar10 < (int)pAVar9->count);
      }
      st::fn_004049A8(reinterpret_cast<DArrayTy *>(this_00->field_00BD),st::function_address_boundary_cast<STFnType_callback_00676C40_p1_6bf6b031 *>(st::fn_0068E7D0));
      local_c = param_1[3];
      while (local_c = local_c - 1, -1 < (int)local_c) {
        if (local_c < param_1[3]) {
          puVar5 = (ushort *)(param_1[2] * local_c + param_1[7]);
        }
        else {
          puVar5 = nullptr;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          this_01 = nullptr;
        }
        else {
          /* ST_CALLSITE[0068F101]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          this_01 = st::fn_004028BA
                              (g_allPlayers_007FA174,(char)this_00->field_0024,*puVar5,CASE_1);
        }
        if (this_01 != nullptr) {
          /* ST_CALLSITE[0068F118]: CALL dword ptr [EAX + 0x2c] */
          iVar7 = this_01->vfunc_2C();
          if (iVar7 == 0x78) {
            /* ST_CALLSITE[0068F128]: CALL dword ptr [EDX + 0x2c] */
            iVar7 = this_01->vfunc_2C();
            if (iVar7 == 0x78) {
              iVar7 = this_01->field_0259;
            }
            else {
              iVar7 = 0;
            }
            if ((iVar7 != 0) &&

               (uVar10 = st::fn_00403986(this_00,iVar7), this_00 = local_8, -1 < (int)uVar10)) {
              pAVar2 = local_8->field_00BD;
              if (uVar10 < pAVar2->count) {
                element_00bd_2 = DArrayAt<AiTactClassTy_field_00BDElement>(pAVar2, uVar10);
              }
              else {
                element_00bd_2 = nullptr;
              }
              if ((element_00bd_2 != nullptr) && (-1 < element_00bd_2->field_0030)) {
                uVar1 = element_00bd_2->field_000C;
                /* ST_CALLSITE[0068F17E]: CALL dword ptr [EDX + 0x2c] */
                iVar7 = this_01->vfunc_2C();
                if (iVar7 == 0x78) {
                  this_01->field_0269 = (uint)uVar1;
                }

                st::fn_006B0C70(reinterpret_cast<DArrayTy *>(param_1),local_c);
              }

              st::fn_006B0C70(reinterpret_cast<DArrayTy *>(local_8->field_00BD),uVar10);
              this_00 = local_8;
            }
          }
          else {

            uVar10 = st::fn_00403986(this_00,iVar7);
            if (-1 < (int)uVar10) {
              pAVar2 = this_00->field_00BD;
              if (uVar10 < pAVar2->count) {
                element_00bd_2 = DArrayAt<AiTactClassTy_field_00BDElement>(pAVar2, uVar10);
              }
              else {
                element_00bd_2 = nullptr;
              }
              if ((element_00bd_2 != nullptr) &&
                 (uVar3 = element_00bd_2->field_0030, -1 < (int)uVar3)) {
                pAVar9 = this_00->field_00A5;
                if ((pAVar9 == nullptr) ||
                   (((int)uVar3 < 0 || ((int)pAVar9->count <= (int)uVar3)))) {
                  this_02 = nullptr;
                }
                else {
                  this_02 = st_unresolved_pARam00000004;
                  if (uVar3 < pAVar9->count) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                    this_02 = *(AiFltClassTy **)
                               ((int)&pAVar9->data->field_0004 + pAVar9->elementSize * uVar3);
                  }
                }
                /* ST_CALLSITE[0068F236]: CALL 0x00404200; direct=00404200 AiFltClassTy::_AddObjFlt */
                st::fn_00404200(this_02,reinterpret_cast<RecoveredRecord_0065D760_A4BF8285 *>(this_01),0);

                st::fn_006B0C70(reinterpret_cast<DArrayTy *>(param_1),local_c);
              }

              st::fn_006B0C70(reinterpret_cast<DArrayTy *>(this_00->field_00BD),uVar10);
            }
          }
        }
      }
      /* ST_CALLSITE[0068F1BB]: CALL 0x00403652; direct=00403652 AiTactClassTy::ClaimRestore */
      st::fn_00403652(this_00);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x242,0,iVar5,st::mutable_c_string("%s"),
                             "AiTactClassTy::GiveObjByClaim");
  if (iVar6 == 0) {
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x243);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0068F360 AiTactClassTy::GiveObjByFltType
#line 4 "decomp/ST.exe/functions/0068F360/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByFltType

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0068F7E0 -> 0068F360 @ 0068F836 */

void __thiscall st::fn_0068F360(AiTactClassTy *this,uint *param_1)

{
  AiFltClassTy * st_unresolved_pARam00000004{};

  ushort uVar1;
  short sVar2;
  uint index;
  bool bVar4;
  AiTactClassTy *pAVar5;
  int iVar6;
  ushort *puVar6;
  STGameObjC *this_00;
  int iVar7;
  AiFltClassTy *pAVar8;
  int iVar9;
  int iVar10;
  AiTactClassTy_field_00A5DArray *pAVar11;
  uint uVar12;
  uint uVar13;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  AiTactClassTy *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_8 = this;

  iVar6 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pAVar5 = local_8;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_5c.previous;

    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x276,0,iVar6,st::mutable_c_string("%s"),
                               "AiTactClassTy::GiveObjByFltType");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x277);
    return;
  }
  if ((param_1 == nullptr) || (param_1[3] == 0)) {
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  /* ST_CALLSITE[0068F3B2]: CALL 0x00404688; direct=00404688 AiTactClassTy::sub_0068E480 */
  local_c = st::fn_00404688(local_8,1);
  /* ST_CALLSITE[0068F3BE]: CALL 0x00404688; direct=00404688 AiTactClassTy::sub_0068E480 */
  local_10 = st::fn_00404688(pAVar5,2);
  /* ST_CALLSITE[0068F3CA]: CALL 0x00404688; direct=00404688 AiTactClassTy::sub_0068E480 */
  local_14 = st::fn_00404688(pAVar5,4);
  /* ST_CALLSITE[0068F3D6]: CALL 0x00404688; direct=00404688 AiTactClassTy::sub_0068E480 */
  local_18 = st::fn_00404688(pAVar5,0x10);
  index = param_1[3];
joined_r0x0068f3e2:
  do {
    while( true ) {
      do {
        index = index - 1;
        if ((int)index < 0) {
          g_currentExceptionFrame = local_5c.previous;
          return;
        }
        if (index < param_1[3]) {
          puVar6 = (ushort *)(param_1[2] * index + param_1[7]);
        }
        else {
          puVar6 = nullptr;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          this_00 = nullptr;
        }
        else {
          /* ST_CALLSITE[0068F415]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          this_00 = st::fn_004028BA
                              (g_allPlayers_007FA174,(char)pAVar5->field_0024,*puVar6,CASE_1);
        }
        pAVar5 = local_8;
      } while (this_00 == nullptr);
      /* ST_CALLSITE[0068F42C]: CALL dword ptr [EDX + 0x2c] */
      iVar7 = this_00->vfunc_2C();
      if ((iVar7 != 0x78) || ((int)local_c < 0)) break;
      pAVar11 = local_8->field_00A5;
      if ((pAVar11 == nullptr) ||
         ((int)pAVar11->count <= (int)local_c)) {
        pAVar8 = nullptr;
      }
      else {
        pAVar8 = st_unresolved_pARam00000004;
        if (local_c < pAVar11->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pAVar8 = *(AiFltClassTy **)
                    ((int)&pAVar11->data->field_0004 + pAVar11->elementSize * local_c);
        }
      }
      uVar1 = pAVar8->field_007D;
      /* ST_CALLSITE[0068F472]: CALL dword ptr [EDX + 0x2c] */
      iVar7 = this_00->vfunc_2C();
      if (iVar7 == 0x78) {
        this_00->field_0269 = (uint)uVar1;
      }

      st::fn_006B0C70(reinterpret_cast<DArrayTy *>(param_1),index);
      pAVar5 = local_8;
    }
    if ((iVar7 < 0x32) || (0x73 < iVar7)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    uVar12 = local_c;
    pAVar5 = local_8;
    if ((bVar4) || (iVar7 == 0x78)) goto LAB_0068f509;
    sVar2 = local_8->field_0039;
    if (sVar2 == 1) {
      iVar10 = 8;
    }
    else if (sVar2 == 2) {
      iVar10 = 0x14;
    }
    else if (sVar2 == 3) {
      iVar10 = 0x1a;
    }
    else {
      iVar10 = 0;
    }
    uVar13 = local_10;
    if (iVar7 != iVar10) {
      if (sVar2 == 1) {
        iVar10 = 0xc;
      }
      else if (sVar2 == 2) {
        iVar10 = 0x18;
      }
      else if (sVar2 == 3) {
        iVar10 = 0x19;
      }
      else {
        iVar10 = 0;
      }
      uVar13 = local_18;
      uVar12 = local_14;
      if (iVar7 == iVar10) goto LAB_0068f509;
    }
  } while ((int)uVar13 < 0);
  pAVar11 = local_8->field_00A5;
  uVar12 = uVar13;
  goto LAB_0068f516;
LAB_0068f509:
  if (-1 < (int)uVar12) {
    pAVar11 = local_8->field_00A5;
LAB_0068f516:
    if ((pAVar11 == nullptr) || ((int)pAVar11->count <= (int)uVar12))
    {
      pAVar8 = nullptr;
    }
    else {
      pAVar8 = st_unresolved_pARam00000004;
      if (uVar12 < pAVar11->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pAVar8 = *(AiFltClassTy **)((int)&pAVar11->data->field_0004 + pAVar11->elementSize * uVar12);
      }
    }
    /* ST_CALLSITE[0068F551]: CALL 0x00404200; direct=00404200 AiFltClassTy::_AddObjFlt */
    st::fn_00404200(pAVar8,reinterpret_cast<RecoveredRecord_0065D760_A4BF8285 *>(this_00),0);

    st::fn_006B0C70(reinterpret_cast<DArrayTy *>(param_1),index);
    pAVar5 = local_8;
  }
  goto joined_r0x0068f3e2;
}

// 0068F660 AiTactClassTy::GiveObjByGrpNum
#line 4 "decomp/ST.exe/functions/0068F660/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByGrpNum */

void __thiscall st::fn_0068F660(AiTactClassTy *this,DArrayTy *param_1)

{
  uint index;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  STGameObjC *this_00;
  AiFltClassTy *this_01;
  int iVar5;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    if ((param_1 != nullptr) && (index = param_1->count, index != 0)) {
      while (index = index - 1, -1 < (int)index) {
        if (index < param_1->count) {
          puVar4 = DArrayAt<ushort>(param_1, index);
        }
        else {
          puVar4 = nullptr;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          this_00 = nullptr;
        }
        else {
          /* ST_CALLSITE[0068F6E1]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          this_00 = st::fn_004028BA
                              (g_allPlayers_007FA174,(char)local_8->field_0024,*puVar4,CASE_1);
        }
        if (this_00 != nullptr) {
          /* ST_CALLSITE[0068F6F4]: CALL dword ptr [EAX + 0x2c] */
          iVar3 = this_00->vfunc_2C();
          if ((iVar3 < 1) || (0x28 < iVar3)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             /* ST_CALLSITE[0068F719]: CALL 0x00405b23; direct=00405B23 AiTactClassTy::sub_0068E290; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__thiscall;pointer:/AiFltClassTy;pointer:/AiTactClassTy;/short */
             (this_01 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405B23(local_8,this_00->field_081C)), this_01 != nullptr))
          {
            /* ST_CALLSITE[0068F727]: CALL 0x00404200; direct=00404200 AiFltClassTy::_AddObjFlt */
            st::fn_00404200(this_01,reinterpret_cast<RecoveredRecord_0065D760_A4BF8285 *>(this_00),0);

            st::fn_006B0C70(param_1,index);
          }
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x292,0,iVar3,st::mutable_c_string("%s"),
                             "AiTactClassTy::GiveObjByGrpNum");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x293);
  return;
}

// 0068F7E0 AiTactClassTy::InitDistrObj
#line 4 "decomp/ST.exe/functions/0068F7E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitDistrObj */

void __thiscall st::fn_0068F7E0(AiTactClassTy *this)

{
  AiTactClassTy *this_00;
  int errorCode;
  AiTactClassTy *array;
  int iVar2;
  InternalExceptionFrame local_50;
  AiTactClassTy *local_c;
  AiTactClassTy *local_8;

  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    /* ST_CALLSITE[0068F81E]: CALL 0x00404da9; direct=00404DA9 _GetStaffGrpExch; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiTactClassTy; signature=__cdecl;pointer:/AiTactClassTy;/undefined4 */
    array = st::pointer_boundary_cast<AiTactClassTy *>(st::fn_00404DA9(local_c->field_0024));
    local_8 = array;
    /* ST_CALLSITE[0068F82E]: CALL 0x00403e04; direct=00403E04 AiTactClassTy::GiveObjByClaim */
    st::fn_00403E04(this_00,reinterpret_cast<uint *>(array));
    /* ST_CALLSITE[0068F836]: CALL 0x004040f2; direct=004040F2 AiTactClassTy::GiveObjByFltType */
    st::fn_004040F2(this_00,reinterpret_cast<uint *>(array));
    if (array != nullptr) {
      st::fn_006AE110(reinterpret_cast<DArrayTy *>(array));
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != nullptr) {
    st::fn_006AE110(reinterpret_cast<DArrayTy *>(local_8));
    local_8 = nullptr;
  }

  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x2a8,0,errorCode,st::mutable_c_string("%s"),
                             "AiTactClassTy::InitDistrObj");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x2a9);
  return;
}

// 0068FB30 AiTactClassTy::BackFromRepair
#line 4 "decomp/ST.exe/functions/0068FB30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::BackFromRepair */

void __thiscall st::fn_0068FB30(AiTactClassTy *this,short param_1)

{
  AiTactClassTy *this_00;
  int iVar3;
  void *this_01;
  int iVar2;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_80;
  uint local_3c [2];
  short local_33;
  uint local_31;
  DArrayTy *local_2b;
  AiTactClassTy *local_8;

  puVar5 = local_3c;
  local_8 = this;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  iVar3 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    local_3c[1] = local_8->field_012C;
    local_3c[0] = 0x76;
    local_33 = param_1;
    local_31 = 0;
    local_2b = st::fn_006AE290(nullptr,10,2,10);
    /* ST_CALLSITE[0068FBA8]: CALL 0x00403cdd; direct=00403CDD AiTactClassTy::sub_006902B0 */
    st::fn_00403CDD(this_00,-0x8000,local_3c);
    /* ST_CALLSITE[0068FBB0]: CALL 0x00405b23; direct=00405B23 AiTactClassTy::sub_0068E290 */
    this_01 = STPointerBoundaryCast<void *>(st::fn_00405B23(this_00,param_1));
    if (this_01 != nullptr) {
      st::fn_004020EA(this_01,local_2b,0);
    }
    g_currentExceptionFrame = local_80.previous;
    return;
  }
  g_currentExceptionFrame = local_80.previous;
  if (local_2b != nullptr) {
    st::fn_006AE110(local_2b);
  }
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x2fb,0,iVar3,st::mutable_c_string("%s"),
                             "AiTactClassTy::BackFromRepair");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x2fc);
  return;
}

// 0068FD00 AiTactClassTy::GetAiMess
#line 4 "decomp/ST.exe/functions/0068FD00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GetAiMess */

int __thiscall
st::fn_0068FD00(AiTactClassTy *this,RecoveredRecordView_0068FD00_630BE91E *param_1)

{
  uint uVar1;
  AiTactClassTy *this_00;
  int local_EAX_35;
  int iVar4;
  int iVar3;
  AiTactClassTy_field_00A5DArray *pAVar5;
  AiTactClassTy_field_00A5Element *element_00a5;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar11;
  InternalExceptionFrame local_80;
  uint local_3c [3];
  byte local_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  AiTactClassTy *local_8;

  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_8 = this;

  local_EAX_35 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_80.previous;

    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x36a,0,local_EAX_35,
                               st::mutable_c_string("%s"),"AiTactClassTy::GetAiMess");
    if (iVar7 == 0) {
      st::fn_006A5E40(local_EAX_35,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x36b);
      return local_EAX_35;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (99 < *(uint *)param_1) {
    switch(*(uint *)param_1) {
    case 0x6a:
      local_8->field_009D = *(undefined4 *)&param_1->field_0x8;
      /* ST_CALLSITE[0068FD63]: CALL 0x00403e68; direct=00403E68 AiTactClassTy::sub_00690230 */
      st::fn_00403E68(local_8,reinterpret_cast<uint *>(param_1));
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x6c:
      if (param_1->field_0x8 == '\0') {
        memset(local_3c, 0, 0x34); /* compiler bulk-zero initialization */
        local_3c[0] = 0x6d;
        local_30 = 1;
        local_3c[1] = local_8->field_012C;
        uStack_2f = param_1->field_0009;
        uStack_2e = (undefined2)param_1->field_000A;
        uStack_2c = (undefined2)((uint)param_1->field_000A >> 0x10);
        /* ST_CALLSITE[0068FDBC]: CALL 0x00403e68; direct=00403E68 AiTactClassTy::sub_00690230 */
        st::fn_00403E68(local_8,local_3c);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x6e:
    case 0x74:
      /* ST_CALLSITE[0068FDD8]: CALL 0x00403e68; direct=00403E68 AiTactClassTy::sub_00690230 */
      st::fn_00403E68(local_8,reinterpret_cast<uint *>(param_1));
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x6f:

      iVar4 = st::fn_0040457F(local_8,STField<int>(param_1,0xC));
      iVar8 = STField<int>(param_1,0xC);
      *(int *)&param_1->field_0x8 = *(int *)&param_1->field_0x8 + iVar4;
      /* ST_CALLSITE[0068FE0C]: CALL 0x00401d0c; direct=00401D0C AiTactClassTy::sub_0068E610 */
      iVar3 = st::fn_00401D0C(this_00,iVar8);
      *(int *)&param_1->field_0x8 = *(int *)&param_1->field_0x8 + iVar3;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x70:
      uVar9 = 0;
      pAVar5 = local_8->field_00A5;
      if (0 < (int)pAVar5->count) {
        bVar11 = pAVar5->count != 0;
        do {
          if (bVar11) {
            element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar5, uVar9);
          }
          else {
            element_00a5 = nullptr;
          }
          if (((undefined4 *)element_00a5 != nullptr) && (element_00a5->field_0004 != 0)) {
            memset(local_3c, 0, 0x34); /* compiler bulk-zero initialization */
            local_3c[1] = this_00->field_012C;
            local_3c[0] = 0x70;
            uVar1 = STField<undefined4>(param_1,0xC);
            local_30 = (undefined1)uVar1;
            uStack_2f = (undefined1)((uint)uVar1 >> 8);
            uStack_2e = (undefined2)((uint)uVar1 >> 0x10);
            /* ST_CALLSITE[0068FE8C]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
            st::fn_00401555(st::pointer_boundary_cast<AiFltClassTy *>(element_00a5->field_0004),local_3c);
            if (0 < (int)local_3c[2]) {
              *(uint *)&param_1->field_0x8 = local_3c[2];
              g_currentExceptionFrame = local_80.previous;
              return 0;
            }
          }
          pAVar5 = this_00->field_00A5;
          uVar9 = uVar9 + 1;
          bVar11 = uVar9 < pAVar5->count;
          if ((int)pAVar5->count <= (int)uVar9) {
            g_currentExceptionFrame = local_80.previous;
            return 0;
          }
        } while( true );
      }
      break;
    case 0x71:
      uVar9 = local_8->field_00A5->count - 1;
      if (-1 < (int)uVar9) {
        do {
          pAVar5 = this_00->field_00A5;
          if (uVar9 < pAVar5->count) {
            element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar5, uVar9);
          }
          else {
            element_00a5 = nullptr;
          }
          if (((undefined4 *)element_00a5 != nullptr) &&
             (element_00a5->field_0004 != 0)) {
            /* ST_CALLSITE[0068FF0E]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
            st::fn_00401555(st::pointer_boundary_cast<AiFltClassTy *>(element_00a5->field_0004),reinterpret_cast<uint *>(param_1));
            /* ST_CALLSITE[0068FF20]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            st::fn_0040432C(g_playSystem_00802A38,*(uint *)(element_00a5->field_0004 + 8));

            st::fn_006B0C70(reinterpret_cast<DArrayTy *>(this_00->field_00A5),uVar9);
          }
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x72:
      iVar8 = *(int *)&param_1->field_0x8;
      if (iVar8 == 0) {
        /* ST_CALLSITE[0068FF9F]: CALL 0x00403e04; direct=00403E04 AiTactClassTy::GiveObjByClaim */
        st::fn_00403E04(local_8,*(uint **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (iVar8 == 1) {
        /* ST_CALLSITE[0068FF80]: CALL 0x004040f2; direct=004040F2 AiTactClassTy::GiveObjByFltType */
        st::fn_004040F2(local_8,*(uint **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (iVar8 == 2) {
        /* ST_CALLSITE[0068FF61]: CALL 0x004057ae; direct=004057AE AiTactClassTy::GiveObjByGrpNum */
        st::fn_004057AE(local_8,*(DArrayTy **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x73:
      uVar9 = 0;
      pAVar5 = local_8->field_00A5;
      if (0 < (int)pAVar5->count) {
        bVar11 = pAVar5->count != 0;
        do {
          if (bVar11) {
            element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar5, uVar9);
          }
          else {
            element_00a5 = nullptr;
          }
          if ((((undefined4 *)element_00a5 != nullptr) &&
              (element_00a5->field_0004 != 0)) &&
             /* ST_CALLSITE[0068FFEA]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
             (st::fn_00401555(st::pointer_boundary_cast<AiFltClassTy *>(element_00a5->field_0004),reinterpret_cast<uint *>(param_1)),
             '\0' < (char)param_1->field_0x8)) {
            g_currentExceptionFrame = local_80.previous;
            return 0;
          }
          pAVar5 = this_00->field_00A5;
          uVar9 = uVar9 + 1;
          bVar11 = uVar9 < pAVar5->count;
        } while ((int)uVar9 < (int)pAVar5->count);
      }
    }
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

// 00690650 AiTactClassTy::HelpOrganize
#line 4 "decomp/ST.exe/functions/00690650/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::HelpOrganize */

void __thiscall
st::fn_00690650(AiTactClassTy *this,RecoveredRecordView_00690650_B2F27882 *param_1)

{
  uint32_t _local_14;

  byte bVar1;
  byte bVar2;
  byte bVar3;
  AiFltClassTy *this_00;
  AiTactClassTy *this_01;
  short sVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  int iVar6;
  STGameObjC *pSVar7;
  uint uVar8;
  AiTactClassTy_field_00A5DArray *pAVar9;
  int iVar10;
  AiTactClassTy_field_00A5Element *element_00a5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EDI;
  bool bVar14;
  InternalExceptionFrame local_98;
  uint local_54 [2];
  char local_4c;
  byte local_4b;
  ushort local_4a;
  ushort local_48;
  ushort local_46;
  ushort local_44;
  byte local_42;
  uint local_20;
  ushort local_1c;
  undefined2 uStack_1a;
  uint local_18;
  byte local_14;
  undefined3 uStack_13;
  uint local_10;
  AiTactClassTy *local_c;
  uint local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_10 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(in_EAX)), (uint16_t)(param_1->field_0016));
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_20 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(unaff_EDI)), (uint16_t)(param_1->field_001A));
  bVar1 = param_1->field_0018;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_14 = CONCAT31(uStack_13,bVar1);
  if (7 < bVar1) {
    return;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[(char)bVar1].field_0022)) {
    return;
  }
  if ((int)(char)bVar1 == this->field_0024) {
    return;
  }
  bVar2 = (byte)this->field_0024;
  local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(bVar2));
  if (DAT_00808a8f != '\0') {
    bVar14 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
             g_bulkInitializedRecords_008087C7[bVar1].field_0023;
    goto LAB_00690763;
  }
  if (bVar1 == bVar2) {
LAB_00690758:
    iVar6 = 0;
  }
  else {
    bVar3 = g_playerRelationMatrix[bVar1][bVar2];
    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
      iVar6 = -2;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
      iVar6 = -1;
    }
    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
      iVar6 = 1;
    }
    else {
      if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_00690758;
      iVar6 = 2;
    }
  }
  bVar14 = iVar6 < 0;
LAB_00690763:
  if ((bVar14) && (param_1->field_001A != -1)) {
    local_98.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_98;
    local_c = this;

    iVar6 = st::fn_0072D7F0(local_98.jumpBuffer,0);
    this_01 = local_c;
    if (iVar6 == 0) {
      if (g_allPlayers_007FA174 == nullptr) {
        pSVar7 = nullptr;
      }
      else {
        /* ST_CALLSITE[006907BF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar7 = st::fn_004028BA
                           (g_allPlayers_007FA174,(char)local_c->field_0024,(ushort)local_10,
                            CASE_1);
      }
      if ((pSVar7 != nullptr) &&
         /* ST_CALLSITE[006907DA]: CALL 0x00405b23; direct=00405B23 AiTactClassTy::sub_0068E290 */
         (iVar6 = st::fn_00405B23(this_01,pSVar7->field_0030), iVar6 != 0)) {
        if (STField<short>(iVar6,0x7B) == 1) {
          sVar5 = (short)local_10;
        }
        else {
          sVar5 = -1;
        }

        uVar8 = st::fn_00404E44(this_01,STField<short>(iVar6,0x7D),sVar5);
        if ((int)uVar8 < 0) {
          pAVar9 = this_01->field_00A5;
          local_8 = 0;
          if (0 < (int)pAVar9->count) {
            bVar14 = pAVar9->count != 0;
            do {
              if (bVar14) {
                element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar9, local_8);
              }
              else {
                element_00a5 = nullptr;
              }
              if (((undefined4 *)element_00a5 != nullptr) &&
                 (this_00 = st::pointer_boundary_cast<AiFltClassTy *>(element_00a5->field_0004), this_00 != nullptr)) {
                memset(local_54, 0, 0x34); /* compiler bulk-zero initialization */
                local_54[0] = 100;
                local_4b = 1;
                local_54[1] = local_c->field_012C;
                local_48 = STField<undefined2>(iVar6,0x7D);
                local_4a = (undefined2)local_10;
                local_46 = STField<undefined2>(iVar6,0x7B);
                local_44 = (undefined2)local_20;
                local_42 = local_14;
                /* ST_CALLSITE[00690897]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                st::fn_00401555(this_00,local_54);
                if ('\0' < local_4c) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  auto _local_1c = CONCAT22(STField<undefined2>(iVar6,0x7D),
                                       *(undefined2 *)(element_00a5->field_0004 + 0x7d));
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_18 = CONCAT22(STField<undefined2>(iVar6,0x7B),(short)local_10);

                  st::fn_006AE1C0(local_c->field_00C9,&local_1c);
                  g_currentExceptionFrame = local_98.previous;
                  return;
                }
              }
              local_8 = local_8 + 1;
              pAVar9 = local_c->field_00A5;
              bVar14 = local_8 < pAVar9->count;
              if ((int)pAVar9->count <= (int)local_8) {
                g_currentExceptionFrame = local_98.previous;
                return;
              }
            } while( true );
          }
        }
      }
      g_currentExceptionFrame = local_98.previous;
      return;
    }
    g_currentExceptionFrame = local_98.previous;

    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x433,0,iVar6,st::mutable_c_string("%s"),
                                "AiTactClassTy::HelpOrganize");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x434);
  }
  return;
}

// 00690B90 AiTactClassTy::GetMessage
#line 4 "decomp/ST.exe/functions/00690B90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402DF1|00690B90; family_names=AiTactClassTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:2,1c:3} */

int __thiscall st::fn_00690B90(AiTactClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  RecoveredRecord_0068DC80_ED7BAEDA *pRVar2;
  AiTactClassTy *this_00;
  int iVar3;
  AiTactClassTy_field_00A5DArray *pAVar4;
  int iVar5_mg1;
  int iVar4;
  int iVar5;
  uint uVar6;
  AiTactClassTy_field_00A5Element *element_00a5;
  bool bVar8;
  InternalExceptionFrame local_58;
  AiTactClassTy *local_14;
  byte *local_10;
  RecoveredRecordView_0060EA30_C6688588 *local_c;
  int local_8;

  uVar6 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 == 0) {
    local_14->field_012C = g_playSystem_00802A38->field_00E4;
    SVar1 = message->id;
    if (SVar1 < MESS_TORPHIT) {
      if (SVar1 == MESS_SHARED_010F) {
        local_c = nullptr;
        /* ST_CALLSITE[00690C9C]: CALL 0x00404511; direct=00404511 AiTactClassTy::PrepareToSave; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
        local_10 = st::fn_00404511(local_14,reinterpret_cast<uint *>(&local_c));
        /* ST_CALLSITE[00690CB3]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
        st::fn_004025F9(g_playSystem_00802A38,this_00->field_0018,local_10,(uint)local_c);
        if (local_10 != nullptr) {
          st::fn_006AB060(&local_10);
        }
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_14->field_0099 == 0) {
          local_14->field_0099 = 1;
          /* ST_CALLSITE[00690C76]: CALL 0x00402c7f; direct=00402C7F AiTactClassTy::sub_00690A40 */
          st::fn_00402C7F(local_14);
        }
        else {
          /* ST_CALLSITE[00690C82]: CALL 0x00402b49; direct=00402B49 AiTactClassTy::sub_00690AB0 */
          st::fn_00402B49(local_14);
          /* ST_CALLSITE[00690C89]: CALL 0x00404598; direct=00404598 AiTactClassTy::ExecClaim */
          st::fn_00404598(this_00);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        pRVar2 = static_cast<RecoveredRecord_0068DC80_ED7BAEDA *>((message->arg0).ptr);
        if (pRVar2 == nullptr) {
          st::fn_006A5E40
                    (-6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x45e);
        }
        /* ST_CALLSITE[00690C2F]: CALL 0x004037c9; direct=004037C9 AiTactClassTy::InitData */
        st::fn_004037C9(this_00,pRVar2);
        if (*(int *)&pRVar2->field_0xc == 0) {
          this_00->field_001C = DAT_00808754;
        }
        else {
          this_00->field_001C = this_00->field_007E;
        }
        if (*(int *)&pRVar2->field_0xc == 0) {
          /* ST_CALLSITE[00690C58]: CALL 0x00404741; direct=00404741 AiTactClassTy::InitDistrObj */
          st::fn_00404741(this_00);
        }
      }
      else if (SVar1 == MESS_SHARED_0003) {
        /* ST_CALLSITE[00690C03]: CALL 0x0040284c; direct=0040284C AiTactClassTy::sub_0068E010 */
        st::fn_0040284C(local_14);
      }
    }
    else if (SVar1 == MESS_ID_ALLCREATE) {
      pAVar4 = local_14->field_00A5;
      if (0 < (int)pAVar4->count) {
        bVar8 = pAVar4->count != 0;
        do {
          if (bVar8) {
            element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar4, uVar6);
          }
          else {
            element_00a5 = nullptr;
          }
          local_8 = 0;
          if ((((RecoveredRecordView_005EFAE0_855D930D *)element_00a5->field_0000 ==
                0) ||

              (iVar5_mg1 = st::fn_006E62D0
                                     (g_playSystem_00802A38,
                                      (RecoveredRecordView_005EFAE0_855D930D *)element_00a5->field_0000,&local_8),
              iVar5_mg1 != 0)) || (local_8 == 0)) {
            element_00a5->field_0004 = 0;
            element_00a5->field_0000 = 0;
          }
          else {
            element_00a5->field_0004 = local_8;
            *(AiTactClassTy **)(local_8 + 0x284) = this_00;
          }
          pAVar4 = this_00->field_00A5;
          uVar6 = uVar6 + 1;
          bVar8 = uVar6 < pAVar4->count;
        } while ((int)uVar6 < (int)pAVar4->count);
      }
    }
    else if (SVar1 == MESS_SHARED_5DD5) {
      /* ST_CALLSITE[00690CE0]: CALL 0x004046e2; direct=004046E2 AiTactClassTy::HelpOrganize */
      st::fn_004046E2(local_14,reinterpret_cast<RecoveredRecordView_00690650_B2F27882 *>(message));
    }

    st::fn_006E5FD0(this_00,message);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x4ad,0,iVar3,
                             st::mutable_c_string("AiTactClassTy::GetMessage error mess->id == %lX Name=%d"),message->id,
                             local_14->field_0018);
  if (iVar4 == 0) {
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact.cpp"),0x4ae);
    return 0xffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}
