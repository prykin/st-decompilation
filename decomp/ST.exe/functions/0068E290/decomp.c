
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=2; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

int __thiscall AiTactClassTy::sub_0068E290(AiTactClassTy *this,short param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  bool bVar6;

  pDVar1 = this->field_00A5;
  uVar5 = 0;
  uVar2 = pDVar1->count;
  if (0 < (int)uVar2) {
    bVar6 = uVar2 != 0;
    do {
      if (bVar6) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar5) (runtime stride) */
        pvVar4 = (void *)(pDVar1->elementSize * uVar5 + (int)pDVar1->data);
      }
      else {
        pvVar4 = (void *)0x0;
      }
      iVar3 = *(int *)((int)pvVar4 + 4);
      if ((iVar3 != 0) && (*(short *)(iVar3 + 0x7d) == param_1)) {
        return iVar3;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return 0;
}

