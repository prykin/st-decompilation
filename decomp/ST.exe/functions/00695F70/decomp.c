#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=3; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

uint __thiscall CGenerate::sub_00695F70(CGenerate *this,uint param_1,int param_2,int param_3)

{
  CGenerate_field_5853DArray *pCVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  int *piVar4;
  undefined2 local_c;
  int iStack_a;

  pCVar1 = this->field_5853;
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
  if (((pCVar1 == (CGenerate_field_5853DArray *)0x0) || (pCVar1->count <= param_1)) ||
     (piVar4 = (int *)((int)&pCVar1->data->field_0000 + pCVar1->elementSize * param_1),
     piVar4 == (int *)0x0)) {
LAB_00696007:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)((int)piVar4 + 0x15) == 0) {
      pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,6,10);
      *(DArrayTy **)((int)piVar4 + 0x15) = pDVar2;
      if (pDVar2 == (DArrayTy *)0x0) goto LAB_00696007;
    }
    local_c = 0;
    iStack_a = param_2;
    uVar3 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)piVar4 + 0x15),(undefined4 *)&local_c);
    if (-1 < (int)uVar3) {
      *(uint *)((int)piVar4 + 0x11) = uVar3 + 1;
      if (this->field_584F != (ushort *)0x0) {
        this->field_584F[this->field_582F * param_3 + param_2] = (ushort)param_1;
        return uVar3;
      }
    }
  }
  return uVar3;
}

