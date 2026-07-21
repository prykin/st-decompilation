
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

int __thiscall MMObjTy::GetMessage(MMObjTy *this,STMessage *message)

{
  int iVar1;

  iVar1 = FUN_006e5fd0(this,message);
  return iVar1;
}

