#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C5AC (store 005F6618)
   Evidence: final_vptr=0079C5AC; returns_this=true; calls_before=2; field_writes_after=2;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005F6600 returns STColl3C::STColl3C this @ 005F6649 */

STColl3C * __thiscall STColl3C::STColl3C(STColl3C *this)

{

  /* ST_CALLSITE[005F6604]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[005F6611]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->vtable_at_1d5);
  this->vtable = &STColl3CVTable;
  this->vtable_at_1d5 = &STColl3CVTable_at_1D5;
  memset(&this->field_0x231, 0, 0xc2); /* compiler bulk-zero initialization */
  this->field_02B7 = -1;
  return this;
}

