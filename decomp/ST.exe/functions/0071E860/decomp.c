#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E863 MOV AX,word ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E867 MOV DX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E872 MOV AX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E884 MOV DX,word ptr
   [EBP + 0x14]

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079E298
   Entries: 0071E860
   Slots: 0x8
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=336/500; unique_owner_for_target */

int __thiscall
ViewerClassTy::vfunc_8
          (ViewerClassTy *this,ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  int iVar1;

  this->field_0148 = param_1;
  this->field_014C = param_3;
  this->field_014A = param_2;
  this->field_014E = param_4;
  iVar1 = FUN_006e5fe0(this,(undefined4 *)&this->field_0x134);
  return -(uint)(iVar1 != 0);
}

