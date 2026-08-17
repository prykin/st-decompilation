#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C9B0 (store 00602419)
   Evidence: final_vptr=0079C9B0; returns_this=true; calls_before=2; field_writes_after=0;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 006023F0 returns STDestC::STDestC this @ 00602427 */

STDestC * __thiscall STDestC::STDestC(STDestC *this)

{

  /* ST_CALLSITE[006023F4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[00602401]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = &VTable_0079CB10;
  this->vtable = &STDestCVTable;
  memset(&this->field_0x231, 0, 0x17e); /* compiler bulk-zero initialization */
  return this;
}

