#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004CEB00 -> 004CBF70 @ 004CF048; TLOBaseTy::sub_004CEB00 this; stable alias EBX */

undefined4 __fastcall FUN_004cbf70(TLOBaseTy *param_1)

{
  if ((STT3DSprC *)param_1->field_05FF != nullptr) {
    /* ST_CALLSITE[004CBF7F]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    STT3DSprC::StopShow((STT3DSprC *)param_1->field_05FF,0xe);
    /* ST_CALLSITE[004CBF8C]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    STT3DSprC::StopShow((STT3DSprC *)param_1->field_05FF,0xc);
    thunk_FUN_004ad430((STT3DSprC *)param_1->field_05FF);
  }
  return 0;
}

