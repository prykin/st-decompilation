#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_tact.cpp

// 0068DC80 AiTactClassTy::InitData
#line 4 "decomp/ST.exe/functions/0068DC80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitData */

int __thiscall st::fn_0068DC80(AiTactClassTy *this,undefined4 *param_1)

{
  AiTactClassTy *pAVar2;
  int local_EAX_45;
  AiTactClassTy_field_00A5DArray *pAVar3;
  DArrayTy *pDVar4;
  AiTactClassTy_field_00BDDArray *pAVar5;
  int iVar3;
  int iVar9;
  int iVar6;
  byte *puVar7;
  AiTactClassTy_field_00A5DArray **ppAVar8;
  int iVar10;
  byte *puVar11;
  InternalExceptionFrame local_64;
  undefined4 local_20;
  AnonShape_0068DC80_4419198B *local_1c;
  AiTactClassTy *local_18;
  uint local_14;
  AllocationRecord_006684E0 *local_10;
  AnonShape_0068DC80_4419198B *local_c;
  AllocationRecord_006684E0 *local_8;

  puVar11 = nullptr;
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
      puVar11 = (byte *)(&local_18->field_0020);
    }
    puVar7 = (byte *)(param_1);
    memmove(puVar11, puVar7, 0x10c); /* compiler REP MOVS byte copy */
    local_18->field_0020 = 0x38e;
    local_18->field_0038 = 1;
    ppAVar8 = &local_18->field_00A5;
    iVar6 = 8;
    do {
      if (*ppAVar8 != nullptr) {
        pAVar3 = (AiTactClassTy_field_00A5DArray *)
                 st::fn_006B0060(nullptr,(uint *)((int)ppAVar8[1] + 0x10b + (int)param_1));
        *ppAVar8 = pAVar3;
      }
      ppAVar8 = ppAVar8 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (pAVar2->field_00A5 == nullptr) {
      pAVar3 = (AiTactClassTy_field_00A5DArray *)
               st::fn_006AE290(nullptr,10,8,10);
      pAVar2->field_00A5 = pAVar3;
    }
    if (pAVar2->field_00B1 == nullptr) {
      pDVar4 = st::fn_006AE290(nullptr,10,0x34,10);
      pAVar2->field_00B1 = pDVar4;
    }
    if (pAVar2->field_00BD == nullptr) {
      pAVar5 = (AiTactClassTy_field_00BDDArray *)
               st::fn_006AE290(nullptr,10,0x4a,10);
      pAVar2->field_00BD = pAVar5;
    }
    if (pAVar2->field_00C9 == nullptr) {
      pDVar4 = st::fn_006AE290(nullptr,10,8,10);
      pAVar2->field_00C9 = pDVar4;
    }
    iVar6 = 0;
    if (0 < pAVar2->field_0125) {
      pAVar2->field_00A5->count = 0;
      iVar10 = STField<int>(param_1,0x107) + 0x10b + (int)param_1;
      if (0 < pAVar2->field_0125) {
        do {
          *(undefined4 *)(iVar10 + 4) = pAVar2->field_0024;
          *(undefined4 *)(iVar10 + 0x77) = pAVar2->field_009D;
          *(undefined1 *)(iVar10 + 0x6a) = pAVar2->field_0088;
          st::fn_00401BC2(g_playSystem_00802A38,900,&local_14,&local_c,iVar10,0);
          local_1c = local_c;
          local_20 = local_c->field_0018;
          st::fn_006AE1C0((DArrayTy *)pAVar2->field_00A5,&local_20);
          local_c->field_0284 = pAVar2;
          iVar10 = iVar10 + *(int *)(iVar10 + 0x14);
          iVar6 = iVar6 + 1;
        } while (iVar6 < pAVar2->field_0125);
      }
      local_10 = st::fn_004053C1("__REPAIR_FLEET__",pAVar2->field_0039,0x8000,0,
                                    *(byte *)&pAVar2->field_0024);
      local_8 = st::fn_004014C4(local_10,&local_14);
      st::fn_00405BCD((int *)&local_10);
      *(undefined4 *)&local_8->field_0x4 = pAVar2->field_0024;
      *(undefined4 *)&local_8->field_0x77 = pAVar2->field_009D;
      local_8->field_0x6a = pAVar2->field_0088;
      st::fn_00401BC2(g_playSystem_00802A38,900,&local_14,&local_c,local_8,0);
      st::fn_00405BCD((int *)&local_8);
      local_1c = local_c;
      local_20 = local_c->field_0018;
      iVar3 = st::fn_006AE1C0((DArrayTy *)pAVar2->field_00A5,&local_20);
      pAVar2->field_00A1 = iVar3;
      local_c->field_0284 = pAVar2;
    }
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  st::fn_0040284C(local_18);
  st::fn_00405BCD((int *)&local_8);
  st::fn_00405BCD((int *)&local_10);
  iVar9 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x61,0,local_EAX_45,"%s"
                             ,"AiTactClassTy::InitData");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_45,0,"E:\\__titans\\ai\\ai_tact.cpp",0x62);
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
  undefined4 *puVar3;
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
  iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x81,0,errorCode,"%s",
                             "AiTactClassTy::PrepareToSave");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\ai\\ai_tact.cpp",0x82);
  return nullptr;
}

