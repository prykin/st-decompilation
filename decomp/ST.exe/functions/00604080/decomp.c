#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CB14 (store 00604098)
   Evidence: final_vptr=0079CB14; returns_this=true; calls_before=1; field_writes_after=8;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00604080 returns STExplosion::STExplosion this @ 006040F3 */

STExplosion * __thiscall STExplosion::STExplosion(STExplosion *this)

{
  int iVar1;

  STGameObjC::STGameObjC((STGameObjC *)this);
  this->vtable = &STExplosionVTable;
  this->field_0215 = 0;
  memset(&this->field_0x219, 0, 0x50); /* compiler bulk-zero initialization */
  iVar1 = 0;
  this->field_0269 = 0;
  this->field_026D = 0;
  this->field_026E = PTR_00802a38->field_00E4;
  memset(&this->field_0x282, 0, 0x2d); /* compiler bulk-zero initialization */
  this->field_02AF = 0;
  this->field_02B3 = 0;
  this->field_02BB = (void *)0x0;
  this->field_02B7 = -1;
  return this;
}

