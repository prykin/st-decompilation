
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006DDAE0
          (ST3DSMAPContext *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;

  *(int *)&this->field_0x14c = param_2;
  *(int *)&this->field_0x148 = param_1;
  uVar2 = param_1 + param_2 + param_3;
  *(int *)&this->field_0x150 = param_3;
  iVar1 = Library::DKW::LIB::FUN_006acf50(*(int *)&this->field_0x154,(uVar2 + 1) * 0x100);
  *(int *)&this->field_0x154 = iVar1;
  iVar1 = 0;
  do {
    *(char *)(*(int *)&this->field_0x154 + iVar1) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  puVar3 = (undefined4 *)(*(int *)&this->field_0x154 + 0x100);
  for (iVar1 = (uVar2 & 0xffffff) << 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_4;
    param_4 = (undefined4 *)((int)param_4 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  sub_006DD870(this);
  sub_006DDB70(this);
  return;
}

