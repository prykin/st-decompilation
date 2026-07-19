
int __cdecl FUN_006f01a0(short *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == (short *)0x0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x1a4);
    }
    if ((((param_2 < 0) || (*param_1 <= param_2)) || (param_3 < 0)) ||
       (((param_1[1] <= param_3 || (param_4 < 0)) || (5 < param_4)))) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x1a5);
    }
    iVar2 = (((int)param_1[1] / 2) * param_4 + param_3 / 2) * ((int)*param_1 / 2) + param_2 / 2;
    if (*(int *)((int)param_1 + iVar2 * 4 + 0x459) != 0) {
      FUN_006ab060((undefined4 *)((int)param_1 + iVar2 * 4 + 0x459));
    }
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x1af,0,iVar2,&DAT_007a4ccc,
                             s_mfTMapDelObj_007ef034);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x1b1);
  return iVar2;
}

