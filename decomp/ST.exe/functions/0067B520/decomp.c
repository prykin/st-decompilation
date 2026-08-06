#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::ExecTech
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall ExecTech(AiPlrClassTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0067B8E6 RET | 0067B92E RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall AiPlrClassTy::ExecTech(AiPlrClassTy *this)

{
  short sVar1;
  AiPlrClassTy *this_00;
  undefined1 uVar3;
  int iVar4;
  AiPlrClassTy_field_06A1DArray *array;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  DArrayTy *pDVar8;
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

  if (((this->field_0695 != nullptr) && (g_allPlayers_007FA174 != nullptr)) &&
     ((this->field_066E == 0 || (this->field_0672 + this->field_066E <= this->field_06FE)))) {
    this->field_0672 = this->field_06FE;
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    local_18 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
    this_00 = local_18;
    if (iVar4 == 0) {
      local_10 = 0;
      array = local_18->field_06A1;
      if (0 < (int)array->count) {
        bVar13 = array->count != 0;
        do {
          uVar5 = local_10;
          if (bVar13) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pvVar10 = (void *)((int)&array->data->field_0000 + array->elementSize * local_10);
          }
          else {
            pvVar10 = nullptr;
          }
          switch(STField<undefined1>(pvVar10,7)) {
          case 0:
            sVar1 = STField<short>(pvVar10,3);
            iVar4 = thunk_FUN_004e60d0(this_00->field_05D7,(int)STField<short>(pvVar10,1));
            if (iVar4 < sVar1) {
              iVar4 = thunk_FUN_004e5f90(this_00->field_05D7,(int)STField<short>(pvVar10,1));
              if (iVar4 == 0) {
                pSVar11 = (STGameObjC *)(int)STField<short>(pvVar10,1);
                local_14 = (int)STField<short>(pvVar10,3);
                local_8 = pSVar11;
                iVar4 = thunk_FUN_004e5910(this_00->field_05D7,(uint)pSVar11);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if ((iVar4 == 0) ||
                   (bVar13 = thunk_FUN_004e5c40((byte *)this_00->field_05D7,(uint)pSVar11),
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
                  pDVar8 = this_00->field_0695;
                  local_c = 0;
                  uVar5 = pDVar8->count;
                  if (0 < (int)uVar5) {
                    do {
                      uVar9 = local_c;
                      if (((pDVar8 == nullptr) || ((int)local_c < 0)) ||
                         ((int)uVar5 <= (int)local_c)) {
LAB_0067b724:
                        local_8 = nullptr;
                      }
                      else {
                        if (local_c < uVar5) {
                          puVar6 = DArrayAt<undefined4>(pDVar8, local_c);
                        }
                        else {
                          puVar6 = nullptr;
                        }
                        if (puVar6[1] == 0) goto LAB_0067b724;
                        local_8 = (STGameObjC *)*puVar6;
                      }
                      if (local_8 != nullptr) {
                        pAVar12 = local_4c;
                        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
                          *(undefined4 *)pAVar12 = 0;
                          pAVar12 = (AnonShape_0068FD00_A5257008 *)&pAVar12->field_0x4;
                        }
                        STPiece<4,4>(local_4c[0]) = this_00->field_06FE;
                        STPiece<0,4>(local_4c[0]) = 0x73;
                        local_4c[0].field_0009 = 1;
                        local_4c[0].field_000A = pvVar10;
                        if (&stack0x00000000 != (undefined1 *)0x4c) {
                          AiTactClassTy::GetAiMess((AiTactClassTy *)local_8,local_4c);
                          uVar9 = local_c;
                        }
                        if ('\0' < (char)STPiece<8,1>(local_4c[0])) {
                          STField<undefined1>(pvVar10,7) = 1;
                          STField<undefined2>(pvVar10,8) = STPiece<14,2>(local_4c[0]);
                          break;
                        }
                      }
                      pDVar8 = this_00->field_0695;
                      local_c = uVar9 + 1;
                      uVar5 = pDVar8->count;
                    } while ((int)local_c < (int)uVar5);
                  }
                }
              }
            }
            else {
              STField<undefined1>(pvVar10,7) = 2;
            }
            break;
          case 1:
            if (g_allPlayers_007FA174 == nullptr) {
              local_8 = nullptr;
            }
            else {
              local_8 = STAllPlayersC::GetObjPtr
                                  (g_allPlayers_007FA174,*(char *)&this_00->field_05D7,
                                   STField<ushort>(pvVar10,8),CASE_1);
            }
            if (local_8 == nullptr) {
              STField<undefined1>(pvVar10,7) = 0;
              STField<undefined2>(pvVar10,8) = 0;
            }
            else {
              sVar1 = STField<short>(pvVar10,3);
              iVar4 = thunk_FUN_004e60d0(this_00->field_05D7,(int)STField<short>(pvVar10,1));
              if (iVar4 < sVar1) {
                iVar4 = thunk_FUN_004e3800(local_8,(int)STField<short>(pvVar10,1),
                                           (int)STField<short>(pvVar10,3));
                if (iVar4 == 0) {
                  STField<undefined1>(pvVar10,7) = 0;
                  STField<undefined2>(pvVar10,8) = 0;
                }
              }
              else {
                STField<undefined1>(pvVar10,7) = 2;
              }
            }
            break;
          case 2:
          case 3:
            DArrayRemoveAt((DArrayTy *)array,local_10);
            local_10 = uVar5 - 1;
          }
          array = this_00->field_06A1;
          local_10 = local_10 + 1;
          bVar13 = local_10 < array->count;
        } while ((int)local_10 < (int)array->count);
      }
      if (((g_allPlayers_007FA174 != nullptr) && (this_00->field_0662 == '\x01')) &&
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
    iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x40d,0,iVar4,"%s",
                               "AiPlrClassTy::ExecTech");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_plr.cpp",0x40e);
  }
  return;
}

