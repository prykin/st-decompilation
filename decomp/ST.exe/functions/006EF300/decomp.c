
int __cdecl
FUN_006ef300(cMf32 *param_1,char *param_2,undefined2 *param_3,undefined2 *param_4,
            undefined1 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_50 [16];
  short local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar2 = Library::MSVCRT::__setjmp3(local_50,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    cMf32::RecGetParam(param_1,0xf,param_2,(undefined4 *)&local_10,1);
    g_currentExceptionFrame = pIVar4;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = local_e;
    }
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = local_c;
    }
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = local_a;
    }
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = local_9;
    }
    if (param_7 != (undefined1 *)0x0) {
      *param_7 = local_8;
    }
    return (int)local_10;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x1f,0,iVar2,&DAT_007a4ccc,
                             s_mfTmapGetParam_007eefa0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x21);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

