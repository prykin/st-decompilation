#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_00639480_B53D0B0F (current recovered
   extent=628) */

RecoveredRecordView_00639480_D210DAC1 * __fastcall
FUN_00639480(RecoveredRecordView_00639480_D210DAC1 *param_1)

{
  int iVar1;

  /* ST_CALLSITE[00639484]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)param_1);
  /* ST_CALLSITE[00639491]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&param_1->field_01D5);
  param_1->field_01D5 = &VTable_0079D338;
  *(VTable_0079D1D8 **)param_1 = &VTable_0079D1D8;
  memset(&param_1->field_0x231, 0, 0x3e); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&param_1->field_0x272, 0, 0x39); /* compiler bulk-zero initialization */
  param_1->field_0x270 = 1;
  param_1->field_026F = 0;
  param_1->field_0271 = 0;
  return param_1;
}

