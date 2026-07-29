#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00696DC0(CGenerate *this,int param_1,int param_2)

{
  CGenerate_field_5853Element *piVar1;
  uint uVar1;
  CGenerate_field_5853DArray *pCVar2;
  int iVar3;
  uint uVar4;
  CGenerate_field_5853Element *pAVar6;
  int iVar5;
  bool bVar6;

  pCVar2 = this->field_5853;
  if (pCVar2 == (CGenerate_field_5853DArray *)0x0) {
    return;
  }
  uVar1 = pCVar2->count;
  iVar5 = 0;
  uVar4 = 0;
  if (0 < (int)uVar1) {
    bVar6 = uVar1 != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((((bVar6) &&
           (piVar1 = (CGenerate_field_5853Element *)
                     ((int)&pCVar2->data->field_0000 + pCVar2->elementSize * uVar4),
           piVar1 != (CGenerate_field_5853Element *)0x0)) && (piVar1->field_0011 <= param_2)) &&
         (piVar1->field_0000 == param_1)) {
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      bVar6 = uVar4 < uVar1;
    } while ((int)uVar4 < (int)uVar1);
    iVar3 = 4;
    if (3 < iVar5) goto LAB_00696e1a;
  }
  iVar3 = 1;
LAB_00696e1a:
  uVar4 = 0;
  if (0 < (int)uVar1) {
    bVar6 = uVar1 != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if (((bVar6) &&
          (pAVar6 = (CGenerate_field_5853Element *)
                    ((int)&pCVar2->data->field_0000 + pCVar2->elementSize * uVar4),
          pAVar6 != (CGenerate_field_5853Element *)0x0)) &&
         ((pAVar6->field_0011 <= param_2 &&
          ((pAVar6->field_0000 == param_1 &&
           (uVar1 = Library::MSVCRT::FUN_0072e6c0(), (int)uVar1 % (iVar3 + 1) != 0)))))) {
        thunk_FUN_00696d00(this,(AnonShape_00696D00_CB3CB395 *)pAVar6,uVar4);
      }
      uVar4 = uVar4 + 1;
      pCVar2 = this->field_5853;
      bVar6 = uVar4 < pCVar2->count;
    } while ((int)uVar4 < (int)pCVar2->count);
  }
  return;
}

