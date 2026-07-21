#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C3EC (store 005EC809)
   Evidence: final_vptr=0079C3EC; returns_this=true; calls_before=2; field_writes_after=3;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005EC7E0 returns STSprGameObjC::STSprGameObjC this @ 005EC82C */

STSprGameObjC * __thiscall STSprGameObjC::STSprGameObjC(STSprGameObjC *this)

{

  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079C578;
  this->vtable = (AnonPointee_STSprGameObjC_0000 *)&STSprGameObjCVTable;
  memset(&this->field_0231, 0, 0xf5); /* compiler bulk-zero initialization */
  this->field_030E = 0xff;
  this->field_0308 = 0xffffffff;
  this->field_030C = 0xff;
  return this;
}

