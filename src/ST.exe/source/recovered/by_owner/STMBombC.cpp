#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STMBombC.cpp

// 005861F0 STMBombC::STMBombC
#line 4 "decomp/ST.exe/functions/005861F0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BA54 (store 0058620C)
   Evidence: final_vptr=0079BA54; returns_this=true; calls_before=2; field_writes_after=2;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005861F0 returns STMBombC::STMBombC this @ 0058622A */

STMBombC * __thiscall st::fn_005861F0(STMBombC *this)

{
  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &st_global_0079BBB4;
  this->vtable = &st_global_0079BA54;
  this->field_0231 = 1;
  this->field_026F = 0xff;
  return this;
}

