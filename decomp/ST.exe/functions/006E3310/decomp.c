#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=7;
   incoming_edx_uses=2; incoming_stack_parameter_uses=15; direct_non_thunk_callers=4;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

int * __thiscall
ST3DSMAPContext::sub_006E3310
          (ST3DSMAPContext *this,int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;

  if (param_4 != nullptr) {
    *param_4 = 0;
  }
  piVar4 = param_4;
  if ((-1 < param_1) && (piVar4 = param_2, -1 < (int)param_2)) {
    iVar2 = this->field_0380 * 2;
    iVar3 = param_1 / iVar2;
    piVar4 = (int *)(param_1 / iVar2);
    if ((-1 < iVar3) && (iVar1 = this->field_0284, iVar3 < iVar1)) {
      piVar4 = (int *)((int)param_2 / iVar2);
      if ((-1 < (int)piVar4) && ((int)piVar4 < iVar1)) {
        iVar6 = 5;
        piVar5 = (int *)(&this->field_0280[1].field_0xc +
                        (this->field_0288 * 5 + iVar3 + iVar1 * (int)piVar4) * 4);
        do {
          piVar4 = (int *)*piVar5;
          if (((piVar4 != nullptr) &&
              (*(char *)(piVar4[0x10] + this->field_0380 * ((int)param_2 % iVar2) * 2 +
                        param_1 % iVar2) != '\0')) &&
             (piVar4 = (int *)(iVar6 - (uint)((byte *)piVar4)[0x12]), (int)piVar4 <= param_3)) {
            if (iVar6 < 1) {
              return piVar4;
            }
            if (param_4 != nullptr) {
              *param_4 = iVar6;
            }
            return (int *)this;
          }
          iVar6 = iVar6 + -1;
          piVar5 = piVar5 + -this->field_0288;
        } while (0 < iVar6);
      }
    }
  }
  return piVar4;
}

