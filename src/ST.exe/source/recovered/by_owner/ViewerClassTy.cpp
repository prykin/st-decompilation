#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/ViewerClassTy.cpp

// 0071E6F0 ViewerClassTy::ViewerClassTy
#line 4 "decomp/ST.exe/functions/0071E6F0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E298 (store 0071E6FA)
   Evidence: final_vptr=0079E298; returns_this=true; calls_before=1; field_writes_after=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   exact_factory_tail=0071F210->0071E6F0->0071E6F0; allocation_size=504 */

ViewerClassTy * __thiscall st::fn_0071E6F0(ViewerClassTy *this)

{
  st::fn_0072B700(reinterpret_cast<undefined4 *>(&this->vtable));
  this->vtable = &st_global_0079E298;
  this->field_01F0 = 0;
  this->field_01EC = 0;
  this->field_01B8 = 0;
  this->field_01B4 = 0;
  this->field_01C4 = 0;
  return this;
}

// 0071E860 ViewerClassTy::vfunc_8
#line 4 "decomp/ST.exe/functions/0071E860/decomp.c"
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
st::fn_0071E860
          (ViewerClassTy *this,ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  int iVar1;

  this->field_0148 = param_1;
  this->field_014C = param_3;
  this->field_014A = param_2;
  this->field_014E = param_4;
  iVar1 = st::fn_006E5FE0(this,reinterpret_cast<undefined4 *>(&this->field_0x134));
  return -(uint)(iVar1 != 0);
}
