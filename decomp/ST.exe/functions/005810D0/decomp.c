#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B68C (store 005810E6)
   Evidence: final_vptr=0079B68C; returns_this=true; calls_before=1; field_writes_after=4;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005810D0 returns STJellyManC::STJellyManC this @ 0058110E */

STJellyManC * __thiscall STJellyManC::STJellyManC(STJellyManC *this)

{

  STGameObjC::STGameObjC((STGameObjC *)this);
  this->vtable = &STJellyManCVTable;
  memset(&this->field_0x1d9, 0, 0x2e); /* compiler bulk-zero initialization */
  this->field_01D5 = 0;
  this->field_0207 = 0;
  this->field_020B = 0;
  this->field_020F = 0;
  return this;
}

