
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STBHEShellC::sub_005F53A0(STBHEShellC *this)

{
  dword dVar1;
  DArrayTy *pDVar2;
  void *pvVar3;
  uint uVar4;

  if (this->field_0169 != (DArrayTy *)0x0) {
    dVar1 = this->field_0169->count;
    uVar4 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = this->field_0169;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar4) (runtime stride) */
        if (((uVar4 < pDVar2->count) &&
            (pvVar3 = (void *)(pDVar2->elementSize * uVar4 + (int)pDVar2->data),
            pvVar3 != (void *)0x0)) && (-1 < (int)*(uint *)((int)pvVar3 + 0x1f))) {
          FUN_006e8ba0(PTR_00807598,*(uint *)((int)pvVar3 + 0x1f));
          *(undefined4 *)((int)pvVar3 + 0x1f) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)dVar1);
    }
    DArrayDestroy(this->field_0169);
    this->field_0169 = (DArrayTy *)0x0;
  }
  return;
}