// 0068E690 FUN_0068e690
#line 4 "decomp/ST.exe/functions/0068E690/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact.cpp
   Diagnostic line evidence: 263 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall st::fn_0068E690(void *this,int param_1)

{
  undefined4 local_c;
  int local_8;

  local_c = 0;
  local_8 = 0;
  if (param_1 == 0) {
    st::fn_006A5E40
              (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_tact.cpp",0x107);
    return 0xfffffffa;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(undefined4 *)(param_1 + 0x18);
  local_8 = param_1;
  st::fn_006AE1C0(STField<DArrayTy *>(this,0xa5),&local_c);
  *(void **)(param_1 + 0x284) = this;
  *(undefined4 *)(param_1 + 0x97) = STField<undefined4>(this,0x9d);
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
      pvVar3 = (void *)st::fn_006B0020(&pAVar2->field_00BD->flags,&local_c);
      *slotStorage = pvVar3;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x16d,0,errorCode,"%s",
                             "AiTactClassTy::ClaimSave");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\ai\\ai_tact.cpp",0x16e);
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
  AiTactClassTy_field_00BDDArray *pAVar3;
  int iVar4;
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
      st::fn_006AE110((DArrayTy *)local_8->field_00BD);
      pAVar3 = (AiTactClassTy_field_00BDDArray *)st::fn_006B0060(nullptr,pAVar2->field_0130);
      pAVar2->field_00BD = pAVar3;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x17b,0,errorCode,"%s",
                             "AiTactClassTy::ClaimRestore");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\ai\\ai_tact.cpp",0x17c);
  return;
}

// 0068EB30 AiTactClassTy::PrepareToSave
#line 4 "decomp/ST.exe/functions/0068EB30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::PrepareToSave */

