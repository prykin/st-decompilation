#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055d480(void *this,int param_1)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D49F]: CALL 0x00403e95; direct=00403E95 FSGSTy::CreateGame */
    FSGSTy::CreateGame(g_fSGS_0081174C,param_1);
  }
  return;
}

