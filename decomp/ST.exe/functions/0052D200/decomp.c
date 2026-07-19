
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::OutStr */

void __thiscall PopUpTy::OutStr(PopUpTy *this,uint param_1)

{
  code *pcVar1;
  PopUpTy *pPVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  uint *puVar6;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  PopUpTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    uVar5 = param_1 & 0xff;
    ccFntTy::SetSurf(local_8->field_0094,local_8->field_0090,0,0,uVar5 * 0x13,
                     *(int *)(local_8->field_0090 + 4),0x13);
    iVar3 = pPVar2->field_0098;
    if ((int)uVar5 < *(int *)(iVar3 + 8)) {
      puVar6 = *(uint **)(*(int *)(iVar3 + 0x14) + uVar5 * 4);
    }
    else {
      puVar6 = (uint *)0x0;
    }
    ccFntTy::WrStr(pPVar2->field_0094,puVar6,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x2d,0,iVar3,&DAT_007a4ccc,
                             s_PopUpTy__OutStr_007c6fbc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x2d);
  return;
}

