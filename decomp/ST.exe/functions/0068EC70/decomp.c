#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ExecClaim */

void __thiscall AiTactClassTy::ExecClaim(AiTactClassTy *this,int param_1)

{
  AiFltClassTy *this_00;
  uint uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  AiTactClassTy *pAVar6;
  char cVar7;
  int iVar8;
  DArrayTy *pDVar9;
  int iVar10;
  void *pvVar11;
  void *pvVar12;
  uint *puVar13;
  bool bVar14;
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

  if ((this->field_0091 == 0) || ((uint)(this->field_0095 + this->field_0091) <= this->field_012C))
  {
    this->field_0095 = this->field_012C;
    local_88.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_88;
    local_10 = this;
    iVar8 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
    pAVar6 = local_10;
    if (iVar8 == 0) {
      local_8 = 0;
      pDVar9 = local_10->field_00BD;
      if (0 < (int)pDVar9->count) {
        bVar14 = pDVar9->count != 0;
        do {
          uVar4 = uStack_37;
          cVar7 = cStack_3b;
          if (bVar14) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, local_8) (runtime stride) */
            pvVar12 = (void *)(pDVar9->elementSize * local_8 + (int)pDVar9->data);
          }
          else {
            pvVar12 = (void *)0x0;
          }
          cStack_3b = (char)pvVar12;
          cVar3 = cStack_3b;
          uStack_37 = (undefined1)((uint)pvVar12 >> 0x18);
          uVar5 = uStack_37;
          uStack_37 = uVar4;
          switch(*(undefined4 *)((int)pvVar12 + 0x2c)) {
          case 0:
            if ((*(int *)((int)pvVar12 + 0x12) == 0) ||
               ((uint)(*(int *)((int)pvVar12 + 0x3a) + *(int *)((int)pvVar12 + 0x12)) <=
                pAVar6->field_012C)) {
              pDVar9 = pAVar6->field_00A5;
              local_c = 0;
              if (0 < (int)pDVar9->count) {
                bVar14 = pDVar9->count != 0;
                cStack_3b = cVar7;
                do {
                  if (bVar14) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, local_c) (runtime stride) */
                    pvVar11 = (void *)(pDVar9->elementSize * local_c + (int)pDVar9->data);
                  }
                  else {
                    pvVar11 = (void *)0x0;
                  }
                  this_00 = *(AiFltClassTy **)((int)pvVar11 + 4);
                  if (this_00 != (AiFltClassTy *)0x0) {
                    puVar13 = local_44;
                    for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
                      *puVar13 = 0;
                      puVar13 = puVar13 + 1;
                    }
                    local_44[1] = pAVar6->field_012C;
                    local_44[0] = 0x68;
                    uStack_3a = SUB42(pvVar12,0);
                    uStack_38 = (undefined1)((uint)pvVar12 >> 0x10);
                    cStack_3b = '\x01';
                    uStack_37 = uVar5;
                    AiFltClassTy::GetAiMess(this_00,local_44);
                    if ('\0' < local_3c) {
                      *(undefined4 *)((int)pvVar12 + 0x2c) = 1;
                      *(uint *)((int)pvVar12 + 0x34) = local_c;
                      *(undefined2 *)((int)pvVar12 + 0x38) = local_36;
                      *(uint *)((int)pvVar12 + 0x3a) = pAVar6->field_012C;
                      cVar7 = cStack_3b;
                      break;
                    }
                  }
                  pDVar9 = pAVar6->field_00A5;
                  local_c = local_c + 1;
                  bVar14 = local_c < pDVar9->count;
                  cVar7 = cStack_3b;
                } while ((int)local_c < (int)pDVar9->count);
              }
            }
            else {
              *(undefined4 *)((int)pvVar12 + 0x2c) = 3;
            }
            break;
          case 1:
            if ((*(int *)((int)pvVar12 + 0xe) == 0) ||
               ((uint)(*(int *)((int)pvVar12 + 0x3a) + *(int *)((int)pvVar12 + 0xe)) <=
                pAVar6->field_012C)) {
              pDVar9 = pAVar6->field_00A5;
              if (*(uint *)((int)pvVar12 + 0x34) < pDVar9->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pvVar11 = (void *)(pDVar9->elementSize * *(uint *)((int)pvVar12 + 0x34) +
                                  (int)pDVar9->data);
              }
              else {
                pvVar11 = (void *)0x0;
              }
              if ((pvVar11 != (void *)0x0) && (*(int *)((int)pvVar11 + 4) != 0)) {
                puVar13 = local_44;
                for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar13 = 0;
                  puVar13 = puVar13 + 1;
                }
                local_44[1] = pAVar6->field_012C;
                local_44[0] = 0x69;
                uStack_3a = (undefined2)((uint)pvVar12 >> 8);
                uStack_38 = uVar5;
                AiFltClassTy::GetAiMess(*(AiFltClassTy **)((int)pvVar11 + 4),local_44);
                if ('\0' < local_3c) {
                  *(undefined4 *)((int)pvVar12 + 0x2c) = 2;
                }
                cVar7 = cStack_3b;
                if (local_3c < '\0') {
                  *(undefined4 *)((int)pvVar12 + 0x2c) = 3;
                }
                break;
              }
            }
            *(undefined4 *)((int)pvVar12 + 0x2c) = 3;
            break;
          case 2:
          case 3:
            uVar1 = *(uint *)((int)pvVar12 + 0x30);
            cStack_3b = cVar7;
            if (-1 < (int)uVar1) {
              pDVar9 = pAVar6->field_00A5;
              if (uVar1 < pDVar9->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, uVar1) (runtime stride) */
                pvVar11 = (void *)(pDVar9->elementSize * uVar1 + (int)pDVar9->data);
              }
              else {
                pvVar11 = (void *)0x0;
              }
              if ((pvVar11 != (void *)0x0) && (*(int *)((int)pvVar11 + 4) != 0)) {
                puVar13 = local_44;
                for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar13 = 0;
                  puVar13 = puVar13 + 1;
                }
                local_44[1] = pAVar6->field_012C;
                local_44[0] = 0x6b;
                cStack_3b = (char)((uint)pvVar12 >> 8);
                uStack_3a = (undefined2)((uint)pvVar12 >> 0x10);
                local_3c = cVar3;
                AiFltClassTy::GetAiMess(*(AiFltClassTy **)((int)pvVar11 + 4),local_44);
              }
            }
            FUN_006b0c70(pAVar6->field_00BD,local_8);
            local_8 = local_8 - 1;
            cVar7 = cStack_3b;
          }
          cStack_3b = cVar7;
          pDVar9 = pAVar6->field_00BD;
          local_8 = local_8 + 1;
          bVar14 = local_8 < pDVar9->count;
        } while ((int)local_8 < (int)pDVar9->count);
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

