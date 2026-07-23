
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00696DC0(CGenerate *this,int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  DArrayTy *pDVar3;
  int iVar4;
  uint uVar5;
  AnonShape_00696D00_CB3CB395 *pAVar6;
  int iVar7;
  bool bVar8;

  pDVar3 = this->field_5853;
  if (pDVar3 == (DArrayTy *)0x0) {
    return;
  }
  uVar2 = pDVar3->count;
  iVar7 = 0;
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar8 = uVar2 != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar5) (runtime stride) */
      if ((((bVar8) &&
           (piVar1 = (int *)(pDVar3->elementSize * uVar5 + (int)pDVar3->data), piVar1 != (int *)0x0)
           ) && (*(int *)((int)piVar1 + 0x11) <= param_2)) && (*piVar1 == param_1)) {
        iVar7 = iVar7 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar8 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
    iVar4 = 4;
    if (3 < iVar7) goto LAB_00696e1a;
  }
  iVar4 = 1;
LAB_00696e1a:
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar8 = uVar2 != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar5) (runtime stride) */
      if (((bVar8) &&
          (pAVar6 = (AnonShape_00696D00_CB3CB395 *)(pDVar3->elementSize * uVar5 + (int)pDVar3->data)
          , pAVar6 != (AnonShape_00696D00_CB3CB395 *)0x0)) &&
         ((*(int *)&pAVar6->field_0x11 <= param_2 &&
          ((*(int *)pAVar6 == param_1 &&
           (uVar2 = Library::MSVCRT::FUN_0072e6c0(), (int)uVar2 % (iVar4 + 1) != 0)))))) {
        thunk_FUN_00696d00(this,pAVar6,uVar5);
      }
      uVar5 = uVar5 + 1;
      pDVar3 = this->field_5853;
      bVar8 = uVar5 < pDVar3->count;
    } while ((int)uVar5 < (int)pDVar3->count);
  }
  return;
}

