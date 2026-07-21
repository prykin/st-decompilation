
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D6BC (store 0065D23B)
   Evidence: final_vptr=0079D6BC; returns_this=true; calls_before=1; field_writes_after=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall AiFltClassTy::AiFltClassTy(AiFltClassTy *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &AiFltClassTyVTable;
  if (this == (AiFltClassTy *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &this->field_0020;
  }
  for (iVar1 = 0x98; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  this->field_0284 = (AnonPointee_AiFltClassTy_0284 *)0x0;
  this->field_0020 = 900;
  this->field_007D = 0xfffe;
  this->field_0097 = 0xff;
  return &this->vtable;
}

