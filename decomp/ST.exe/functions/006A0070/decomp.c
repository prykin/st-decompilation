#include "../../pseudocode_runtime.h"


void __fastcall FUN_006a0070(int param_1)

{
  thunk_FUN_006a00b0((RecoveredRecordView_006A00B0_C4D66491 *)param_1);
  thunk_FUN_00692600((int *)(param_1 + 0x1c03));
  /* ST_CALLSITE[006A0089]: CALL 0x00403ca1; direct=00403CA1 thunk_FUN_00694890 */
  thunk_FUN_00694890((RecoveredRecord_00694890_E22E6A2C *)(param_1 + 0x1bef));
  thunk_FUN_006939d0();
  return;
}

