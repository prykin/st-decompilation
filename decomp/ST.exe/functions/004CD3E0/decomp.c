#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00476CE0 -> 004CD3E0 @ 0047700B; /STBoatC+0x18 | 00476CE0 -> 004CD3E0 @ 00477436;
   /STBoatC+0x18 */

undefined4 __thiscall FUN_004cd3e0(void *this,uint param_1,undefined4 param_2)

{
  if (STField<int>(this,0x45c) == 0) {
    STField<undefined4>(this,0x45c) = 1;
    STField<uint>(this,0x460) = param_1;
    STField<undefined4>(this,0x464) = param_2;
    STField<uint>(this,0x468) = g_playSystem_00802A38->field_00E4;
    /* ST_CALLSITE[004CD41C]: CALL 0x004028f1; direct=004028F1 TLOBaseTy::sub_004CC880 */
    TLOBaseTy::sub_004CC880(this,2);
  }
  return 0;
}

