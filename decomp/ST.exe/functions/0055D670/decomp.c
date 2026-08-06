#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055d670(void *this,undefined4 param_1,undefined4 param_2)

{
  if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
    FSGSTy::Download(g_fSGS_0081174C,param_1,param_2);
  }
  return;
}

