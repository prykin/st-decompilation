#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00797560 (store 004D093C)
   Evidence: final_vptr=00797560; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 004D0920 returns TLOFakeTy::TLOFakeTy this @ 004D0950 */

TLOFakeTy * __thiscall TLOFakeTy::TLOFakeTy(TLOFakeTy *this)

{
  /* ST_CALLSITE[004D0924]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[004D0931]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = &VTable_007976C0;
  this->vtable = &TLOFakeTyVTable;
  this->field_024D = nullptr;
  return this;
}

