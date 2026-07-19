
int __cdecl FUN_00719df0(undefined4 param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_50 [16];
  short local_10 [6];
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,pIVar5);
  if (iVar2 == 0) {
    puVar3 = FUN_006f2310(2,param_2,(undefined4 *)local_10,param_3);
    g_currentExceptionFrame = pIVar5;
    iVar2 = (int)local_10[0];
    if (puVar3 == (undefined4 *)0x0) {
      return -4;
    }
  }
  else {
    g_currentExceptionFrame = pIVar5;
    iVar4 = ReportDebugMessage(s_E__Ourlib_mfwav_cpp_007f0800,0x39,0,iVar2,&DAT_007a4ccc,
                               s_mfWavGetType_007f0820);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_mfwav_cpp_007f0800,0x3b);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = -1;
  }
  return iVar2;
}

