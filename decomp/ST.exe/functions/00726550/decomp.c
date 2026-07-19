
int __cdecl FUN_00726550(undefined4 param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_50 [16];
  undefined4 local_10;
  short local_a;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,pIVar5);
  if (iVar2 == 0) {
    puVar3 = FUN_006f2310(8,param_2,&local_10,param_3);
    if (puVar3 == (undefined4 *)0x0) {
      RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mfspr_cpp_007f0c8c,0x122);
    }
    g_currentExceptionFrame = pIVar5;
    return (int)local_a;
  }
  g_currentExceptionFrame = pIVar5;
  if ((param_3 == 0) && (iVar2 == -4)) {
    return -4;
  }
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfspr_cpp_007f0c8c,0x126,0,iVar2,&DAT_007a4ccc,
                             s_mfMSprGetHeigh_007f0cf0);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mfspr_cpp_007f0c8c,0x128);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

