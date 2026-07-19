
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::Flush */

int __thiscall cMf32::Flush(cMf32 *this)

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
  iVar2 = __setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    iVar2 = FUN_00750f10();
    g_currentExceptionFrame = pIVar4;
    return iVar2;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x9a,0,iVar2,&DAT_007a4ccc,
                             s_cMf32__Flush_007efacc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x9c);
  return iVar2;
}

