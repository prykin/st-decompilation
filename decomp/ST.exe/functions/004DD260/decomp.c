#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004dd260(RecoveredRecordView_004DD260_80F87573 *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1->field_04D0 == 1) &&

     (iVar1 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\x0e'),
     iVar1 == *(int *)(param_1->field_01F5 + 0x20c))) {
    return 1;
  }
  return 0;
}

