#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::ExecTech */

void __thiscall AiPlrClassTy::ExecTech(AiPlrClassTy *this,void *param_1)

{
  short sVar1;
  code *pcVar2;
  AiPlrClassTy *this_00;
  undefined1 uVar3;
  int iVar4;
  DArrayTy *pDVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  STGameObjC *pSVar11;
  AnonShape_0068FD00_A5257008 *pAVar12;
  bool bVar13;
  int local_c8 [7];
  int local_ac [7];
  InternalExceptionFrame local_90;
  AnonShape_0068FD00_A5257008 local_4c [3];
  AiPlrClassTy *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  STGameObjC *local_8;

  if (((this->field_0695 != (DArrayTy *)0x0) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) &&
     ((this->field_066E == 0 || (this->field_0672 + this->field_066E <= this->field_06FE)))) {
    this->field_0672 = this->field_06FE;
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    local_18 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
    this_00 = local_18;
    if (iVar4 == 0) {
      local_10 = 0;
      pDVar5 = local_18->field_06A1;
      if (0 < (int)pDVar5->count) {
        bVar13 = pDVar5->count != 0;
        do {
          uVar6 = local_10;
          if (bVar13) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, local_10) (runtime stride) */
            pvVar10 = (void *)(pDVar5->elementSize * local_10 + (int)pDVar5->data);
          }
          else {
            pvVar10 = (void *)0x0;
          }
          switch(*(undefined1 *)((int)pvVar10 + 7)) {
          case 0:
            sVar1 = *(short *)((int)pvVar10 + 3);
            iVar4 = thunk_FUN_004e60d0(this_00->field_05D7,(int)*(short *)((int)pvVar10 + 1));
            if (iVar4 < sVar1) {
              iVar4 = thunk_FUN_004e5f90(this_00->field_05D7,(int)*(short *)((int)pvVar10 + 1));
              if (iVar4 == 0) {
                pSVar11 = (STGameObjC *)(int)*(short *)((int)pvVar10 + 1);
                local_14 = (int)*(short *)((int)pvVar10 + 3);
                local_8 = pSVar11;
                iVar4 = thunk_FUN_004e5910(this_00->field_05D7,(uint)pSVar11);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if ((iVar4 == 0) ||
                   (bVar13 = thunk_FUN_004e5c40(this_00->field_05D7,(uint)pSVar11),
                   CONCAT31(extraout_var,bVar13) == 0)) {
LAB_0067b6db:
                  bVar13 = false;
                }
                else {
                  uVar3 = thunk_FUN_004e6140(this_00->field_05D7,(int)pSVar11);
                  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                  local_c = CONCAT31(extraout_var_00,uVar3);
                  iVar4 = thunk_FUN_004e60d0(this_00->field_05D7,(int)pSVar11);
                  if (((int)local_c <= iVar4) ||
                     ((iVar4 = thunk_FUN_004e60d0(this_00->field_05D7,(int)pSVar11),
                      iVar4 != local_14 + -1 ||
                      (iVar4 = thunk_FUN_004e5f90(this_00->field_05D7,(uint)pSVar11), iVar4 != 0))))
                  goto LAB_0067b6db;
                  bVar13 = true;
                }
                if (bVar13) {
                  pDVar5 = this_00->field_0695;
                  local_c = 0;
                  uVar6 = pDVar5->count;
                  if (0 < (int)uVar6) {
                    do {
                      uVar9 = local_c;
                      if (((pDVar5 == (DArrayTy *)0x0) || ((int)local_c < 0)) ||
                         ((int)uVar6 <= (int)local_c)) {
LAB_0067b724:
                        local_8 = (STGameObjC *)0x0;
                      }
                      else {
                        if (local_c < uVar6) {
                          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, local_c) (runtime stride) */
                          puVar7 = (undefined4 *)(pDVar5->elementSize * local_c + (int)pDVar5->data)
                          ;
                        }
                        else {
                          puVar7 = (undefined4 *)0x0;
                        }
                        if (puVar7[1] == 0) goto LAB_0067b724;
                        local_8 = (STGameObjC *)*puVar7;
                      }
                      if (local_8 != (STGameObjC *)0x0) {
                        pAVar12 = local_4c;
                        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
                          *(undefined4 *)pAVar12 = 0;
                          pAVar12 = (AnonShape_0068FD00_A5257008 *)&pAVar12->field_0x4;
                        }
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_4c[0]._4_4_ = this_00->field_06FE;
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_4c[0]._0_4_ = 0x73;
                        local_4c[0].field_0009 = 1;
                        local_4c[0].field_000A = pvVar10;
                        if (&stack0x00000000 != (undefined1 *)0x4c) {
                          AiTactClassTy::GetAiMess((AiTactClassTy *)local_8,local_4c);
                          uVar9 = local_c;
                        }
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        if ('\0' < (char)local_4c[0]._8_1_) {
                          *(undefined1 *)((int)pvVar10 + 7) = 1;
                          *(undefined2 *)((int)pvVar10 + 8) = local_4c[0]._14_2_;
                          break;
                        }
                      }
                      pDVar5 = this_00->field_0695;
                      local_c = uVar9 + 1;
                      uVar6 = pDVar5->count;
                    } while ((int)local_c < (int)uVar6);
                  }
                }
              }
            }
            else {
              *(undefined1 *)((int)pvVar10 + 7) = 2;
            }
            break;
          case 1:
            if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
              local_8 = (STGameObjC *)0x0;
            }
            else {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_8 = STAllPlayersC::GetObjPtr
                                  (g_allPlayers_007FA174,*(char *)&this_00->field_05D7,
                                   CONCAT22((short)((uint)pDVar5 >> 0x10),
                                            *(undefined2 *)((int)pvVar10 + 8)),CASE_1);
            }
            if (local_8 == (STGameObjC *)0x0) {
              *(undefined1 *)((int)pvVar10 + 7) = 0;
              *(undefined2 *)((int)pvVar10 + 8) = 0;
            }
            else {
              sVar1 = *(short *)((int)pvVar10 + 3);
              iVar4 = thunk_FUN_004e60d0(this_00->field_05D7,(int)*(short *)((int)pvVar10 + 1));
              if (iVar4 < sVar1) {
                iVar4 = thunk_FUN_004e3800(local_8,(int)*(short *)((int)pvVar10 + 1),
                                           (int)*(short *)((int)pvVar10 + 3));
                if (iVar4 == 0) {
                  *(undefined1 *)((int)pvVar10 + 7) = 0;
                  *(undefined2 *)((int)pvVar10 + 8) = 0;
                }
              }
              else {
                *(undefined1 *)((int)pvVar10 + 7) = 2;
              }
            }
            break;
          case 2:
          case 3:
            FUN_006b0c70(pDVar5,local_10);
            local_10 = uVar6 - 1;
          }
          pDVar5 = this_00->field_06A1;
          local_10 = local_10 + 1;
          bVar13 = local_10 < pDVar5->count;
        } while ((int)local_10 < (int)pDVar5->count);
      }
      if (((g_allPlayers_007FA174 != (STAllPlayersC *)0x0) && (this_00->field_0662 == '\x01')) &&
         (iVar4 = thunk_FUN_0067b1a0(this_00,(int)this_00->field_0660),
         iVar4 < (int)((-(uint)(this_00->field_05EC != 3) & 0xfffffffc) + 5))) {
        thunk_FUN_004e7230(this_00->field_05D7,(int)this_00->field_0660,local_c8,local_ac);
        iVar4 = 0;
        do {
          if (*(int *)((int)local_c8 + iVar4) == 0) {
            g_currentExceptionFrame = local_90.previous;
            return;
          }
          SetTech(this_00,*(int *)((int)local_c8 + iVar4),*(int *)((int)local_ac + iVar4),
                  (int)this_00->field_0663,(char)this_00->field_0660);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0x1c);
      }
      g_currentExceptionFrame = local_90.previous;
      return;
    }
    g_currentExceptionFrame = local_90.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x40d,0,iVar4,"%s",
                               "AiPlrClassTy::ExecTech");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_plr.cpp",0x40e);
  }
  return;
}

