
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D76C (store 0068DC0B)
   Evidence: final_vptr=0079D76C; returns_this=true; calls_before=1; field_writes_after=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall AiTactClassTy::AiTactClassTy(AiTactClassTy *this)

{
  int iVar1;
  undefined4 *puVar2;

  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &AiTactClassTyVTable;
  if (this == (AiTactClassTy *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &this->field_0020;
  }
  for (iVar1 = 0x43; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  this->field_0020 = 0x38e;
  this->field_009D = 0xff;
  this->field_0130 = 0;
  this[1].vtable = (AiTactClassTyVTable *)0x0;
  *(undefined4 *)&this[1].field_0x4 = 0;
  *(undefined4 *)&this[1].field_0x8 = 0;
  *(undefined4 *)&this[1].field_0xc = 0;
  return &this->vtable;
}

