
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B528 (store 0057F1F9)
   Evidence: final_vptr=0079B528; returns_this=true; calls_before=2; field_writes_after=2;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0057F1D0 returns STDcResourcC::STDcResourcC this @ 0057F215 */

STDcResourcC * __thiscall STDcResourcC::STDcResourcC(STDcResourcC *this)

{
  int iVar1;
  undefined4 *puVar2;

  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079B688;
  this->vtable = &STDcResourcCVTable;
  puVar2 = &this->field_0231;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  this->field_0261 = 0;
  this->field_0259 = -1;
  return this;
}

