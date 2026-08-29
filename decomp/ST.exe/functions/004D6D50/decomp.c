#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00798C70
   Entries: 004037BF
   Slots: 0x68
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=605/884; unique_owner_for_target; unique physical vtable owner and slot type only
   the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall TLOEmbryoTy::vfunc_68(TLOEmbryoTy *this,undefined4 *param_1)

{
  byte bVar1;

  *param_1 = this->field_0018;
  param_1[1] = this->field_0259;
  /* ST_CALLSITE[004D6D72]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte((char)this->field_0024);
  ((byte *)param_1)[2] = bVar1;
  Library::MSVCRT::_strncpy((char *)((int)param_1 + 9),&this->field_0271,0xe);
  return;
}

