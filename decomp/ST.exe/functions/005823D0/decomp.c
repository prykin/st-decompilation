#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B78C (store 005823F9)
   Evidence: final_vptr=0079B78C; returns_this=true; calls_before=2; field_writes_after=8;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005823D0 returns STJellyGunC::STJellyGunC this @ 0058243D */

STJellyGunC * __thiscall STJellyGunC::STJellyGunC(STJellyGunC *this)

{

  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079B8EC;
  this->vtable = &STJellyGunCVTable;
  memset(&this->field_0x256, 0, 0x3e); /* compiler bulk-zero initialization */
  this->field_0241 = 0xff;
  this->field_0231 = 0;
  this->field_0235 = 0;
  this->field_0239 = 0;
  this->field_023D = 0;
  *(undefined4 *)&this->field_0x247 = 0;
  *(undefined4 *)&this->field_0x24b = 0;
  *(undefined4 *)&this->field_0x252 = 0;
  return this;
}

