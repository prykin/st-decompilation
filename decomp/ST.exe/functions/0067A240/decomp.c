
/* [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0067C180 -> 0067A240 @ 0067C248 | 0067C180 -> 0067A240 @ 0067C4CC */

void __thiscall AiPlrClassTy::sub_0067A240(AiPlrClassTy *this,undefined *param_1,DArrayTy *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  DArrayTy *pDVar4;
  uint uVar5;

  pDVar4 = this->field_0695;
  if (pDVar4 != (DArrayTy *)0x0) {
    uVar1 = pDVar4->count;
    uVar5 = 0;
    if (0 < (int)uVar1) {
      do {
        if (((pDVar4 != (DArrayTy *)0x0) && (-1 < (int)uVar5)) && ((int)uVar5 < (int)uVar1)) {
          if (uVar5 < uVar1) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar5) (runtime stride) */
            puVar2 = (undefined4 *)(pDVar4->elementSize * uVar5 + (int)pDVar4->data);
          }
          else {
            puVar2 = (undefined4 *)0x0;
          }
          if (((puVar2[1] != 0) && ((void *)*puVar2 != (void *)0x0)) &&
             (iVar3 = thunk_FUN_006904d0((void *)*puVar2,param_1,param_2), iVar3 != 0)) {
            return;
          }
        }
        pDVar4 = this->field_0695;
        uVar5 = uVar5 + 1;
        uVar1 = pDVar4->count;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  return;
}

