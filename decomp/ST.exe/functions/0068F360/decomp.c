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
  bool bVar4;
  AiTactClassTy *pAVar5;
  int iVar6;
  ushort *puVar6;
  STGameObjC *this_00;
  int iVar7;
  AiFltClassTy *pAVar8;
  int iVar9;
  int iVar10;
  AiTactClassTy_field_00A5DArray *pAVar11;
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
  if ((param_1 == nullptr) || (param_1[3] == 0)) {
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  /* ST_CALLSITE[0068F3B2]: CALL 0x00404688; direct=00404688 AiTactClassTy::sub_0068E480 */
  local_c = sub_0068E480(local_8,1);
  /* ST_CALLSITE[0068F3BE]: CALL 0x00404688; direct=00404688 AiTactClassTy::sub_0068E480 */
  local_10 = sub_0068E480(pAVar5,2);
  /* ST_CALLSITE[0068F3CA]: CALL 0x00404688; direct=00404688 AiTactClassTy::sub_0068E480 */
  local_14 = sub_0068E480(pAVar5,4);
  /* ST_CALLSITE[0068F3D6]: CALL 0x00404688; direct=00404688 AiTactClassTy::sub_0068E480 */
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
          puVar6 = (ushort *)(param_1[2] * index + param_1[7]);
        }
        else {
          puVar6 = nullptr;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          this_00 = nullptr;
        }
        else {
          /* ST_CALLSITE[0068F415]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          this_00 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)&pAVar5->field_0024,*puVar6,CASE_1);
        }
        pAVar5 = local_8;
      } while (this_00 == nullptr);
      /* ST_CALLSITE[0068F42C]: CALL dword ptr [EDX + 0x2c] */
      iVar7 = this_00->vfunc_2C();
      if ((iVar7 != 0x78) || ((int)local_c < 0)) break;
      pAVar11 = local_8->field_00A5;
      if ((pAVar11 == nullptr) ||
         ((int)pAVar11->count <= (int)local_c)) {
        pAVar8 = nullptr;
      }
      else {
        pAVar8 = pARam00000004;
        if (local_c < pAVar11->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pAVar8 = *(AiFltClassTy **)
                    ((int)&pAVar11->data->field_0004 + pAVar11->elementSize * local_c);
        }
      }
      uVar1 = pAVar8->field_007D;
      /* ST_CALLSITE[0068F472]: CALL dword ptr [EDX + 0x2c] */
      iVar7 = this_00->vfunc_2C();
      if (iVar7 == 0x78) {
        this_00->field_0269 = (uint)uVar1;
      }
      DArrayRemoveAt((DArrayTy *)param_1,index);
      pAVar5 = local_8;
    }
    if ((iVar7 < 0x32) || (0x73 < iVar7)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    uVar12 = local_c;
    pAVar5 = local_8;
    if ((bVar4) || (iVar7 == 0x78)) goto LAB_0068f509;
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
  pAVar11 = local_8->field_00A5;
  uVar12 = uVar13;
  goto LAB_0068f516;
LAB_0068f509:
  if (-1 < (int)uVar12) {
    pAVar11 = local_8->field_00A5;
LAB_0068f516:
    if ((pAVar11 == nullptr) || ((int)pAVar11->count <= (int)uVar12))
    {
      pAVar8 = nullptr;
    }
    else {
      pAVar8 = pARam00000004;
      if (uVar12 < pAVar11->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pAVar8 = *(AiFltClassTy **)((int)&pAVar11->data->field_0004 + pAVar11->elementSize * uVar12);
      }
    }
    /* ST_CALLSITE[0068F551]: CALL 0x00404200; direct=00404200 AiFltClassTy::_AddObjFlt */
    AiFltClassTy::_AddObjFlt(pAVar8,(uint)this_00,0);
    DArrayRemoveAt((DArrayTy *)param_1,index);
    pAVar5 = local_8;
  }
  goto joined_r0x0068f3e2;
}

