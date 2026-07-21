#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\pal_tbl.CPP
   Diagnostic line evidence: 81 | 85 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056DB80 -> 0055D730 @ 0056E073 */

int __cdecl LoadGamePlt(cMf32 *param_1,byte param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    DAT_008032b4 = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_PAUSE_0079af70,param_2,1);
    DAT_008032b8 = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_EXPLITE_0079af74,param_2,1);
    DAT_008032bc = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_SHAD30_0079af78,param_2,1);
    DAT_008032c0 = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_SHAD40_0079af7c,param_2,1);
    DAT_008032c4 = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_SHAD60_0079af80,param_2,1);
    DAT_008032c8 = Library::Ourlib::MFPLT::mfPltPtrTy((int)param_1,PTR_s_PLT_FOG_0079af84,param_2,1)
    ;
    DAT_008032cc = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_NUCL_0079af8c,param_2,1);
    DAT_008032d0 = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_GLOW_0079af90,param_2,1);
    DAT_008032d4 = Library::Ourlib::MFPLT::mfPltPtrTy((int)param_1,PTR_s_PLT_DKD_0079af94,param_2,1)
    ;
    DAT_008073cc = DAT_008032c0;
    g_currentExceptionFrame = local_48.previous;
    DAT_00807560 = DAT_008032c4;
    DAT_008073c8 = DAT_008032bc;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\pal_tbl.CPP",0x51,0,iVar2,"%s",
                             "LoadGamePlt");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_0055d910();
  RaiseInternalException(iVar2,0,"E:\\__titans\\pal_tbl.CPP",0x55);
  return iVar2;
}

