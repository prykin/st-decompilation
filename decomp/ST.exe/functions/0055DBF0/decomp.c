#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\paltool.cpp
   Diagnostic line evidence: 29 | 31 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005547D0 -> 0055DBF0 @ 005547E2 | 0056DB80 -> 0055DBF0 @ 0056DCAC | 0056FA60 ->
   0055DBF0 @ 0056FF20 | 0056FA60 -> 0055DBF0 @ 00570061 | 0056FA60 -> 0055DBF0 @ 005708A1 |
   00590170 -> 0055DBF0 @ 00590268 | 00590410 -> 0055DBF0 @ 005904C3 | 005916F0 -> 0055DBF0 @
   0059176D | 005967F0 -> 0055DBF0 @ 00596876 | 005AB300 -> 0055DBF0 @ 005AB77F | 005ACB30 ->
   0055DBF0 @ 005ACC13 | 005B2F90 -> 0055DBF0 @ 005B300D | 005B9B10 -> 0055DBF0 @ 005B9C4E |
   005BA560 -> 0055DBF0 @ 005BA638 | 005BD7A0 -> 0055DBF0 @ 005BD824 | 005BE310 -> 0055DBF0 @
   005BE378 | 005C4930 -> 0055DBF0 @ 005C49F6 | 005DFA30 -> 0055DBF0 @ 005E0133 | 005E0470 ->
   0055DBF0 @ 005E04B0 | 005E1330 -> 0055DBF0 @ 005E1B9A | 005E4570 -> 0055DBF0 @ 005E48C5 |
   005E58D0 -> 0055DBF0 @ 005E59FC | 005E5BA0 -> 0055DBF0 @ 005E5C53 | 005E6770 -> 0055DBF0 @
   005E67F0 | 005E7570 -> 0055DBF0 @ 005E7606 | 005E7570 -> 0055DBF0 @ 005E762C */

void __cdecl DarkScreen(AnonShape_GLOBAL_0080759C_9638EF10 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 local_448 [256];
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    FUN_006b0ba0((int)param_1,local_448,0,0x100);
    Library::Ourlib::PALETTE::FUN_007192d0((undefined4 *)param_1,local_448,0,0x100,param_2,param_3);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\paltool.cpp",0x1d,0,errorCode,"%s",
                             "DarkScreen");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\paltool.cpp",0x1f);
  return;
}

