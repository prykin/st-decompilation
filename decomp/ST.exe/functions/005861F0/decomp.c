#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BA54 (store 0058620C)
   Evidence: final_vptr=0079BA54; returns_this=true; calls_before=2; field_writes_after=2;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005861F0 returns STMBombC::STMBombC this @ 0058622A */

STMBombC * __thiscall STMBombC::STMBombC(STMBombC *this)

{
  /* ST_CALLSITE[005861F4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[00586201]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = &VTable_0079BBB4;
  this->vtable = &STMBombCVTable;
  this->field_0231 = 1;
  this->field_026F = 0xff;
  return this;
}

