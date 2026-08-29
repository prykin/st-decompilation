#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00402257
   Slots: 0x44
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:17 calls=3
   caller_families=2 receiver_extent=1456/1571; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=3; caller_families=2;
   owner_type=/TLOBaseTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall TLOBaseTy::sub_004DA340(TLOBaseTy *this,byte *param_1)

{
  param_1[1] = 0xff;
  param_1[2] = 0xff;
  param_1[3] = 0xff;
  param_1[4] = 0xff;
  param_1[5] = 0xff;
  param_1[6] = 0xff;
  param_1[7] = 0xff;
  param_1[8] = 0xff;
  *param_1 = 0;
  if ((this->field_05AC == CASE_3C) || (this->field_05AC == CASE_53)) {
    /* ST_CALLSITE[004DA374]: CALL 0x00404048; direct=00404048 STAllPlayersC::sub_004DA390 */
    STAllPlayersC::sub_004DA390(g_allPlayers_007FA174,(uint)this->field_0024,param_1,1);
  }
  return;
}

