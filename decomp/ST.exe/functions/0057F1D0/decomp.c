#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B528 (store 0057F1F9)
   Evidence: final_vptr=0079B528; returns_this=true; calls_before=2; field_writes_after=2;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0057F1D0 returns STDcResourcC::STDcResourcC this @ 0057F215 */

STDcResourcC * __thiscall STDcResourcC::STDcResourcC(STDcResourcC *this)

{

  /* ST_CALLSITE[0057F1D4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[0057F1E1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = &VTable_0079B688;
  this->vtable = &STDcResourcCVTable;
  memset(&this->field_0231, 0, 0x28); /* compiler bulk-zero initialization */
  this->field_0261 = 0;
  this->field_0259 = -1;
  return this;
}

