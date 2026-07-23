
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00696810(CGenerate *this)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_38 [9];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  uVar4 = 0xffffffff;
  sub_006948E0(this,this->field_5833);
  local_c = 0;
  if (0 < (int)this->field_582F) {
    do {
      iVar3 = local_c;
      local_14 = sub_00696400(this,local_c,(int)local_38);
      pbVar1 = this->field_584B + iVar3;
      local_10 = (uint)*pbVar1;
      local_8 = 0;
      if (0 < local_14) {
        piVar2 = local_38;
        do {
          uVar4 = (uint)(short)this->field_584F[*piVar2];
          if (-1 < (int)uVar4) {
            iVar3 = local_c;
            if ((uint)this->field_584B[*piVar2] == (uint)*pbVar1) break;
            uVar4 = 0xffffffff;
          }
          piVar2 = piVar2 + 1;
          local_8 = local_8 + 1;
        } while (local_8 < local_14);
      }
      if ((int)uVar4 < 0) {
        uVar7 = 0;
        uVar6 = 0;
        iVar5 = 0;
        uVar4 = Library::MSVCRT::FUN_0072e6c0();
        uVar4 = sub_00695C10(this,local_10,(int)uVar4 % this->field_5847 + 1,iVar5,uVar6,uVar7);
        if (-1 < (int)uVar4) goto LAB_006968cf;
      }
      else {
LAB_006968cf:
        sub_00695F70(this,uVar4,iVar3,0);
      }
      local_c = iVar3 + 1;
    } while (local_c < (int)this->field_582F);
  }
  return;
}

