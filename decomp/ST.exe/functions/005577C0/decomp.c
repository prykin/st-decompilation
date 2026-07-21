
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AEEC (store 005577C9)
   Evidence: final_vptr=0079AEEC; returns_this=true; calls_before=1; field_writes_after=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall VisibleClassTy::VisibleClassTy(VisibleClassTy *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &VisibleClassTyVTable;
  g_visibleClass_00802A88 = this;
  this->field_0024 = 0;
  this->field_0020 = 0;
  this->field_002C = 0;
  this->field_0028 = 0;
  this->field_0034 = 0;
  this->field_0030 = 0;
  this->field_0104 = 1;
  this->field_0038 = 0;
  this->field_004C = 0;
  this->field_0050 = 0;
  puVar3 = (undefined4 *)&this->field_0x54;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)&this->field_0x74;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)&this->field_0x94;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  this->field_003C = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x44 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  this->field_00F4 = (DArrayTy *)0x0;
  this->field_0110 = (DArrayTy *)0x0;
  this->field_0114 = 0;
  this->field_00F8 = 1;
  puVar3 = &this->field_0118;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &this->field_01D8;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  this->field_00FC = 0;
  this->field_0100 = 0;
  uVar1 = thunk_FUN_004ab050();
  this->field_010C = uVar1;
  return &this->vtable;
}

