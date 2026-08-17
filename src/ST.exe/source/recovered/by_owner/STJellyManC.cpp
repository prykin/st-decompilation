#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STJellyManC.cpp

// 005810D0 STJellyManC::STJellyManC
#line 4 "decomp/ST.exe/functions/005810D0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B68C (store 005810E6)
   Evidence: final_vptr=0079B68C; returns_this=true; calls_before=1; field_writes_after=4;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005810D0 returns STJellyManC::STJellyManC this @ 0058110E */

STJellyManC * __thiscall st::fn_005810D0(STJellyManC *this)

{

  /* ST_CALLSITE[005810D4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  st::fn_00401933((STGameObjC *)this);
  this->vtable = &st_global_0079B68C;
  memset(&this->field_0x1d9, 0, 0x2e); /* compiler bulk-zero initialization */
  this->field_01D5 = 0;
  this->field_0207 = nullptr;
  this->field_020B = nullptr;
  this->field_020F = 0;
  return this;
}

