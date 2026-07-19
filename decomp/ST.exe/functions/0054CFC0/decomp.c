
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::InitSystem */

undefined4 __thiscall STPlaySystemC::InitSystem(STPlaySystemC *this,int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  STPlaySystemC *pSVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined4 *local_c;
  STPlaySystemC *local_8;
  
  this->field_0030 = 0;
  local_10 = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    SystemClassTy::InitSystem((SystemClassTy *)local_8);
    *(undefined4 *)&pSVar3->field_0x39 = 0;
    *(undefined4 *)&pSVar3->field_0x45 = 7;
    iVar4 = Library::DKW::LIB::FUN_006aac70(7);
    pSVar3->field_003D = iVar4;
    *(undefined4 *)&pSVar3->field_0x53 = 0x1400;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x1400);
    *(int *)&pSVar3->field_0x4f = iVar4;
    *(undefined4 *)&pSVar3->field_0x41 = 0;
    *(undefined4 *)&pSVar3->field_0x49 = 0;
    puVar1 = &pSVar3->field_00E4;
    pSVar3->field_0x4d = 0;
    pSVar3->field_0x4e = 0;
    *(undefined4 *)&pSVar3->field_0x59 = 0;
    pSVar3[1].vtable = (STPlaySystemCVTable *)0x0;
    *(undefined4 *)&pSVar3[1].field_0x4 = 0;
    *(undefined2 *)&pSVar3->field_0x57 = 0;
    *(undefined4 *)&pSVar3->field_0x28 = 0;
    *(undefined4 *)&pSVar3->field_0x2c = 0;
    *puVar1 = 0;
    if (DAT_00806754 != (cMf32 *)0x0) {
      local_c = puVar1;
      cMf32::RecGet(DAT_00806754,0xc,PTR_DAT_0079ae30,(int *)&local_c,0);
    }
    *(undefined4 *)&pSVar3->field_0x34 = *puVar1;
    pSVar3->field_0020 = local_10;
    pSVar3->field_0x38 = 0;
    *(undefined4 *)&pSVar3->field_0x65 = 0;
    *(undefined4 *)&pSVar3->field_0x69 = 0;
    *(undefined4 *)&pSVar3->field_0x6d = 0;
    *(undefined4 *)&pSVar3->field_0x71 = 0;
    *(undefined4 *)&pSVar3->field_0x75 = 0;
    *(undefined4 *)&pSVar3->field_0x79 = 0;
    pSVar3->field_0xbb = 0;
    *(undefined4 *)&pSVar3->field_0xa7 = 0;
    *(undefined4 *)&pSVar3->field_0xab = 0;
    *(undefined4 *)&pSVar3->field_0xaf = 0;
    *(undefined4 *)&pSVar3->field_0xb3 = 0;
    *(undefined4 *)&pSVar3->field_0xb7 = 0;
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x18c,0,iVar4,&DAT_007a4ccc,
                             s_STPlaySystemC__InitSystem_007c84b8);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x18e);
  return 0xfffffffc;
}

