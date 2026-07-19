
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::PrepareToSave */

int __thiscall AiTactClassTy::PrepareToSave(AiTactClassTy *this,undefined4 *param_1,short param_2)

{
  short sVar1;
  code *pcVar2;
  AiTactClassTy *pAVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar3 = local_8;
  if (iVar4 == 0) {
    param_1[0xb] = 0;
    if (*(short *)(param_1 + 3) == -1) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = thunk_FUN_0068e220(local_8,*(short *)(param_1 + 3));
    }
    param_1[0xc] = uVar5;
    sVar1 = pAVar3->field_007C;
    param_1[0xd] = 0xffffffff;
    *(short *)((int)param_1 + 6) =
         *(short *)((int)param_1 + 6) + (param_2 + (sVar1 + 1) * 0x14) * 0x32;
    *(undefined4 *)((int)param_1 + 0x3a) = pAVar3->field_012C;
    Library::DKW::TBL::FUN_006ae1c0((uint *)pAVar3->field_00BD,param_1);
    thunk_FUN_00676c40(pAVar3->field_00BD,&LAB_0040242d);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x1a2,0,iVar4,&DAT_007a4ccc,
                             s_AiTactClassTy__PrepareToSave_007d5730);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  RaiseInternalException(iVar4,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x1a3);
  return iVar4;
}

