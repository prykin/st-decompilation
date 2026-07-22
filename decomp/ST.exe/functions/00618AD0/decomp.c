
/* [STMethodOwnerApplier] Structural method owner recovered as JumpManagC.
   Evidence: this_call_owners=[JumpManagC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall JumpManagC::sub_00618AD0(JumpManagC *this)

{
  int iVar1;
  void *pvVar2;
  DArrayTy *pDVar3;
  uint uVar4;
  bool bVar5;

  pDVar3 = this->field_005E;
  if (pDVar3 != (DArrayTy *)0x0) {
    uVar4 = 0;
    if (0 < (int)pDVar3->count) {
      bVar5 = pDVar3->count != 0;
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar4) (runtime stride) */
        if (((bVar5) &&
            (pvVar2 = (void *)(pDVar3->elementSize * uVar4 + (int)pDVar3->data),
            pvVar2 != (void *)0x0)) && (iVar1 = *(int *)((int)pvVar2 + 0x18), iVar1 != 0)) {
          *(undefined4 *)(iVar1 + 0x7d) = 0;
          *(undefined4 *)(iVar1 + 0x8b) = 0;
          *(undefined4 *)(iVar1 + 0x79) = 0;
        }
        pDVar3 = this->field_005E;
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < pDVar3->count;
      } while ((int)uVar4 < (int)pDVar3->count);
    }
  }
  return;
}

