#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B238 (store 005785FC)
   Evidence: final_vptr=0079B238; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005785E0 returns STCrabC::STCrabC this @ 00578610

   [STSwitchEnumApplier] Switch target field_0239 uses
   /SubmarineTitans/Recovered/Enums/STCrabC_field_0239State. Cases: CASE_0=0;CASE_2=2;CASE_3=3 */

STCrabC * __thiscall STCrabC::STCrabC(STCrabC *this)

{
  /* ST_CALLSITE[005785E4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[005785F1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = &VTable_0079B398;
  this->vtable = &STCrabCVTable;
  this->field_0239 = CASE_0;
  return this;
}

