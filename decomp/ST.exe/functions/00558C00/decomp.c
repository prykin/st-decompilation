
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00558C00_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=16; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/VisibleClassTy_sub_00558C00_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall
VisibleClassTy::sub_00558C00
          (VisibleClassTy *this,VisibleClassTy_sub_00558C00_param_1Enum param_1,int param_2,
          int param_3,int *param_4,int *param_5)

{
  int iVar1;

  switch(param_1) {
  case CASE_0:
    *param_4 = (param_2 - param_3) * 0xb505 + this->field_0030 * 0x8000 >> 0x10;
    *param_5 = (param_2 + param_3) * 0xb505 + 0x8fc3c >> 0x10;
    return;
  case CASE_1:
    *param_4 = (param_2 + param_3) * 0xb505 + 0x8fc3c >> 0x10;
    iVar1 = param_3;
    param_3 = param_2;
    break;
  case CASE_2:
    *param_4 = (param_3 - param_2) * 0xb505 + this->field_0030 * 0x8000 >> 0x10;
    *param_5 = ((param_2 + param_3) * -0xb505 + -0x8fc3c >> 0x10) + -1 + this->field_0034;
    return;
  case CASE_3:
    *param_4 = ((param_2 + param_3) * -0xb505 + -0x8fc3c >> 0x10) + -1 + this->field_0030;
    iVar1 = param_2;
    break;
  default:
    goto switchD_00558c11_default;
  }
  *param_5 = (iVar1 - param_3) * 0xb505 + this->field_0034 * 0x8000 >> 0x10;
switchD_00558c11_default:
  return;
}

