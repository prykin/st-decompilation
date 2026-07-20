
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GetAiMess */

int __thiscall AiTactClassTy::GetAiMess(AiTactClassTy *this,AnonShape_0068FD00_A5257008 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  AiTactClassTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  uint *puVar6;
  bool bVar7;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x36a,0,iVar3,&DAT_007a4ccc,
                               s_AiTactClassTy__GetAiMess_007d5874);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x36b);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
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
        puVar6 = local_3c;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
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
      iVar4 = thunk_FUN_0068e850(local_8,*(int *)((int)&param_1->field_000A + 2));
      iVar3 = *(int *)((int)&param_1->field_000A + 2);
      *(int *)&param_1->field_0x8 = *(int *)&param_1->field_0x8 + iVar4;
      iVar3 = thunk_FUN_0068e610(this_00,iVar3);
      *(int *)&param_1->field_0x8 = *(int *)&param_1->field_0x8 + iVar3;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x70:
      uVar5 = 0;
      iVar3 = local_8->field_00A5;
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar7 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (bVar7) {
            iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
            puVar6 = local_3c;
            for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            local_3c[1] = this_00->field_012C;
            local_3c[0] = 0x70;
            uVar1 = *(undefined4 *)((int)&param_1->field_000A + 2);
            local_30 = (undefined1)uVar1;
            uStack_2f = (undefined1)((uint)uVar1 >> 8);
            uStack_2e = (undefined2)((uint)uVar1 >> 0x10);
            AiFltClassTy::GetAiMess(*(AiFltClassTy **)(iVar3 + 4),local_3c);
            if (0 < (int)local_3c[2]) {
              *(uint *)&param_1->field_0x8 = local_3c[2];
              g_currentExceptionFrame = local_80.previous;
              return 0;
            }
          }
          iVar3 = this_00->field_00A5;
          uVar5 = uVar5 + 1;
          bVar7 = uVar5 < *(uint *)(iVar3 + 0xc);
          if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar5) {
            g_currentExceptionFrame = local_80.previous;
            return 0;
          }
        } while( true );
      }
      break;
    case 0x71:
      uVar5 = *(int *)(local_8->field_00A5 + 0xc) - 1;
      if (-1 < (int)uVar5) {
        do {
          iVar3 = this_00->field_00A5;
          if (uVar5 < *(uint *)(iVar3 + 0xc)) {
            iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          if ((iVar3 != 0) && (*(AiFltClassTy **)(iVar3 + 4) != (AiFltClassTy *)0x0)) {
            AiFltClassTy::GetAiMess(*(AiFltClassTy **)(iVar3 + 4),(uint *)param_1);
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(*(int *)(iVar3 + 4) + 8));
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)this_00->field_00A5,uVar5);
          }
          uVar5 = uVar5 - 1;
        } while (-1 < (int)uVar5);
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
      uVar5 = 0;
      iVar3 = local_8->field_00A5;
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar7 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (bVar7) {
            iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          if (((iVar3 != 0) && (*(AiFltClassTy **)(iVar3 + 4) != (AiFltClassTy *)0x0)) &&
             (AiFltClassTy::GetAiMess(*(AiFltClassTy **)(iVar3 + 4),(uint *)param_1),
             '\0' < (char)param_1->field_0x8)) {
            g_currentExceptionFrame = local_80.previous;
            return 0;
          }
          iVar3 = this_00->field_00A5;
          uVar5 = uVar5 + 1;
          bVar7 = uVar5 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc));
      }
    }
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

