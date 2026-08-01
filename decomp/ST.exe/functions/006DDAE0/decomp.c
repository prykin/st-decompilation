
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006DDAE0
          (ST3DSMAPContext *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;

  *(int *)&this->field_0x14c = param_2;
  *(int *)&this->field_0x148 = param_1;
  uVar3 = param_1 + param_2 + param_3;
  *(int *)&this->field_0x150 = param_3;
  pvVar1 = Library::DKW::LIB::MemRealloc
                     (*(AnonPointee_TLOBaseTy_0607 **)&this->field_0x154,(uVar3 + 1) * 0x100);
  *(void **)&this->field_0x154 = pvVar1;
  iVar2 = 0;
  do {
    *(char *)(*(int *)&this->field_0x154 + iVar2) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  puVar4 = (undefined4 *)(*(int *)&this->field_0x154 + 0x100);
  for (iVar2 = (uVar3 & 0xffffff) << 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_4;
    param_4 = (undefined4 *)((int)param_4 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  sub_006DD870(this);
  sub_006DDB70(this);
  return;
}

