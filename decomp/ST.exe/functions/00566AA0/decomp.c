
/* [STMethodOwnerApplier] Structural method owner recovered as SoundManagerTy.
   Evidence: this_call_owners=[SoundManagerTy]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0038 uses
   /SubmarineTitans/Recovered/Enums/SoundManagerTy_field_0038State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall SoundManagerTy::sub_00566AA0(SoundManagerTy *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  if ((this->field_0018 != 0) && (this->field_0028 != 0)) {
    switch(this->field_0038) {
    case CASE_0:
    case CASE_1:
      uVar3 = this->field_002C;
      break;
    case CASE_2:
      uVar3 = this->field_0030;
      break;
    case CASE_3:
      uVar3 = this->field_0034;
      break;
    default:
      goto switchD_00566ac8_default;
    }
    if (0 < (int)uVar3) {
      if (this->field_0039 < 0) {
        sub_00566970(this,0,2000);
      }
      else {
        iVar1 = thunk_FUN_0056a4d0(0x807658);
        if (iVar1 == 0) {
          if (((int)uVar3 < 2) || ((this->field_0038 != CASE_1 && (this->field_0038 != CASE_3)))) {
            uVar2 = Library::MSVCRT::FUN_0072e6c0();
            uVar2 = uVar2 % uVar3;
            if ((uVar2 == this->field_0039) && (1 < this->field_003D)) {
              uVar2 = this->field_0039 + 1;
            }
            if ((int)uVar3 <= (int)uVar2) {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = Library::MSVCRT::FUN_0072e6c0();
            uVar2 = uVar2 % (uVar3 - 1) + 1;
            if ((uVar2 == this->field_0039) && (1 < this->field_003D)) {
              uVar2 = this->field_0039 + 1;
            }
            if ((int)uVar3 <= (int)uVar2) {
              sub_00566970(this,1,0);
              return;
            }
          }
          sub_00566970(this,uVar2,0);
          return;
        }
      }
    }
  }
switchD_00566ac8_default:
  return;
}