int __thiscall
st::fn_0068EB30(AiTactClassTy *this,AnonShape_0068EB30_4F4B480A *param_1,short param_2)

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
    st::fn_006AE1C0((DArrayTy *)pAVar3->field_00BD,param_1);
    st::fn_004049A8((DArrayTy *)pAVar3->field_00BD,st::fn_0040242D);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x1a2,0,iVar4,"%s",
                             "AiTactClassTy::PrepareToSave");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\ai\\ai_tact.cpp",0x1a3);
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
  undefined1 uVar4;
  undefined1 uVar5;
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
  undefined2 local_36;
  AiTactClassTy *local_10;
  uint local_c;
  uint local_8;

  if ((this->field_0091 == 0) || (this->field_0095 + this->field_0091 <= this->field_012C)) {
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
                st::fn_00401555(element_00a5_2->field_0004,local_44);
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
                st::fn_00401555(element_00a5_2->field_0004,local_44);
              }
            }
            st::fn_006B0C70((DArrayTy *)pAVar6->field_00BD,local_8);
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
    iVar10 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x1ff,0,iVar8,"%s",
                                "AiTactClassTy::ExecClaim");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar8,0,"E:\\__titans\\ai\\ai_tact.cpp",0x200);
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
  ushort uVar1;
  AiTactClassTy_field_00BDDArray *pAVar2;
  uint uVar3;
  AiTactClassTy *this_00;
  int iVar5;
  ushort *puVar5;
  STGameObjC *objPtr;
  int iVar7;
  AiTactClassTy_field_00A5Element *element_00a5;
  AiTactClassTy_field_00BDElement *element_00bd_2;
  int iVar6;
  AiTactClassTy_field_00A5DArray *pAVar9;
  AiFltClassTy *this_01;
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
             (element_00a5->field_0004 != nullptr))
          {
            st::fn_004034E0(element_00a5->field_0004);
          }
          pAVar9 = this_00->field_00A5;
          uVar10 = uVar10 + 1;
          bVar11 = uVar10 < pAVar9->count;
        } while ((int)uVar10 < (int)pAVar9->count);
      }
      st::fn_004049A8((DArrayTy *)this_00->field_00BD,st::fn_0040242D);
      local_c = param_1[3];
      while (local_c = local_c - 1, -1 < (int)local_c) {
        if (local_c < param_1[3]) {
          puVar5 = (ushort *)(param_1[2] * local_c + param_1[7]);
        }
        else {
          puVar5 = nullptr;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          objPtr = nullptr;
        }
        else {
          objPtr = st::fn_004028BA
                             (g_allPlayers_007FA174,*(char *)&this_00->field_0024,*puVar5,CASE_1);
        }
        if (objPtr != nullptr) {
          iVar7 = (*objPtr->vtable->vfunc_2C)();
          if (iVar7 == 0x78) {
            iVar7 = (*objPtr->vtable->vfunc_2C)();
            if (iVar7 == 0x78) {
              iVar7 = objPtr->field_0259;
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
                iVar7 = (*objPtr->vtable->vfunc_2C)();
                if (iVar7 == 0x78) {
                  objPtr->field_0269 = (uint)uVar1;
                }
                st::fn_006B0C70((DArrayTy *)param_1,local_c);
              }
              st::fn_006B0C70((DArrayTy *)local_8->field_00BD,uVar10);
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
                  this_01 = nullptr;
                }
                else {
                  this_01 = pARam00000004;
                  if (uVar3 < pAVar9->count) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                    this_01 = *(AiFltClassTy **)
                               ((int)&pAVar9->data->field_0004 + pAVar9->elementSize * uVar3);
                  }
                }
                st::fn_00404200(this_01,(uint)objPtr,0);
                st::fn_006B0C70((DArrayTy *)param_1,local_c);
              }
              st::fn_006B0C70((DArrayTy *)this_00->field_00BD,uVar10);
            }
          }
        }
      }
      st::fn_00403652(this_00);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x242,0,iVar5,"%s",
                             "AiTactClassTy::GiveObjByClaim");
  if (iVar6 == 0) {
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\ai\\ai_tact.cpp",0x243);
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
  ushort uVar1;
  short sVar2;
  uint index;
  bool bVar4;
  AiTactClassTy *pAVar5;
  int iVar6;
  ushort *puVar6;
  STGameObjC *objPtr;
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
    iVar9 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x276,0,iVar6,"%s",
                               "AiTactClassTy::GiveObjByFltType");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\ai\\ai_tact.cpp",0x277);
    return;
  }
  if ((param_1 == nullptr) || (param_1[3] == 0)) {
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  local_c = st::fn_00404688(local_8,1);
  local_10 = st::fn_00404688(pAVar5,2);
  local_14 = st::fn_00404688(pAVar5,4);
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
          objPtr = nullptr;
        }
        else {
          objPtr = st::fn_004028BA
                             (g_allPlayers_007FA174,*(char *)&pAVar5->field_0024,*puVar6,CASE_1);
        }
        pAVar5 = local_8;
      } while (objPtr == nullptr);
      iVar7 = (*objPtr->vtable->vfunc_2C)();
      if ((iVar7 != 0x78) || ((int)local_c < 0)) break;
      pAVar11 = local_8->field_00A5;
      if ((pAVar11 == nullptr) ||
         ((int)pAVar11->count <= (int)local_c)) {
        pAVar8 = nullptr;
      }
      else {
        pAVar8 = pARam00000004;
        if (local_c < pAVar11->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pAVar8 = *(AiFltClassTy **)
                    ((int)&pAVar11->data->field_0004 + pAVar11->elementSize * local_c);
        }
      }
      uVar1 = pAVar8->field_007D;
      iVar7 = (*objPtr->vtable->vfunc_2C)();
      if (iVar7 == 0x78) {
        objPtr->field_0269 = (uint)uVar1;
      }
      st::fn_006B0C70((DArrayTy *)param_1,index);
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
      pAVar8 = pARam00000004;
      if (uVar12 < pAVar11->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pAVar8 = *(AiFltClassTy **)((int)&pAVar11->data->field_0004 + pAVar11->elementSize * uVar12);
      }
    }
    st::fn_00404200(pAVar8,(uint)objPtr,0);
    st::fn_006B0C70((DArrayTy *)param_1,index);
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
  STGameObjC *objPtr;
  AiFltClassTy *this_00;
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
          objPtr = nullptr;
        }
        else {
          objPtr = st::fn_004028BA
                             (g_allPlayers_007FA174,*(char *)&local_8->field_0024,*puVar4,CASE_1);
        }
        if (objPtr != nullptr) {
          iVar3 = (*objPtr->vtable->vfunc_2C)();
          if ((iVar3 < 1) || (0x28 < iVar3)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             (this_00 = (AiFltClassTy *)st::fn_00405B23(local_8,objPtr->field_081C),
             this_00 != nullptr)) {
            st::fn_00404200(this_00,(uint)objPtr,0);
            st::fn_006B0C70(param_1,index);
          }
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x292,0,iVar3,"%s",
                             "AiTactClassTy::GiveObjByGrpNum");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_tact.cpp",0x293);
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
  DArrayTy *array;
  int iVar2;
  InternalExceptionFrame local_50;
  AiTactClassTy *local_c;
  DArrayTy *local_8;

  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    array = (DArrayTy *)st::fn_00404DA9(local_c->field_0024);
    local_8 = array;
    st::fn_00403E04(this_00,(uint *)array);
    st::fn_004040F2(this_00,(uint *)array);
    if (array != nullptr) {
      st::fn_006AE110(array);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != nullptr) {
    st::fn_006AE110(local_8);
    local_8 = nullptr;
  }
  iVar2 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x2a8,0,errorCode,"%s",
                             "AiTactClassTy::InitDistrObj");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\ai\\ai_tact.cpp",0x2a9);
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
  undefined4 local_31;
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
    st::fn_00403CDD(this_00,-0x8000,local_3c);
    this_01 = (void *)st::fn_00405B23(this_00,param_1);
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
  iVar2 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x2fb,0,iVar3,"%s",
                             "AiTactClassTy::BackFromRepair");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_tact.cpp",0x2fc);
  return;
}

