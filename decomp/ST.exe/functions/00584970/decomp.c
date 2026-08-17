#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B8F0 (store 00584999)
   Evidence: final_vptr=0079B8F0; returns_this=true; calls_before=2; field_writes_after=12;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00584970 returns STLBombC::STLBombC this @ 005849F3 */

STLBombC * __thiscall STLBombC::STLBombC(STLBombC *this)

{

  /* ST_CALLSITE[00584974]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[00584981]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = &VTable_0079BA50;
  this->vtable = &STLBombCVTable;
  this->field_0231 = 2;
  this->field_0235 = 0;
  this->field_0239 = 0;
  this->field_023D = 0;
  this->field_0241 = 0;
  this->field_0245 = 0;
  this->field_0249 = 0;
  this->field_024D = 0;
  this->field_0251 = 0;
  this->field_0255 = 0;
  this->field_0256 = 0;
  this->field_0257 = 0;
  memset(&this->field_0x258, 0, 0x32); /* compiler bulk-zero initialization */
  return this;
}

