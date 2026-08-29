#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STSatC.cpp

// 0058BA30 STSatC::STSatC
#line 4 "decomp/ST.exe/functions/0058BA30/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BD1C (store 0058BA59)
   Evidence: final_vptr=0079BD1C; returns_this=true; calls_before=2; field_writes_after=5;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0058BA30 returns STSatC::STSatC this @ 0058BA89 */

STSatC * __thiscall st::fn_0058BA30(STSatC *this)

{

  /* ST_CALLSITE[0058BA34]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  st::fn_00401933(reinterpret_cast<STGameObjC *>(this));
  /* ST_CALLSITE[0058BA41]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  st::fn_00401316(reinterpret_cast<STT3DSprC *>(&this->field_01D5));
  this->field_01D5 = st::machine_word_boundary_cast<undefined4>(&st_global_0079BE7C);
  this->vtable = &st_global_0079BD1C;
  this->field_0231 = 1;
  this->field_0239 = 0;
  this->field_0245 = 0;
  this->field_023D = 0;
  this->field_0235 = 0;
  memset(&this->field_0x275, 0, 0x26); /* compiler bulk-zero initialization */
  return this;
}
