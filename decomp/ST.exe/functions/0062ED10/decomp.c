#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D098 (store 0062ED37)
   Evidence: final_vptr=0079D098; returns_this=true; calls_before=1; field_writes_after=8;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0062ED10 returns STRubbishC::STRubbishC this @ 0062ED60

   [STSwitchEnumApplier] Switch target field_01FA uses
   /SubmarineTitans/Recovered/Enums/STRubbishC_field_01FAState. Cases: CASE_0=0;CASE_1=1;CASE_2=2 */

STRubbishC * __thiscall STRubbishC::STRubbishC(STRubbishC *this)

{
  /* ST_CALLSITE[0062ED13]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  this->field_01D5 = -1;
  this->field_01D9 = -1;
  this->field_01DD = -1;
  this->vtable = &STRubbishCVTable;
  this->field_01E1 = 0;
  this->field_01E5 = 0;
  this->field_01E9 = 0;
  this->field_01ED = 0;
  this->field_01F1 = 0;
  this->field_01F5 = 0;
  this->field_01F9 = 0;
  this->field_01FA = CASE_0;
  return this;
}

