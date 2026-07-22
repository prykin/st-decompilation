
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STLightC::sub_0061F530(STLightC *this)

{
  DArrayTy *pDVar1;
  void *pvVar2;
  uint uVar3;
  bool bVar4;

  pDVar1 = this->field_00A3;
  if (pDVar1 != (DArrayTy *)0x0) {
    uVar3 = 0;
    if (0 < (int)pDVar1->count) {
      bVar4 = pDVar1->count != 0;
      do {
        if (bVar4) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar3) (runtime stride) */
          pvVar2 = (void *)(pDVar1->elementSize * uVar3 + (int)pDVar1->data);
        }
        else {
          pvVar2 = (void *)0x0;
        }
        if (-1 < (int)*(uint *)((int)pvVar2 + 0x26)) {
          FUN_006e8ba0(PTR_00807598,*(uint *)((int)pvVar2 + 0x26));
          *(undefined4 *)((int)pvVar2 + 0x26) = 0xffffffff;
        }
        pDVar1 = this->field_00A3;
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < pDVar1->count;
      } while ((int)uVar3 < (int)pDVar1->count);
    }
    DArrayDestroy(this->field_00A3);
    this->field_00A3 = (DArrayTy *)0x0;
  }
  return;
}

