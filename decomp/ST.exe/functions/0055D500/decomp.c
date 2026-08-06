#include "../../pseudocode_runtime.h"


void __thiscall
FUN_0055d500(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  STField<undefined4>(this,0x6b8) = param_2;
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    FSGSTy::SetLadder(g_fSGS_0081174C,param_1,param_2,param_3,param_4);
  }
  return;
}

