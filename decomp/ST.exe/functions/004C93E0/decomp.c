#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

int __thiscall STGameObjC::sub_004C93E0(STGameObjC *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = *(int *)&this->field_0x3d4;
  iVar1 = 0;
  if (((iVar3 != 0) && (piVar2 = *(int **)&this->field_0x607, piVar2 != nullptr)) && (0 < iVar3))
  {
    do {
      if ((param_1 == 0) || (*piVar2 == param_1)) {
        iVar1 = iVar1 + piVar2[2];
      }
      piVar2 = (int *)((int)piVar2 + 0x27);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

