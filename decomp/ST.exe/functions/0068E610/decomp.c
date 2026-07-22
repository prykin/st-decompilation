
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall AiTactClassTy::sub_0068E610(AiTactClassTy *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  DArrayTy *pDVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  iVar4 = 0;
  uVar5 = 0;
  pDVar3 = this->field_00A5;
  if (0 < (int)pDVar3->count) {
    bVar6 = pDVar3->count != 0;
    do {
      if (bVar6) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar5) (runtime stride) */
        pvVar1 = (void *)(pDVar3->elementSize * uVar5 + (int)pDVar3->data);
      }
      else {
        pvVar1 = (void *)0x0;
      }
      if (*(AnonReceiver_0065DA50 **)((int)pvVar1 + 4) != (AnonReceiver_0065DA50 *)0x0) {
        uVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065DA50::thunk_FUN_0065da50
                          (*(AnonReceiver_0065DA50 **)((int)pvVar1 + 4),param_1,-1);
        iVar4 = iVar4 + uVar2;
      }
      pDVar3 = this->field_00A5;
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < pDVar3->count;
    } while ((int)uVar5 < (int)pDVar3->count);
  }
  return iVar4;
}

