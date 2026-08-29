#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 005FCE70 returns return of Library::MSVCRT::_strncpy @ 005FCE97

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 00402C75
   Slots: 0x140
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1135/1147; unique_owner_for_target */

char * __thiscall STContainerC::vfunc_140(STContainerC *this,char *param_1)

{
  char *pcVar1;

  pcVar1 = Library::MSVCRT::_strncpy(&this->field_0x36b,param_1,0x103);
  this->field_046E = 0;
  return pcVar1;
}

