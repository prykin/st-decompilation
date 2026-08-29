#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STLightC::sub_0061D8F0(STLightC *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  DArrayTy *pSVar3;
  int iVar3;
  byte *puVar4;
  int *piVar5;
  byte *puVar6;
  int local_10;
  int local_c;
  int *local_8;

  if (this == nullptr) {
    puVar6 = nullptr;
  }
  else {
    puVar6 = (byte *)&this->field_0x1c;
  }
  puVar4 = (byte *)(param_1);
  memmove(puVar6, puVar4, 0x90); /* compiler REP MOVS byte copy */
  iVar3 = 0;
  /* ST_CALLSITE[0061D921]: CALL 0x004050d3; direct=004050D3 STLightC::sub_0061D9C0 */
  local_c = sub_0061D9C0(this,(ushort *)(param_1 + 0x24),&local_10,1);
  piVar1 = (int *)(local_c + (int)(param_1 + 0x24));
  piVar5 = piVar1 + 1;
  local_8 = piVar5;

  piVar2 = Library::DKW::LIB::MemAlloc(this->field_0093 << 4);
  this->field_0057 = piVar2;
  for (iVar3 = (this->field_0093 & 0xfffffffU) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar2 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar2 = piVar2 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(char *)piVar2 = (char)*piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
    piVar2 = (int *)((int)piVar2 + 1);
  }
  /* ST_CALLSITE[0061D96E]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STLightC_field_00A3DArray; source view only; no Ghidra override */
  pSVar3 = FUN_006b0060(nullptr,(uint *)((int)local_8 + *piVar1 + 4));
  this->field_00A3 = (STLightC_field_00A3DArray *)pSVar3;
  return local_c;
}

