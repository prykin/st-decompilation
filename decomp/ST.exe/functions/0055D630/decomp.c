#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055d630(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
    FSGSTy::ChangePlayerPing(g_fSGS_0081174C,param_1,param_2,param_3);
  }
  return;
}

