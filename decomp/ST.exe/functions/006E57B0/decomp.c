
/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STPlaySystemC::sub_006E57B0(STPlaySystemC *this,int param_1)

{
  DArrayTy *pDVar1;
  void *pvVar2;
  uint uVar3;
  uint index;
  undefined1 local_24 [16];
  undefined4 local_14;

  pDVar1 = this->field_0010;
  if (pDVar1 != (DArrayTy *)0x0) {
    local_14 = 3;
    uVar3 = pDVar1->count;
    index = 0;
    if (uVar3 != 0) {
      do {
        if (uVar3 == 0) {
          pvVar2 = (void *)0x0;
        }
        else {
          pvVar2 = pDVar1->data;
        }
        if ((*(undefined4 **)((int)pvVar2 + 4))[1] == param_1) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)**(undefined4 **)((int)pvVar2 + 4))(local_24);
          DArrayRemoveAt(this->field_0010,index);
        }
        else {
          index = index + 1;
        }
        pDVar1 = this->field_0010;
        uVar3 = pDVar1->count;
      } while (index < uVar3);
    }
  }
  return;
}

