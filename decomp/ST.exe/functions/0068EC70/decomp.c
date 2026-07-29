#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ExecClaim */

void __thiscall AiTactClassTy::ExecClaim(AiTactClassTy *this,int param_1)

{
  AiFltClassTy *pAVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  AiTactClassTy *pAVar6;
  char cVar7;
  int iVar8;
  AiTactClassTy_field_00BDDArray *pAVar9;
  AiTactClassTy_field_00A5Element *element_00a5;
  int iVar11;
  AiTactClassTy_field_00A5DArray *pAVar12;
  AiTactClassTy_field_00A5Element *element_00a5_2;
  AiTactClassTy_field_00BDElement *element_00bd;
  bool bVar16;
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
      pAVar9 = local_10->field_00BD;
      if (0 < (int)pAVar9->count) {
        bVar16 = pAVar9->count != 0;
        do {
          uVar4 = uStack_37;
          cVar7 = cStack_3b;
          if (bVar16) {
            element_00bd = DArrayAt<AiTactClassTy_field_00BDElement>(pAVar9, local_8);
          }
          else {
            element_00bd = (AiTactClassTy_field_00BDElement *)0x0;
          }
          cStack_3b = (char)element_00bd;
          cVar3 = cStack_3b;
          uStack_37 = (undefined1)((uint)element_00bd >> 0x18);
          uVar5 = uStack_37;
          uStack_37 = uVar4;
          switch(element_00bd->state) {
          case 0:
            if ((element_00bd->field_0012 == 0) ||
               ((uint)(element_00bd->field_003A + element_00bd->field_0012) <= pAVar6->field_012C)) {
              pAVar12 = pAVar6->field_00A5;
              local_c = 0;
              if (0 < (int)pAVar12->count) {
                bVar16 = pAVar12->count != 0;
                cStack_3b = cVar7;
                do {
                  if (bVar16) {
                    element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar12, local_c);
                  }
                  else {
                    element_00a5 = (AiTactClassTy_field_00A5Element *)0x0;
                  }
                  pAVar1 = (AiFltClassTy *)element_00a5->field_0004;
                  if (pAVar1 != (AiFltClassTy *)0x0) {
                    memset(local_44, 0, 0x34); /* compiler bulk-zero initialization */
                    iVar8 = 0;
                    local_44[1] = pAVar6->field_012C;
                    local_44[0] = 0x68;
                    uStack_3a = SUB42(element_00bd,0);
                    uStack_38 = (undefined1)((uint)element_00bd >> 0x10);
                    cStack_3b = '\x01';
                    uStack_37 = uVar5;
                    AiFltClassTy::GetAiMess(pAVar1,local_44);
                    if ('\0' < local_3c) {
                      element_00bd->state = 1;
                      element_00bd->field_0034 = local_c;
                      element_00bd->field_0038 = local_36;
                      element_00bd->field_003A = pAVar6->field_012C;
                      cVar7 = cStack_3b;
                      break;
                    }
                  }
                  pAVar12 = pAVar6->field_00A5;
                  local_c = local_c + 1;
                  bVar16 = local_c < pAVar12->count;
                  cVar7 = cStack_3b;
                } while ((int)local_c < (int)pAVar12->count);
              }
            }
            else {
              element_00bd->state = 3;
            }
            break;
          case 1:
            if ((element_00bd->field_000E == 0) ||
               ((uint)(element_00bd->field_003A + element_00bd->field_000E) <= pAVar6->field_012C)) {
              pAVar12 = pAVar6->field_00A5;
              if (element_00bd->field_0034 < pAVar12->count) {
                element_00a5_2 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar12, element_00bd->field_0034);
              }
              else {
                element_00a5_2 = (AiTactClassTy_field_00A5Element *)0x0;
              }
              if ((element_00a5_2 != (AiTactClassTy_field_00A5Element *)0x0) && (element_00a5_2->field_0004 != 0)) {
                memset(local_44, 0, 0x34); /* compiler bulk-zero initialization */
                iVar8 = 0;
                local_44[1] = pAVar6->field_012C;
                local_44[0] = 0x69;
                uStack_3a = (undefined2)((uint)element_00bd >> 8);
                uStack_38 = uVar5;
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
            pAVar1 = element_00bd->field_0030;
            cStack_3b = cVar7;
            if (-1 < (int)pAVar1) {
              pAVar12 = pAVar6->field_00A5;
              if (pAVar1 < (AiFltClassTy *)pAVar12->count) {
                element_00a5_2 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar12, (int)pAVar1);
              }
              else {
                element_00a5_2 = (AiTactClassTy_field_00A5Element *)0x0;
              }
              if ((element_00a5_2 != (AiTactClassTy_field_00A5Element *)0x0) && (element_00a5_2->field_0004 != 0)) {
                memset(local_44, 0, 0x34); /* compiler bulk-zero initialization */
                local_44[1] = pAVar6->field_012C;
                local_44[0] = 0x6b;
                cStack_3b = (char)((uint)element_00bd >> 8);
                uStack_3a = (undefined2)((uint)element_00bd >> 0x10);
                local_3c = cVar3;
                AiFltClassTy::GetAiMess(element_00a5_2->field_0004,local_44);
              }
            }
            FUN_006b0c70((DArrayTy *)pAVar6->field_00BD,local_8);
            local_8 = local_8 - 1;
            cVar7 = cStack_3b;
          }
          cStack_3b = cVar7;
          pAVar9 = pAVar6->field_00BD;
          local_8 = local_8 + 1;
          bVar16 = local_8 < pAVar9->count;
        } while ((int)local_8 < (int)pAVar9->count);
      }
      g_currentExceptionFrame = local_88.previous;
      return;
    }
    g_currentExceptionFrame = local_88.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x1ff,0,iVar8,"%s",
                                "AiTactClassTy::ExecClaim");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\ai\\ai_tact.cpp",0x200);
  }
  return;
}

