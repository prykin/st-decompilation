#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C9B0 (store 00602419)
   Evidence: final_vptr=0079C9B0; returns_this=true; calls_before=2; field_writes_after=0;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 006023F0 returns STDestC::STDestC this @ 00602427 */

STDestC * __thiscall STDestC::STDestC(STDestC *this)

{

  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079CB10;
  this->vtable = &STDestCVTable;
  memset(&this->field_0x231, 0, 0x17e); /* compiler bulk-zero initialization */
  return this;
}

