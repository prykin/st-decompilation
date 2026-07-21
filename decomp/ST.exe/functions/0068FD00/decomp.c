#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GetAiMess */

int __thiscall AiTactClassTy::GetAiMess(AiTactClassTy *this,AnonShape_0068FD00_A5257008 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  AiTactClassTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  InternalExceptionFrame local_80;
  uint local_3c [3];
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  AiTactClassTy *local_8;

  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x36a,0,iVar3,"%s",
                               "AiTactClassTy::GetAiMess");
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_tact.cpp",0x36b);
      return iVar3;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (99 < *(uint *)param_1) {
    switch(*(uint *)param_1) {
    case 0x6a:
      local_8->field_009D = *(undefined4 *)&param_1->field_0x8;
      thunk_FUN_00690230(local_8,(uint *)param_1);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x6c:
      if (param_1->field_0x8 == '\0') {
        puVar8 = local_3c;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        local_3c[0] = 0x6d;
        local_30 = 1;
        local_3c[1] = local_8->field_012C;
        uStack_2f = param_1->field_0009;
        uStack_2e = (undefined2)param_1->field_000A;
        uStack_2c = (undefined2)((uint)param_1->field_000A >> 0x10);
        thunk_FUN_00690230(local_8,local_3c);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x6e:
    case 0x74:
      thunk_FUN_00690230(local_8,(uint *)param_1);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x6f:
      iVar6 = thunk_FUN_0068e850(local_8,*(int *)((int)&param_1->field_000A + 2));
      iVar3 = *(int *)((int)&param_1->field_000A + 2);
      *(int *)&param_1->field_0x8 = *(int *)&param_1->field_0x8 + iVar6;
      iVar3 = thunk_FUN_0068e610(this_00,iVar3);
      *(int *)&param_1->field_0x8 = *(int *)&param_1->field_0x8 + iVar3;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x70:
      uVar7 = 0;
      pDVar4 = local_8->field_00A5;
      if (0 < (int)pDVar4->count) {
        bVar9 = pDVar4->count != 0;
        do {
          if (bVar9) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar7) (runtime stride) */
            pvVar5 = (void *)(pDVar4->elementSize * uVar7 + (int)pDVar4->data);
          }
          else {
            pvVar5 = (void *)0x0;
          }
          if ((pvVar5 != (void *)0x0) && (*(int *)((int)pvVar5 + 4) != 0)) {
            puVar8 = local_3c;
            for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            local_3c[1] = this_00->field_012C;
            local_3c[0] = 0x70;
            uVar1 = *(undefined4 *)((int)&param_1->field_000A + 2);
            local_30 = (undefined1)uVar1;
            uStack_2f = (undefined1)((uint)uVar1 >> 8);
            uStack_2e = (undefined2)((uint)uVar1 >> 0x10);
            AiFltClassTy::GetAiMess(*(AiFltClassTy **)((int)pvVar5 + 4),local_3c);
            if (0 < (int)local_3c[2]) {
              *(uint *)&param_1->field_0x8 = local_3c[2];
              g_currentExceptionFrame = local_80.previous;
              return 0;
            }
          }
          pDVar4 = this_00->field_00A5;
          uVar7 = uVar7 + 1;
          bVar9 = uVar7 < pDVar4->count;
          if ((int)pDVar4->count <= (int)uVar7) {
            g_currentExceptionFrame = local_80.previous;
            return 0;
          }
        } while( true );
      }
      break;
    case 0x71:
      uVar7 = local_8->field_00A5->count - 1;
      if (-1 < (int)uVar7) {
        do {
          pDVar4 = this_00->field_00A5;
          if (uVar7 < pDVar4->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar7) (runtime stride) */
            pvVar5 = (void *)(pDVar4->elementSize * uVar7 + (int)pDVar4->data);
          }
          else {
            pvVar5 = (void *)0x0;
          }
          if ((pvVar5 != (void *)0x0) &&
             (*(AiFltClassTy **)((int)pvVar5 + 4) != (AiFltClassTy *)0x0)) {
            AiFltClassTy::GetAiMess(*(AiFltClassTy **)((int)pvVar5 + 4),(uint *)param_1);
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(*(int *)((int)pvVar5 + 4) + 8));
            FUN_006b0c70(this_00->field_00A5,uVar7);
          }
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x72:
      iVar3 = *(int *)&param_1->field_0x8;
      if (iVar3 == 0) {
        GiveObjByClaim(local_8,*(uint **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (iVar3 == 1) {
        GiveObjByFltType(local_8,*(uint **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (iVar3 == 2) {
        GiveObjByGrpNum(local_8,*(DArrayTy **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x73:
      uVar7 = 0;
      pDVar4 = local_8->field_00A5;
      if (0 < (int)pDVar4->count) {
        bVar9 = pDVar4->count != 0;
        do {
          if (bVar9) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar7) (runtime stride) */
            pvVar5 = (void *)(pDVar4->elementSize * uVar7 + (int)pDVar4->data);
          }
          else {
            pvVar5 = (void *)0x0;
          }
          if (((pvVar5 != (void *)0x0) &&
              (*(AiFltClassTy **)((int)pvVar5 + 4) != (AiFltClassTy *)0x0)) &&
             (AiFltClassTy::GetAiMess(*(AiFltClassTy **)((int)pvVar5 + 4),(uint *)param_1),
             '\0' < (char)param_1->field_0x8)) {
            g_currentExceptionFrame = local_80.previous;
            return 0;
          }
          pDVar4 = this_00->field_00A5;
          uVar7 = uVar7 + 1;
          bVar9 = uVar7 < pDVar4->count;
        } while ((int)uVar7 < (int)pDVar4->count);
      }
    }
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

