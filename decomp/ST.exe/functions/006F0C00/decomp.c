
int __cdecl FUN_006f0c00(short *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = __setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 == (short *)0x0) || (param_2 == (int *)0x0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x29d);
    }
    iVar2 = 0;
    do {
      FUN_006f0a50(param_1,param_2,0,0,*param_2,param_2[1],iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x2a1,0,iVar2,&DAT_007a4ccc,
                             s_AuxTMapRefreshAll_007ef074);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x2a3);
  return iVar2;
}

