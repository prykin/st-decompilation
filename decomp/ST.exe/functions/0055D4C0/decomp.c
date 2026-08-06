#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055d4c0(void *this,int param_1,int *param_2)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    FSGSTy::SetGameList(g_fSGS_0081174C,param_1,param_2);
  }
  return;
}

