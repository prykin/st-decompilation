#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STBHEShellC::sub_005F5D10(STBHEShellC *this,int param_1)

{
  int iVar1;
  uint local_c;
  short local_8;
  short local_6;

  if (param_1 != 0) {
    if (param_1 == 1) {
      this->field_0093 = this->field_0040;
      this->field_0097 = this->field_0044;
      this->field_009B = this->field_0048;
      this->field_0034 = 0;
LAB_005f5d4b:
      /* ST_CALLSITE[005F5D59]: CALL 0x00404e0d; direct=00404E0D STBHEShellC::sub_005F5E30 */
      sub_005F5E30(this,this->field_0040,this->field_0044,this->field_0048);
      this->field_0104 = CASE_3;
      return;
    }
    if (param_1 == 2) {
      if ((int *)this->field_0034 != nullptr) {
        /* ST_CALLSITE[005F5D91]: CALL dword ptr [EAX + 0xe0]; [STIndirectCallsiteApplier] exact slot 0xE0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
        iVar1 = STStructuralVirtualCall<undefined4>(STField<int *>(this,0x34), 0xE0, this->field_0038, (int)&param_1 + 2, &local_6, &local_8, &local_c);
        if (iVar1 == 0) {
          this->field_0040 = (int)STPiece<2,2>(param_1);
          this->field_0093 = (int)STPiece<2,2>(param_1);
          this->field_0044 = (int)local_6;
          this->field_0048 = (int)local_8;
          this->field_0097 = (int)local_6;
          this->field_009B = (int)local_8;
          this->field_003C = local_c;
          goto LAB_005f5d4b;
        }
      }
      this->field_0104 = CASE_5;
    }
  }
  this->field_0104 = CASE_5;
  return;
}

