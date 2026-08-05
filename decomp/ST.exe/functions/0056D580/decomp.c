#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::CloseGameDBs

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall STAppC::CloseGameDBs(STAppC *this)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    if (DAT_0080678c != 0) {
      FUN_0070a300(&DAT_0080678c);
    }
    cMf32::delete(DAT_00806788);
    DAT_00806788 = nullptr;
    if (DAT_00806794 != 0) {
      FUN_0070a300(&DAT_00806794);
    }
    cMf32::delete(g_cMf32_00806790);
    g_cMf32_00806790 = nullptr;
    if (DAT_0080677c != 0) {
      FUN_0070a300(&DAT_0080677c);
    }
    cMf32::delete(DAT_00806778);
    DAT_00806778 = nullptr;
    if (DAT_00806774 != 0) {
      FUN_0070a300(&DAT_00806774);
    }
    cMf32::delete(PTR_00806770);
    PTR_00806770 = nullptr;
    if (DAT_0080676c != 0) {
      FUN_0070a300(&DAT_0080676c);
    }
    cMf32::delete(DAT_00806768);
    DAT_00806768 = nullptr;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x417,0,errorCode,"%s",
                             "STAppC::CloseGameDBs");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\tapp.cpp",0x417);
  return;
}

