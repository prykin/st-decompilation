
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790758 (store 004A88C8)
   Evidence: final_vptr=00790758; returns_this=true; calls_before=1; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall OpticClassC::OpticClassC(OpticClassC *this)

{
  DWORD DVar1;

  STGroupBoatC::sub_006E5FB0((STGroupBoatC *)this);
  *(OpticClassCVTable **)this = &OpticClassCVTable;
  DVar1 = timeGetTime();
  *(DWORD *)(this + 0x18) = DVar1;
  return (undefined4 *)this;
}

