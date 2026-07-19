
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::InitSystem */

undefined4 __thiscall STPlaySystemC::InitSystem(STPlaySystemC *this,int param_1)

{
  STPlaySystemC *pSVar1;
  code *pcVar2;
  STPlaySystemC *pSVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  STPlaySystemC *local_c;
  STPlaySystemC *local_8;
  
  *(undefined4 *)(this + 0x30) = 0;
  local_10 = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar4 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    FUN_006e51f0();
    *(undefined4 *)(pSVar3 + 0x39) = 0;
    *(undefined4 *)(pSVar3 + 0x45) = 7;
    iVar4 = FUN_006aac70(7);
    *(int *)(pSVar3 + 0x3d) = iVar4;
    *(undefined4 *)(pSVar3 + 0x53) = 0x1400;
    iVar4 = FUN_006aac70(0x1400);
    *(int *)(pSVar3 + 0x4f) = iVar4;
    *(undefined4 *)(pSVar3 + 0x41) = 0;
    *(undefined4 *)(pSVar3 + 0x49) = 0;
    pSVar1 = pSVar3 + 0xe4;
    pSVar3[0x4d] = (STPlaySystemC)0x0;
    pSVar3[0x4e] = (STPlaySystemC)0x0;
    *(undefined4 *)(pSVar3 + 0x59) = 0;
    *(undefined4 *)(pSVar3 + 0xe8) = 0;
    *(undefined4 *)(pSVar3 + 0xec) = 0;
    *(undefined2 *)(pSVar3 + 0x57) = 0;
    *(undefined4 *)(pSVar3 + 0x28) = 0;
    *(undefined4 *)(pSVar3 + 0x2c) = 0;
    *(undefined4 *)pSVar1 = 0;
    if (DAT_00806754 != 0) {
      local_c = pSVar1;
      FUN_006f1ce0(0xc,PTR_DAT_0079ae30,(int *)&local_c,0);
    }
    *(undefined4 *)(pSVar3 + 0x34) = *(undefined4 *)pSVar1;
    *(undefined4 *)(pSVar3 + 0x20) = local_10;
    pSVar3[0x38] = (STPlaySystemC)0x0;
    *(undefined4 *)(pSVar3 + 0x65) = 0;
    *(undefined4 *)(pSVar3 + 0x69) = 0;
    *(undefined4 *)(pSVar3 + 0x6d) = 0;
    *(undefined4 *)(pSVar3 + 0x71) = 0;
    *(undefined4 *)(pSVar3 + 0x75) = 0;
    *(undefined4 *)(pSVar3 + 0x79) = 0;
    pSVar3[0xbb] = (STPlaySystemC)0x0;
    *(undefined4 *)(pSVar3 + 0xa7) = 0;
    *(undefined4 *)(pSVar3 + 0xab) = 0;
    *(undefined4 *)(pSVar3 + 0xaf) = 0;
    *(undefined4 *)(pSVar3 + 0xb3) = 0;
    *(undefined4 *)(pSVar3 + 0xb7) = 0;
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

