#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BBB8 (store 005899B9)
   Evidence: final_vptr=0079BBB8; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00589990 returns STOctopusC::STOctopusC this @ 005899CF

   [STSwitchEnumApplier] Switch target field_0249 uses
   /SubmarineTitans/Recovered/Enums/STOctopusC_field_0249State. Cases: CASE_0=0;CASE_2=2;CASE_3=3 */

STOctopusC * __thiscall STOctopusC::STOctopusC(STOctopusC *this)

{

  /* ST_CALLSITE[00589994]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[005899A1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = &VTable_0079BD18;
  this->vtable = &STOctopusCVTable;
  this->field_0249 = CASE_0;
  memset(&this->field_0x285, 0, 0x28); /* compiler bulk-zero initialization */
  return this;
}

