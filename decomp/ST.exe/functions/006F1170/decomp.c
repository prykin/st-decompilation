
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::delete */

void __thiscall cMf32::delete(cMf32 *this,undefined4 *param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  errorCode = __setjmp3(local_44,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_007508f0((undefined4 *)*param_1);
      if (param_1[5] != 0) {
        FUN_00750990((byte *)((int)param_1 + 0x231),param_1 + 1);
      }
      FUN_006a5e90(param_1);
    }
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x8b,0,errorCode,&DAT_007a4ccc,
                             s_cMf32__delete_007efabc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x8d);
  return;
}

