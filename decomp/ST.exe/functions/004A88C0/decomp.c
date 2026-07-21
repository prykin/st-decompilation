
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790758 (store 004A88C8)
   Evidence: final_vptr=00790758; returns_this=true; calls_before=1; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

OpticClassC * __thiscall OpticClassC::OpticClassC(OpticClassC *this)

{
  DWORD DVar1;

  sub_006E5FB0(this);
  this->vtable = &OpticClassCVTable;
  DVar1 = timeGetTime();
  this->field_0018 = DVar1;
  return this;
}

