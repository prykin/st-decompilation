#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CEFC (store 00622629)
   Evidence: final_vptr=0079CEFC; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00622600 returns STMineSetC::STMineSetC this @ 00622640 */

STMineSetC * __thiscall STMineSetC::STMineSetC(STMineSetC *this)

{

  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079D05C;
  this->vtable = &STMineSetCVTable;
  memset(&this->field_0x25e, 0, 0x109); /* compiler bulk-zero initialization */
  this->field_02BA = -1;
  return this;
}

