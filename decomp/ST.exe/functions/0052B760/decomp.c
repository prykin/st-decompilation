
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0068 uses
   /SubmarineTitans/Recovered/Enums/MoneyTy_field_0068State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall MoneyTy::sub_0052B760(MoneyTy *this,AnonShape_0052B760_30F4E0D5 *param_1)

{
  ushort uVar1;

  switch(this->field_0068) {
  case CASE_1:
    param_1->field_0014 = 3;
    goto cf_common_exit_0052B7B9;
  case CASE_2:
    param_1->field_0014 = 2;
    goto cf_common_exit_0052B7B9;
  case CASE_3:
    uVar1 = (-(ushort)(DAT_0080874e != '\x03') & 0xfffd) + 4;
    break;
  default:
    uVar1 = (DAT_0080874e != '\x03') - 1 & 5;
  }
  param_1->field_0014 = uVar1;
cf_common_exit_0052B7B9:
  param_1->field_0016 = 2;
  switch(this->field_0068) {
  case CASE_1:
    param_1->field_0018 = 0x271c;
    return;
  case CASE_2:
    param_1->field_0018 = 0x271d;
    return;
  case CASE_3:
    param_1->field_0018 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffed) + 0x2731;
    return;
  case CASE_4:
    param_1->field_0018 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff0) + 0x2730;
    return;
  default:
    param_1->field_0018 = (DAT_00808a97 == -1) + 0x2748;
    return;
  }
}

