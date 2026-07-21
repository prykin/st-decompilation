#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByFltType

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0068F7E0 -> 0068F360 @ 0068F836 */

void __thiscall AiTactClassTy::GiveObjByFltType(AiTactClassTy *this,uint *param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  AiTactClassTy *pAVar6;
  int iVar7;
  undefined2 *puVar8;
  STGameObjC *objPtr;
  AiFltClassTy *pAVar9;
  int iVar10;
  DArrayTy *pDVar11;
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
  iVar7 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pAVar6 = local_8;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x276,0,iVar7,&DAT_007a4ccc,
                                s_AiTactClassTy__GiveObjByFltType_007d57dc);
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar7,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x277);
    return;
  }
  if ((param_1 == (uint *)0x0) || (param_1[3] == 0)) {
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  local_c = thunk_FUN_0068e480(local_8,1);
  local_10 = thunk_FUN_0068e480(pAVar6,2);
  local_14 = thunk_FUN_0068e480(pAVar6,4);
  local_18 = thunk_FUN_0068e480(pAVar6,0x10);
  uVar3 = param_1[3];
joined_r0x0068f3e2:
  do {
    while( true ) {
      do {
        uVar3 = uVar3 - 1;
        if ((int)uVar3 < 0) {
          g_currentExceptionFrame = local_5c.previous;
          return;
        }
        if (uVar3 < param_1[3]) {
          puVar8 = (undefined2 *)(param_1[2] * uVar3 + param_1[7]);
        }
        else {
          puVar8 = (undefined2 *)0x0;
        }
        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
          objPtr = (STGameObjC *)0x0;
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          objPtr = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,pAVar6->field_0x24,
                              CONCAT22((short)((uint)puVar8 >> 0x10),*puVar8),CASE_1);
        }
        pAVar6 = local_8;
      } while (objPtr == (STGameObjC *)0x0);
      iVar7 = (*objPtr->vtable->vfunc_2C)();
      if ((iVar7 != 0x78) || ((int)local_c < 0)) break;
      pDVar11 = local_8->field_00A5;
      if ((pDVar11 == (DArrayTy *)0x0) || ((int)pDVar11->count <= (int)local_c)) {
        pAVar9 = (AiFltClassTy *)0x0;
      }
      else {
        pAVar9 = pARam00000004;
        if (local_c < pDVar11->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pAVar9 = *(AiFltClassTy **)((int)pDVar11->data + pDVar11->elementSize * local_c + 4);
        }
      }
      uVar1 = pAVar9->field_007D;
      iVar7 = (*objPtr->vtable->vfunc_2C)();
      if (iVar7 == 0x78) {
        *(uint *)&objPtr[1].field_0x98 = (uint)uVar1;
      }
      FUN_006b0c70((DArrayTy *)param_1,uVar3);
      pAVar6 = local_8;
    }
    if ((iVar7 < 0x32) || (0x73 < iVar7)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar12 = local_c;
    pAVar6 = local_8;
    if ((bVar5) || (iVar7 == 0x78)) goto LAB_0068f509;
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
  pDVar11 = local_8->field_00A5;
  uVar12 = uVar13;
  goto LAB_0068f516;
LAB_0068f509:
  if (-1 < (int)uVar12) {
    pDVar11 = local_8->field_00A5;
LAB_0068f516:
    if ((pDVar11 == (DArrayTy *)0x0) || ((int)pDVar11->count <= (int)uVar12)) {
      pAVar9 = (AiFltClassTy *)0x0;
    }
    else {
      pAVar9 = pARam00000004;
      if (uVar12 < pDVar11->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pAVar9 = *(AiFltClassTy **)((int)pDVar11->data + pDVar11->elementSize * uVar12 + 4);
      }
    }
    AiFltClassTy::_AddObjFlt(pAVar9,(uint)objPtr,0);
    FUN_006b0c70((DArrayTy *)param_1,uVar3);
    pAVar6 = local_8;
  }
  goto joined_r0x0068f3e2;
}

