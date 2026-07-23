
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00696790(CGenerate *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;

  iVar3 = 0;
  if (0 < (int)this->field_582F) {
    do {
      uVar1 = Library::MSVCRT::FUN_0072e6c0();
      iVar4 = iVar3 + 1;
      this->field_584B[iVar3] = (byte)((int)uVar1 % this->field_583B);
      iVar3 = iVar4;
    } while (iVar4 < (int)this->field_582F);
  }
  uVar1 = this->field_582F;
  puVar5 = this->field_584F;
  for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar5[0] = 0xffff;
    puVar5[1] = 0xffff;
    puVar5 = puVar5 + 2;
  }
  for (iVar3 = (uVar1 & 1) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = 0xff;
    puVar5 = (ushort *)((int)puVar5 + 1);
  }
  return;
}

