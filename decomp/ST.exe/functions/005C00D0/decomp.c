#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as MReportTy.
   Evidence: this_call_owners=[MReportTy]; agreed_this_calls=1; incoming_this_accesses=12;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall MReportTy::sub_005C00D0(MReportTy *this)

{
  uint uVar1;
  byte bVar2;
  uint local_8;

  bVar2 = 0;
  local_8 = 0;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  do {
    if ((&this->field_008F)[local_8] != 0) {
      this->field_0025 = (&this->field_008F)[local_8];
      if (bVar2 == 0) {
        uVar1 = (uint)(this->field_0067 != '\0');
        this->field_0031 = (short)uVar1;
        this->field_0033 = (short)(uVar1 >> 0x10);
      }
      else {
        this->field_0031 = 1;
        this->field_0033 = 0;
      }
      /* ST_CALLSITE[005C0124]: CALL dword ptr [EDX + 0x18] */
      (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
    }
    bVar2 = bVar2 + 1;
    local_8 = (uint)bVar2;
  } while (bVar2 < 4);
  if ((this->field_009F != 0) && (this->field_0067 != '\0')) {
    this->field_0025 = this->field_009F;
    this->field_0031 = 1;
    this->field_0033 = 0;
    /* ST_CALLSITE[005C0155]: CALL dword ptr [EDX + 0x18] */
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  return;
}

