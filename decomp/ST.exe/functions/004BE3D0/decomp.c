#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00404C5A
   Slots: 0x84
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1499/1571; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall TLOBaseTy::vfunc_84(TLOBaseTy *this,int param_1)

{
  byte bVar1;

  /* ST_CALLSITE[004BE3E3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte((char)this->field_023D);
  this->field_05D7 = param_1;
  this->field_0241 =
       (*(int *)(&DAT_007e417c + ((bVar1 - 1) + this->field_0235 * 3) * 4) * param_1) / 100;
  return;
}

