
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004F4570(CPanelTy *this,char param_1,int param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  byte *pbVar3;
  int local_8;

  sVar2 = -1;
  pbVar3 = (byte *)(param_2 + 0xf);
  local_8 = 6;
  do {
    if ((pbVar3[-6] != 0) &&
       ((sVar2 = sVar2 + 1, *pbVar3 != pbVar3[param_3 - param_2] ||
        (*(char *)(param_2 + 7) != *(char *)(param_3 + 7))))) {
      this->field_0028 = 0x54;
      if (*(char *)(param_2 + 7) == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = (uint)*pbVar3;
      }
      *(uint *)&this->field_0x2c = uVar1;
      this->field_0030 = (int)sVar2;
      FUN_006e6080(this,2,(&this->field_02FE)[param_1 == '\0'],(undefined4 *)&this->field_0x18);
    }
    pbVar3 = pbVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

