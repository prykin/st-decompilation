
/* [STPrototypeRepairApplier] Propagated return.
   Evidence: 006025D0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 006021E2

   [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall STDestC::sub_006025D0(STDestC *this,undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;

  if (this->field_036E != 3) {
    pbVar1 = (byte *)Library::DKW::LIB::FUN_006aac70(0x17e);
    if (this->field_036E == 2) {
      this->field_036E = (uint)(this->field_039F < '\x01');
    }
    this->field_023D = 2;
    puVar3 = (undefined4 *)&this->field_0x231;
    pbVar4 = pbVar1;
    for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pbVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pbVar4 = pbVar4 + 4;
    }
    *(undefined2 *)pbVar4 = *(undefined2 *)puVar3;
    *param_1 = 0x17e;
    return pbVar1;
  }
  *param_1 = 0;
  return (byte *)0x0;
}

