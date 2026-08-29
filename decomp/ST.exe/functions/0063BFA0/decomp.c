#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_0063BFA0_2C9DA96E (current recovered
   extent=888) */

RecoveredRecordView_0063BFA0_AD17F044 * __fastcall
FUN_0063bfa0(RecoveredRecordView_0063BFA0_AD17F044 *param_1)

{
  /* ST_CALLSITE[0063BFA4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)param_1);
  /* ST_CALLSITE[0063BFB1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&param_1->field_01D5);
  param_1->field_01D5 = &VTable_0079D49C;
  param_1->field_0292 = 0;
  param_1->field_029A = 0;
  param_1->field_029F = 0;
  param_1->field_0336 = 0;
  *(VTable_0079D33C **)param_1 = &VTable_0079D33C;
  param_1->field_033A = 0xffffffff;
  param_1->field_0353 = 0xffffffff;
  param_1->field_0363 = 0xffffffff;
  param_1->field_0373 = 0xffffffff;
  param_1->field_0265 = 4;
  return param_1;
}

