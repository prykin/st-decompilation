#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0 */

ushort __thiscall AiFltClassTy::sub_0065D9C0(AiFltClassTy *this)

{
  ushort uVar1;
  STGroupBoatC *this_00;

  if ((this->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this_00 = thunk_FUN_0042b760((char)this->field_0024,this->field_007D);
    if (this_00 != nullptr) {
      /* ST_CALLSITE[0065D9E7]: CALL 0x00401735; direct=00401735 STGroupBoatC::sub_004233C0 */
      uVar1 = STGroupBoatC::sub_004233C0(this_00);
      return uVar1;
    }
  }
  return 0;
}

