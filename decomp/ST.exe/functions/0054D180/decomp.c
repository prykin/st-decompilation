
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
  STPlaySystemC *pSVar5;
  InternalExceptionFrame local_4c;
  STPlaySystemC *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    pSVar5 = local_8 + 0xc0;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pSVar5 = 0;
      pSVar5 = pSVar5 + 4;
    }
    *(int *)(local_8 + 0xcc) = 0xf;
    *(int *)(local_8 + 0xd0) = 0x7106;
    (**(code **)(*(int *)local_8 + 0x18))(local_8 + 0xc0);
    if (*(int *)(pSVar2 + 0x39) != 0) {
      FUN_006b9890((int *)(pSVar2 + 0x39));
    }
    if (*(int *)(pSVar2 + 0x4f) != 0) {
      FUN_006ab060((undefined4 *)(pSVar2 + 0x4f));
    }
    if (*(int *)(pSVar2 + 0x3d) != 0) {
      FUN_006ab060((undefined4 *)(pSVar2 + 0x3d));
    }
    *(undefined4 *)(pSVar2 + 0x41) = 0;
    *(undefined4 *)(pSVar2 + 0x45) = 0;
    *(undefined4 *)(pSVar2 + 0x53) = 0;
    if (*(int *)(pSVar2 + 0x65) != 0) {
      FUN_006b9890((int *)(pSVar2 + 0x65));
    }
    *(undefined4 *)(pSVar2 + 0x69) = 0;
    *(undefined4 *)(pSVar2 + 0x6d) = 0;
    *(undefined4 *)(pSVar2 + 0x71) = 0;
    *(undefined4 *)(pSVar2 + 0x75) = 0;
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

