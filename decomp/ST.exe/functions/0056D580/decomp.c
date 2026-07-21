#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::CloseGameDBs */

void __thiscall STAppC::CloseGameDBs(STAppC *this)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_04;
  cMf32 *pcVar3;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pcVar3 = extraout_ECX;
    if (DAT_0080678c != 0) {
      FUN_0070a300(&DAT_0080678c);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar3 = extraout_ECX_00;
    }
    cMf32::delete(pcVar3,DAT_00806788);
    DAT_00806788 = (cMf32 *)0x0;
    if (DAT_00806794 != 0) {
      FUN_0070a300(&DAT_00806794);
    }
    cMf32::delete(DAT_00806790,DAT_00806790);
    DAT_00806790 = (cMf32 *)0x0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pcVar3 = extraout_ECX_01;
    if (DAT_0080677c != 0) {
      FUN_0070a300(&DAT_0080677c);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar3 = extraout_ECX_02;
    }
    cMf32::delete(pcVar3,DAT_00806778);
    DAT_00806778 = (cMf32 *)0x0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pcVar3 = extraout_ECX_03;
    if (DAT_00806774 != 0) {
      FUN_0070a300(&DAT_00806774);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar3 = extraout_ECX_04;
    }
    cMf32::delete(pcVar3,PTR_00806770);
    PTR_00806770 = (cMf32 *)0x0;
    if (DAT_0080676c != 0) {
      FUN_0070a300(&DAT_0080676c);
    }
    cMf32::delete(DAT_00806768,DAT_00806768);
    DAT_00806768 = (cMf32 *)0x0;
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

