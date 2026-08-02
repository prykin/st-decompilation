
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005148A0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=2; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=1; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as HelpPanelTy.
   Evidence: this_call_owners=[HelpPanelTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall HelpPanelTy::sub_005148A0(HelpPanelTy *this,int param_1)

{
  AnonPointee_HelpPanelTy_01B3 *pAVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;

  if (param_1 < 1) {
    return;
  }
  iVar6 = param_1;
  do {
    piVar5 = (int *)(this->field_01C7 + iVar6 * 0x11);
    if ((*piVar5 == *(int *)(param_1 * 0x11 + 4 + this->field_01C7)) || (piVar5[1] == 0)) {
      pAVar1 = this->field_01B3;
      uVar4 = 0;
      uVar2 = *(uint *)&pAVar1->field_0xc;
      if (uVar2 != 0) {
        if (uVar2 == 0) {
          piVar3 = nullptr;
          goto LAB_0051490d;
        }
        do {
          piVar3 = (int *)(pAVar1->field_0008 * uVar4 + pAVar1->field_001C);
LAB_0051490d:
          if ((*piVar3 == *piVar5) && (piVar3[1] == piVar5[1])) {
            if (*(char *)((int)piVar3 + 0x12) != '\0') {
              return;
            }
            ChangeTree(this,piVar3,uVar4);
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      sub_005148A0(this,iVar6);
      iVar6 = param_1;
    }
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) {
      return;
    }
  } while( true );
}

