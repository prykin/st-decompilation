
/* [STMethodOwnerApplier] Structural method owner recovered as SoundManagerTy.
   Evidence: this_call_owners=[SoundManagerTy]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0038 uses
   /SubmarineTitans/Recovered/Enums/SoundManagerTy_field_0038State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall SoundManagerTy::sub_00566970(SoundManagerTy *this,int param_1,int param_2)

{
  LPSTR pCVar1;
  int iVar2;
  char *text;
  undefined4 *puVar3;

  if (((this->field_0018 != 0) && (iVar2 = this->field_0028, iVar2 != 0)) && (-1 < param_1)) {
    switch(this->field_0038) {
    case CASE_0:
    case CASE_1:
      if (this->field_002C <= param_1) {
        return;
      }
      iVar2 = param_1 + iVar2 * 100;
      text = PTR_s_GM_PEACE_0079b014;
      break;
    case CASE_2:
      if (this->field_0030 <= param_1) {
        return;
      }
      iVar2 = param_1 + iVar2 * 100;
      text = PTR_s_GM_PWAR_0079b018;
      break;
    case CASE_3:
      if (this->field_0034 <= param_1) {
        return;
      }
      iVar2 = param_1 + iVar2 * 100;
      text = PTR_s_GM_WAR_0079b01c;
      break;
    default:
      goto switchD_005669a6_default;
    }
    puVar3 = (undefined4 *)0x0;
    pCVar1 = FUN_006f2c00(text,3,iVar2);
    iVar2 = thunk_FUN_0056a2a0(&g_sound,(cMf32 *)this->field_0018,pCVar1,param_2,puVar3);
    if (iVar2 == 0) {
      if (this->field_0039 == param_1) {
        this->field_0039 = param_1;
        this->field_003D = this->field_003D + 1;
        return;
      }
      this->field_003D = 1;
      this->field_0039 = param_1;
    }
  }
switchD_005669a6_default:
  return;
}

