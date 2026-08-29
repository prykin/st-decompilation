#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0067f920(byte *param_1)

{
  float *pfVar1;

  /* ST_CALLSITE[0067F927]: CALL 0x0040351c; direct=0040351C thunk_FUN_0067f860; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/float; signature=__cdecl;pointer:/float;pointer:/byte */
  pfVar1 = thunk_FUN_0067f860(param_1);
  if (pfVar1 != nullptr) {
    return (float10)*pfVar1;
  }
  return (float10)_DAT_0079034c;
}

