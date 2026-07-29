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
  uint index;
  code *pcVar3;
  bool bVar4;
  AiTactClassTy *pAVar5;
  int iVar6;
  ushort *puVar7;
  STGameObjC *objPtr;
  AiFltClassTy *pAVar8;
  int iVar9;
  AiTactClassTy_field_00A5DArray *pAVar10;
  uint uVar11;
  uint uVar12;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  AiTactClassTy *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_8 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pAVar5 = local_8;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x276,0,iVar6,"%s",
                               "AiTactClassTy::GiveObjByFltType");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\ai\\ai_tact.cpp",0x277);
    return;
  }
  if ((param_1 == (uint *)0x0) || (param_1[3] == 0)) {
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  local_c = sub_0068E480(local_8,1);
  local_10 = sub_0068E480(pAVar5,2);
  local_14 = sub_0068E480(pAVar5,4);
  local_18 = sub_0068E480(pAVar5,0x10);
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
          puVar7 = (ushort *)(param_1[2] * index + param_1[7]);
        }
        else {
          puVar7 = (ushort *)0x0;
        }
        if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
          objPtr = (STGameObjC *)0x0;
        }
        else {
          objPtr = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,*(char *)&pAVar5->field_0024,*puVar7,CASE_1);
        }
        pAVar5 = local_8;
      } while (objPtr == (STGameObjC *)0x0);
      iVar6 = (*objPtr->vtable->vfunc_2C)();
      if ((iVar6 != 0x78) || ((int)local_c < 0)) break;
      pAVar10 = local_8->field_00A5;
      if ((pAVar10 == (AiTactClassTy_field_00A5DArray *)0x0) ||
         ((int)pAVar10->count <= (int)local_c)) {
        pAVar8 = (AiFltClassTy *)0x0;
      }
      else {
        pAVar8 = pARam00000004;
        if (local_c < pAVar10->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pAVar8 = *(AiFltClassTy **)
                    ((int)&pAVar10->data->field_0004 + pAVar10->elementSize * local_c);
        }
      }
      uVar1 = pAVar8->field_007D;
      iVar6 = (*objPtr->vtable->vfunc_2C)();
      if (iVar6 == 0x78) {
        objPtr->field_0269 = (uint)uVar1;
      }
      DArrayRemoveAt((DArrayTy *)param_1,index);
      pAVar5 = local_8;
    }
    if ((iVar6 < 0x32) || (0x73 < iVar6)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    uVar11 = local_c;
    pAVar5 = local_8;
    if ((bVar4) || (iVar6 == 0x78)) goto LAB_0068f509;
    sVar2 = local_8->field_0039;
    if (sVar2 == 1) {
      iVar9 = 8;
    }
    else if (sVar2 == 2) {
      iVar9 = 0x14;
    }
    else if (sVar2 == 3) {
      iVar9 = 0x1a;
    }
    else {
      iVar9 = 0;
    }
    uVar12 = local_10;
    if (iVar6 != iVar9) {
      if (sVar2 == 1) {
        iVar9 = 0xc;
      }
      else if (sVar2 == 2) {
        iVar9 = 0x18;
      }
      else if (sVar2 == 3) {
        iVar9 = 0x19;
      }
      else {
        iVar9 = 0;
      }
      uVar12 = local_18;
      uVar11 = local_14;
      if (iVar6 == iVar9) goto LAB_0068f509;
    }
  } while ((int)uVar12 < 0);
  pAVar10 = local_8->field_00A5;
  uVar11 = uVar12;
  goto LAB_0068f516;
LAB_0068f509:
  if (-1 < (int)uVar11) {
    pAVar10 = local_8->field_00A5;
LAB_0068f516:
    if ((pAVar10 == (AiTactClassTy_field_00A5DArray *)0x0) || ((int)pAVar10->count <= (int)uVar11))
    {
      pAVar8 = (AiFltClassTy *)0x0;
    }
    else {
      pAVar8 = pARam00000004;
      if (uVar11 < pAVar10->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pAVar8 = *(AiFltClassTy **)((int)&pAVar10->data->field_0004 + pAVar10->elementSize * uVar11);
      }
    }
    AiFltClassTy::_AddObjFlt(pAVar8,(uint)objPtr,0);
    DArrayRemoveAt((DArrayTy *)param_1,index);
    pAVar5 = local_8;
  }
  goto joined_r0x0068f3e2;
}

