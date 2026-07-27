
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined1 __thiscall StartSystemTy::sub_005DA940(StartSystemTy *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;

  iVar3 = 4;
  piVar4 = (int *)(this->field_068A + 0xc + param_1 * 0x14);
  piVar5 = &DAT_007cd700;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    iVar2 = *piVar5;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar1 == iVar2);
  return 0;
}

