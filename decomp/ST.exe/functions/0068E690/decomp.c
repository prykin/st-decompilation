#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact.cpp
   Diagnostic line evidence: 263 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall FUN_0068e690(void *this,RecoveredRecordView_0068E690_5404D20D *param_1)

{
  uint local_c;
  RecoveredRecordView_0068E690_5404D20D *local_8;

  local_c = 0;
  local_8 = nullptr;
  if (param_1 == nullptr) {
    RaiseInternalException
              (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_tact.cpp",0x107);
    return 0xfffffffa;
  }
  local_c = param_1->field_0018;
  local_8 = param_1;

  Library::DKW::TBL::DArrayAppend(STField<DArrayTy *>(this,0xa5),&local_c);
  param_1->field_0284 = this;
  param_1->field_0097 = STField<undefined4>(this,0x9d);
  return 0;
}

