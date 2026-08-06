#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STLBombC.cpp

// 00584970 STLBombC::STLBombC
#line 4 "decomp/ST.exe/functions/00584970/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B8F0 (store 00584999)
   Evidence: final_vptr=0079B8F0; returns_this=true; calls_before=2; field_writes_after=12;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00584970 returns STLBombC::STLBombC this @ 005849F3 */

STLBombC * __thiscall st::fn_00584970(STLBombC *this)

{

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &st_global_0079BA50;
  this->vtable = &st_global_0079B8F0;
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

