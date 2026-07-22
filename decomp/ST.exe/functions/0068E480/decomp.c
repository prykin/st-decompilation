
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=2; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall AiTactClassTy::sub_0068E480(AiTactClassTy *this,short param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  bool bVar7;

  pDVar1 = this->field_00A5;
  uVar4 = 0xffffffff;
  uVar2 = pDVar1->count;
  uVar6 = 0;
  if (0 < (int)uVar2) {
    bVar7 = uVar2 != 0;
    do {
      if (bVar7) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar6) (runtime stride) */
        pvVar5 = (void *)(pDVar1->elementSize * uVar6 + (int)pDVar1->data);
      }
      else {
        pvVar5 = (void *)0x0;
      }
      iVar3 = *(int *)((int)pvVar5 + 4);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((iVar3 != 0) && (*(short *)(iVar3 + 0x7b) == param_1)) && (-1 < *(short *)(iVar3 + 0x7f))
         ) {
        uVar4 = uVar6;
      }
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
  }
  return uVar4;
}

