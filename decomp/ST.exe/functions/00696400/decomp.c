
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=3; incoming_this_accesses=5;
   incoming_edx_uses=1; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

int __thiscall CGenerate::sub_00696400(CGenerate *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_8;

  iVar1 = this->field_5833;
  local_8 = 0;
  if (iVar1 != 0) {
    for (iVar3 = param_1 / iVar1 + -1; iVar3 < param_1 / iVar1 + 2; iVar3 = iVar3 + 1) {
      if ((-1 < iVar3) && (iVar3 < this->field_5837)) {
        iVar2 = param_1 % iVar1 + -1;
        iVar4 = param_1 % iVar1 + 2;
        if (iVar2 < iVar4) {
          iVar5 = iVar3 * this->field_5833 + iVar2;
          piVar6 = (int *)(param_2 + local_8 * 4);
          do {
            if ((((-1 < iVar2) && (iVar2 < this->field_5833)) && (iVar5 != param_1)) &&
               (iVar5 < (int)this->field_582F)) {
              *piVar6 = iVar5;
              local_8 = local_8 + 1;
              piVar6 = piVar6 + 1;
            }
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar2 < iVar4);
        }
      }
    }
    return local_8;
  }
  return 0;
}

