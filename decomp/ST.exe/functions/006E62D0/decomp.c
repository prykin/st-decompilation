
/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=133; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=89;
   incoming_ecx_receiver_callers=2; attributed_named_callers=87; owner_evidence_coverage=adequate */

undefined4 __thiscall STPlaySystemC::sub_006E62D0(STPlaySystemC *this,int param_1,int *param_2)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;

  this->field_0010->iteratorIndex = 0;
  while( true ) {
    pDVar1 = this->field_0010;
    uVar2 = pDVar1->iteratorIndex;
    if (pDVar1->count <= uVar2) {
      return 0xfffffffc;
    }
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar2) (runtime stride) */
    pvVar4 = (void *)(pDVar1->elementSize * uVar2 + (int)pDVar1->data);
    pDVar1->iteratorIndex = uVar2 + 1;
    if (pvVar4 == (void *)0x0) break;
    iVar3 = *(int *)((int)pvVar4 + 4);
    if (*(int *)(iVar3 + 0x18) == param_1) {
      if (param_2 != (int *)0x0) {
        *param_2 = iVar3;
      }
      return 0;
    }
  }
  return 0xfffffffc;
}

