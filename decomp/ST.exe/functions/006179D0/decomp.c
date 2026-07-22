
/* [STMethodOwnerApplier] Structural method owner recovered as JumpManagC.
   Evidence: this_call_owners=[JumpManagC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall JumpManagC::sub_006179D0(JumpManagC *this)

{
  void *pvVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  bool bVar4;

  pDVar2 = this->field_005E;
  if (pDVar2 != (DArrayTy *)0x0) {
    uVar3 = 0;
    if (0 < (int)pDVar2->count) {
      bVar4 = pDVar2->count != 0;
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar3) (runtime stride) */
        if ((bVar4) &&
           (pvVar1 = (void *)(pDVar2->elementSize * uVar3 + (int)pDVar2->data),
           pvVar1 != (void *)0x0)) {
          *(undefined4 *)((int)pvVar1 + 0x18) = 0;
        }
        pDVar2 = this->field_005E;
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < pDVar2->count;
      } while ((int)uVar3 < (int)pDVar2->count);
    }
  }
  return;
}

