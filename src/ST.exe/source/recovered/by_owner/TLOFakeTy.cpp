#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/TLOFakeTy.cpp

// 004D0920 TLOFakeTy::TLOFakeTy
#line 4 "decomp/ST.exe/functions/004D0920/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00797560 (store 004D093C)
   Evidence: final_vptr=00797560; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 004D0920 returns TLOFakeTy::TLOFakeTy this @ 004D0950 */

TLOFakeTy * __thiscall st::fn_004D0920(TLOFakeTy *this)

{
  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &st_global_007976C0;
  this->vtable = &st_global_00797560;
  this->field_024D = nullptr;
  return this;
}

