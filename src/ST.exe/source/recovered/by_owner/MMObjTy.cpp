#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/MMObjTy.cpp

// 005B6430 MMObjTy::GetMessage
#line 4 "decomp/ST.exe/functions/005B6430/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C008
   Entries: 00401280
   Slots: 0x0
   Anchor: 005BC5E0 PrividerTy::GetMessage
   Evidence: unique_named_method_in_slot_family; unique_owner_for_target;
   signature_anchor=PrividerTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401280|005B6430; family_names=MMObjTy::GetMessage; ret4=1;
   direct_offsets={10:0,14:0,18:0,1c:0} */

int __thiscall st::fn_005B6430(MMObjTy *this,STMessage *message)

{
  int iVar1;

  iVar1 = st::fn_006E5FD0(this,message);
  return iVar1;
}

