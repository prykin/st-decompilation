#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0 */

undefined2 __thiscall AiFltClassTy::sub_0065D9C0(AiFltClassTy *this)

{
  undefined2 uVar1;
  STGroupBoatC *pSVar2;

  if ((this->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    pSVar2 = thunk_FUN_0042b760(*(char *)&this->field_0024,this->field_007D);
    if (pSVar2 != nullptr) {
      uVar1 = thunk_FUN_004233c0(pSVar2);
      return uVar1;
    }
  }
  return 0;
}

