#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055d6b0(void *this,int param_1)

{
  if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D6C8]: CALL 0x00404b92; direct=00404B92 FSGSTy::Finished */
    FSGSTy::Finished(g_fSGS_0081174C,param_1);
  }
  return;
}

