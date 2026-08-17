#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00798C70 (store 004D0FE0)
   Evidence: final_vptr=00798C70; returns_this=true; calls_before=2; field_writes_after=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=low;
   exact_factory_tail=004D6DC0->00404110->004D0FC0; allocation_size=884 */

TLOEmbryoTy * __thiscall TLOEmbryoTy::TLOEmbryoTy(TLOEmbryoTy *this)

{

  /* ST_CALLSITE[004D0FC4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[004D0FD1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->vtable_at_1d5);
  this->vtable = &TLOEmbryoTyVTable;
  this->vtable_at_1d5 = &TLOEmbryoTyVTable_at_1D5;
  this->field_02A8 = 0;
  this->field_02DC = 0;
  this->field_0350 = nullptr;
  this->field_0354 = 0;
  this->field_0358 = 0;
  memset(&this->field_0x308, 0, 0x30); /* compiler bulk-zero initialization */
  this->field_035C = nullptr;
  this->field_02C8 = 1;
  this->field_02C4 = 1;
  this->field_02C0 = 1;
  this->field_02BC = 1;
  this->field_02B8 = 1;
  this->field_02B4 = 1;
  this->field_02E0 = 0;
  this->field_02A0 = 0;
  this->field_02E4 = 0;
  this->field_02E8 = 0;
  this->field_034C = 0xff;
  this->field_02A4 = 0;
  return this;
}

