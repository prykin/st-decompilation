#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STSatC.cpp

// 0058BA30 STSatC::STSatC
#line 1 "decomp/ST.exe/functions/0058BA30/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BD1C (store 0058BA59)
   Evidence: final_vptr=0079BD1C; returns_this=true; calls_before=2; field_writes_after=5;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0058BA30 returns STSatC::STSatC this @ 0058BA89 */

STSatC * __thiscall st::fn_0058BA30(STSatC *this)

{

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079BE7C;
  this->vtable = &STSatCVTable;
  this->field_0231 = 1;
  this->field_0239 = 0;
  this->field_0245 = 0;
  this->field_023D = 0;
  this->field_0235 = 0;
  memset(&this->field_0x275, 0, 0x26); /* compiler bulk-zero initialization */
  return this;
}

