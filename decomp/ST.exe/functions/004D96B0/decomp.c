#include "../../pseudocode_runtime.h"


undefined4 FUN_004d96b0(void)

{
  byte local_8 [4];
  if (g_array_007FA16C == nullptr) {
    /* ST_CALLSITE[004D96C7]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STFishCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STFishCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint */
    g_array_007FA16C = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
  }

  Library::DKW::TBL::DArrayAppend((DArrayTy *)g_array_007FA16C,local_8);
  return 0;
}

