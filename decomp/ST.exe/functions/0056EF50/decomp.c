
/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=2; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall STAppC::sub_0056EF50(STAppC *this)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint local_8;

  if (this->field_1195 != '\0') {
    bVar2 = 0;
    local_8 = 0;
    do {
      if (((&this->field_11C9)[local_8 * 0x51] == this->field_112D) &&
         ((&this->field_11A7)[local_8 * 0x51] == '\0')) {
        this->field_112E = (&this->field_11C8)[local_8 * 0x51];
        return;
      }
      bVar2 = bVar2 + 1;
      local_8 = (uint)bVar2;
    } while (bVar2 < 8);
  }
  this->field_112D = 0xff;
  this->field_112E = 0;
  pcVar1 = &this->field_11C9;
  iVar3 = 8;
  do {
    if (((*pcVar1 != -1) && (pcVar1[-1] != '\0')) && (pcVar1[-0x22] == '\0')) {
      this->field_112D = *pcVar1;
      this->field_112E = pcVar1[-1];
      this->field_112F = 0;
    }
    pcVar1 = pcVar1 + 0x51;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  thunk_FUN_0056ee90((AnonShape_0056EE90_04DD57E6 *)this);
  return;
}

