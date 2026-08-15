#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=6;
   incoming_edx_uses=1; incoming_stack_parameter_uses=48; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_00A8 uses
   /SubmarineTitans/Recovered/Enums/ST3DSMAPContext_field_00A8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
ST3DSMAPContext::sub_006E68C0
          (ST3DSMAPContext *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  float local_8;

  fVar3 = _DAT_0079034c;
  *param_3 = 0;
  *param_4 = 0;
  iVar6 = this->field_03DC;
  fVar4 = _DAT_0079dfd0 / (float)iVar6;
  iVar5 = iVar6 / 2;
  iVar7 = (int)*(short *)this->field_0280;
  local_8 = 0.0;
  fVar2 = (float)iVar7 * (float)this->field_00C8;
  switch(this->field_00A8) {
  case CASE_0:
    fVar3 = (float)((param_1 - iVar5) + param_2) * fVar2 * fVar4;
    local_8 = (float)((iVar5 - param_1) + param_2) * fVar2 * fVar4;
    break;
  case CASE_1:
    fVar3 = (float)((iVar5 - param_2) + param_1) * fVar2 * fVar4;
    local_8 = (float)((param_1 - iVar5) + param_2) * fVar2 * fVar4;
    break;
  case CASE_2:
    iVar1 = ((iVar6 - iVar5) - param_2) + -1 + param_1;
    param_2 = ((iVar6 - param_1) - param_2) + -1 + iVar5;
    goto LAB_006e6a01;
  case CASE_3:
    iVar1 = ((iVar6 - param_1) - param_2) + -1 + iVar5;
    param_2 = ((iVar6 - iVar5) - param_1) + -1 + param_2;
LAB_006e6a01:
    fVar3 = (float)param_2 * fVar2 * fVar4;
    local_8 = (float)iVar1 * fVar2 * fVar4;
  }
  uVar8 = 1;
  fVar3 = fVar3 / (float)this->field_00C8;
  if (_DAT_0079034c <= fVar3) {
    if (fVar3 < (float)iVar7) {
      Library::MSVCRT::FUN_0072e150(SUB84((double)fVar3,0),(uint)((ulonglong)(double)fVar3 >> 0x20));
      lVar9 = Library::MSVCRT::__ftol();
      *param_3 = (int)lVar9;
    }
    else {
      uVar8 = 0;
      *param_3 = iVar7 + -1;
    }
  }
  else {
    *param_3 = 0;
    uVar8 = 0;
  }
  local_8 = local_8 / (float)this->field_00C8;
  if (_DAT_0079034c <= local_8) {
    iVar6 = (int)*(short *)&this->field_0280->field_0x2;
    if (local_8 < (float)iVar6) {
      Library::MSVCRT::FUN_0072e150
                (SUB84((double)local_8,0),(uint)((ulonglong)(double)local_8 >> 0x20));
      lVar9 = Library::MSVCRT::__ftol();
      *param_4 = (int)lVar9;
      return uVar8;
    }
    *param_4 = iVar6 + -1;
    return 0;
  }
  *param_4 = 0;
  return 0;
}

