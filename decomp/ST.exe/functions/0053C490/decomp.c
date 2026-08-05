
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079AD64
   Entries: 00405BF0
   Slots: 0x18
   Anchor:
   Evidence: unique_named_method_in_slot_family; unique_owner_for_target;
   competing_signature_shapes_in_slot_family */

void __thiscall ResearchPanelTy::ShiftControls(ResearchPanelTy *this,int param_1)

{
  short sVar1;

  if (param_1 != this->field_005C) {
    ProdPanelTy::ShiftControls((ProdPanelTy *)this,param_1);
    sVar1 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar1 = -sVar1;
    }
    *(short *)&this->field_0x2e = sVar1;
    if (this->field_0282 != 0) {
      FUN_006e6080(this,2,this->field_0282,(undefined4 *)&this->field_0x18);
    }
  }
  return;
}

