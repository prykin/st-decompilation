
int __cdecl FUN_0070a930(cMf32 *param_1,byte param_2,char *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_50 [16];
  undefined4 local_10 [2];
  short local_6;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar2 = Library::MSVCRT::__setjmp3(local_50,0,unaff_ESI,pIVar5);
  if (iVar2 == 0) {
    puVar3 = cMf32::RecGetParam(param_1,param_2,param_3,local_10,param_4);
    if (puVar3 == (undefined4 *)0x0) {
      g_currentExceptionFrame = pIVar5;
      return -4;
    }
    g_currentExceptionFrame = pIVar5;
    return (int)local_6;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x93,0,iVar2,&DAT_007a4ccc,
                             s_mfImgGetNumIms_007f0040);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x95);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

