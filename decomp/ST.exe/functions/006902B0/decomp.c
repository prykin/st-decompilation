
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiTactClassTy::sub_006902B0(AiTactClassTy *this,short param_1,uint *param_2)

{
  AiFltClassTy *this_00;
  void *pvVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  pDVar2 = this->field_00A5;
  if (0 < (int)pDVar2->count) {
    bVar4 = pDVar2->count != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar3) (runtime stride) */
      if ((((bVar4) &&
           (pvVar1 = (void *)(pDVar2->elementSize * uVar3 + (int)pDVar2->data),
           pvVar1 != (void *)0x0)) &&
          (this_00 = *(AiFltClassTy **)((int)pvVar1 + 4), this_00 != (AiFltClassTy *)0x0)) &&
         (this_00->field_007B == param_1)) {
        AiFltClassTy::GetAiMess(this_00,param_2);
      }
      pDVar2 = this->field_00A5;
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < pDVar2->count;
    } while ((int)uVar3 < (int)pDVar2->count);
  }
  return;
}

