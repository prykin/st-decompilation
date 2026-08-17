#include "../../pseudocode_runtime.h"


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

void __thiscall AiTactClassTy::ExecClaim(AiTactClassTy *this)

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
    iVar8 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
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
                    AiFltClassTy::GetAiMess(this_00,local_44);
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
                AiFltClassTy::GetAiMess(element_00a5_2->field_0004,local_44);
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
                AiFltClassTy::GetAiMess(element_00a5_2->field_0004,local_44);
              }
            }
            DArrayRemoveAt((DArrayTy *)pAVar6->field_00BD,local_8);
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
    iVar10 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x1ff,0,iVar8,"%s",
                                "AiTactClassTy::ExecClaim");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\ai\\ai_tact.cpp",0x200);
  }
  return;
}

