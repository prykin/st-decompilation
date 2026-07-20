
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::CloseTactByTitle */

int __thiscall AiPlrClassTy::CloseTactByTitle(AiPlrClassTy *this,byte *param_1)

{
  code *pcVar1;
  AiPlrClassTy *pAVar2;
  int iVar3;
  uint uVar4;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar6 = ReportDebugMessage(s_E____titans_ai_ai_plr_cpp_007d2e4c,0xf1,0,iVar3,&DAT_007a4ccc,
                               s_AiPlrClassTy__CloseTactByTitle_007d2eac);
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_ai_ai_plr_cpp_007d2e4c,0xf2);
      return iVar3;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar4 = thunk_FUN_00678e00(local_8,param_1);
  if ((int)uVar4 < 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  iVar3 = pAVar2->field_0695;
  if ((iVar3 != 0) && ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc))) {
    if (uVar4 < *(uint *)(iVar3 + 0xc)) {
      puVar5 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
    }
    else {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5[1] != 0) {
      this_00 = (AiTactClassTy *)*puVar5;
      goto LAB_00679378;
    }
  }
  this_00 = (AiTactClassTy *)0x0;
LAB_00679378:
  if (this_00 != (AiTactClassTy *)0x0) {
    pAVar7 = local_3c;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pAVar7 = 0;
      pAVar7 = (AnonShape_0068FD00_A5257008 *)&pAVar7->field_0x4;
    }
    local_3c[0]._0_4_ = 0x71;
    if (&stack0x00000000 != (undefined1 *)0x3c) {
      AiTactClassTy::GetAiMess(this_00,local_3c);
    }
    thunk_FUN_0054cf70(PTR_00802a38,*(uint *)&this_00->field_0x8);
    FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_8->field_0695,uVar4);
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

