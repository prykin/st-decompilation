#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055d550(void *this,byte *param_1,uint param_2,byte *param_3)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D577]: CALL 0x0040172b; direct=0040172B FSGSTy::SetInfo */
    FSGSTy::SetInfo(g_fSGS_0081174C,param_1,param_2,param_3);
  }
  return;
}

