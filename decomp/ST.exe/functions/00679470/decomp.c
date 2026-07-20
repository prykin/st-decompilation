
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::CloseAllTact */

int __thiscall AiPlrClassTy::CloseAllTact(AiPlrClassTy *this)

{
  uint uVar1;
  code *pcVar2;
  AiPlrClassTy *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  AiTactClassTy *this_00;
  void *unaff_EDI;
  AnonShape_0068FD00_A5257008 *pAVar7;
  InternalExceptionFrame local_80;
  AnonShape_0068FD00_A5257008 local_3c [3];
  AiPlrClassTy *local_8;
  
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar6 = ReportDebugMessage(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x10e,0,iVar4,&DAT_007a4ccc,
                               s_AiPlrClassTy__CloseAllTact_007d2ed4);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    RaiseInternalException(iVar4,0,s_E____titans_ai_ai_plr_cpp_007d2e4c,0x10f);
    return iVar4;
  }
  if (local_8->field_0695 == 0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_plr_cpp_007d2e4c,0xfd);
  }
  pAVar7 = local_3c;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pAVar7 = 0;
    pAVar7 = (AnonShape_0068FD00_A5257008 *)&pAVar7->field_0x4;
  }
  local_3c[0]._0_4_ = 0x71;
  uVar1 = *(uint *)(pAVar3->field_0695 + 0xc);
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    iVar4 = pAVar3->field_0695;
    if (((iVar4 == 0) || ((int)uVar1 < 0)) || ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar1)) {
LAB_00679519:
      this_00 = (AiTactClassTy *)0x0;
    }
    else {
      if (uVar1 < *(uint *)(iVar4 + 0xc)) {
        puVar5 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar1 + *(int *)(iVar4 + 0x1c));
      }
      else {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5[1] == 0) goto LAB_00679519;
      this_00 = (AiTactClassTy *)*puVar5;
    }
    if (this_00 != (AiTactClassTy *)0x0) {
      if (&stack0x00000000 != (undefined1 *)0x3c) {
        AiTactClassTy::GetAiMess(this_00,local_3c);
      }
      thunk_FUN_0054cf70(PTR_00802a38,*(uint *)&this_00->field_0x8);
      FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)pAVar3->field_0695,uVar1);
    }
  } while( true );
}

