#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B3C4 (store 0057BD3C)
   Evidence: final_vptr=0079B3C4; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0057BD20 returns STFishC::STFishC this @ 0057BD50

   [STSwitchEnumApplier] Switch target field_023B uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_023BState. Cases:
   CASE_0=0;CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

STFishC * __thiscall STFishC::STFishC(STFishC *this)

{
  /* ST_CALLSITE[0057BD24]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[0057BD31]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = &VTable_0079B524;
  this->vtable = &STFishCVTable;
  this->field_023B = CASE_0;
  return this;
}

