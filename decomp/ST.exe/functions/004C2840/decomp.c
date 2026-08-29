#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00405402
   Slots: 0x68
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1456/1571; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall TLOBaseTy::vfunc_68(TLOBaseTy *this,undefined4 *param_1)

{
  byte bVar1;

  *param_1 = this->field_0018;
  param_1[1] = this->field_05AC;
  /* ST_CALLSITE[004C2865]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte((char)this->field_023D);
  ((byte *)param_1)[2] = bVar1;
  Library::MSVCRT::_strncpy((char *)((int)param_1 + 9),&this->field_05C4,0xe);
  return;
}

