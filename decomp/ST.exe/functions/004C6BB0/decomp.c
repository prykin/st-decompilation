#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bmove.cpp
   Diagnostic line evidence: 28 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall
FUN_004c6bb0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  STField<undefined4>(this,0x3e0) = param_1;
  STField<undefined4>(this,1000) = param_3;
  STField<undefined4>(this,0x3e4) = param_2;
  STField<undefined4>(this,0x3dc) = 1;
  STField<undefined4>(this,0x3fc) = 0;
  STField<undefined4>(this,0x400) = 0;
  STField<undefined4>(this,0x404) = 0;

  iVar1 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004167A0::thunk_FUN_00418030
                    (this,STField<short>(this,0x3e0),(short)param_2,(short)param_3);
  if (iVar1 == -1) {
    RaiseInternalException
              (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bmove.cpp",0x1c);
  }
  else if (iVar1 == 2) {
    STField<undefined4>(this,0x3dc) = 0;
    return 0;
  }
  return 0;
}

