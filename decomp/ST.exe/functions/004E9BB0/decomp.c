#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004e9bb0(void *this,RecoveredRecord_004E9BB0_CD9D470B *param_1)

{
  if ((STField<int>(this,0x4f8) == param_1->field_0018) && (STField<int>(this,0x4fc) != 0)) {
    STField<undefined4>(this,0x4f8) = 0;
    STField<undefined4>(this,0x4fc) = 0;
    STField<undefined4>(this,0x61b) = 0;
  }
  return 0;
}

