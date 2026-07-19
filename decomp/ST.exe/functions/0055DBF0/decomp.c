
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\paltool.cpp
   Diagnostic line evidence: 29 | 31 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl DarkScreen(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  undefined4 in_stack_fffffbb8;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_ESI,in_stack_fffffbb8);
  if (errorCode == 0) {
    FUN_006b0ba0((int)param_1,&stack0xfffffbb8,0,0x100);
    Library::Ourlib::PALETTE::FUN_007192d0
              (param_1,(undefined4 *)&stack0xfffffbb8,0,0x100,param_2,param_3);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage(s_E____titans_paltool_cpp_007c95d8,0x1d,0,errorCode,&DAT_007a4ccc,
                             s_DarkScreen_007c95f4);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_paltool_cpp_007c95d8,0x1f);
  return;
}

