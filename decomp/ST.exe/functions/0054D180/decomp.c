
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::DoneSystem */

void __thiscall STPlaySystemC::DoneSystem(STPlaySystemC *this)

{
  code *pcVar1;
  STPlaySystemC *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  STPlaySystemC *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    puVar5 = (undefined4 *)&local_8->field_0xc0;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_8->field_00CC = 0xf;
    local_8->field_00D0 = 0x7106;
    (*local_8->vtable->SendMessage)((SystemWithNamedObjClassTy *)local_8,(int)&local_8->field_0xc0);
    if (pSVar2->field_0039 != 0) {
      FUN_006b9890(&pSVar2->field_0039);
    }
    if (pSVar2->field_004F != 0) {
      FUN_006ab060(&pSVar2->field_004F);
    }
    if (pSVar2->field_003D != 0) {
      FUN_006ab060(&pSVar2->field_003D);
    }
    pSVar2->field_0041 = 0;
    pSVar2->field_0045 = 0;
    pSVar2->field_0053 = 0;
    if (pSVar2->field_0065 != 0) {
      FUN_006b9890(&pSVar2->field_0065);
    }
    pSVar2->field_0069 = 0;
    pSVar2->field_006D = 0;
    pSVar2->field_0071 = 0;
    pSVar2->field_0075 = 0;
    FUN_006e52d0((int)pSVar2);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x1b1,0,iVar3,&DAT_007a4ccc,
                             s_STPlaySystemC__DoneSystem_007c84d8);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x1b3);
  return;
}

