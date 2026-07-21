#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetGObjFromZone */

void __thiscall
STAllPlayersC::GetGObjFromZone
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4,int param_5,
          int *param_6,int *param_7)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  STAllPlayersC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    GetGObjFromZone2(local_8,param_1,param_2,param_3,param_4,param_5,param_6,(int *)0x0,(int *)0x0,
                     param_7,(int *)0x0,(int *)0x0,(int *)0x0,(int *)0x0,(int *)0x0,(int *)0x0,
                     (int *)0x0,(int *)0x0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x6a,0,errorCode,&DAT_007a4ccc
                             ,s_STAllPlayersC__GetGObjFromZone_007a6028);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x6b);
  return;
}

