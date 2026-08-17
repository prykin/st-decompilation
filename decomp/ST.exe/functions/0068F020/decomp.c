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
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 == 0) {
    if ((param_1 != nullptr) && (param_1[3] != 0)) {
      /* ST_CALLSITE[0068F070]: CALL 0x00405af1; direct=00405AF1 AiTactClassTy::ClaimSave */
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
          this_01 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)&this_00->field_0024,*puVar5,CASE_1);
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
               (uVar10 = thunk_FUN_0068e8c0(this_00,iVar7), this_00 = local_8, -1 < (int)uVar10)) {
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
                DArrayRemoveAt((DArrayTy *)param_1,local_c);
              }
              DArrayRemoveAt((DArrayTy *)local_8->field_00BD,uVar10);
              this_00 = local_8;
            }
          }
          else {
            uVar10 = thunk_FUN_0068e8c0(this_00,iVar7);
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
                  this_02 = pARam00000004;
                  if (uVar3 < pAVar9->count) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                    this_02 = *(AiFltClassTy **)
                               ((int)&pAVar9->data->field_0004 + pAVar9->elementSize * uVar3);
                  }
                }
                /* ST_CALLSITE[0068F236]: CALL 0x00404200; direct=00404200 AiFltClassTy::_AddObjFlt */
                AiFltClassTy::_AddObjFlt(this_02,(uint)this_01,0);
                DArrayRemoveAt((DArrayTy *)param_1,local_c);
              }
              DArrayRemoveAt((DArrayTy *)this_00->field_00BD,uVar10);
            }
          }
        }
      }
      /* ST_CALLSITE[0068F1BB]: CALL 0x00403652; direct=00403652 AiTactClassTy::ClaimRestore */
      ClaimRestore(this_00);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x242,0,iVar5,"%s",
                             "AiTactClassTy::GiveObjByClaim");
  if (iVar6 == 0) {
    RaiseInternalException(iVar5,0,"E:\\__titans\\ai\\ai_tact.cpp",0x243);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

