
int __cdecl FUN_006f0d70(cMf32 *param_1,char *param_2,undefined2 *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_50 [16];
  undefined1 local_10 [12];
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar2 = Library::MSVCRT::__setjmp3(local_50,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    cMf32::RecGetParam(param_1,0x1b,param_2,(undefined4 *)local_10,1);
    g_currentExceptionFrame = pIVar4;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = local_10._1_2_;
    }
    return (int)(short)local_10._3_2_;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x2d4,0,iVar2,&DAT_007a4ccc,
                             s_mf3DXGetParam_007ef094);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x2d6);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