// 0068FD00 AiTactClassTy::GetAiMess
#line 4 "decomp/ST.exe/functions/0068FD00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GetAiMess */

int __thiscall st::fn_0068FD00(AiTactClassTy *this,AnonShape_0068FD00_A5257008 *param_1)

{
  undefined4 uVar1;
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
  undefined1 local_30;
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
    iVar7 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x36a,0,local_EAX_35,
                               "%s","AiTactClassTy::GetAiMess");
    if (iVar7 == 0) {
      st::fn_006A5E40(local_EAX_35,0,"E:\\__titans\\ai\\ai_tact.cpp",0x36b);
      return local_EAX_35;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (99 < *(uint *)param_1) {
    switch(*(uint *)param_1) {
    case 0x6a:
      local_8->field_009D = *(undefined4 *)&param_1->field_0x8;
      st::fn_00403E68(local_8,(uint *)param_1);
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
        st::fn_00403E68(local_8,local_3c);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x6e:
    case 0x74:
      st::fn_00403E68(local_8,(uint *)param_1);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x6f:
      iVar4 = st::fn_0040457F(local_8,*(int *)((int)&param_1->field_000A + 2));
      iVar8 = *(int *)((int)&param_1->field_000A + 2);
      *(int *)&param_1->field_0x8 = *(int *)&param_1->field_0x8 + iVar4;
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
            uVar1 = *(undefined4 *)((int)&param_1->field_000A + 2);
            local_30 = (undefined1)uVar1;
            uStack_2f = (undefined1)((uint)uVar1 >> 8);
            uStack_2e = (undefined2)((uint)uVar1 >> 0x10);
            st::fn_00401555(element_00a5->field_0004,local_3c);
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
             (element_00a5->field_0004 != nullptr)) {
            st::fn_00401555(element_00a5->field_0004,(uint *)param_1);
            st::fn_0040432C(g_playSystem_00802A38,*(uint *)(element_00a5->field_0004 + 8));
            st::fn_006B0C70((DArrayTy *)this_00->field_00A5,uVar9);
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
        st::fn_00403E04(local_8,*(uint **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (iVar8 == 1) {
        st::fn_004040F2(local_8,*(uint **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (iVar8 == 2) {
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
              (element_00a5->field_0004 != nullptr)) &&
             (st::fn_00401555(element_00a5->field_0004,(uint *)param_1),
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
st::fn_00690650(AiTactClassTy *this,AnonShape_00690650_F810CDF4 *param_1)

{
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
  undefined1 local_4b;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined4 local_18;
  byte local_14;
  undefined3 uStack_13;
  undefined4 local_10;
  AiTactClassTy *local_c;
  uint local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_10 = STReplaceLowWord((uint32_t)(in_EAX), (uint16_t)(param_1->field_0016));
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_20 = STReplaceLowWord((uint32_t)(unaff_EDI), (uint16_t)(param_1->field_001A));
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
  bVar2 = *(byte *)&this->field_0024;
  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
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
        pSVar7 = st::fn_004028BA
                           (g_allPlayers_007FA174,*(char *)&local_c->field_0024,(ushort)local_10,
                            CASE_1);
      }
      if ((pSVar7 != nullptr) &&
         (iVar6 = st::fn_00405B23(this_01,pSVar7->field_0030), iVar6 != 0)) {
        if (*(short *)(iVar6 + 0x7b) == 1) {
          sVar5 = (short)local_10;
        }
        else {
          sVar5 = -1;
        }
        uVar8 = st::fn_00404E44(this_01,*(short *)(iVar6 + 0x7d),sVar5);
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
                 (this_00 = element_00a5->field_0004, this_00 != nullptr)) {
                memset(local_54, 0, 0x34); /* compiler bulk-zero initialization */
                local_54[0] = 100;
                local_4b = 1;
                local_54[1] = local_c->field_012C;
                local_48 = *(undefined2 *)(iVar6 + 0x7d);
                local_4a = (undefined2)local_10;
                local_46 = *(undefined2 *)(iVar6 + 0x7b);
                local_44 = (undefined2)local_20;
                local_42 = local_14;
                st::fn_00401555(this_00,local_54);
                if ('\0' < local_4c) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_1c = CONCAT22(*(undefined2 *)(iVar6 + 0x7d),
                                       *(undefined2 *)(element_00a5->field_0004 + 0x7d));
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_18 = CONCAT22(*(undefined2 *)(iVar6 + 0x7b),(short)local_10);
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
    iVar10 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x433,0,iVar6,"%s",
                                "AiTactClassTy::HelpOrganize");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\ai\\ai_tact.cpp",0x434);
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
  AiTactClassTy *this_00;
  int iVar3;
  AiTactClassTy_field_00A5DArray *pAVar3;
  int iVar5;
  int iVar4;
  uint uVar6;
  undefined4 *puVar7;
  AiTactClassTy_field_00A5Element *element_00a5;
  bool bVar8;
  InternalExceptionFrame local_58;
  AiTactClassTy *local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
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
        local_10 = st::fn_00404511(local_14,(uint *)&local_c);
        st::fn_004025F9(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
        if (local_10 != nullptr) {
          st::fn_006AB060(&local_10);
        }
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_14->field_0099 == 0) {
          local_14->field_0099 = 1;
          st::fn_00402C7F(local_14);
        }
        else {
          st::fn_00402B49(local_14);
          st::fn_00404598(this_00);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        puVar7 = (message->arg0).ptr;
        if (puVar7 == nullptr) {
          st::fn_006A5E40
                    (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_tact.cpp",0x45e);
        }
        st::fn_004037C9(this_00,puVar7);
        if (puVar7[3] == 0) {
          this_00->field_001C = DAT_00808754;
        }
        else {
          this_00->field_001C = this_00->field_007E;
        }
        if (puVar7[3] == 0) {
          st::fn_00404741(this_00);
        }
      }
      else if (SVar1 == MESS_SHARED_0003) {
        st::fn_0040284C(local_14);
      }
    }
    else if (SVar1 == MESS_ID_ALLCREATE) {
      pAVar3 = local_14->field_00A5;
      if (0 < (int)pAVar3->count) {
        bVar8 = pAVar3->count != 0;
        do {
          if (bVar8) {
            element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar3, uVar6);
          }
          else {
            element_00a5 = nullptr;
          }
          local_8 = 0;
          if ((((AnonShape_005EFAE0_B406B78B *)element_00a5->field_0000 == nullptr) ||
              (iVar5 = st::fn_006E62D0
                                 (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)element_00a5->field_0000,
                                  &local_8), iVar5 != 0)) || (local_8 == 0)) {
            element_00a5->field_0004 = 0;
            element_00a5->field_0000 = nullptr;
          }
          else {
            element_00a5->field_0004 = local_8;
            *(AiTactClassTy **)(local_8 + 0x284) = this_00;
          }
          pAVar3 = this_00->field_00A5;
          uVar6 = uVar6 + 1;
          bVar8 = uVar6 < pAVar3->count;
        } while ((int)uVar6 < (int)pAVar3->count);
      }
    }
    else if (SVar1 == MESS_SHARED_5DD5) {
      st::fn_004046E2(local_14,(AnonShape_00690650_F810CDF4 *)message);
    }
    st::fn_006E5FD0(this_00,message);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact.cpp",0x4ad,0,iVar3,
                             "AiTactClassTy::GetMessage error mess->id == %lX Name=%d",message->id,
                             local_14->field_0018);
  if (iVar4 == 0) {
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_tact.cpp",0x4ae);
    return 0xffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

