#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BE80 (store 0058D77B)
   Evidence: final_vptr=0079BE80; returns_this=true; calls_before=2; field_writes_after=3;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0058D750 returns STSharkC::STSharkC this @ 0058D79D */

STSharkC * __thiscall STSharkC::STSharkC(STSharkC *this)

{

  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079BFE0;
  this->vtable = &STSharkCVTable;
  this->field_0257 = CASE_0;
  memset(&this->field_0x25b, 0, 0x34); /* compiler bulk-zero initialization */
  this->field_023D = 0;
  this->field_0249 = 0xff;
  return this;
}

