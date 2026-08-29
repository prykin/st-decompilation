#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0067EEA0 returns used as parameter 1 of FUN_0067f030 @ 0067F3A4 */

char * FUN_0067eea0(byte *param_1)

{
  int iVar1;
  char *pcVar2;


  iVar1 = thunk_FUN_0067ed20(param_1);
  if (-1 < iVar1) {
    /* ST_CALLSITE[0067EEB4]: CALL 0x0040353a; direct=0040353A thunk_FUN_0067ee40; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;/int */
    pcVar2 = thunk_FUN_0067ee40(iVar1);
    return pcVar2;
  }
  return nullptr;
}

