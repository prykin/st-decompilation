#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByClaim

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0068F7E0 -> 0068F020 @ 0068F82E */

void __thiscall AiTactClassTy::GiveObjByClaim(AiTactClassTy *this,uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  AiTactClassTy *this_00;
  int iVar4;
  void *pvVar5;
  undefined2 *puVar6;
  STGameObjC *objPtr;
  int iVar7;
  DArrayTy *pDVar8;
  AiFltClassTy *this_01;
  uint uVar9;
  bool bVar10;
  InternalExceptionFrame local_50;
  uint local_c;
  AiTactClassTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 == 0) {
    if ((param_1 != (uint *)0x0) && (param_1[3] != 0)) {
      ClaimSave(local_8);
      pDVar8 = this_00->field_00A5;
      if (0 < (int)pDVar8->count) {
        bVar10 = pDVar8->count != 0;
        uVar9 = 0;
        do {
          if (bVar10) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar8, uVar9) (runtime stride) */
            pvVar5 = (void *)(pDVar8->elementSize * uVar9 + (int)pDVar8->data);
          }
          else {
            pvVar5 = (void *)0x0;
          }
          if ((pvVar5 != (void *)0x0) &&
             (*(AnonShape_00660D40_E58DF1E6 **)((int)pvVar5 + 4) !=
              (AnonShape_00660D40_E58DF1E6 *)0x0)) {
            thunk_FUN_00660d40(*(AnonShape_00660D40_E58DF1E6 **)((int)pvVar5 + 4));
          }
          pDVar8 = this_00->field_00A5;
          uVar9 = uVar9 + 1;
          bVar10 = uVar9 < pDVar8->count;
        } while ((int)uVar9 < (int)pDVar8->count);
      }
      thunk_FUN_00676c40(this_00->field_00BD,&LAB_0040242d);
      local_c = param_1[3];
      while (local_c = local_c - 1, -1 < (int)local_c) {
        if (local_c < param_1[3]) {
          puVar6 = (undefined2 *)(param_1[2] * local_c + param_1[7]);
        }
        else {
          puVar6 = (undefined2 *)0x0;
        }
        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
          objPtr = (STGameObjC *)0x0;
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          objPtr = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,*(char *)&this_00->field_0024,
                              CONCAT22((short)((uint)puVar6 >> 0x10),*puVar6),CASE_1);
        }
        if (objPtr != (STGameObjC *)0x0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)&objPtr->vtable->field_0x2c)();
          if (iVar4 == 0x78) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar4 = (**(code **)&objPtr->vtable->field_0x2c)();
            if (iVar4 == 0x78) {
              iVar4 = objPtr->field_0259;
            }
            else {
              iVar4 = 0;
            }
            if ((iVar4 != 0) &&
               (uVar9 = thunk_FUN_0068e8c0(this_00,iVar4), this_00 = local_8, -1 < (int)uVar9)) {
              pDVar8 = local_8->field_00BD;
              if (uVar9 < pDVar8->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar8, uVar9) (runtime stride) */
                pvVar5 = (void *)(pDVar8->elementSize * uVar9 + (int)pDVar8->data);
              }
              else {
                pvVar5 = (void *)0x0;
              }
              if ((pvVar5 != (void *)0x0) && (-1 < *(int *)((int)pvVar5 + 0x30))) {
                uVar1 = *(ushort *)((int)pvVar5 + 0xc);
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar4 = (**(code **)&objPtr->vtable->field_0x2c)();
                if (iVar4 == 0x78) {
                  objPtr->field_0269 = (uint)uVar1;
                }
                FUN_006b0c70((DArrayTy *)param_1,local_c);
              }
              FUN_006b0c70(local_8->field_00BD,uVar9);
              this_00 = local_8;
            }
          }
          else {
            uVar9 = thunk_FUN_0068e8c0(this_00,iVar4);
            if (-1 < (int)uVar9) {
              pDVar8 = this_00->field_00BD;
              if (uVar9 < pDVar8->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar8, uVar9) (runtime stride) */
                pvVar5 = (void *)(pDVar8->elementSize * uVar9 + (int)pDVar8->data);
              }
              else {
                pvVar5 = (void *)0x0;
              }
              if ((pvVar5 != (void *)0x0) &&
                 (uVar2 = *(uint *)((int)pvVar5 + 0x30), -1 < (int)uVar2)) {
                pDVar8 = this_00->field_00A5;
                if ((pDVar8 == (DArrayTy *)0x0) ||
                   (((int)uVar2 < 0 || ((int)pDVar8->count <= (int)uVar2)))) {
                  this_01 = (AiFltClassTy *)0x0;
                }
                else {
                  this_01 = pARam00000004;
                  if (uVar2 < pDVar8->count) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                    this_01 = *(AiFltClassTy **)
                               ((int)pDVar8->data + pDVar8->elementSize * uVar2 + 4);
                  }
                }
                AiFltClassTy::_AddObjFlt(this_01,(uint)objPtr,0);
                FUN_006b0c70((DArrayTy *)param_1,local_c);
              }
              FUN_006b0c70(this_00->field_00BD,uVar9);
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
  iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x242,0,iVar4,"%s",
                             "AiTactClassTy::GiveObjByClaim");
  if (iVar7 == 0) {
    RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_tact.cpp",0x243);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

