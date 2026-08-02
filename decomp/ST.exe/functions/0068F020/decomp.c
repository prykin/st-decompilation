#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByClaim

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0068F7E0 -> 0068F020 @ 0068F82E

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall AiTactClassTy::GiveObjByClaim(AiTactClassTy *this,uint *param_1)

{
  ushort uVar1;
  AiTactClassTy_field_00BDDArray *pAVar2;
  uint uVar3;
  code *pcVar4;
  AiTactClassTy *this_00;
  int iVar5;
  ushort *puVar6;
  STGameObjC *objPtr;
  AiTactClassTy_field_00A5Element *element_00a5;
  AiTactClassTy_field_00BDElement *element_00bd_2;
  int iVar8;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 == 0) {
    if ((param_1 != nullptr) && (param_1[3] != 0)) {
      ClaimSave(local_8);
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
            thunk_FUN_00660d40(element_00a5->field_0004);
          }
          pAVar9 = this_00->field_00A5;
          uVar10 = uVar10 + 1;
          bVar11 = uVar10 < pAVar9->count;
        } while ((int)uVar10 < (int)pAVar9->count);
      }
      thunk_FUN_00676c40((DArrayTy *)this_00->field_00BD,thunk_FUN_0068e7d0);
      local_c = param_1[3];
      while (local_c = local_c - 1, -1 < (int)local_c) {
        if (local_c < param_1[3]) {
          puVar6 = (ushort *)(param_1[2] * local_c + param_1[7]);
        }
        else {
          puVar6 = nullptr;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          objPtr = nullptr;
        }
        else {
          objPtr = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,*(char *)&this_00->field_0024,*puVar6,CASE_1);
        }
        if (objPtr != nullptr) {
          iVar5 = (*objPtr->vtable->vfunc_2C)();
          if (iVar5 == 0x78) {
            iVar5 = (*objPtr->vtable->vfunc_2C)();
            if (iVar5 == 0x78) {
              iVar5 = objPtr->field_0259;
            }
            else {
              iVar5 = 0;
            }
            if ((iVar5 != 0) &&
               (uVar10 = thunk_FUN_0068e8c0(this_00,iVar5), this_00 = local_8, -1 < (int)uVar10)) {
              pAVar2 = local_8->field_00BD;
              if (uVar10 < pAVar2->count) {
                element_00bd_2 = DArrayAt<AiTactClassTy_field_00BDElement>(pAVar2, uVar10);
              }
              else {
                element_00bd_2 = nullptr;
              }
              if ((element_00bd_2 != nullptr) && (-1 < element_00bd_2->field_0030)) {
                uVar1 = element_00bd_2->field_000C;
                iVar5 = (*objPtr->vtable->vfunc_2C)();
                if (iVar5 == 0x78) {
                  objPtr->field_0269 = (uint)uVar1;
                }
                DArrayRemoveAt((DArrayTy *)param_1,local_c);
              }
              DArrayRemoveAt((DArrayTy *)local_8->field_00BD,uVar10);
              this_00 = local_8;
            }
          }
          else {
            uVar10 = thunk_FUN_0068e8c0(this_00,iVar5);
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
                AiFltClassTy::_AddObjFlt(this_01,(uint)objPtr,0);
                DArrayRemoveAt((DArrayTy *)param_1,local_c);
              }
              DArrayRemoveAt((DArrayTy *)this_00->field_00BD,uVar10);
            }
          }
        }
      }
      ClaimRestore(this_00);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x242,0,iVar5,"%s",
                             "AiTactClassTy::GiveObjByClaim");
  if (iVar8 == 0) {
    RaiseInternalException(iVar5,0,"E:\\__titans\\ai\\ai_tact.cpp",0x243);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

