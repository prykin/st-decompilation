
/* [STMethodOwnerApplier] Structural method owner recovered as SettMapMTy.
   Evidence: this_call_owners=[SettMapMTy]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall SettMapMTy::sub_005D1380(SettMapMTy *this)

{
  SettMapMTy_field_1F84DArray *pSVar1;
  uint uVar2;
  SettMapMTy_field_1F84Element *pcVar3;
  uint uVar3;
  bool bVar4;

  DAT_0080874d = -1;
  pSVar1 = this->field_1F84;
  if (pSVar1 != (SettMapMTy_field_1F84DArray *)0x0) {
    uVar2 = pSVar1->count;
    uVar3 = 0;
    if (0 < (int)uVar2) {
      bVar4 = uVar2 != 0;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      while ((((!bVar4 ||
               (pcVar3 = (SettMapMTy_field_1F84Element *)
                         (&pSVar1->data->field_0000 + pSVar1->elementSize * uVar3),
               pcVar3 == (SettMapMTy_field_1F84Element *)0x0)) || (pcVar3->field_0004 != '\x02')) ||
             (pcVar3->data != DAT_0080877f))) {
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < uVar2;
        if ((int)uVar2 <= (int)uVar3) {
          return;
        }
      }
      DAT_0080874d = pcVar3->state;
      DAT_0080874e = pcVar3->field_0003;
    }
  }
  return;
}

