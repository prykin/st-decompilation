#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=7; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=4; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_082E uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_082EState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_FFFFFFFF=4294967295 */

int __fastcall STBoatC::sub_004620F0(STBoatC *param_1)

{
  STBoatC_field_082EState SVar1;
  int iVar1;
  int iVar2;

  if (param_1->field_047B != nullptr) {
    DArrayDestroy(param_1->field_047B);
    param_1->field_047B = nullptr;
  }
  SVar1 = param_1->field_082E;
  if (((SVar1 != CASE_FFFFFFFF) && (SVar1 != ~CASE_FFFFFFFF)) && (SVar1 != CASE_2)) {
    /* ST_CALLSITE[0046212A]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    iVar1 = sub_00460360(param_1);
    return iVar1;
  }
  /* ST_CALLSITE[00462138]: CALL dword ptr [EDX + 0xd8] */
  iVar2 = param_1->vfunc_D8();
  if (iVar2 != 0) {
    return -1;
  }
  return 0;
}

