#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 005EC640 returns return of Library::MSVCRT::_strncpy @ 005EC667

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C260
   Entries: 00403F5D
   Slots: 0x140
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1131/1143; unique_owner_for_target */

char * __thiscall STArtiafactC::vfunc_140(STArtiafactC *this,char *param_1)

{
  char *pcVar1;

  pcVar1 = Library::MSVCRT::_strncpy(&this->field_0x367,param_1,0x103);
  this->field_046A = 0;
  return pcVar1;
}

