
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecMemFree */

void __thiscall cMf32::RecMemFree(cMf32 *this,uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  cMf32 *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar4;
    iVar3 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x237,0,iVar2,&DAT_007a4ccc,
                               s_cMf32__RecMemFree_007efbe4);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x239);
    return;
  }
  if (*param_1 != 0) {
    iVar2 = FUN_00751b10((int *)local_8->field_0000,*param_1);
    if (iVar2 == 0) {
      FUN_006ab060(param_1);
      g_currentExceptionFrame = pIVar4;
      return;
    }
    *param_1 = 0;
  }
  g_currentExceptionFrame = pIVar4;
  return;
}

