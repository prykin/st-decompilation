
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=16; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
CGenerate::sub_0069B400(CGenerate *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int *local_10;
  int local_c;

  iVar2 = 0;
  iVar3 = (param_3 - param_1) + 1;
  iVar6 = (param_4 - param_2) + 1;
  local_c = 0;
  if (this->field_5847 != 1 && -1 < this->field_5847 + -1) {
    local_10 = (int *)(param_5 + 0x18);
    do {
      param_3 = 0;
      param_4 = 0;
      if (0 < iVar6) {
        iVar4 = (this->field_5833 * param_2 + this->field_582F * local_c + param_1) * 2;
        param_5 = iVar6;
        do {
          if (0 < iVar3) {
            psVar7 = (short *)((int)this->field_584F + iVar4);
            iVar5 = iVar3;
            do {
              sVar1 = *psVar7;
              if (0 < sVar1) {
                iVar2 = iVar2 + sVar1;
                if (sVar1 == 4) {
                  param_4 = param_4 + 1;
                }
                else {
                  param_3 = param_3 + 1;
                }
              }
              psVar7 = psVar7 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          iVar4 = iVar4 + this->field_5833 * 2;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      local_c = local_c + 1;
      local_10[-5] = param_3;
      *local_10 = param_4;
      local_10 = local_10 + 1;
    } while (local_c < this->field_5847 + -1);
  }
  return iVar2;
}

