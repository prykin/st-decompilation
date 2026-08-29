#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/ListClassTy.cpp

// 0071F2B0 ListClassTy::vfunc_8
#line 4 "decomp/ST.exe/functions/0071F2B0/decomp.c"
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

uint __thiscall st::fn_0071F2B0(ListClassTy *this,ushort param_1,ushort param_2)

{
  int iVar1;

  this->field_0156 = param_2;
  this->field_0154 = param_1;
  iVar1 = st::fn_006E5FE0(this,reinterpret_cast<undefined4 *>(&this->field_0x140));
  if (iVar1 == 0) {
    return this->field_0158;
  }
  return 0;
}

// 0071F2F0 ListClassTy::vfunc_C
#line 4 "decomp/ST.exe/functions/0071F2F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F2F3 MOV AX,word ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F2F7 MOV DX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F302 MOV AX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F314 MOV DX,word ptr
   [EBP + 0x14]

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079E2A4
   Entries: 0071F2F0
   Slots: 0xC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=380/524; unique_owner_for_target */

int __thiscall
st::fn_0071F2F0(ListClassTy *this,ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  int iVar1;

  this->field_0174 = param_1;
  this->field_0178 = param_3;
  this->field_0176 = param_2;
  this->field_017A = param_4;
  iVar1 = st::fn_006E5FE0(this,reinterpret_cast<undefined4 *>(&this->field_0x160));
  return -(uint)(iVar1 != 0);
}
