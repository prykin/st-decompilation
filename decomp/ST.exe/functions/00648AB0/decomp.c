
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 41 | 55 | 58 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

ushort * __cdecl LoadStrategData(int param_1,char *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  ushort *local_c;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  local_c = (ushort *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_2 == (char *)0x0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_creat_cpp_007d2880,0x29);
    }
    local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(param_1,param_2,1,0);
    if ((local_c != (ushort *)0x0) && (local_8 = local_c, param_3 != (int *)0x0)) {
      iVar2 = Library::Ourlib::MFAOBJ::mfAObjLen(param_1,param_2,1);
      *param_3 = iVar2;
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage(s_E____titans_ai_ai_creat_cpp_007d2880,0x37,0,iVar2,&DAT_007a4ccc,
                             s_LoadStrategData_007d286c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (ushort *)(*pcVar1)();
    return puVar4;
  }
  thunk_FUN_0067d160((int *)&local_c);
  if ((local_8 != (ushort *)0x0) && (local_8 != local_c)) {
    FUN_006ab060(&local_8);
  }
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_creat_cpp_007d2880,0x3a);
  return (ushort *)0x0;
}

