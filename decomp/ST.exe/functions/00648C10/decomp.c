#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 73 | 95 | 97 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00648FE0 -> 00648C10 @ 006492F0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=2, unknown=0 */

void __cdecl StartStrateg(RecoveredRecordView_00648C10_4BE0A791 *strategData,uint param_2)

{
  int errorCode;
  AiPlrClassTy *pAVar2;
  int iVar3;
  InternalExceptionFrame local_50;
  int local_c;
  RecoveredRecordView_00648C10_4BE0A791 *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    if ((((g_playSystem_00802A38 == nullptr) ||
         (strategData == nullptr)) || (7 < param_2)) ||
       (7 < g_bulkInitializedRecords_008087C7[param_2].field_0022)) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x49);
    }
    pAVar2 = thunk_FUN_004357f0((char)param_2);
    if (pAVar2 != nullptr) {
      thunk_FUN_00648dd0(param_2);
    }
    local_8 = strategData;
    STField<uint>(strategData,0x4) = param_2;
    strategData->field_0067 = (short)g_bulkInitializedRecords_008087C7[param_2].field_0024;
    strategData->field_0069 = (short)g_bulkInitializedRecords_008087C7[param_2].field_0028;
    strategData->field_006B = (short)g_bulkInitializedRecords_008087C7[param_2].field_002C;

    Library::Ourlib::SAPP::FUN_006e6200
              (g_playSystem_00802A38,0x402,(undefined4 *)(param_2 + 0x29),nullptr,
               nullptr,strategData,0);
    if (local_c != 0) {
      thunk_FUN_0067d160((int *)&local_8);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_creat.cpp",0x5f,0,errorCode,"%s",
                             "StartStrateg");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c != 0) {
    thunk_FUN_0067d160((int *)&local_8);
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_creat.cpp",0x61);
  return;
}

