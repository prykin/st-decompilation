#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GetAiMess */

int __thiscall AiTactClassTy::GetAiMess(AiTactClassTy *this,AnonShape_0068FD00_A5257008 *param_1)

{
  uint uVar1;
  AiTactClassTy *this_00;
  int local_EAX_35;
  int iVar4;
  int iVar3;
  AiTactClassTy_field_00A5DArray *pAVar5;
  AiTactClassTy_field_00A5Element *element_00a5;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar11;
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
  local_EAX_35 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x36a,0,local_EAX_35,
                               "%s","AiTactClassTy::GetAiMess");
    if (iVar7 == 0) {
      RaiseInternalException(local_EAX_35,0,"E:\\__titans\\ai\\ai_tact.cpp",0x36b);
      return local_EAX_35;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (99 < *(uint *)param_1) {
    switch(*(uint *)param_1) {
    case 0x6a:
      local_8->field_009D = *(undefined4 *)&param_1->field_0x8;
      /* ST_CALLSITE[0068FD63]: CALL 0x00403e68; direct=00403E68 AiTactClassTy::sub_00690230 */
      sub_00690230(local_8,(uint *)param_1);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x6c:
      if (param_1->field_0x8 == '\0') {
        memset(local_3c, 0, 0x34); /* compiler bulk-zero initialization */
        local_3c[0] = 0x6d;
        local_30 = 1;
        local_3c[1] = local_8->field_012C;
        uStack_2f = param_1->field_0009;
        uStack_2e = (undefined2)param_1->field_000A;
        uStack_2c = (undefined2)((uint)param_1->field_000A >> 0x10);
        /* ST_CALLSITE[0068FDBC]: CALL 0x00403e68; direct=00403E68 AiTactClassTy::sub_00690230 */
        sub_00690230(local_8,local_3c);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x6e:
    case 0x74:
      /* ST_CALLSITE[0068FDD8]: CALL 0x00403e68; direct=00403E68 AiTactClassTy::sub_00690230 */
      sub_00690230(local_8,(uint *)param_1);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x6f:
      iVar4 = thunk_FUN_0068e850(local_8,STField<int>(param_1,0xC));
      iVar8 = STField<int>(param_1,0xC);
      *(int *)&param_1->field_0x8 = *(int *)&param_1->field_0x8 + iVar4;
      /* ST_CALLSITE[0068FE0C]: CALL 0x00401d0c; direct=00401D0C AiTactClassTy::sub_0068E610 */
      iVar3 = sub_0068E610(this_00,iVar8);
      *(int *)&param_1->field_0x8 = *(int *)&param_1->field_0x8 + iVar3;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x70:
      uVar9 = 0;
      pAVar5 = local_8->field_00A5;
      if (0 < (int)pAVar5->count) {
        bVar11 = pAVar5->count != 0;
        do {
          if (bVar11) {
            element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar5, uVar9);
          }
          else {
            element_00a5 = nullptr;
          }
          if (((undefined4 *)element_00a5 != nullptr) && (element_00a5->field_0004 != 0)) {
            memset(local_3c, 0, 0x34); /* compiler bulk-zero initialization */
            local_3c[1] = this_00->field_012C;
            local_3c[0] = 0x70;
            uVar1 = STField<undefined4>(param_1,0xC);
            local_30 = (undefined1)uVar1;
            uStack_2f = (undefined1)((uint)uVar1 >> 8);
            uStack_2e = (undefined2)((uint)uVar1 >> 0x10);
            /* ST_CALLSITE[0068FE8C]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
            AiFltClassTy::GetAiMess(element_00a5->field_0004,local_3c);
            if (0 < (int)local_3c[2]) {
              *(uint *)&param_1->field_0x8 = local_3c[2];
              g_currentExceptionFrame = local_80.previous;
              return 0;
            }
          }
          pAVar5 = this_00->field_00A5;
          uVar9 = uVar9 + 1;
          bVar11 = uVar9 < pAVar5->count;
          if ((int)pAVar5->count <= (int)uVar9) {
            g_currentExceptionFrame = local_80.previous;
            return 0;
          }
        } while( true );
      }
      break;
    case 0x71:
      uVar9 = local_8->field_00A5->count - 1;
      if (-1 < (int)uVar9) {
        do {
          pAVar5 = this_00->field_00A5;
          if (uVar9 < pAVar5->count) {
            element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar5, uVar9);
          }
          else {
            element_00a5 = nullptr;
          }
          if (((undefined4 *)element_00a5 != nullptr) &&
             (element_00a5->field_0004 != nullptr)) {
            /* ST_CALLSITE[0068FF0E]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
            AiFltClassTy::GetAiMess(element_00a5->field_0004,(uint *)param_1);
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(element_00a5->field_0004 + 8));
            DArrayRemoveAt((DArrayTy *)this_00->field_00A5,uVar9);
          }
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x72:
      iVar8 = *(int *)&param_1->field_0x8;
      if (iVar8 == 0) {
        /* ST_CALLSITE[0068FF9F]: CALL 0x00403e04; direct=00403E04 AiTactClassTy::GiveObjByClaim */
        GiveObjByClaim(local_8,*(uint **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (iVar8 == 1) {
        /* ST_CALLSITE[0068FF80]: CALL 0x004040f2; direct=004040F2 AiTactClassTy::GiveObjByFltType */
        GiveObjByFltType(local_8,*(uint **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (iVar8 == 2) {
        /* ST_CALLSITE[0068FF61]: CALL 0x004057ae; direct=004057AE AiTactClassTy::GiveObjByGrpNum */
        GiveObjByGrpNum(local_8,*(DArrayTy **)((int)&param_1->field_000A + 2));
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x73:
      uVar9 = 0;
      pAVar5 = local_8->field_00A5;
      if (0 < (int)pAVar5->count) {
        bVar11 = pAVar5->count != 0;
        do {
          if (bVar11) {
            element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar5, uVar9);
          }
          else {
            element_00a5 = nullptr;
          }
          if ((((undefined4 *)element_00a5 != nullptr) &&
              (element_00a5->field_0004 != nullptr)) &&
             /* ST_CALLSITE[0068FFEA]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
             (AiFltClassTy::GetAiMess(element_00a5->field_0004,(uint *)param_1),
             '\0' < (char)param_1->field_0x8)) {
            g_currentExceptionFrame = local_80.previous;
            return 0;
          }
          pAVar5 = this_00->field_00A5;
          uVar9 = uVar9 + 1;
          bVar11 = uVar9 < pAVar5->count;
        } while ((int)uVar9 < (int)pAVar5->count);
      }
    }
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

