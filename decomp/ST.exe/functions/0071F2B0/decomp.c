#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0071F2B0 returns zeroed full register at 0071F2E9 @ 0071F2ED

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F2B3 MOV AX,word ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F2BA MOV CX,word ptr
   [EBP + 0xc]

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079E2A4
   Entries: 0071F2B0
   Slots: 0x8
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=348/524; unique_owner_for_target */

uint __thiscall ListClassTy::vfunc_8(ListClassTy *this,ushort param_1,ushort param_2)

{
  int iVar1;

  this->field_0156 = param_2;
  this->field_0154 = param_1;
  iVar1 = FUN_006e5fe0(this,(undefined4 *)&this->field_0x140);
  if (iVar1 == 0) {
    return this->field_0158;
  }
  return 0;
}

