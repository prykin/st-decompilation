
/* [STMethodOwnerApplier] Structural method owner recovered as STExplosion.
   Evidence: this_call_owners=[STExplosion]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STExplosion::sub_00604970(STExplosion *this)

{
  int iVar1;
  int iVar2;
  STMessage *pSVar3;
  STParticleC **ppSVar4;
  STMessage local_28;
  int local_8;

  iVar2 = 0;
  pSVar3 = &local_28;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pSVar3->unknown_00 = 0;
    pSVar3 = (STMessage *)&pSVar3->unknown_04;
  }
  local_28.id = MESS_SHARED_0003;
  local_8 = 0;
  iVar1 = 0;
  if (0 < this->field_0269) {
    ppSVar4 = &this->field_0219;
    do {
      if (*ppSVar4 != (STParticleC *)0x0) {
        STParticleC::GetMessage(*ppSVar4,&local_28);
        iVar1 = thunk_FUN_00604a00(this,iVar2);
        if (iVar1 != 0) {
          local_8 = local_8 + 1;
        }
      }
      iVar2 = iVar2 + 1;
      ppSVar4 = ppSVar4 + 1;
      iVar1 = local_8;
    } while (iVar2 < this->field_0269);
  }
  return iVar1;
}

