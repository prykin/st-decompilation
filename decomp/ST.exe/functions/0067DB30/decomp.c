
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 291 | 294 | 295 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl DelPlrEdit(int param_1,char *param_2)

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
    if ((param_1 == 0) || (param_2 == (char *)0x0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x123);
    }
    cMf32::RecDel((cMf32 *)param_1,0xc,param_2);
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x126,0,iVar2,&DAT_007a4ccc,
                             s_DelPlrEdit_007d2ff8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x127);
  return iVar2;
}

