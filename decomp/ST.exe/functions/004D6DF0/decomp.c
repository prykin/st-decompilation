#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall TLOBaseTy::sub_004D6DF0(TLOBaseTy *this)

{
  dword dVar1;
  int iVar2;

  /* ST_CALLSITE[004D6DF6]: CALL dword ptr [EAX + 0x2c] */
  dVar1 = this->slot_2C();
  /* ST_CALLSITE[004D6E02]: CALL dword ptr [EDX + 0x2c] */
  if (((int)dVar1 < 0x32) || (dVar1 = this->slot_2C(), 0x73 < (int)dVar1)) {
    /* ST_CALLSITE[004D6E1E]: CALL dword ptr [EDX + 0x2c] */
    dVar1 = this->slot_2C();
    if ((int)dVar1 < 1) {
      return 0;
    }
    /* ST_CALLSITE[004D6E2A]: CALL dword ptr [EAX + 0x2c] */
    dVar1 = this->slot_2C();
    if (0x28 < (int)dVar1) {
      return 0;
    }
    /* ST_CALLSITE[004D6E36]: CALL dword ptr [EDX + 0x2c] */
    dVar1 = this->slot_2C();
    iVar2 = *(int *)(&DAT_007e061c + dVar1 * 4);
  }
  else {
    /* ST_CALLSITE[004D6E0E]: CALL dword ptr [EAX + 0x2c] */
    dVar1 = this->slot_2C();
    iVar2 = *(int *)(&DAT_007e22f8 + dVar1 * 4);
  }
  if (iVar2 == 0) {
    return 0;
  }
  /* ST_CALLSITE[004D6E4D]: CALL dword ptr [EAX + 0xc4] */
  dVar1 = this->slot_C4();
  return (int)((100 - dVar1) * iVar2) / 100;
}

