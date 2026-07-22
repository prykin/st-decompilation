
/* [STMethodOwnerApplier] Structural method owner recovered as TraksClassTy.
   Evidence: this_call_owners=[TraksClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall TraksClassTy::sub_00555D90(TraksClassTy *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;

  iVar4 = this->field_0828;
  if (-1 < iVar4) {
    uVar2 = (uint)*(short *)(&this->field_0x28 + iVar4 * 2);
    this->field_0828 = iVar4 + -1;
    if (-1 < (int)uVar2) {
      pDVar1 = this->field_0024;
      if (uVar2 < pDVar1->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar2) (runtime stride) */
        puVar6 = (undefined4 *)(pDVar1->elementSize * uVar2 + (int)pDVar1->data);
        for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *param_1;
          param_1 = param_1 + 1;
          puVar6 = puVar6 + 1;
        }
        return 0;
      }
LAB_00555e34:
      puVar6 = (undefined4 *)0x0;
      for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *param_1;
        param_1 = param_1 + 1;
        puVar6 = puVar6 + 1;
      }
      return 0;
    }
  }
  pDVar1 = this->field_0024;
  uVar5 = 0;
  uVar2 = pDVar1->count;
  if (0 < (int)uVar2) {
    bVar7 = uVar2 != 0;
    do {
      if (bVar7) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar5) (runtime stride) */
        pvVar3 = (void *)(pDVar1->elementSize * uVar5 + (int)pDVar1->data);
      }
      else {
        pvVar3 = (void *)0x0;
      }
      if (*(int *)((int)pvVar3 + 0x32) < 0) {
        if (-1 < (int)uVar5) {
          if (uVar5 < uVar2) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar5) (runtime stride) */
            puVar6 = (undefined4 *)(pDVar1->elementSize * uVar5 + (int)pDVar1->data);
            for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *param_1;
              param_1 = param_1 + 1;
              puVar6 = puVar6 + 1;
            }
            return 0;
          }
          goto LAB_00555e34;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      bVar7 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  uVar2 = Library::DKW::TBL::FUN_006ae1c0(&pDVar1->flags,param_1);
  return uVar2;
}

